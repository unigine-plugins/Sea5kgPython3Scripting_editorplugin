#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import sys
import re
class CppHeaderParserForUnigineClass:

    def __init__(self, _namespace, _classname, _inherit_classname, _filename):
        self.__namespace = _namespace
        self.__classname = _classname
        self.__inherit_classname = _inherit_classname
        self.__filename = _filename
        self.__enums = {}
        self.__static_methods = []
        self.__public_methods = []
    
    def get_filename(self):
        return self.__filename

    def get_namespace(self):
        return self.__namespace

    def get_classname(self):
        return self.__classname
    
    def get_inherit_classname(self):
        return self.__inherit_classname

    def add_enum(self, _enum_typename, _enum_item):
        if _enum_typename not in self.__enums:
            self.__enums[_enum_typename] = []
        self.__enums[_enum_typename].append(_enum_item)

    def get_enums(self):
        return self.__enums
    
    def add_public_method(self, _method):
        self.__public_methods.append(_method)

class CppHeaderParserForUnigine:
    
    def __init__(self):
        self.__include = []
        self.classes = {}
        self.__scopes = []
        self.__filename = ""

    def parse_file(self, filename):
        self.__filename = filename
        with open(filename, "rt", encoding="utf-8") as _file:
            # strip lines
            _orig_lines = _file.readlines()
            _lines = []
            for _line in _orig_lines:
                _line = _line.strip()
                _lines.append(_line)

            _multiline_comment = False
            _expected_nextline_open_break = False
            _line_number = 0
            _len_lines = len(_lines)
            while _line_number < _len_lines:
                _line = _lines[_line_number]
                _line_number, _res = self.__is_skip_lines(_lines, _line_number)
                if _res: continue
                _line_number, _res = self.__is_include(_lines, _line_number)
                if _res: continue
                _line_number, _res = self.__is_namespace(_lines, _line_number)
                if _res: continue
                sys.exit("Unknown line '" + _lines[_line_number] + "'")

    def __is_skip_lines(self, _lines, _line_number):
        _line = _lines[_line_number]
        if _line == '':
            _line_number += 1
            return _line_number, True
        if _line == '#pragma once':
            _line_number += 1
            return _line_number, True
        if _line.startswith("//"):
            _line_number += 1
            return _line_number, True
        if _line.startswith("/*"):
            _line_number += 1
            while _line_number < len(_lines):
                _line = _lines[_line_number]
                _line_number += 1
                if _line.endswith("*/"):
                    return _line_number, True
        return _line_number, False

    def __is_include(self, _lines, _line_number):
        _line = _lines[_line_number]
        if not _line.startswith("#include"):
            return _line_number, False
        _include = _line.split("#include")[1].strip()
        self.__add_include(_include)
        _line_number += 1
        return _line_number, True
    
    def __is_namespace(self, _lines, _line_number):
        _line = _lines[_line_number]
        if not _line.startswith("namespace"):
            return _line_number, False
        _namespace_name = _line.split("namespace")[1].strip()
        self.__scopes.append({
            "scope": "namespace",
            "name": _namespace_name,
        })
        _line_number += 1
        if _lines[_line_number] != '{':
            sys.exit("Expected '{' after namespace")
        _line_number += 1
        while _line_number < len(_lines):
            _line_number, _res = self.__is_skip_lines(_lines, _line_number)
            if _res: continue
            _line_number, _ret = self.__is_class(_lines, _line_number)
            if _ret: continue
            sys.exit("Unknown line '" + _lines[_line_number] + "'")
        return _line_number, _ret

    def __is_class(self, _lines, _line_number):
        _line = _lines[_line_number]
        if not _line.startswith("class "):
            return _line_number, False
        if _line.endswith(";"):
            # skip class Some;
            _line_number += 1
            return _line_number, True
        _line_struct = _line.split(" ")
        if _line_struct[1] != 'UNIGINE_API':
            sys.exit("Expeceted class UNIGINE_API ...")
        _classname = _line_struct[2]
        _inherit_classname = None
        if len(_line_struct) > 3:
            if _line_struct[4] != 'public':
                sys.exit("Expected class UNIGINE_API ... : public ...")
            _inherit_classname = _line_struct[5]
            if len(_line_struct) != 6:
                sys.exit("Unexpected size of class line")
        if _classname in self.classes:
            sys.exit("Class '" + _classname + "' already defined")
        self.classes[_classname] = CppHeaderParserForUnigineClass(
            self.__scopes[-1]['name'],
            _classname,
            _inherit_classname,
            self.__filename
        )
        self.__scopes.append({
            "scope": "class",
            "name": _classname,
            "visible_section": 'private', # default for classes
            "object": self.classes[_classname]
        })
        _line_number += 1
        _line = _lines[_line_number]
        if _line != '{':
            sys.exit("__is_class: Expected '{'")
        _line_number += 1
        while _line_number < len(_lines):
            _line_number, _res = self.__is_skip_lines(_lines, _line_number)
            if _res: continue
            _line_number, _res = self.__is_class_public_section(_lines, _line_number)
            if _res: continue
            _line_number, _res = self.__is_enum(_lines, _line_number)
            if _res: continue
            _line_number, _res = self.__is_method(_lines, _line_number)
            if _res: continue
            _line = _lines[_line_number]
            if _line == '};':
                self.__scopes.pop()
            _line_number += 1 
            if _line_number < len(_lines):
                print("TODO: " + _lines[_line_number])
            continue # skip now
            # sys.exit("__is_class: Unknown line '" + _lines[_line_number] + "'")
        return _line_number, True

    def __is_class_public_section(self, _lines, _line_number):
        _line = _lines[_line_number]
        if _line != "public:":
            return _line_number, False
        # print("TODO public:")
        self.__scopes[-1]["visible_section"] = 'public'
        _line_number += 1
        return _line_number, True

    def __is_enum(self, _lines, _line_number):
        _line = _lines[_line_number]
        if not _line.startswith('enum'):
            return _line_number, False
        _enum_typename = _line.split('enum')[1].strip()
        _line_number += 1
        _line = _lines[_line_number]
        if _line != '{':
            sys.exit("Expected '{'")
        _enums = []
        _line_number += 1
        while _line_number < len(_lines):
            _line = _lines[_line_number]
            if _line == '};':
                _line_number += 1
                break
            _enum_item = re.match(r'([A-Z0-9_]+)( = [-0-9A-Z_ +]+){0,1},', _line)
            if not _enum_item:
                sys.exit("Could not parse enum line '" + _line + "'")
            _name = _enum_item.group(1)
            _enums.append(_name)
            _line_number += 1
        for _enum in _enums:
            self.__scopes[-1]["object"].add_enum(_enum_typename, _enum)
        return _line_number, True

    def __is_method(self, _lines, _line_number):
        _line = _lines[_line_number]
        possible_ret = [
            'const char *',
            'UGUID ',
            'Math::BoundSphere ',
            'void ',
            'bool ',
            'int ',
            'Ptr<GeodeticPivot> ',
            'Math::WorldBoundSphere ',
            'Math::vec3 ',
            'Ptr<BodyRigid> '
            'Math::Vec3 ',
            'Math::vec4 ',
            'Math::Vec4 ',
            'Ptr<Node> ',
        ]
        for _ret in possible_ret:
            if _line.startswith(_ret) and _line.endswith(';'):
                if self.__scopes[-1]["visible_section"] != 'public':
                    sys.exit("No public method")
                if self.__scopes[-1]['scope'] != 'class':
                    sys.exit("Expected class")
                _classname = self.__scopes[-1]['name']
                _method = {
                    'original_line': _line,
                    'ret': _ret,
                }
                self.classes[_classname].add_public_method(_method)

                print("Found method", _method)
                _line_number +=1 
                return _line_number, True
        return _line_number, False

    def __add_include(self, _include):
        """ add_include """
        self.__include.append(_include)
        

#!/usr/bin/env python3
# -*- coding: utf-8 -*-

# install 
# python3 -m pip install xmltodict

import sys
import xmltodict
import json

print("Loading and parse xml...")
_content = None
with open("unigine-castxml-api.xml", "rt") as _file:
    _content = _file.read()


_api = xmltodict.parse(_content)

with open("unigine-castxml-api.json", "w") as write_file:
    json.dump(_api, write_file, indent=2)
print("Done.")

namespaces_json = _api["GCC_XML"]["Namespace"]
classes_json = _api["GCC_XML"]["Class"]
files_json = _api["GCC_XML"]["File"]
functions_json = _api["GCC_XML"]["Function"]
cache_namespaces = {}
cache_classes = {}
cache_function = {}
# "Typedef"
# "Function": [
# "Struct": [
# "Variable": [
# "Enumeration": [
# "Union": [
# "Class": [

files_paths = {}

for _file in files_json:
    files_paths[_file['@id']] = _file['@name']

def get_filepath_by_id(_id):
    return files_paths[_id]

def find_namespcase_id_by_name(_name):
    for _namespace in namespaces_json:
        if "@name" in _namespace and _namespace["@name"] == "Unigine":
            _id = _namespace["@id"]
            return _id

def get_fullname_by_id(_id):
    ret = ""
    _ids = []
    # print("Start ", _id)
    _namespace_name = ""
    while _id != "":
        _ids.append(_id)
        # print(_id)
        if _id in cache_namespaces:
            _namespace_name = str(cache_namespaces[_id]["name"])
            # print("_namespace_name = " + _namespace_name, "  _id = ", _id)
            ret = _namespace_name + "::" + ret
            _id = cache_namespaces[_id]["context"]
        else:
            _id = ""
    return ret

def init_namespaces(process_namespaces):
    ret = []
    for _ns_id in process_namespaces:
        for _namespace in namespaces_json:
            if _namespace["@id"] == _ns_id:
                _id = _namespace["@id"]
                if "@name" not in _namespace:
                    print("Skip namespace " + _id + ", because not found @name")
                    continue
                _name = str(_namespace["@name"])
                print(_name)
                _context = _namespace["@context"]
                _members = []
                if "@members" in _members:
                    _members = _namespace["@members"].split(" ")
                _fullname = "" + get_fullname_by_id(_context)
                _fullname = _fullname + _name
                print(_id, "=>", _fullname)
                cache_namespaces[_id] = {
                    'name': _name,
                    'fullname': _fullname,
                    'context': _context,
                    'members': _members,
                }
            elif "@context" in _namespace and _namespace["@context"] ==_ns_id:
                _id = _namespace["@id"]
                if _id not in cache_namespaces:
                    ret.append(_id)
    return ret

_unigine_ns_id = find_namespcase_id_by_name("Unigine")

process_namespaces = [_unigine_ns_id]

while len(process_namespaces) > 0:
    process_namespaces = init_namespaces(process_namespaces)

for _func in functions_json:
    _id = _func['@id']
    cache_function[_id] = _func

make_for_classes = ["Material"]

for _class in classes_json:
    context = _class['@context']
    if context in cache_namespaces:
        _id = _class['@id']
        _namespace = cache_namespaces[context]["fullname"]
        _name = _class['@name']
        _filepath = get_filepath_by_id(_class['@file'])
        if _name in make_for_classes:
            print("_id " + _id)
            print(_namespace, _name, _filepath)
            print(_class)
            _members = _class['@members'].split(' ')
            for _mem in _members:
                if _mem in cache_function:
                    print(_mem)
                else:
                    print("Not found: " + _mem)

        # print(filepath)
        # print(_namespace["fullname"],  )
        # print(_class)
# cache_classes
# print(namespaces)
# "Class"

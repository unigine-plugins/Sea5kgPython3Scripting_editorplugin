#!/usr/bin/env python3
# -*- coding: utf-8 -*-

# install
# python3 -m pip install xmltodict

import sys
import xmltodict
import json
import re

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
enumeration_json = _api["GCC_XML"]["Enumeration"]
methods_json = _api["GCC_XML"]["Method"]
constructor_json = _api["GCC_XML"]["Constructor"]
destructor_json = _api["GCC_XML"]["Destructor"]
operator_method_json = _api["GCC_XML"]["OperatorMethod"]


cache_namespaces = {}
cache_classes = {}
cache_function = {}
cache_enumeration = {}
cache_methods = {}
cache_constructors = {}
cache_destructors = {}
cache_operator_methods = {}

# "Typedef"
# "Function": [
# "Struct": [
# "Variable": [
# "Union": [
# "Class": [

files_paths = {}

for _file in files_json:
    files_paths[_file['@id']] = _file['@name']

def camel_to_snake_case(name):
    return re.sub(r'(?<!^)(?=[A-Z])', '_', name).lower()

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

class Python3UnigineWriter:
    def __init__(self, classname):
        self.__classname = classname
        self.__filepath = classname.lower()
        self.__filepath = "python3_unigine_" + self.__filepath
        self.__filepath = "pytypesobjects/" + self.__filepath
        self.__file_header = open(self.__filepath + ".h", "wt", encoding="utf-8", newline="\n")
        self.__file_source = open(self.__filepath + ".cpp", "wt", encoding="utf-8", newline="\n")
        self.__enums = []
        self.__methods = []
        self.write_source_top()

    def add_enum(self, _namespace, _enum):
        _enum_json = {
            "name": _enum["@name"],
            "namespace": _namespace + "::" + self.__classname,
            "values": [],
        }
        for _enum_item in _enum["EnumValue"]:
            _enum_json["values"].append(_enum_item["@name"])

        self.__enums.append(_enum_json)

    def add_method(self, _method):
        _method_json = {
            "name": _method["@name"],
            "access": _method["@access"],
            "static": False,
        }
        if "@static" in _method:
            _method_json["static"] = _method["@static"] == "1"

        print("method", _method_json["name"])
        print(_method)
        _method_json["args"] = []
        if 'Argument' in _method:
            if isinstance(_method['Argument'], list):
                for _arg in _method['Argument']:
                    print("arg: ", _arg)
                    _method_json["args"].append(_arg["@name"])
            else:
                _arg = _method['Argument']
                _method_json["args"].append(_arg["@name"])
                print("arg: ", _arg["@name"])
        self.__methods.append(_method_json)

    def write_header(self):
        self.__file_header.write("// this file automaticly generated from Unigine" + self.__classname + ".h\n")
        self.__file_header.write("#pragma once\n")
        self.__file_header.write("\n")
        self.__file_header.write("#include \"python3_pytypeobjects.h\"\n")
        self.__file_header.write("#include <Unigine" + self.__classname + ".h>\n")
        self.__file_header.write("\n")
        self.__file_header.write("class Python3Unigine" + self.__classname + " : public Python3PyTypeObjectBase {\n")
        self.__file_header.write("    public:\n")
        self.__file_header.write("        virtual bool isReady() override;\n")
        self.__file_header.write("        virtual bool addClassDefinitionToModule(PyObject* pModule) override;\n")
        self.__file_header.write("};\n")
        self.__file_header.write("\n")
        self.__file_header.write("class PyUnigine" + self.__classname + " {\n")
        self.__file_header.write("    public:\n")
        self.__file_header.write("        static PyObject * NewObject(Unigine::Ptr<Unigine::" + self.__classname + "> unigine_object_ptr);\n")
        self.__file_header.write("};\n")

    def write_source_top(self):
        self.__file_source.write("// this file automaticly generated from Unigine" + self.__classname + ".h\n")
        self.__file_source.write("#include \"python3_unigine_" + self.__classname.lower() + ".h\"\n")
        self.__file_source.write("#include <string>\n")
        self.__file_source.write("#include <Unigine" + self.__classname + "s.h>\n")
        self.__file_source.write("#include <Python.h>\n")
        self.__file_source.write("#include <structmember.h>\n")
        self.__file_source.write("\n")
        self.__file_source.write("#include <iostream>\n")
        self.__file_source.write("\n")
        self.__file_source.write("// ------------------------------------------------------------------------------------------\n")
        self.__file_source.write("// unigine_" + self.__classname + "\n")
        self.__file_source.write("typedef struct {\n")
        self.__file_source.write("    PyObject_HEAD\n")
        self.__file_source.write("    // Type-specific fields go here.\n")
        self.__file_source.write("    Unigine::Ptr<Unigine::" + self.__classname + "> unigine_object_ptr;\n")
        self.__file_source.write("} unigine_" + self.__classname + ";\n")
        self.__file_source.write("\n")
        self.__file_source.write("static void unigine_" + self.__classname + "_dealloc(unigine_" + self.__classname + "* self) {\n")
        self.__file_source.write("    // Unigine::Log::message(\"unigine_" + self.__classname + "_dealloc\\n\");\n")
        self.__file_source.write("    Py_TYPE(self)->tp_free((PyObject*)self);\n")
        self.__file_source.write("}\n")
        self.__file_source.write("\n")
        self.__file_source.write("static PyObject *unigine_" + self.__classname + "_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {\n")
        self.__file_source.write("    // Unigine::Log::message(\"unigine_" + self.__classname + "_new\\n\");\n")
        self.__file_source.write("    unigine_" + self.__classname + " *self;\n")
        self.__file_source.write("    self = (unigine_" + self.__classname + " *)type->tp_alloc(type, 0);\n")
        self.__file_source.write("    return (PyObject *)self;\n")
        self.__file_source.write("}\n")
        self.__file_source.write("\n")
        self.__file_source.write("static int unigine_" + self.__classname + "_init(unigine_" + self.__classname + " *self, PyObject *args, PyObject *kwds) {\n")
        self.__file_source.write("    // nothing\n")
        self.__file_source.write("    return 0;\n")
        self.__file_source.write("}\n")
        self.__file_source.write("\n")

    def write_source_type(self):
        self.__file_source.write("static PyTypeObject unigine_" + self.__classname + "Type = {\n")
        self.__file_source.write("    // PyVarObject_HEAD_INIT(&PyType_Type, 0)\n")
        self.__file_source.write("    // PyVarObject_HEAD_INIT(NULL, 0)\n")
        self.__file_source.write("    // .tp_name = \"unigine." + self.__classname + "\",\n")
        self.__file_source.write("    // .tp_basicsize = sizeof(unigine_" + self.__classname + ") + 16, // magic!!!\n")
        self.__file_source.write("    // .tp_dealloc = (destructor)unigine_" + self.__classname + "_dealloc,\n")
        self.__file_source.write("    // .tp_flags = Py_TPFLAGS_DEFAULT, // | Py_TPFLAGS_BASETYPE,\n")
        self.__file_source.write("    // .tp_doc = \"" + self.__classname + " Object\",\n")
        self.__file_source.write("    // .tp_methods = unigine_" + self.__classname + "_methods,\n")
        self.__file_source.write("    // .tp_members = 0,\n")
        self.__file_source.write("    // .tp_dict = 0,\n")
        self.__file_source.write("    // .tp_init = (initproc)unigine_" + self.__classname + "_init,\n")
        self.__file_source.write("    // .tp_new = unigine_" + self.__classname + "_new,\n")
        self.__file_source.write("\n")
        self.__file_source.write("\n")
        self.__file_source.write("    PyVarObject_HEAD_INIT(NULL, 0)\n")
        self.__file_source.write("    \"unigine." + self.__classname + "\",             // tp_name\n")
        self.__file_source.write("    sizeof(unigine_" + self.__classname + ") + 16, // tp_basicsize  (magic 16 bytes!!!)\n")
        self.__file_source.write("    0,                         // tp_itemsize \n")
        self.__file_source.write("    (destructor)unigine_" + self.__classname + "_dealloc,   // tp_dealloc\n")
        self.__file_source.write("    0,                         // tp_vectorcall_offset \n")
        self.__file_source.write("    0,                         // tp_getattr \n")
        self.__file_source.write("    0,                         // tp_setattr \n")
        self.__file_source.write("    0,                         // tp_as_async \n")
        self.__file_source.write("    0,                         // tp_repr \n")
        self.__file_source.write("    0,                         // tp_as_number \n")
        self.__file_source.write("    0,                         // tp_as_sequence \n")
        self.__file_source.write("    0,                         // tp_as_mapping \n")
        self.__file_source.write("    0,                         // tp_hash  \n")
        self.__file_source.write("    0,                         // tp_call \n")
        self.__file_source.write("    0,                         // tp_str \n")
        self.__file_source.write("    0,                         // tp_getattro \n")
        self.__file_source.write("    0,                         // tp_setattro \n")
        self.__file_source.write("    0,                         // tp_as_buffer \n")
        self.__file_source.write("    Py_TPFLAGS_DEFAULT,        // tp_flags \n")
        self.__file_source.write("    \"" + self.__classname + " Object\",         // tp_doc \n")
        self.__file_source.write("    0,                         // traverseproc tp_traverse\n")
        self.__file_source.write("    0,                         // inquiry tp_clear\n")
        self.__file_source.write("    0,                         // richcmpfunc tp_richcompare\n")
        self.__file_source.write("    0,                         // Py_ssize_t tp_weaklistoffset\n")
        self.__file_source.write("    0,                         // getiterfunc tp_iter\n")
        self.__file_source.write("    0,                         // iternextfunc tp_iternext\n")
        self.__file_source.write("    unigine_" + self.__classname + "_methods, // tp_methods\n")
        self.__file_source.write("    0, // tp_members\n")
        self.__file_source.write("    0, // tp_getset\n")
        self.__file_source.write("    0, // tp_base\n")
        self.__file_source.write("    0, // tp_dict\n")
        self.__file_source.write("    0, // tp_descr_get\n")
        self.__file_source.write("    0, // tp_descr_set\n")
        self.__file_source.write("    0, // tp_dictoffset\n")
        self.__file_source.write("    (initproc)unigine_" + self.__classname + "_init, // tp_init\n")
        self.__file_source.write("    0, // tp_alloc\n")
        self.__file_source.write("    unigine_" + self.__classname + "_new, // tp_new\n")
        self.__file_source.write("    // 0, // tp_free\n")
        self.__file_source.write("    // 0, /* inquiry tp_is_gc; */\n")
        self.__file_source.write("    // 0, /* PyObject *tp_bases; */\n")
        self.__file_source.write("    // 0, /* PyObject *tp_mro; */\n")
        self.__file_source.write("    // 0, /* PyObject *tp_cache; */\n")
        self.__file_source.write("    // 0, /* PyObject *tp_subclasses; */\n")
        self.__file_source.write("    // 0, /* PyObject *tp_weaklist; */\n")
        self.__file_source.write("    // 0, /* destructor tp_del; */\n")
        self.__file_source.write("    // 0, /* unsigned int tp_version_tag; */\n")
        self.__file_source.write("    // 0, /* destructor tp_finalize; */\n")
        self.__file_source.write("    // 0, /* vectorcallfunc tp_vectorcall; */\n")
        self.__file_source.write("};\n")
        self.__file_source.write("\n")
        self.__file_source.write("PyObject * PyUnigine" + self.__classname + "::NewObject(Unigine::Ptr<Unigine::" + self.__classname + "> unigine_object_ptr) {\n")
        self.__file_source.write("\n")
        self.__file_source.write("    std::cout << \"sizeof(unigine_" + self.__classname + ") = \" << sizeof(unigine_" + self.__classname + ") << std::endl;\n")
        self.__file_source.write("\n")
        self.__file_source.write("    unigine_" + self.__classname + " *pInst = PyObject_New(unigine_" + self.__classname + ", &unigine_" + self.__classname + "Type);\n")
        self.__file_source.write("    pInst->unigine_object_ptr = unigine_object_ptr;\n")
        self.__file_source.write("    // Py_INCREF(pInst);\n")
        self.__file_source.write("    return (PyObject *)pInst;\n")
        self.__file_source.write("}\n")

    def write_source_methods(self):
        self.__file_source.write("\n")
        methods_table = []
        for _method in self.__methods:
            _type = ""
            method_name = camel_to_snake_case(_method["name"])
            method_info = {
                "args": [],
                "method_name": method_name,
                "description": "",
                "func_name": "unigine_" + self.__classname + "_" + method_name,
                "flags": [],
            }
            if _method["static"]:
                _type = "(static)"
                method_info["flags"].append("METH_STATIC")
            else:
                method_info["args"].append("unigine_" + self.__classname + "* self")

            if len(_method["args"]) == 0:
                method_info["flags"].append("METH_NOARGS")
            else:
                method_info["flags"].append("METH_" + str(len(_method["args"])))
                method_info["args"].append("PyObject *args")
                method_info["args"].append("PyObject *kwds")

            method_info["description"] = _method["access"] + " " + _type + ": " + _method["name"]

            if not method_name.endswith("_callback") and not method_name.endswith("_callbacks"):
                methods_table.append(method_info)

                self.__file_source.write(
                    "// " + method_info["description"] + "\n"
                    "static PyObject * " + method_info["func_name"] + "(" + ", ".join(method_info["args"]) + ") {\n"
                    "    PyErr_Clear();\n"
                    "    PyObject *ret = NULL;\n"
                    "    return ret;\n"
                    "};\n\n"
                )

        self.__file_source.write("\n")
        self.__file_source.write("static PyMethodDef unigine_" + self.__classname + "_methods[] = {\n")
        for _method in self.__methods:
            # TODO
            pass
            # self.__file_source.write("    {\n")
            # self.__file_source.write("        \"get_manual_name\", (PyCFunction)unigine_" + self.__classname + "_get_manual_name, METH_NOARGS,\n")
            # self.__file_source.write("        \"Return the name of material\"\n")
            # self.__file_source.write("    },\n")
            # self.__file_source.write("    {\n")
            # self.__file_source.write("        \"set_shadow_mask\", (PyCFunction)unigine_" + self.__classname + "_set_shadow_mask, METH_O,\n")
            # self.__file_source.write("        \"Return the name of material\"\n")
            # self.__file_source.write("    },\n")
        self.__file_source.write("    {NULL}  /* Sentinel */\n")
        self.__file_source.write("};\n")
        self.__file_source.write("\n")

    def write_source_finish(self):
        self.__file_source.write("\n")
        self.__file_source.write("// UniginePyTypeObject" + self.__classname + "\n")
        self.__file_source.write("\n")
        self.__file_source.write("bool Python3Unigine" + self.__classname + "::isReady() {\n")
        self.__file_source.write("    // Initialize tp_dict with empty dictionary\n")
        self.__file_source.write("    std::cout << \"sizeof(unigine_" + self.__classname + ") = \" << sizeof(unigine_" + self.__classname + ") << std::endl;\n")
        self.__file_source.write("    std::cout << \"sizeof(Unigine::Ptr<Unigine::" + self.__classname + ">) = \" << sizeof(Unigine::Ptr<Unigine::" + self.__classname + ">) << std::endl;\n")
        self.__file_source.write("        // Unigine::Ptr<Unigine::" + self.__classname + "> material\n")
        self.__file_source.write("    if (!unigine_" + self.__classname + "Type.tp_dict) {\n")
        self.__file_source.write("        unigine_" + self.__classname + "Type.tp_dict = PyDict_New();\n")
        self.__file_source.write("\n")
        for _enum in self.__enums:
            for _enum_value in _enum["values"]:
                self.__file_source.write("        // enum_typename: " + _enum["name"] + " \n")
                self.__file_source.write("        PyDict_SetItemString(\n")
                self.__file_source.write("            unigine_" + self.__classname + "Type.tp_dict, \"" + _enum_value + "\",\n")
                self.__file_source.write("            Py_BuildValue(\"i\", " + _enum["namespace"] + "::" + _enum_value + ")\n")
                self.__file_source.write("        );\n")
        self.__file_source.write("    }\n")
        self.__file_source.write("    if (PyType_Ready(&unigine_" + self.__classname + "Type) < 0) {\n")
        self.__file_source.write("        return false;\n")
        self.__file_source.write("    }\n")
        self.__file_source.write("    return true;\n")
        self.__file_source.write("}\n")
        self.__file_source.write("\n")
        self.__file_source.write("bool Python3Unigine" + self.__classname + "::addClassDefinitionToModule(PyObject* pModule) {\n")
        self.__file_source.write("    Py_INCREF(&unigine_" + self.__classname + "Type);\n")
        self.__file_source.write("    if (PyModule_AddObject(pModule, \"" + self.__classname + "\", (PyObject *)&unigine_" + self.__classname + "Type) < 0) {\n")
        self.__file_source.write("        Py_DECREF(&unigine_" + self.__classname + "Type);\n")
        self.__file_source.write("        return false;\n")
        self.__file_source.write("    }\n")
        self.__file_source.write("    return true;\n")
        self.__file_source.write("}\n")
        self.__file_source.write("\n")

_unigine_ns_id = find_namespcase_id_by_name("Unigine")

process_namespaces = [_unigine_ns_id]

while len(process_namespaces) > 0:
    process_namespaces = init_namespaces(process_namespaces)

for _func in functions_json:
    _id = _func['@id']
    cache_function[_id] = _func

for _enum in enumeration_json:
    _id = _enum['@id']
    cache_enumeration[_id] = _enum

for _method in methods_json:
    _id = _method['@id']
    cache_methods[_id] = _method

for _constructor in constructor_json:
    _id = _constructor['@id']
    cache_constructors[_id] = _constructor

for _destroctor in destructor_json:
    _id = _destroctor['@id']
    cache_destructors[_id] = _destroctor

for _operator_method in operator_method_json:
    _id = _operator_method['@id']
    cache_operator_methods[_id] = _operator_method

make_for_classes = [
    "Material",
    "Materials",
]

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
            _writer = Python3UnigineWriter(_name)
            _writer.write_header()

            _members = _class['@members'].split(' ')
            for _mem in _members:
                if _mem in cache_function:
                    print(_mem, "func")
                elif _mem in cache_enumeration:
                    _writer.add_enum(_namespace, cache_enumeration[_mem])
                elif _mem in cache_methods:
                    _writer.add_method(cache_methods[_mem])
                elif _mem in cache_constructors:
                    print(_mem, "constructor")
                elif _mem in cache_operator_methods:
                    print(_mem, "operator_method")
                elif _mem in cache_destructors:
                    print(_mem, "destructor")
                else:
                    print("Not found: " + _mem)
            _writer.write_source_methods()
            _writer.write_source_type()
            _writer.write_source_finish()

        # print(filepath)
        # print(_namespace["fullname"],  )
        # print(_class)
# cache_classes
# print(namespaces)
# "Class"

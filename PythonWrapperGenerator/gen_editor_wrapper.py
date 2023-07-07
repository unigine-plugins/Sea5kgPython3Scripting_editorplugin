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
structs_json = _api["GCC_XML"]["Struct"]

files_json = _api["GCC_XML"]["File"]
functions_json = _api["GCC_XML"]["Function"]
enumeration_json = _api["GCC_XML"]["Enumeration"]
methods_json = _api["GCC_XML"]["Method"]
constructor_json = _api["GCC_XML"]["Constructor"]
destructor_json = _api["GCC_XML"]["Destructor"]
operator_method_json = _api["GCC_XML"]["OperatorMethod"]

reference_type_json = _api["GCC_XML"]["ReferenceType"]
cv_qualified_type_json = _api["GCC_XML"]["CvQualifiedType"]
pointer_type_json = _api["GCC_XML"]["PointerType"]
fundamental_type_json = _api["GCC_XML"]["FundamentalType"]


cache_namespaces = {}
cache_classes = {}
cache_function = {}
cache_enumeration = {}
cache_methods = {}
cache_constructors = {}
cache_destructors = {}
cache_operator_methods = {}

cache_cv_qualified_types = {}
cache_reference_types = {}
cache_pointer_types = {}
cache_fundamental_types = {}

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
    name = re.sub('(.)([A-Z][a-z]+)', r'\1_\2', name)
    return re.sub('([a-z0-9])([A-Z])', r'\1_\2', name).lower()

def resolve_type(_type):
    _id = _type["id"]
    if _id in cache_pointer_types:
        _type["id"] = cache_pointer_types[_id]["@type"]
        _type["defines"].append("*")
        return resolve_type(_type)
    if _id in cache_cv_qualified_types:
        _type["id"] = cache_cv_qualified_types[_id]["@type"]
        _type["defines"].append("const")
        return resolve_type(_type)
    if _id in cache_reference_types:
        _type["id"] = cache_reference_types[_id]["@type"]
        _type["defines"].append("&")
        return resolve_type(_type)
    if _id in cache_enumeration:
        _context_id = cache_enumeration[_id]["@context"]
        _namespace = ""
        if _context_id in cache_classes:
            _namespace = cache_classes[_context_id]["fullname"] + "::"
        _type["defines"].append(_namespace + cache_enumeration[_id]["@name"])
        return _type
    if _id in cache_classes:
        _type["defines"].append(cache_classes[_id]["fullname"])
        return _type
    if _id in cache_fundamental_types:
        _type["defines"].append(cache_fundamental_types[_id]["@name"])
        return _type
    _type["unfinshed"] = 1
    return _type

def find_type_by_id(_id):
    res = resolve_type({"id": _id, "defines": []})
    if len(res["defines"]) > 0:
        if res["defines"][0] == "*":
            res["defines"] = res["defines"][1:]
            res["defines"].append("*")
        if res["defines"][0] == "&":
            res["defines"] = res["defines"][1:]
            res["defines"].append("&")
    res["define"] = " ".join(res["defines"])
    return res

def get_filepath_by_id(_id):
    return files_paths[_id]

def find_namespcase_id_by_name(_name):
    for _namespace in namespaces_json:
        if "@name" in _namespace and _namespace["@name"] == _name:
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
    def __init__(self, classname, _namespace, _include_filename, can_ptr):
        self.__classname = classname
        self.__namespace = _namespace
        self.__can_ptr = can_ptr
        if self.__can_ptr:
            self.__member_type = "Unigine::Ptr<Unigine::" + self.__classname + ">"
        else:
            self.__member_type = _namespace + "::" + self.__classname + " *"
        self.__include_filename = _include_filename
        self.__filepath = classname.lower()
        self.__filepath = "python3_unigine_" + self.__filepath
        self.__filepath = "pytypesobjects/" + self.__filepath
        self.__file_header = open(self.__filepath + ".h", "wt", encoding="utf-8", newline="\n")
        self.__file_source = open(self.__filepath + ".cpp", "wt", encoding="utf-8", newline="\n")
        self.__enums = []
        self.__methods = []
        self.__static_methods = 0

    def __is_all_methods_static(self):
        # print("self.__classname: ", self.__classname)
        # print("self.__static_methods: ", self.__static_methods)
        # print("len(self.__methods): ", len(self.__methods))
        return self.__static_methods == len(self.__methods)

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
        if _method["@access"] != "public":
            return
        method_name = camel_to_snake_case(_method["@name"])
        _method_json = {
            "classname": self.__classname,
            "name": _method["@name"],
            "access": _method["@access"],
            "method_name": method_name,
            "static": False,
            "flags": [],
            "func_name": "unigine_" + self.__classname + "_" + method_name,
        }
        _description = ""
        if "@static" in _method:
            if _method["@static"] == "1":
                self.__static_methods += 1
                _method_json["static"] = True
                _method_json["flags"].append("METH_STATIC")
                _description = "(static)"
        _method_json["description"] = _method_json["access"] + " " + _description + ": " + _method_json["name"]

        # print("method", _method_json["name"])
        _method_json["return_type"] = find_type_by_id(_method["@returns"])["define"]
        _method_json["args"] = []
        if 'Argument' in _method:
            _args = []
            if isinstance(_method['Argument'], list):
                _args.extend(_method['Argument'])
            else:
                _args.append(_method['Argument'])

            arg_number = 0
            for _arg in _args:
                arg_number += 1
                _type = find_type_by_id(_arg["@type"])
                # print("arg: ", _arg)
                arg_name = "arg" + str(arg_number)
                if "@name" in _arg:
                    arg_name = _arg["@name"]
                _method_json["args"].append({
                    "type": _type["define"],
                    "name": arg_name
                })
                # print("arg: ", _arg["@name"])
        if len(_method_json["args"]) == 0:
            _method_json["flags"].append("METH_NOARGS")
        else:
            _method_json["flags"].append("METH_VARARGS")
        self.__methods.append(_method_json)

    def write_header(self):
        self.__file_header.write("// this file automaticly generated from Unigine" + self.__classname + ".h\n")
        self.__file_header.write("#pragma once\n")
        self.__file_header.write("\n")
        self.__file_header.write("#include \"python3_pytypeobjects.h\"\n")
        self.__file_header.write("#include <" + self.__include_filename + ">\n")
        self.__file_header.write("\n")
        self.__file_header.write("namespace PyUnigine {\n")
        self.__file_header.write("\n")
        self.__file_header.write("class Python3Unigine" + self.__classname + " : public Python3PyTypeObjectBase {\n")
        self.__file_header.write("    public:\n")
        self.__file_header.write("        virtual bool isReady() override;\n")
        self.__file_header.write("        virtual bool addClassDefinitionToModule(PyObject* pModule) override;\n")
        self.__file_header.write("};\n")
        self.__file_header.write("\n")
        self.__file_header.write("class " + self.__classname + " {\n")
        self.__file_header.write("    public:\n")
        self.__file_header.write("        static PyObject * NewObject(")
        if not self.__is_all_methods_static():
            self.__file_header.write(self.__member_type + " unigine_object_ptr")
        self.__file_header.write(");\n")
        if not self.__is_all_methods_static():
            self.__file_header.write("        static " + self.__member_type + " Convert(PyObject *pObject);\n")
        self.__file_header.write("};\n")
        self.__file_header.write("\n")
        self.__file_header.write("}; // namespace PyUnigine\n")

    def write_source_top(self):
        self.__file_source.write("// this file automaticly generated from Unigine" + self.__classname + ".h\n")
        self.__file_source.write("#include \"python3_unigine_" + self.__classname.lower() + ".h\"\n")
        self.__file_source.write("\n")
        self.__file_source.write("#include <string>\n")
        # TODO fix filename
        self.__file_source.write("#include <" + self.__include_filename + ">\n")
        self.__file_source.write("#include <UnigineLog.h>\n")
        self.__file_source.write("#include <Python.h>\n")
        self.__file_source.write("#include <structmember.h>\n")
        self.__file_source.write("\n")
        self.__file_source.write("#include <iostream>\n")
        self.__file_source.write("\n")
        self.__file_source.write("namespace PyUnigine {\n")
        self.__file_source.write("\n")
        self.__file_source.write("// ------------------------------------------------------------------------------------------\n")
        self.__file_source.write("// unigine_" + self.__classname + "\n")
        self.__file_source.write("\n")
        self.__file_source.write("typedef struct {\n")
        self.__file_source.write("    PyObject_HEAD\n")
        self.__file_source.write("    // Type-specific fields go here.\n")
        if not self.__is_all_methods_static():
            self.__file_source.write("    " + self.__member_type + " unigine_object_ptr;\n")
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
        if not self.__is_all_methods_static():
            self.__file_source.write("    self->unigine_object_ptr = nullptr;\n")
        self.__file_source.write("    return (PyObject *)self;\n")
        self.__file_source.write("}\n")
        self.__file_source.write("\n")
        self.__file_source.write("static int unigine_" + self.__classname + "_init(unigine_" + self.__classname + " *self, PyObject *args, PyObject *kwds) {\n")
        if not self.__can_ptr and not self.__is_all_methods_static():
            self.__file_source.write("    self->unigine_object_ptr = new Unigine::" + self.__classname + "();\n")
        else:
            self.__file_source.write("    // nothing\n")
        self.__file_source.write("    return 0;\n")
        self.__file_source.write("}\n")
        self.__file_source.write("\n")

    def write_source_type(self):
        self.__file_source.write("static PyTypeObject unigine_" + self.__classname + "Type = {\n")
        # self.__file_source.write("    // PyVarObject_HEAD_INIT(&PyType_Type, 0)\n")
        # self.__file_source.write("    // PyVarObject_HEAD_INIT(NULL, 0)\n")
        # self.__file_source.write("    // .tp_name = \"unigine." + self.__classname + "\",\n")
        # self.__file_source.write("    // .tp_basicsize = sizeof(unigine_" + self.__classname + ") + 256, // magic!!!\n")
        # self.__file_source.write("    // .tp_dealloc = (destructor)unigine_" + self.__classname + "_dealloc,\n")
        # self.__file_source.write("    // .tp_flags = Py_TPFLAGS_DEFAULT, // | Py_TPFLAGS_BASETYPE,\n")
        # self.__file_source.write("    // .tp_doc = \"" + self.__classname + " Object\",\n")
        # self.__file_source.write("    // .tp_methods = unigine_" + self.__classname + "_methods,\n")
        # self.__file_source.write("    // .tp_members = 0,\n")
        # self.__file_source.write("    // .tp_dict = 0,\n")
        # self.__file_source.write("    // .tp_init = (initproc)unigine_" + self.__classname + "_init,\n")
        # self.__file_source.write("    // .tp_new = unigine_" + self.__classname + "_new,\n")
        self.__file_source.write("    PyVarObject_HEAD_INIT(NULL, 0)\n")
        self.__file_source.write("    \"unigine." + self.__classname + "\",             // tp_name\n")
        self.__file_source.write("    sizeof(unigine_" + self.__classname + ") + 256, // tp_basicsize  (TODO magic 256 bytes!!!)\n")
        self.__file_source.write("    0,                         // tp_itemsize\n")
        self.__file_source.write("    (destructor)unigine_" + self.__classname + "_dealloc,   // tp_dealloc\n")
        self.__file_source.write("    0,                         // tp_vectorcall_offset\n")
        self.__file_source.write("    0,                         // tp_getattr\n")
        self.__file_source.write("    0,                         // tp_setattr\n")
        self.__file_source.write("    0,                         // tp_as_async\n")
        self.__file_source.write("    0,                         // tp_repr\n")
        self.__file_source.write("    0,                         // tp_as_number\n")
        self.__file_source.write("    0,                         // tp_as_sequence\n")
        self.__file_source.write("    0,                         // tp_as_mapping\n")
        self.__file_source.write("    0,                         // tp_hash\n")
        self.__file_source.write("    0,                         // tp_call\n")
        self.__file_source.write("    0,                         // tp_str\n")
        self.__file_source.write("    0,                         // tp_getattro\n")
        self.__file_source.write("    0,                         // tp_setattro\n")
        self.__file_source.write("    0,                         // tp_as_buffer\n")
        self.__file_source.write("    Py_TPFLAGS_DEFAULT,        // tp_flags\n")
        self.__file_source.write("    \"" + self.__classname + " Object\",         // tp_doc\n")
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
        # self.__file_source.write("    // 0, // tp_free\n")
        # self.__file_source.write("    // 0, // inquiry tp_is_gc;\n")
        # self.__file_source.write("    // 0, // PyObject *tp_bases;\n")
        # self.__file_source.write("    // 0, /* PyObject *tp_mro; */\n")
        # self.__file_source.write("    // 0, /* PyObject *tp_cache; */\n")
        # self.__file_source.write("    // 0, /* PyObject *tp_subclasses; */\n")
        # self.__file_source.write("    // 0, /* PyObject *tp_weaklist; */\n")
        # self.__file_source.write("    // 0, /* destructor tp_del; */\n")
        # self.__file_source.write("    // 0, /* unsigned int tp_version_tag; */\n")
        # self.__file_source.write("    // 0, /* destructor tp_finalize; */\n")
        # self.__file_source.write("    // 0, /* vectorcallfunc tp_vectorcall; */\n")
        self.__file_source.write("};\n")
        self.__file_source.write("\n")

    def prepare_parse_tuple_args_const_char_pointer(self, _arg, var_name):
        ret = ""
        ret += "    if (!PyUnicode_Check(" + var_name + ")) {\n"
        ret += "        // TODO - error\n"
        ret += "        std::cout << \"ERROR: " + var_name + " No unicoode \" << std::endl;\n"
        ret += "        Py_INCREF(Py_None);\n"
        ret += "        ret = Py_None;\n"
        ret += "        return ret;\n"
        ret += "    }\n"
        ret += "    " + _arg["type"] + " " + _arg["name"] + " = PyUnicode_AsUTF8(" + var_name + ");\n"
        return ret

    def prepare_parse_tuple_args(self, _args):
        ret = {
            "parse": "    // parse args:\n",
            "end_code": "",
            "args_to_call": [],
        }
        _args_to_call = []
        counter = 0
        parse_tuple_o = ""
        parse_tuple_args = ""
        for _arg in _args:
            counter += 1
            var_name = "pArg" + str(counter)
            ret["parse"] += "    PyObject *" + var_name + "; // " + _arg["type"] + " " + _arg["name"] + ";\n"
            parse_tuple_o += "O"
            parse_tuple_args += ", &" + var_name

        if len(parse_tuple_o) > 0:
            ret["parse"] += "    PyArg_ParseTuple(args, \"" + parse_tuple_o + "\"" + parse_tuple_args + ");\n"

        counter = 0
        for _arg in _args:
            counter += 1
            var_name = "pArg" + str(counter)
            ret["parse"] += "\n"
            ret["parse"] += "    // " + var_name + "\n"
            if _arg["type"] == "const char *":
                ret["parse"] += self.prepare_parse_tuple_args_const_char_pointer(_arg, var_name)
            else:
                ret["parse"] += "TODO for " + _arg["type"] + "\n"
            ret["parse"] += "\n"

        for _arg in _args:
            # _args += "    " + _arg["type"] + " " + _arg["name"] + ";\n"
            ret["args_to_call"].append(_arg["name"])
        return ret

    def make_method_code(self, method_info, _args, args_to_call):
        return_type = method_info["return_type"]
        args_to_call = ", ".join(args_to_call)
        ret = "\n"
        ret += "    class LocalRunner : public Python3Runner {\n"
        ret += "        public:\n"
        ret += "            virtual void run() override {\n"
        ret += "                "
        if return_type != "void":
            ret += "retOriginal = "
        if not method_info["static"]:
            ret += "unigine_object_ptr->"
        else:
            ret += self.__namespace + "::" + method_info["classname"] + "::"
        ret += method_info["name"] + "(" + args_to_call + ");\n"
        ret += "            };\n"
        if not method_info["static"]:
            ret += "            " + self.__member_type + " unigine_object_ptr;\n"
        if len(_args) > 0:
            ret += "            // args\n"
            for _arg in _args:
                ret += "            " + _arg["type"] + " " + _arg["name"] + ";\n"
        if return_type != "void":
            ret += "            // return\n"
            ret += "            " + return_type + " retOriginal;\n"
        ret += "    };\n"
        ret += "    auto *pRunner = new LocalRunner();\n"
        if not method_info["static"]:
            ret += "    pRunner->unigine_object_ptr = self->unigine_object_ptr;\n"
        for _arg in _args:
            ret += "    pRunner->" + _arg["name"] + " = " + _arg["name"] + ";\n"
        ret += "    Python3Runner::runInMainThread(pRunner);\n"
        ret += "    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds\n"
        ret += "    }\n"
        ret += "    pRunner->mutexAsync.unlock();\n"
        if return_type != "void":
            ret += "    " + return_type + " retOriginal = pRunner->retOriginal;\n"
        ret += "    delete pRunner;\n"
        if return_type.startswith("Unigine::Ptr<"):
            ret += "    if (retOriginal == nullptr) {\n"
            ret += "        Py_INCREF(Py_None);\n"
            ret += "        ret = Py_None;\n"
            ret += "    } else {\n"
            _unigine_type = return_type.split("<")[1].split(">")[0]
            ret += "        ret = Py" + _unigine_type + "::NewObject(retOriginal);\n"
            ret += "    }\n"
        elif return_type == "bool":
            ret += "    ret = PyBool_FromLong(retOriginal);\n"
        elif return_type == "int":
            ret += "    ret = PyLong_FromLong(retOriginal);\n"
        elif return_type.startswith("Unigine::"):
            ret += "    ret = PyLong_FromLong(retOriginal);\n"
        elif return_type == "void":
            ret += "    Py_INCREF(Py_None);\n"
            ret += "    ret = Py_None;\n"
            ret += "    assert(!PyErr_Occurred());\n"
            ret += "    assert(ret);\n"
            ret += "    goto finally;\n"
            ret += "except:\n"
            ret += "    Py_XDECREF(ret);\n"
            ret += "    ret = NULL;\n"
            ret += "finally:\n"
            ret += "    /* If we were to treat arg as a borrowed reference and had Py_INCREF'd above we\n"
            ret += "     * should do this. See below. */\n"
        else:
            ret += "    ret = TODO: unknown type '" + return_type + "'\n"
        return ret

    def write_source_methods(self):
        self.__file_source.write("\n")
        methods_table = []
        for _method in self.__methods:
            _type = ""
            method_info = {
                "args": [],
                "classname": _method["classname"],
                "name": _method["name"],
                "method_name": _method["method_name"],
                "description": _method["description"],
                "func_name": _method["func_name"],
                "flags": _method["flags"],
                "static": _method["static"],
                "return_type": _method["return_type"],
            }
            if not _method["static"]:
                method_info["args"].append("unigine_" + self.__classname + "* self")
            else:
                method_info["args"].append("unigine_" + self.__classname + "* self_static_null")

            # TODO returns
            if len(_method["args"]) > 0:
                method_info["args"].append("PyObject *args")

            parse_args_result = self.prepare_parse_tuple_args(_method["args"])

            if not _method["method_name"].endswith("_callback") and not _method["method_name"].endswith("_callbacks"):
                methods_table.append(method_info)
                self.__file_source.write(
                    "// " + method_info["description"] + "\n"
                    "static PyObject * " + method_info["func_name"] + "(" + ", ".join(method_info["args"]) + ") {\n"
                    "    PyErr_Clear();\n"
                    "    PyObject *ret = NULL;\n" +
                    parse_args_result["parse"] +
                    self.make_method_code(method_info, _method["args"], parse_args_result["args_to_call"]) +
                    "\n    // end\n" +
                    parse_args_result["end_code"] +
                    "    // return: " + method_info["return_type"] + "\n" +
                    "    return ret;\n"
                    "};\n\n"
                )

        self.__file_source.write("\n")
        self.__file_source.write("static PyMethodDef unigine_" + self.__classname + "_methods[] = {\n")
        for _method in methods_table:
            # print(_method)
            self.__file_source.write("    {\n")
            self.__file_source.write(
                "        \"" + _method["method_name"] + "\"," +
                " (PyCFunction)" + _method["func_name"] + ", " + "|".join(_method["flags"]) + ",\n"
            )
            self.__file_source.write("        \"" + _method["description"] + "\"\n")
            self.__file_source.write("    },\n")
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
        # self.__file_source.write("    std::cout << \"sizeof(unigine_" + self.__classname + ") = \" << sizeof(unigine_" + self.__classname + ") << std::endl;\n")
        # self.__file_source.write("    std::cout << \"sizeof(Unigine::Ptr<Unigine::" + self.__classname + ">) = \" << sizeof(Unigine::Ptr<Unigine::" + self.__classname + ">) << std::endl;\n")
        # self.__file_source.write("        // Unigine::Ptr<Unigine::" + self.__classname + "> material\n")
        self.__file_source.write("    if (!unigine_" + self.__classname + "Type.tp_dict) {\n")
        self.__file_source.write("        unigine_" + self.__classname + "Type.tp_dict = PyDict_New();\n")
        self.__file_source.write("\n")
        for _enum in self.__enums:
            for _enum_value in _enum["values"]:
                if _enum["name"] != "":
                    self.__file_source.write("        // enum_typename: " + _enum["name"] + "\n")
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
        self.__file_source.write("PyObject * " + self.__classname + "::NewObject(")
        if not self.__is_all_methods_static():
            self.__file_source.write(self.__member_type + " unigine_object_ptr")
        self.__file_source.write(") {\n")
        self.__file_source.write("    // std::cout << \"sizeof(unigine_" + self.__classname + ") = \" << sizeof(unigine_" + self.__classname + ") << std::endl;\n")
        self.__file_source.write("    unigine_" + self.__classname + " *pInst = PyObject_New(unigine_" + self.__classname + ", &unigine_" + self.__classname + "Type);\n")
        if not self.__is_all_methods_static():
            self.__file_source.write("    pInst->unigine_object_ptr = unigine_object_ptr;\n")
        self.__file_source.write("    // Py_INCREF(pInst);\n")
        self.__file_source.write("    return (PyObject *)pInst;\n")
        self.__file_source.write("}\n")
        if not self.__is_all_methods_static():
            self.__file_source.write("\n")
            self.__file_source.write(self.__member_type + " " + self.__classname + "::Convert(PyObject *pObject) {\n")
            self.__file_source.write("    if (Py_IS_TYPE(pObject, &unigine_" + self.__classname + "Type) == 0) {\n")
            self.__file_source.write("        Unigine::Log::error(\"Invalid type, expected '" + self.__member_type + "', but got some another\");\n")
            self.__file_source.write("    }\n")
            self.__file_source.write("    unigine_" + self.__classname + " *pInst = (unigine_" + self.__classname + " *)pObject;\n")
            self.__file_source.write("    return pInst->unigine_object_ptr;\n")
            self.__file_source.write("}\n")
        self.__file_source.write("\n")
        self.__file_source.write("}; // namespace PyUnigine\n")

process_namespaces = [
    find_namespcase_id_by_name("Unigine"),
    find_namespcase_id_by_name("UnigineEditor"),
]

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

for _reference_type in reference_type_json:
    _id = _reference_type['@id']
    cache_reference_types[_id] = _reference_type

for _cv_qualified_type in cv_qualified_type_json:
    _id = _cv_qualified_type['@id']
    cache_cv_qualified_types[_id] = _cv_qualified_type

for _pointer_type in pointer_type_json:
    _id = _pointer_type['@id']
    cache_pointer_types[_id] = _pointer_type

for _fundamental_type in fundamental_type_json:
    _id = _fundamental_type['@id']
    cache_fundamental_types[_id] = _fundamental_type

for _class in classes_json:
    context = _class['@context']
    if context in cache_namespaces:
        _id = _class['@id']
        _namespace = cache_namespaces[context]["fullname"]
        _name = _class['@name']
        _class["fullname"] = _namespace + "::" + _name
        cache_classes[_id] = _class

for _class in classes_json:
    context = _class['@context']
    # scan classes
    if context in cache_namespaces:
        _id = _class['@id']
        _namespace = cache_namespaces[context]["fullname"]
        _class["class_namespace"] = _namespace
        _class["fullname"] = _namespace + "::" + _class['@name']
        cache_classes[_id] = _class

# TODO structs
for _struct in structs_json:
    context = _struct['@context']
    if context in cache_namespaces:
        _id = _struct['@id']
        _namespace = cache_namespaces[context]["fullname"]
        _struct["class_namespace"] = _namespace
        _struct["fullname"] = _namespace + "::" + _struct['@name']
        cache_classes[_id] = _struct

# scan bases
for _id in cache_classes:
    _class = cache_classes[_id]
    bases = []
    if "@bases" in _class:
        bases_ids = _class["@bases"].split(" ")
        for _base_id in bases_ids:
            # print("base_id=", _base_id)
            _base_access = "public"
            if _base_id.startswith("private:"):
                _base_access = "private"
                _base_id = _base_id.split("private:")[1]
            if _base_id not in cache_classes:
                print("ERROR: skip bases class ", _base_id)
                continue
            base_classfullname = cache_classes[_base_id]["fullname"]
            bases.append(_base_access + " " + base_classfullname)
            # print("base_classfullname ", base_classfullname)
    cache_classes[_id]["bases_fullnames"] = bases

make_for_classes = [
    "Material",
    "Materials",
    "Node",
    "Mesh",
    "UGUID",
    "mat4",
    "ObjectMeshDynamic",
    "vec3",
    "Vec3",
    "Player",
    # editor
    "AssetManager",
    "ViewportManager",
    "SelectorNodes",
    "Selection",
    "Vector",
]

for _id in cache_classes:
    _class = cache_classes[_id]
    _name = _class['@name']
    _fullname = _class["fullname"]
    _namespace = _class["class_namespace"]
    _filepath = get_filepath_by_id(_class['@file'])
    if _name in make_for_classes:
        print("_id " + _id)
        print(_namespace, _name, _filepath)
        _include_filename = _filepath.split("/include/")[1]
        # print(_class)
        can_ptr = False
        if "public Unigine::APIInterface" in _class["bases_fullnames"]:
            can_ptr = True

        _writer = Python3UnigineWriter(_name, _namespace, _include_filename, can_ptr)
        _members = _class['@members'].split(' ')
        for _mem in _members:
            if _mem in cache_function:
                pass
                # print(_mem, "func")
            elif _mem in cache_enumeration:
                _writer.add_enum(_namespace, cache_enumeration[_mem])
            elif _mem in cache_methods:
                _writer.add_method(cache_methods[_mem])
            elif _mem in cache_constructors:
                # print(_mem, "constructor")
                pass
            elif _mem in cache_operator_methods:
                # print(_mem, "operator_method")
                pass
            elif _mem in cache_destructors:
                # print(_mem, "destructor")
                pass
            else:
                print("Not found: " + _mem)

        _writer.write_header()
        _writer.write_source_top()
        _writer.write_source_methods()
        _writer.write_source_type()
        _writer.write_source_finish()

        # print(filepath)
        # print(_namespace["fullname"],  )
        # print(_class)
# print(namespaces)
# "Class"

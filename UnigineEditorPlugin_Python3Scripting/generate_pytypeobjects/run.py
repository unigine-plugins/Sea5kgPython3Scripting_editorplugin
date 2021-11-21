#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import sys
import CppHeaderParser

# https://pypi.org/project/CppHeaderParser/

header_name = "UnigineMaterial.h"

try:
    cppHeader = CppHeaderParser.CppHeader("../../include/" + header_name)
except CppHeaderParser.CppParseError as e:
    print(e)
    sys.exit(1)

print("classes:")
# print(cppHeader.classes)

for classname in cppHeader.classes:
    print("classname:", classname)
    _classname_lower = classname.lower()

    f_header = open("../src/python3_wrapper/pytypesobjects/python3_unigine_" + _classname_lower + ".h", "w")
    f_header.write("// this file automaticly generated from " + header_name + " \n")
    f_header.write("#pragma once\n\n")
    f_header.write("#include \"python3_pytypeobjects.h\"\n")
    f_header.write("#include <" + header_name + ">\n\n")
    f_header.write("class Python3Unigine" + classname +" : public Python3PyTypeObjectBase {\n")
    f_header.write("    public:\n")
    f_header.write("        virtual bool isReady() override;\n")
    f_header.write("        virtual bool addClassDefinitionToModule(PyObject* pModule) override;\n")
    f_header.write("};\n")
    f_header.write("\n")
    f_header.write("class PyUnigine" + classname + " {\n")
    f_header.write("    public:\n")
    f_header.write("        static PyObject * NewObject(Unigine::Ptr<Unigine::" + classname + "> o);\n")
    f_header.write("};\n")

    # python3_unigine_material
    f_source = open("../src/python3_wrapper/pytypesobjects/python3_unigine_" + _classname_lower + "_gen.cpp", "w")
    f_source.write("// this file automaticly generated from " + header_name + " \n")
    f_source.write("#include \"python3_unigine_" + _classname_lower + ".h\"\n")
    f_source.write("\n")
    f_source.write("#include <string>\n")
    f_source.write("#include <Python.h>\n")
    f_source.write("#include <structmember.h>\n")

    _cl = cppHeader.classes[classname]
    for p in _cl:
        print(p)
    for p in _cl['methods']:
        print("method", p)
    

    f_source.write("bool Python3Unigine" + classname + "::isReady() {\n")
    f_source.write("    // Initialize tp_dict with empty dictionary\n")
    f_source.write("    \n")
    f_source.write("    if (!unigine_" + classname + "Type.tp_dict) {\n")
    f_source.write("        unigine_" + classname + "Type.tp_dict = PyDict_New();\n")
    f_source.write("\n")

    for p in _cl['enums']['public']:
        # print("enums", p)
        for en in p['values']:
            # print("en", en)
            f_source.write("        PyDict_SetItemString(\n")
            f_source.write("            unigine_" + classname + "Type.tp_dict, \"" + en['name'] + "\",\n")
            f_source.write("            Py_BuildValue(\"i\", Unigine::" + classname + "::" + en['name'] + ")\n")
            f_source.write("        );\n")
    f_source.write("    }\n")
    f_source.write("    if (PyType_Ready(&unigine_" + classname + "Type) < 0) {\n")
    f_source.write("        return false;\n")
    f_source.write("    }\n")
    f_source.write("    return true;\n")
    f_source.write("}\n")

    f_header.close()
    f_source.close()
       
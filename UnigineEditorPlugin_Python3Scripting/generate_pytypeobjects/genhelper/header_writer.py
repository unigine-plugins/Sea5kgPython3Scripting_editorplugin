#!/usr/bin/env python3
# -*- coding: utf-8 -*-

class HeaderWriter:

    def __init__(self, folder_to_generate, classname, header_name):
        self.__classname = classname
        self.__header_name = header_name
        self.__folder_to_generate = folder_to_generate
        _classname_lower = self.__classname.lower()
        self.__header_filename = "python3_unigine_" + _classname_lower + ".h"
    
    def write_all(self):
        filepath = self.__folder_to_generate + "/" + self.__header_filename
        with open(filepath, "w") as f_header:
            f_header.write("// this file automaticly generated from " + self.__header_name + " \n")
            f_header.write("#pragma once\n\n")
            f_header.write("#include \"python3_pytypeobjects.h\"\n")
            f_header.write("#include <" + self.__header_name + ">\n\n")
            f_header.write("class Python3Unigine" + self.__classname +" : public Python3PyTypeObjectBase {\n")
            f_header.write("    public:\n")
            f_header.write("        virtual bool isReady() override;\n")
            f_header.write("        virtual bool addClassDefinitionToModule(PyObject* pModule) override;\n")
            f_header.write("};\n")
            f_header.write("\n")
            f_header.write("class PyUnigine" + self.__classname + " {\n")
            f_header.write("    public:\n")
            f_header.write("        static PyObject * NewObject(Unigine::Ptr<Unigine::" + self.__classname + "> unigine_object_ptr);\n")
            f_header.write("};\n")

    def get_header_filename(self):
        return self.__header_filename

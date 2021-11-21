#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import re

class SourceWriter:

    def __init__(self, folder_to_generate, classname, header_name, f_header):
        self.__classname = classname
        self.__header_name = header_name
        self.__folder_to_generate = folder_to_generate
        self.__f_header = f_header
        _classname_lower = self.__classname.lower()
        self.__source_filename = "python3_unigine_" + _classname_lower + "_gen.cpp"
        self.__fullpath = self.__folder_to_generate + "/" + self.__source_filename
        self.__def_methods = []
    
    def write_headers(self):
        with open(self.__fullpath, "w") as f_source:
            f_source.write("// this file automaticly generated from " + self.__header_name + " \n")
            f_source.write("#include \"" + self.__f_header.get_header_filename() + "\"\n")
            f_source.write("\n")
            f_source.write("#include <string>\n")
            f_source.write("#include <Python.h>\n")
            f_source.write("#include <structmember.h>\n\n")
    
    def write_struct(self):
        with open(self.__fullpath, "a") as f_source:
            f_source.write("// ------------------------------------------------------------------------------------------\n")
            f_source.write("// unigine_" + self.__classname + " \n")
            f_source.write("\n")
            f_source.write("typedef struct {\n")
            f_source.write("    PyObject_HEAD\n")
            f_source.write("    // Type-specific fields go here.\n")
            f_source.write("    Unigine::Ptr<Unigine::" + self.__classname + "> unigine_object_ptr;\n")
            f_source.write("} unigine_" + self.__classname + ";\n")
            f_source.write("\n")
            f_source.write("static void unigine_" + self.__classname + "_dealloc(unigine_" + self.__classname + "* self) {\n")
            f_source.write("    // Unigine::Log::message(\"unigine_" + self.__classname + "_dealloc\");\n")
            f_source.write("    Py_TYPE(self)->tp_free((PyObject*)self);\n")
            f_source.write("}\n")
            f_source.write("\n")
            f_source.write("static PyObject *unigine_" + self.__classname + "_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {\n")
            f_source.write("    // Unigine::Log::message(\"unigine_" + self.__classname + "_new\");\n")
            f_source.write("    unigine_" + self.__classname + " *self;\n")
            f_source.write("    self = (unigine_" + self.__classname + " *)type->tp_alloc(type, 0);\n")
            f_source.write("    return (PyObject *)self;\n")
            f_source.write("}\n")
            f_source.write("\n")
            f_source.write("static int unigine_" + self.__classname + "_init(unigine_" + self.__classname + " *self, PyObject *args, PyObject *kwds) {\n")
            f_source.write("    // nothing\n")
            f_source.write("    return 0;\n")
            f_source.write("}\n")
            f_source.write("\n")

    def __get_declaration_method(self, m):
        ret = m['returnType'] + " " + self.__classname + "::" + m['name'] + "("
        i = 0
        for p in m['params']:
            i += 1
            ret += p['type'] + " " + p['name']
            if i < len(m['params']):
                ret += ", "
        ret += ");"
        return ret

    def name_method_to_snake_case(self, name):
        name = re.sub(r'(?<!^)(?=[A-Z])', '_', name).lower()
        return name

    def __write_method(self, m, f_source):
        sc_name = self.name_method_to_snake_case(m['name'])
        f_source.write("static PyObject *unigine_" + self.__classname + "_" + m['name'] + "(unigine_" + self.__classname + "* self) {\n")
        f_source.write("    PyErr_Clear();\n")
        f_source.write("    return Py_None;\n")
        f_source.write("}\n")
        f_source.write("\n")
        self.__def_methods.append({
            "name": m['name'],
            "sc_name": sc_name,
            "nargs": len(m['params'])
        })

    def write_methods(self, methods):
        with open(self.__fullpath, "a") as f_source:
            f_source.write("// methods\n")
            allowed_types = [
                'void', 'int', 'const char *', 'float', 'bool'
                # 'Ptr<Material>', 
            ]
            for m in methods:
                method_declaration = self.__get_declaration_method(m)
                if m['returnType'] not in allowed_types:
                    f_source.write("// SKIPPED (return type not supported): " + method_declaration +"\n\n")
                    continue
                allow = True
                for p in m['params']:
                    if p['type'] not in allowed_types:
                        allow = False
                if not allow:
                    f_source.write("// SKIPPED (some type in arguments not supported): " + method_declaration +"\n\n")
                    continue
                f_source.write("// method: " + method_declaration + "\n")
                self.__write_method(m, f_source)
            f_source.write("\n")

            f_source.write("static PyMethodDef unigine_" + self.__classname + "_methods[] = {\n")
            for method in self.__def_methods:
                meth_args = ''
                if method["nargs"] == 0:
                    meth_args = "METH_NOARGS"
                elif method["nargs"] == 1:
                    meth_args = "METH_O"
                elif method["nargs"] > 1:
                    meth_args = "METH_VARARGS"
                f_source.write("    {\n")
                f_source.write("        \"" + method['sc_name'] + "\", (PyCFunction)unigine_" + self.__classname + "_" + method['name'] + ", " + meth_args + ",\n")
                f_source.write("        \"TODO\"\n")
                f_source.write("    },\n")
            f_source.write("    {NULL}  //\n")
            f_source.write("};\n")

    def write_PyTypeObject(self):
        with open(self.__fullpath, "a") as f_source:
            f_source.write("static PyTypeObject unigine_" + self.__classname + "Type = {\n")
            f_source.write("    // PyVarObject_HEAD_INIT(&PyType_Type, 0)\n")
            f_source.write("    PyVarObject_HEAD_INIT(NULL, 0)\n")
            f_source.write("    .tp_name = \"unigine." + self.__classname + "\",\n")
            f_source.write("    .tp_basicsize = sizeof(unigine_" + self.__classname + ") + 16, // magic size + 16!!!\n")
            f_source.write("    .tp_dealloc = (destructor)unigine_" + self.__classname + "_dealloc,\n")
            f_source.write("    .tp_flags = Py_TPFLAGS_DEFAULT, // | Py_TPFLAGS_BASETYPE,\n")
            f_source.write("    .tp_doc = \"" + self.__classname + " Object\",\n")
            f_source.write("    .tp_methods = unigine_" + self.__classname + "_methods,\n")
            f_source.write("    .tp_members = 0,\n")
            f_source.write("    .tp_dict = 0,\n")
            f_source.write("    .tp_init = (initproc)unigine_" + self.__classname + "_init,\n")
            f_source.write("    .tp_new = unigine_" + self.__classname + "_new,\n")
            f_source.write("};\n")
            f_source.write("\n")
            f_source.write("PyObject * PyUnigine" + self.__classname + "::NewObject(Unigine::Ptr<Unigine::" + self.__classname + "> unigine_object_ptr) {\n")
            f_source.write("    unigine_" + self.__classname + " *pInst = PyObject_New(unigine_" + self.__classname + ", &unigine_" + self.__classname + "Type);\n")
            f_source.write("    pInst->unigine_object_ptr = unigine_object_ptr;\n")
            f_source.write("    // Py_INCREF(pInst);\n")
            f_source.write("    return (PyObject *)pInst;\n")
            f_source.write("}\n")
            f_source.write("\n")

    def write_registrar(self, enums):
        with open(self.__fullpath, "a") as f_source:
            f_source.write("// ------------------------------------------------------------------------------------------\n")
            f_source.write("// Python3Unigine" + self.__classname + " \n\n")
            f_source.write("bool Python3Unigine" + self.__classname + "::isReady() {\n")
            f_source.write("    // Initialize tp_dict with empty dictionary\n")
            f_source.write("    \n")
            f_source.write("    if (!unigine_" + self.__classname + "Type.tp_dict) {\n")
            f_source.write("        unigine_" + self.__classname + "Type.tp_dict = PyDict_New();\n")
            f_source.write("\n")

            for p in enums:
                for en in p['values']:
                    # print("en", en)
                    f_source.write("        PyDict_SetItemString(\n")
                    f_source.write("            unigine_" + self.__classname + "Type.tp_dict, \"" + en['name'] + "\",\n")
                    f_source.write("            Py_BuildValue(\"i\", Unigine::" + self.__classname + "::" + en['name'] + ")\n")
                    f_source.write("        );\n")
            f_source.write("    }\n")
            f_source.write("    if (PyType_Ready(&unigine_" + self.__classname + "Type) < 0) {\n")
            f_source.write("        return false;\n")
            f_source.write("    }\n")
            f_source.write("    return true;\n")
            f_source.write("}\n")
            f_source.write("\n")
            f_source.write("bool Python3Unigine" + self.__classname + "::addClassDefinitionToModule(PyObject* pModule) {\n")
            f_source.write("    Py_INCREF(&unigine_" + self.__classname + "Type);\n")
            f_source.write("    if (PyModule_AddObject(pModule, \"" + self.__classname + "\", (PyObject *)&unigine_" + self.__classname + "Type) < 0) {\n")
            f_source.write("        Py_DECREF(&unigine_" + self.__classname + "Type);\n")
            f_source.write("        return false;\n")
            f_source.write("    }\n")
            f_source.write("    return true;\n")
            f_source.write("}\n")
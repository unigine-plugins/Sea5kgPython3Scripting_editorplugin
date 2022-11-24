#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import sys
import os
import glob2
import genhelper


_includes = glob2.glob("../../include/*.h")
# print(_includes)
# sys.exit()

generate_by_headers = [
    "UnigineMaterial.h",
    "UnigineNode.h"
]
folder_to_generate = "../src/python3_wrapper/pytypesobjects"

_all = genhelper.CppHeaderParserForUnigine()

for header_name in generate_by_headers:
    _path = os.path.join("..", "..", "include", header_name)
    print(_path)
    _all.parse_file(_path)

for classname in _all.classes:
    _class = _all.classes[classname]
    print("\n\n ====> classname:", _class.get_namespace(), "::", _class.get_classname())
    _classname_lower = _class.get_classname().lower()
    header_name = _class.get_filename()
    header_name = header_name.split("/")[-1]

    f_header = genhelper.HeaderWriter(folder_to_generate, classname, header_name)
    f_header.write_all()
    
    f_source = genhelper.SourceWriter(folder_to_generate, classname, header_name, f_header)
    f_source.write_headers()
    f_source.write_struct()

    # python3_unigine_material
    # f_source = open(folder_to_generate + "/python3_unigine_" + _classname_lower + "_gen.cpp", "w")

    # _cl = _header.classes[classname]
    # # for p in _cl:
    # #     print(p)
    # methods = []
    # for _p in _cl['methods']['public']:
    #     # print("method ", _p['rtnType'], _p['name'])
    #     method_descr = {
    #         'returnType': _p['rtnType'],
    #         'name': _p['name'],
    #         'params': []
    #     }
    #     for param in _p['parameters']:
    #         # print("        ", param['type'], param['name'])
    #         method_descr['params'].append({
    #             "type": param['type'],
    #             "name": param['name']
    #         })
    #     methods.append(method_descr)
    
    # f_source.write_methods(methods)
    f_source.write_PyTypeObject()
    f_source.write_registrar(_class.get_enums())


       
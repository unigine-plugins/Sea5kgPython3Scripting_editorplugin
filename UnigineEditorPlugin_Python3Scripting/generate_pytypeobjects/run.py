#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import sys
import CppHeaderParser
import genhelper

# https://pypi.org/project/CppHeaderParser/

generate_by_headers = [
    "UnigineMaterial.h",
    "UnigineNode.h"
]
folder_to_generate = "../src/python3_wrapper/pytypesobjects"


for header_name in generate_by_headers:
    try:
        cppHeader = CppHeaderParser.CppHeader("../../include/" + header_name)
    except CppHeaderParser.CppParseError as e:
        print(e)
        sys.exit(1)

    for classname in cppHeader.classes:
        print("\n\n ====> classname:", classname)
        _classname_lower = classname.lower()

        f_header = genhelper.HeaderWriter(folder_to_generate, classname, header_name)
        f_header.write_all()
        
        f_source = genhelper.SourceWriter(folder_to_generate, classname, header_name, f_header)
        f_source.write_headers()
        f_source.write_struct()
        

        # python3_unigine_material
        # f_source = open(folder_to_generate + "/python3_unigine_" + _classname_lower + "_gen.cpp", "w")

        _cl = cppHeader.classes[classname]
        # for p in _cl:
        #     print(p)
        methods = []
        for _p in _cl['methods']['public']:
            # print("method ", _p['rtnType'], _p['name'])
            method_descr = {
                'returnType': _p['rtnType'],
                'name': _p['name'],
                'params': []
            }
            for param in _p['parameters']:
                # print("        ", param['type'], param['name'])
                method_descr['params'].append({
                    "type": param['type'],
                    "name": param['name']
                })
            methods.append(method_descr)
        
        f_source.write_methods(methods)
        f_source.write_PyTypeObject()
        f_source.write_registrar(_cl['enums']['public'])


       
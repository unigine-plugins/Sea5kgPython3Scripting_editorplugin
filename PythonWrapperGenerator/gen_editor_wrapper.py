#!/usr/bin/env python3
# -*- coding: utf-8 -*-

# install 
# python3 -m pip install xmltodict


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
namespaces = {}
# "Typedef"
# "Function": [
# "Struct": [
# "Variable": [
# "Enumeration": [
# "Union": [
# "Class": [

def find_namespcase_id_by_name(_name):
    for _namespace in namespaces_json:
        if "@name" in _namespace and _namespace["@name"] == "Unigine":
            _id = _namespace["@id"]
            return _id

def get_fullname(_id):
    _name = ""
    while _id:
        if _id in namespaces:
            _name += namespaces[_id]["name"] + "::" + _name
            _id = namespaces[_id]["context"]
        else:
            _id = None
    return _name

def init_namespaces(process_namespaces):
    ret = []
    for _ns_id in process_namespaces:
        for _namespace in namespaces_json:
            if _namespace["@id"] == _ns_id:
                _id = _namespace["@id"]
                if "@name" not in _namespace:
                    print("Skip namespace " + _id + ", because not found @name")
                    continue
                _name = _namespace["@name"]
                _context = _namespace["@context"]
                _members = _namespace["@members"].split(" ")
                _fullname = get_fullname(_context) + _name,
                print(_fullname)
                namespaces[_id] = {
                    'name': _name,
                    'fullname': _fullname,
                    'context': _context,
                    'members': _members,
                }
            elif "@context" in _namespace and _namespace["@context"] ==_ns_id:
                _id = _namespace["@id"]
                if _id not in namespaces:
                    ret.append(_id)
    return ret

_unigine_ns_id = find_namespcase_id_by_name("Unigine")

process_namespaces = [_unigine_ns_id]

while len(process_namespaces) > 0:
    process_namespaces = init_namespaces(process_namespaces)
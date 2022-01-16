#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import sys
import os
import zipfile
import platform


_platform = platform.platform().lower()
is_linux = False
is_windows = False
if _platform.startswith("linux"):
    _platform = "linux"
    is_linux = True
elif _platform.startswith("windows"):
    _platform = "windows"
    is_windows = True
else:
    sys.exit("Unknown platform")

# ret = os.system("python3 build_plugin.py")
# if ret != 0:
#     sys.exit("Could not build...")


with open("version") as _file:
    content = _file.read()
    _version = content.strip()

folder_inside = "UnigineEditorPlugin_Python3Scripting_" + _version
_zip_filename = _platform + "_" + folder_inside + ".zip"

if os.path.isfile(_zip_filename):
    os.remove(_zip_filename)

zf = zipfile.ZipFile(_zip_filename, 'w', zipfile.ZIP_DEFLATED)

if is_linux:
    zf.write(
        "bin/editor/libUnigineEditorPlugin_Python3Scripting_x64.so",
        folder_inside + "/bin/editor/libUnigineEditorPlugin_Python3Scripting_x64.so",
    )
    zf.write(
        "bin/editor_debug/libUnigineEditorPlugin_Python3Scripting_x64d.so",
        folder_inside + "/bin/editor_debug/libUnigineEditorPlugin_Python3Scripting_x64d.so",
    )

if is_windows:
    zf.write(
        "bin/editor/UnigineEditorPlugin_Python3Scripting_x64.dll",
        folder_inside + "/bin/editor/UnigineEditorPlugin_Python3Scripting_x64.dll",
    )
    python_libs = [
        "libcrypto-1_1.dll",
        "libffi-7.dll",
        "libssl-1_1.dll",
        "pyshellext.dll",
        "python310.dll",
        "sqlite3.dll",
        "tcl86t.dll",
        "tk86t.dll",
    ]
    for _pydll in python_libs:
        zf.write(
            "UnigineEditorPlugin_Python3Scripting/python-bin-windows/" + _pydll,
            folder_inside + "/bin/" + _pydll,
        )
    zf.write(
        "bin/editor_debug/UnigineEditorPlugin_Python3Scripting_x64d.dll",
        folder_inside + "/bin/editor_debug/UnigineEditorPlugin_Python3Scripting_x64d.dll",
    )


# Python3Home (Lib)
rootdir = "UnigineEditorPlugin_Python3Scripting/Python-3.10.1/Lib"
for root, subdirs, files in os.walk(rootdir):
    for _file in files:
        _src = os.path.join(root, _file)
        _dst = _src[len(rootdir)+1:]
        _dst = os.path.join("bin", "Python3Home", "Lib", _dst)
        _dst = os.path.join(folder_inside, _dst)
        print(_src, "->", _dst)
        zf.write(_src, _dst)

rootdir = "Python3Scripting_examples"
for root, subdirs, files in os.walk(rootdir):
    for _file in files:
        _src = os.path.join(root, _file)
        _dst = _src[len(rootdir)+1:]
        _dst = os.path.join("bin", "Python3Scripting", _dst)
        _dst = os.path.join(folder_inside, _dst)
        print(_src, "->", _dst)
        zf.write(_src, _dst)

zf.close()

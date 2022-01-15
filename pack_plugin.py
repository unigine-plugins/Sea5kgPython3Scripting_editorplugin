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


if is_linux:
    ret = os.system("./build_plugin_linux.sh")

if is_windows:
    ret = os.system("./build_plugin_windows.bat")

if ret != 0:
    sys.exit("Could not build...")


with open("version") as _file:
    content = _file.read()
    _version = content.strip()

folder_inside = "UnigineEditorPlugin_Python3Scripting_" + _version
_zip_filename = _platform + "_UnigineEditorPlugin_Python3Scripting_" + _version + ".zip"

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
    zf.write(
        "bin/editor_debug/UnigineEditorPlugin_Python3Scripting_x64d.dll",
        folder_inside + "/bin/editor_debug/UnigineEditorPlugin_Python3Scripting_x64d.dll",
    )


rootdir = "Python3Scripting_examples"
for root, subdirs, files in os.walk(rootdir):
    for _file in files:
        _src = os.path.join(root, _file)
        _src = _src[len(rootdir)+1:]
        _src = os.path.join("bin", "Python3Scripting", _src)
        _dst = os.path.join(folder_inside, _src)
        zf.write(_src, _dst)

zf.close()

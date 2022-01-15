#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import sys
import os
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



build_commands = [
    {
        "name": "cmake configure release",
        "command": "cmake -H. -Bjunk/release_" + _platform + " -DCMAKE_BUILD_TYPE=Release \
        -DCMAKE_POSITION_INDEPENDENT_CODE=ON \
        -DCMAKE_INSTALL_PREFIX=../bin",
    },
    {
        "name": "cmake build release",
        "command": "cmake --build junk/release_" + _platform + " --parallel 8 --config Release",
    }, 
    {
        "name": "cmake configure debug",
        "command": "cmake -H. -Bjunk/debug_" + _platform + " -DCMAKE_BUILD_TYPE=Debug \
        -DCMAKE_POSITION_INDEPENDENT_CODE=ON \
        -DCMAKE_INSTALL_PREFIX=../bin",
    },
    {
        "name": "cmake build debug",
        "command": "cmake --build junk/debug_" + _platform + " --parallel 8 --config Debug",
    }, 
]

os.chdir("UnigineEditorPlugin_Python3Scripting")

for _cmd in build_commands:
    ret = os.system(_cmd["command"])
    if ret != 0:
        sys.exit(-1)

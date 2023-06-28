# unigine-editor-python3scripting

**IN-PROGRESS...**

[![Server API Coverage](https://img.shields.io/badge/Unigine-2.16.1-yellow.svg)](https://developer.unigine.com/en/docs/2.16.1/)

Pluging for scripting by python3 in Unigine Editor https://unigine.com/get-unigine/

* License of plugin: MIT
* For code editor used: https://github.com/Megaxela/QCodeEditor - under MIT license
* Build-in Python-3.10.1 https://github.com/python/cpython/tree/v3.10.1 - under Python Software Foundation license
* Unigine SDK 2.16.1 - tested on `Community Free`

![scoreboard](preview.gif)

## Prebuilded versions here

[here](https://sea-kg.com/files/unigine-plugins/UnigineEditorPlugin_Python3Scripting/v2.16.1/)


## build

### build python

on windows:
```
> cd UnigineEditorPlugin_Python3Scripting
> build_python.bat
```

on linux:
```
$ cd UnigineEditorPlugin_Python3Scripting
$ build_python.bat
```

### build pugin

Required:
1. cmake 3.19+
2. Python 3+
3. on windows: Visual Studio 17 2022

Build on linux

```
$ docker run --rm -it -v `pwd`:/opt/sources sea5kg/unigine-editor-pluigns:v2.16.1 ./build_plugin.py
```

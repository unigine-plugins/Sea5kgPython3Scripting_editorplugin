# Development


## Building plugin (step by step)

Install requirements

1. Require UNIGINE SDK Browser
Pluging for scripting by python3 in Unigine Editor https://unigine.com/get-unigine/


2. Require System Packages

Ubuntu/Debian:
```bash
$ sudo apt install qt5-default cmake gcc git-core
```

Windows:
- install cmake >= 3.20 
- install Visual Studio 2017
- install qt 5.12.x (And set system environment variable `QTDIR=C:\Qt\Qt5.12.3\5.12.3\`)
- install python3 (for command scripts)

### step 1: create a empty project

Use a UNIGINE SDK Browser and create some empty project, for example `my_project`

*`my_project` folder - where you can see `data` and with `bin` and with `include` and launchers*

### step 2: clone the sources

Ubuntu/Debian:
```bash
$ cd my_project
$ git clone https://github.com/unigine-plugins/unigine-editor-python3scripting
$ cd unigine-editor-python3scripting 
$ cp -rf * ../
```

### step 3: build python-3.10.1

Ubuntu/Debian:
```bash
$ cd my_project
$ cd UnigineEditorPlugin_Python3Scripting
$ ./build_python.sh
```

Windows (Visual Studio 2017):
```
> cd my_project
> cd UnigineEditorPlugin_Python3Scripting
> build_python.bat
```

### step 4: build plugin

Ubuntu/Debian:
```bash
$ cd my_project
$ cd UnigineEditorPlugin_Python3Scripting
$ python3 build_plugin.py
```

Windows:
```bash
$ cd my_project
$ cd UnigineEditorPlugin_Python3Scripting
$ python3 build_plugin.py
```

### step 5: run editor

After this call `./launch_editor.sh` or launch editor from `UNIGINE SDK Browser`

After this call `./launch_editor.bat`


## Helpful links

- https://www.codeproject.com/Articles/820116/Embedding-Python-program-in-a-C-Cplusplus-code
- https://docs.python.org/3.7/c-api/bytes.html
- https://habr.com/ru/post/469043/
- https://intermediate-and-advanced-software-carpentry.readthedocs.io/en/latest/c++-wrapping.html

Here can find wrappers:
- https://github.com/Berenco/texworks

New type (class)
- https://docs.python.org/3/c-api/typeobj.html
- https://docs.python.org/3/c-api/typeobj.html#typedef-examples
- https://docs.python.org/3.5/extending/newtypes.html


Mp4 to gif
- https://cloudconvert.com/mp4-to-gif


## Generate Python Wrappers Classes

```
$ python3 -m pip install CppHeaderParser
$ ./generate_pytypeobjects.sh
```
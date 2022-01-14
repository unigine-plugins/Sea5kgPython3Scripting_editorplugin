# Development


## Building plugin (step by step)

Install requirements

Ubuntu/Debian:
```bash
$ sudo apt install qt5-default cmake gcc git-core
```

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

### step 4: build plugin

Ubuntu/Debian:
```bash
$ cd my_project
$ cd UnigineEditorPlugin_Python3Scripting
$ ./build_plugin.sh
```

### step 5: run editor

After this call `./launch_editor.sh` or launch editor from `UNIGINE SDK Browser`

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
# unigine-editor-python3scripting

**IN-PROGRESS...**

[![Server API Coverage](https://img.shields.io/badge/Unigine-2.14.1-yellow.svg)](https://developer.unigine.com/en/docs/2.14.1/)

Pluging for scripting by python3 in Unigine Editor https://unigine.com/get-unigine/

* License of plugin: MIT
* For code editor used: https://github.com/Megaxela/QCodeEditor - under MIT license
* Unigine SDK 2.14.1 - tested on `Community Free`

![scoreboard](preview.gif)

## Build instruction

### Linux (Ubuntu)

```
$ sudo apt install qt5-default python3 python3-dev
```

*`unigine_project` folder - where you can see `data` and with `bin` and with `include` and launchers*

- Download this project via git or as zip
- Copy `UnigineEditorPlugin_Python3Scripting` to your `unigine_project` folder
- Copy `build_plugin.sh` to to your `unigine_project` folder
- Open terminal in your `unigine_project` folder
- chmod +x build_plugin.sh
- ./build_plugin.sh

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

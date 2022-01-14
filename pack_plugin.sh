#!/bin/bash

./build_plugin.sh

pkgname="linux_UnigineEditorPlugin_Python3Scripting_v2.14.1.1_v0.0.1"
if [ -d "$pkgname" ]; then
    rm -rf "$pkgname"
fi

mkdir -p $pkgname/bin/editor
mkdir -p $pkgname/bin/editor_debug

cp -rf bin/editor/libUnigineEditorPlugin_Python3Scripting_x64.so $pkgname/bin/editor
cp -rf bin/editor_debug/libUnigineEditorPlugin_Python3Scripting_x64d.so $pkgname/bin/editor_debug

zip -r "$pkgname.zip" $pkgname
rm -rf "$pkgname"
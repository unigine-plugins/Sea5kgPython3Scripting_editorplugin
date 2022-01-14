#!/bin/bash

check_ret() {
    if [ $1 -ne 0 ]; then
        echo ""
        echo "!!! FAIL: $2"
        echo "********************************************************************************"
        echo ""
        exit $1
    else
        echo ""
        echo "*** SUCCESS: $2"
        echo "********************************************************************************"
        echo ""
    fi
}

cd UnigineEditorPlugin_Python3Scripting

# rm -rf junk/debug

cmake -H. -Bjunk/release -DCMAKE_BUILD_TYPE=Release \
    -DCMAKE_POSITION_INDEPENDENT_CODE=ON \
    -DCMAKE_INSTALL_PREFIX=../bin
check_ret $? "cmake configure release"

cmake --build junk/release --parallel 8 --config Release
check_ret $? "cmake build release"

cmake -H. -Bjunk/debug -DCMAKE_BUILD_TYPE=Debug \
    -DCMAKE_POSITION_INDEPENDENT_CODE=ON \
    -DCMAKE_INSTALL_PREFIX=../bin
check_ret $? "cmake configure debug"

cmake --build junk/debug --parallel 8 --config Debug
check_ret $? "cmake build debug"

cd ../bin/editor/
export LD_LIBRARY_PATH=`pwd`/../../bin/:$LD_LIBRARY_PATH
echo $LD_LIBRARY_PATH
ldd -d libUnigineEditorPlugin_Python3Scripting_x64.so

cd ../../bin/editor_debug/
export LD_LIBRARY_PATH=`pwd`/../../bin/:$LD_LIBRARY_PATH
echo $LD_LIBRARY_PATH
ldd -d libUnigineEditorPlugin_Python3Scripting_x64d.so

cd ../../

pkgname="linux_UnigineEditorPlugin_Python3Scripting_v0.0.1"
if [ -d "$pkgname" ]; then
    rm -rf "$pkgname"
fi

mkdir -p $pkgname/bin/editor
mkdir -p $pkgname/bin/editor_debug

cp -rf bin/editor/libUnigineEditorPlugin_Python3Scripting_x64.so $pkgname/bin/editor
cp -rf bin/editor_debug/libUnigineEditorPlugin_Python3Scripting_x64d.so $pkgname/bin/editor_debug

zip -r "$pkgname.zip" $pkgname
rm -rf "$pkgname"
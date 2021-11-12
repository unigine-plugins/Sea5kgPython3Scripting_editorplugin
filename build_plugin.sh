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

cmake -H. -Bjunk/release -DCMAKE_BUILD_TYPE=Release \
    -DCMAKE_POSITION_INDEPENDENT_CODE=ON \
    -DCMAKE_INSTALL_PREFIX=../bin
check_ret $? "cmake configure release"

cmake --build junk/release --parallel 8 --config Release
check_ret $? "cmake build release"

# cmake -H. -Bjunk/debug -DCMAKE_BUILD_TYPE=Debug \
#     -DCMAKE_POSITION_INDEPENDENT_CODE=ON \
#     -DCMAKE_INSTALL_PREFIX=../bin
# check_ret $? "cmake configure debug"
# 
# cmake --build junk/debug --parallel 8 --config Release
# check_ret $? "cmake build debug"



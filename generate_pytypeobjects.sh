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

cd UnigineEditorPlugin_Python3Scripting/generate_pytypeobjects
python3 -u run.py
check_ret $? "python3 -u run.py"

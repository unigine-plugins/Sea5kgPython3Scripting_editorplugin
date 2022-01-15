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

cd Python-3.10.1

export CFLAGS="$CFLAGS -fPIC"
./configure \
   --enable-optimizations \
   --prefix=`pwd`/../python-bin-linux \
   --with-static-libpython
check_ret $? "Configure python"

make install
check_ret $? "Build python"

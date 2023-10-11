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

apt install libffi-dev

cd Python-3.10.1

echo "Configuring Python..."
# LDFLAGS="-static" --disable-shared \
export CFLAGS="$CFLAGS -fPIC"
export LDFLAGS="$CFLAGS -rdynamic"
./configure \
   --enable-optimizations \
   --prefix=`pwd`/../python-bin-linux \
   --libdir=`pwd`/../python-bin-linux/lib \
   --with-static-libpython > ../configure_python.log 2>&1
check_ret $? "Configured python"

# make -j8 LDFLAGS="-static" LINKFORSHARED=" " > ../build_python.log 2>&1
make -j8 LINKFORSHARED=" " > ../build_python.log 2>&1
check_ret $? "Build python"

make LINKFORSHARED=" " install > ../install_python.log 2>&1
check_ret $? "Install python"

if [ -d `pwd`/../../../../../bin/plugins/Sea5kg/Python3Scripting/Python3Home ]; then
    rm -rf `pwd`/../../../../../bin/plugins/Sea5kg/Python3Scripting/Python3Home
fi
mkdir -p `pwd`/../../../../../bin/plugins/Sea5kg/Python3Scripting/Python3Home/lib
cp -rf `pwd`/../python-bin-linux/lib/python3.10 `pwd`/../../../../../bin/plugins/Sea5kg/Python3Scripting/Python3Home/lib/python3.10

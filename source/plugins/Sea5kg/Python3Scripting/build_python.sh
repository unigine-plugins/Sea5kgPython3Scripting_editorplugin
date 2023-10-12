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

echo "Cleanuping..."
rm -r build
rm -r */*.o
rm -r */*.gcda
rm Makefile
rm Makefile.pre
rm profile-run-stamp

echo "Configuring Python..."
# LDFLAGS="-static" --disable-shared \

PYTHON_INSTALL_DIR=$(pwd)/../python-bin-linux/

rm -rf $PYTHON_INSTALL_DIR
# mkdir $PYTHON_INSTALL_DIR
# mkdir $PYTHON_INSTALL_DIR/lib

export CFLAGS="$CFLAGS -fPIC"
echo "CFLAGS = $CFLAGS"
export LDFLAGS="$LDFLAGS -rdynamic"
echo "LDFLAGS = $LDFLAGS"
./configure \
   --enable-optimizations \
   --prefix=$PYTHON_INSTALL_DIR \
   --libdir=$PYTHON_INSTALL_DIR/lib \
   --with-static-libpython > ../configure_python.log 2>&1
check_ret $? "Configured python"

# make -j8 LDFLAGS="-static" LINKFORSHARED=" " > ../build_python.log 2>&1
make -j8 LINKFORSHARED="-rdynamic" > ../build_python.log 2>&1
check_ret $? "Build python"

make LINKFORSHARED="-rdynamic" install > ../install_python.log 2>&1
check_ret $? "Install python"

PYTHON3HOMEDIR=$(pwd)/../../../../../bin/plugins/Sea5kg/Python3Scripting/Python3Home

if [ -d $PYTHON3HOMEDIR ]; then
    echo "Remove directory $PYTHON3HOMEDIR"
    rm -rf $PYTHON3HOMEDIR
fi
LIBDIR_DST=$PYTHON3HOMEDIR/lib
echo "Create directory $LIBDIR_DST"
mkdir -p $LIBDIR_DST

LIBDIR_SRC=$PYTHON_INSTALL_DIR/lib/python3.10
echo "Copy from $LIBDIR_SRC to $LIBDIR_DST"
cp -rf $LIBDIR_SRC $LIBDIR_DST/python3.10

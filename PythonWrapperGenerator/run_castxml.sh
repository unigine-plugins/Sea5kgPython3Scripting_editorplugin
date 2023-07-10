#!/bin/bash

castxml \
    --castxml-cc-gnu g++ -x c++ --castxml-gccxml \
    -DQT_CORE_LIB -DQT_GUI_LIB -DQT_NO_DEBUG -DQT_WIDGETS_LIB \
    -D _LINUX=1 \
    -Wno-gnu-anonymous-struct -Wno-extra-semi -Wno-nested-anon-types \
    -Wno-misleading-indentation -Wno-unused-parameter \
    -U__PIE__ \
    -O3 -DNDEBUG -fPIC -fvisibility=hidden -m64 -msse4.2 -ffast-math -fno-strict-aliasing -fPIC -MD \
    -I ../include -I ../include/editor \
    -isystem /usr/include/x86_64-linux-gnu/qt5 \
    -isystem /usr/include/x86_64-linux-gnu/qt5/QtCore \
    -isystem /usr/lib/x86_64-linux-gnu/qt5/mkspecs/linux-g++ \
    -isystem /usr/include/x86_64-linux-gnu/qt5/QtWidgets \
    -isystem /usr/include/x86_64-linux-gnu/qt5/QtGui \
    ./include_all.h \
    -v \
    -o unigine-castxml-api.xml

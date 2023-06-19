#!/bin/bash

castxml \
    --castxml-cc-gnu gcc \
    -x c++ \
    -o test.xml \
    -stdlib=libc++ \
    --castxml-gccxml \
    -I ../include \
    -D _LINUX=1 \
    ../include/Unigine.h \
    -o unigine-castxml-api.xml
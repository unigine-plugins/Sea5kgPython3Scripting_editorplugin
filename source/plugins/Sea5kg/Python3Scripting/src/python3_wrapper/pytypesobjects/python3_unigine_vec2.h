// this file automaticly generated from Uniginevec2.h
#pragma once

#include "python3_pytypeobjects.h"
#include <UnigineMathLibVec2.h>

namespace PyUnigine {

class Python3Uniginevec2 : public Python3PyTypeObjectBase {
    public:
        virtual bool isReady() override;
        virtual bool addClassDefinitionToModule(PyObject* pModule) override;
};

class vec2 {
    public:
        static PyObject * NewObject(Unigine::Math::vec2 * unigine_object_ptr);
        static Unigine::Math::vec2 * Convert(PyObject *pObject);
};

}; // namespace PyUnigine

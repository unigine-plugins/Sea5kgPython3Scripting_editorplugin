// this file automaticly generated from Uniginevec3.h
#pragma once

#include "python3_pytypeobjects.h"
#include <UnigineMathLibVec3.h>

namespace PyUnigine {

class Python3Uniginevec3 : public Python3PyTypeObjectBase {
    public:
        virtual bool isReady() override;
        virtual bool addClassDefinitionToModule(PyObject* pModule) override;
};

class vec3 {
    public:
        static PyObject * NewObject(Unigine::Math::vec3 * unigine_object_ptr);
        static Unigine::Math::vec3 * Convert(PyObject *pObject);
};

}; // namespace PyUnigine

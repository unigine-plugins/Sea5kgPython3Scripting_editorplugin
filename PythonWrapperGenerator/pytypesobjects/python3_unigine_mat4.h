// this file automaticly generated from Uniginemat4.h
#pragma once

#include "python3_pytypeobjects.h"
#include <UnigineMathLibMat4.h>

namespace PyUnigine {

class Python3Uniginemat4 : public Python3PyTypeObjectBase {
    public:
        virtual bool isReady() override;
        virtual bool addClassDefinitionToModule(PyObject* pModule) override;
};

class mat4 {
    public:
        static PyObject * NewObject(Unigine::Math::mat4 * unigine_object_ptr);
        static Unigine::Math::mat4 * Convert(PyObject *pObject);
};

}; // namespace PyUnigine

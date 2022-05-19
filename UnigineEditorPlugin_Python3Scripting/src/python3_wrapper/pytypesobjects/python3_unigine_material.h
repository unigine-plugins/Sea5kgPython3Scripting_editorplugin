// this file automaticly generated from UnigineMaterial.h 1 
#pragma once

#include "python3_pytypeobjects.h"
#include <UnigineMaterial.h>

class Python3UnigineMaterial : public Python3PyTypeObjectBase {
    public:
        virtual bool isReady() override;
        virtual bool addClassDefinitionToModule(PyObject* pModule) override;
};

class PyUnigineMaterial {
    public:
        static PyObject * NewObject(Unigine::Ptr<Unigine::Material> unigine_object_ptr);
};

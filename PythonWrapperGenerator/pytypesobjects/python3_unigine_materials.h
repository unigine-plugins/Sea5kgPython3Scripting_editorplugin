// this file automaticly generated from UnigineMaterials.h
#pragma once

#include "python3_pytypeobjects.h"
#include <UnigineMaterials.h>

class Python3UnigineMaterials : public Python3PyTypeObjectBase {
    public:
        virtual bool isReady() override;
        virtual bool addClassDefinitionToModule(PyObject* pModule) override;
};

class PyUnigineMaterials {
    public:
        static PyObject * NewObject(Unigine::Ptr<Unigine::Materials> unigine_object_ptr);
};

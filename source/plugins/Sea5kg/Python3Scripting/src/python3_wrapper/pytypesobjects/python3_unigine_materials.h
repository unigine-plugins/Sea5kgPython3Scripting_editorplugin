// this file automaticly generated from UnigineMaterials.h
#pragma once

#include "python3_pytypeobjects.h"
#include <UnigineMaterials.h>

namespace PyUnigine {

class Python3UnigineMaterials : public Python3PyTypeObjectBase {
    public:
        virtual bool isReady() override;
        virtual bool addClassDefinitionToModule(PyObject* pModule) override;
};

class Materials {
    public:
        static PyObject * NewObject();
};

}; // namespace PyUnigine

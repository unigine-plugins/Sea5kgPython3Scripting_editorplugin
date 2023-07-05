// this file automaticly generated from UnigineSelectorNodes.h
#pragma once

#include "python3_pytypeobjects.h"
#include <editor/UnigineSelector.h>

namespace PyUnigine {

class Python3UnigineSelectorNodes : public Python3PyTypeObjectBase {
    public:
        virtual bool isReady() override;
        virtual bool addClassDefinitionToModule(PyObject* pModule) override;
};

class SelectorNodes {
    public:
        static PyObject * NewObject(Unigine::SelectorNodes * unigine_object_ptr);
        static Unigine::SelectorNodes * Convert(PyObject *pObject);
};

}; // namespace PyUnigine

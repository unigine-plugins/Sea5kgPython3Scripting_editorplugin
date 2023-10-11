// this file automaticly generated from UnigineSelection.h
#pragma once

#include "python3_pytypeobjects.h"
#include <editor/UnigineSelection.h>

namespace PyUnigine {

class Python3UnigineSelection : public Python3PyTypeObjectBase {
    public:
        virtual bool isReady() override;
        virtual bool addClassDefinitionToModule(PyObject* pModule) override;
};

class Selection {
    public:
        static PyObject * NewObject(UnigineEditor::Selection * unigine_object_ptr);
        static UnigineEditor::Selection * Convert(PyObject *pObject);
};

}; // namespace PyUnigine

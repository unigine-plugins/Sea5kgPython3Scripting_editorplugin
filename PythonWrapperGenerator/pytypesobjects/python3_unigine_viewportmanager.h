// this file automaticly generated from UnigineViewportManager.h
#pragma once

#include "python3_pytypeobjects.h"
#include <editor/UnigineViewportManager.h>

namespace PyUnigine {

class Python3UnigineViewportManager : public Python3PyTypeObjectBase {
    public:
        virtual bool isReady() override;
        virtual bool addClassDefinitionToModule(PyObject* pModule) override;
};

class ViewportManager {
    public:
        static PyObject * NewObject();
};

}; // namespace PyUnigine

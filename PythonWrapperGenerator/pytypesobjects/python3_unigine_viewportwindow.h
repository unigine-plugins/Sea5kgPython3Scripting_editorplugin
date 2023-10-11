// this file automaticly generated from UnigineViewportWindow.h
#pragma once

#include "python3_pytypeobjects.h"
#include <editor/UnigineViewportManager.h>

namespace PyUnigine {

class Python3UnigineViewportWindow : public Python3PyTypeObjectBase {
    public:
        virtual bool isReady() override;
        virtual bool addClassDefinitionToModule(PyObject* pModule) override;
};

class ViewportWindow {
    public:
        static PyObject * NewObject();
};

}; // namespace PyUnigine

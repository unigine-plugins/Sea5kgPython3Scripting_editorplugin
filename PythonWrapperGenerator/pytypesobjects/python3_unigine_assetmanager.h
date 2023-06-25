// this file automaticly generated from UnigineAssetManager.h
#pragma once

#include "python3_pytypeobjects.h"
#include <editor/UnigineAssetManager.h>

namespace PyUnigine {

class Python3UnigineAssetManager : public Python3PyTypeObjectBase {
    public:
        virtual bool isReady() override;
        virtual bool addClassDefinitionToModule(PyObject* pModule) override;
};

class AssetManager {
    public:
        static PyObject * NewObject();
};

}; // namespace PyUnigine

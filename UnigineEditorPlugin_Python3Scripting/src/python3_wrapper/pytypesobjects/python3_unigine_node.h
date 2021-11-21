#pragma once

#include "python3_pytypeobjects.h"
#include <UnigineNodes.h>

class Python3UnigineNode : public Python3PyTypeObjectBase {
    public:
        virtual bool isReady() override;
        virtual bool addClassDefinitionToModule(PyObject* pModule) override;
};

class PyUnigineNode {
    public:
        static PyObject * NewObject(Unigine::Ptr<Unigine::Node> material);
        // Unigine::Ptr<Unigine::Material> material
};

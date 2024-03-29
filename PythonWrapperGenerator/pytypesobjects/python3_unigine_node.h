// this file automaticly generated from UnigineNode.h
#pragma once

#include "python3_pytypeobjects.h"
#include <UnigineNode.h>

namespace PyUnigine {

class Python3UnigineNode : public Python3PyTypeObjectBase {
    public:
        virtual bool isReady() override;
        virtual bool addClassDefinitionToModule(PyObject* pModule) override;
};

class Node {
    public:
        static PyObject * NewObject(Unigine::Ptr<Unigine::Node> unigine_object_ptr);
        static Unigine::Ptr<Unigine::Node> Convert(PyObject *pObject);
};

}; // namespace PyUnigine

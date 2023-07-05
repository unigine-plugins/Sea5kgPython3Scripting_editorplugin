// this file automaticly generated from UnigineMesh.h
#pragma once

#include "python3_pytypeobjects.h"
#include <UnigineMesh.h>

namespace PyUnigine {

class Python3UnigineMesh : public Python3PyTypeObjectBase {
    public:
        virtual bool isReady() override;
        virtual bool addClassDefinitionToModule(PyObject* pModule) override;
};

class Mesh {
    public:
        static PyObject * NewObject(Unigine::Ptr<Unigine::Mesh> unigine_object_ptr);
        static Unigine::Ptr<Unigine::Mesh> Convert(PyObject *pObject);
};

}; // namespace PyUnigine

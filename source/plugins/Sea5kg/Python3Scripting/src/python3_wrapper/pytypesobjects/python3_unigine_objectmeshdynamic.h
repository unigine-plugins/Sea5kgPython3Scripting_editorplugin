// this file automaticly generated from UnigineObjectMeshDynamic.h
#pragma once

#include "python3_pytypeobjects.h"
#include <UnigineObjects.h>

namespace PyUnigine {

class Python3UnigineObjectMeshDynamic : public Python3PyTypeObjectBase {
    public:
        virtual bool isReady() override;
        virtual bool addClassDefinitionToModule(PyObject* pModule) override;
};

class ObjectMeshDynamic {
    public:
        static PyObject * NewObject(Unigine::Ptr<Unigine::ObjectMeshDynamic> unigine_object_ptr);
        static Unigine::Ptr<Unigine::ObjectMeshDynamic> Convert(PyObject *pObject);
};

}; // namespace PyUnigine

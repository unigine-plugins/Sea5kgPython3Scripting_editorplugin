// this file automaticly generated from UnigineUGUID.h
#pragma once

#include "python3_pytypeobjects.h"
#include <UnigineGUID.h>

namespace PyUnigine {

class Python3UnigineUGUID : public Python3PyTypeObjectBase {
    public:
        virtual bool isReady() override;
        virtual bool addClassDefinitionToModule(PyObject* pModule) override;
};

class UGUID {
    public:
        static PyObject * NewObject(Unigine::Ptr<Unigine::UGUID> unigine_object_ptr);
        static Unigine::Ptr<Unigine::UGUID> Convert(PyObject *pObject);
};

}; // namespace PyUnigine

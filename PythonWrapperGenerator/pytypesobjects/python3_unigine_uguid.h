// this file automaticly generated from UnigineUGUID.h
#pragma once

#include "python3_pytypeobjects.h"
#include <UnigineUGUID.h>

namespace PyUnigine {

class Python3UnigineUGUID : public Python3PyTypeObjectBase {
    public:
        virtual bool isReady() override;
        virtual bool addClassDefinitionToModule(PyObject* pModule) override;
};

class UGUID {
    public:
        static PyObject * NewObject(Unigine::Ptr<Unigine::UGUID> unigine_object_ptr);
};

}; // namespace PyUnigine

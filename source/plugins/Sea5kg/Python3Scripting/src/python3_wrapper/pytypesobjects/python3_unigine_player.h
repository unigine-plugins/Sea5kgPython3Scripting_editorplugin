// this file automaticly generated from UniginePlayer.h
#pragma once

#include "python3_pytypeobjects.h"
#include <UniginePlayers.h>

namespace PyUnigine {

class Python3UniginePlayer : public Python3PyTypeObjectBase {
    public:
        virtual bool isReady() override;
        virtual bool addClassDefinitionToModule(PyObject* pModule) override;
};

class Player {
    public:
        static PyObject * NewObject(Unigine::Ptr<Unigine::Player> unigine_object_ptr);
        static Unigine::Ptr<Unigine::Player> Convert(PyObject *pObject);
};

}; // namespace PyUnigine

#pragma once

#include <vector>
#include <Python.h>
#include "RunPythonInThread.h"

class Python3PyTypeObjectBase {
    public:
        virtual bool isReady() = 0;
        virtual bool addClassDefinitionToModule(PyObject* pModule) = 0;
};

class Python3PyTypeObjectAll : public Python3PyTypeObjectBase {
    public:
        Python3PyTypeObjectAll();
        virtual bool isReady() override;
        virtual bool addClassDefinitionToModule(PyObject* pModule) override;

    private:
        std::vector<Python3PyTypeObjectBase *> m_vPyTypesObjects;
};

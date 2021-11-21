#pragma once

#include "unigine_python_wrapper_base.h"
#include <Python.h>
#include <UnigineMaterials.h>

class UniginePythonUnigineLib : public UniginePythonWrapperBase {
    public:
        UniginePythonUnigineLib(const std::string &sExtensionId);
        virtual void Call_PyImport_AppendInittab() override;
        virtual void Call_PyImport_ImportModule() override;
        virtual void Call_Before_Py_Finalize() override;
        virtual void Call_After_Py_Finalize() override;

    private:
        std::string m_sExtensionId;
};





#pragma once

#include "python3_wrapper.h"
#include <Python.h>

class Python3UnigineLib : public Python3ModuleRegister {
    public:
        Python3UnigineLib(const std::string &sExtensionId);
        virtual void Call_PyImport_AppendInittab() override;
        virtual void Call_PyImport_ImportModule() override;
        virtual void Call_Before_Py_Finalize() override;
        virtual void Call_After_Py_Finalize() override;

    private:
        std::string m_sExtensionId;
};





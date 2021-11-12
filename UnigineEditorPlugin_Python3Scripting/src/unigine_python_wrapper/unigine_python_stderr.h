#pragma once

#include "unigine_python_wrapper_base.h"


class UniginePythonStderr : public UniginePythonWrapperBase {
    public:
        UniginePythonStderr(const std::string &sExtensionId);
        virtual void Call_PyImport_AppendInittab() override;
        virtual void Call_PyImport_ImportModule() override;
        virtual void Call_Before_Py_Finalize() override;
        virtual void Call_After_Py_Finalize() override;

    private:
        std::string m_sExtensionId;
};

#pragma once

#include <string>
#include <vector>

class UniginePythonWrapperBase {
    public:
        virtual void Call_PyImport_AppendInittab() = 0;
        virtual void Call_PyImport_ImportModule() = 0;
        virtual void Call_Before_Py_Finalize() = 0;
        virtual void Call_After_Py_Finalize() = 0;
};
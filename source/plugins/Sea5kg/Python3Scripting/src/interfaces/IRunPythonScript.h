#pragma once

#include "Python3ScriptInfo.h"

class IRunPythonScript {
    public:
        virtual void runPythonScript(Python3ScriptInfo *pModel, QString sAlternativeCode = "") = 0;
};
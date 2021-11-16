#pragma once

#include "ModelExtension.h"

class IRunPythonScript {
    public:
        virtual void runPythonScript(ModelExtension *pModel, QString sAlternativeCode = "") = 0;
};
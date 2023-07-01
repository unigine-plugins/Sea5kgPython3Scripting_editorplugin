#pragma once

#include "ModelExtension.h"

class IManageScripts {
    public:
        virtual void addModelExtension(ModelExtension *pModel) = 0;
        virtual QString getPython3ScriptingDirPath() = 0;
};
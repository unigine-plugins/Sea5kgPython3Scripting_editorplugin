#pragma once

#include "Python3ScriptInfo.h"

class IManagePythonScripts {
    public:
        virtual void addModelExtension(Python3ScriptInfo *pModel) = 0;
        virtual void removeModelScriptById(QString sScriptId) = 0;
        virtual void enableModelScriptById(QString sScriptId) = 0;
        virtual void disableModelScriptById(QString sScriptId) = 0;
        virtual void openWindowEditPythonScriptById(QString sScriptId) = 0;
        virtual void showWindowManagePythonScripts(QString sScriptId) = 0;
        virtual QString getPython3ScriptingDirPath() = 0;
};
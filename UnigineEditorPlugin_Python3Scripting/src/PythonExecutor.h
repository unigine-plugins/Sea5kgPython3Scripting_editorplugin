#pragma once

#include <vector>
#include <QVector>
#include <UnigineMaterials.h>
#include "unigine_python_wrapper_base.h"

class PythonExecutor {
    public:
        PythonExecutor(const std::string &sExtensionId);
        ~PythonExecutor();
        void addMaterials(QVector<Unigine::Ptr<Unigine::Material>> &vMaterials);

        int exec(const std::string &sDirPathWithModules, const std::string &sScriptPath);
    private:
        std::vector<UniginePythonWrapperBase *> m_vWrappers;
        std::string m_sExtensionId;
        void* m_pGlobalDict;
};
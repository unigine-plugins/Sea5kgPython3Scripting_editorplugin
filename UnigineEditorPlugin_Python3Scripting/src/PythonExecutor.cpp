#include "PythonExecutor.h"

// python headers
#include <Python.h>

// local
#include "unigine_python_stdout.h"
#include "unigine_python_stderr.h"
#include "unigine_python_unigine_lib.h"
#include "unigine_python_material.h"

// std
#include <codecvt>
#include <sstream>
#include <locale>

PythonExecutor::PythonExecutor(const std::string &sExtensionId) {
    m_sExtensionId = sExtensionId;
    m_vWrappers.push_back(new UniginePythonStdout(sExtensionId));
    m_vWrappers.push_back(new UniginePythonStderr(sExtensionId));
    m_vWrappers.push_back(new UniginePythonUnigineLib(sExtensionId));

    for (int i = 0; i < m_vWrappers.size(); i++) {
        m_vWrappers[i]->Call_PyImport_AppendInittab();
    }
    Py_Initialize();

    {
        PyObject* pGlobalDict = PyDict_New();
        PyObject *pString = Py_BuildValue("s", m_sExtensionId.c_str());
        PyDict_SetItemString(pGlobalDict, "EXTENSION_ID", pString);
        m_pGlobalDict = pGlobalDict;
    }    

    for (int i = 0; i < m_vWrappers.size(); i++) {
        m_vWrappers[i]->Call_PyImport_ImportModule();
    }
}

std::wstring str2wstr(const std::string& str) {
    using convert_typeX = std::codecvt_utf8<wchar_t>;
    std::wstring_convert<convert_typeX, wchar_t> converterX;
    return converterX.from_bytes(str);
}

void PythonExecutor::addMaterials(QVector<Unigine::Ptr<Unigine::Material>> &vMaterials) {
    Unigine::Log::message("Python3Scripting: add list of materials\n");
    PyObject* pGlobalDict = (PyObject*)m_pGlobalDict;

    PyObject *pList = PyList_New(vMaterials.size());
    for (int i = 0; i < vMaterials.size(); i++) {
        PyObject *pMaterial = PyUnigine::Material_New(vMaterials[i]);
        PyList_SetItem(pList, i, pMaterial);
        // Py_DECREF(pMaterial);
    }
    PyDict_SetItemString(pGlobalDict, "LIST_MATERIALS", pList);
    Py_DECREF(pList);
}

int PythonExecutor::exec(const std::string &sDirPathWithModules, const std::string &sScriptPath) {
    Unigine::Log::message("Python3Scripting: start executing script\n");
    PyErr_Clear();
    
    // rewrite system path for search modules
    std::wstring sDir = str2wstr(sDirPathWithModules);
    PySys_SetPath(sDir.c_str());
    
	FILE* fp = _Py_fopen(sScriptPath.c_str(), "r");
    PyObject* pGlobalDict = (PyObject*)m_pGlobalDict;

    PyObject *pResult = PyRun_File(fp, sScriptPath.c_str(), Py_file_input, pGlobalDict, NULL);
    // pResult return result from script - ignore
    Py_XDECREF(pResult);

    if (PyErr_Occurred()) {
        // std::string result;
        // PyObject* ptype;
        // PyObject* pvalue;
        // PyObject* ptraceback;
        // PyErr_Fetch(&ptype, &pvalue, &ptraceback);
        // PyErr_NormalizeException(&ptype, &pvalue, &ptraceback); // in order to convert pvalue from tuples to real objects

        //                                                         //Attach exception name first
        // PyObject* objectStr = PyObject_GetAttrString(ptype, "__name__");
        // result = PyString_As_String(objectStr);
        // result = "Exception: " + result;;
        // Py_XDECREF(objectStr);
        // objectStr = PyObject_Str(pvalue);
        // if (objectStr != NULL) {
        //     result = result + " was raised with error message : " + PyString_AS_STRING(objectStr);
        //     Py_XDECREF(objectStr);
        // }
        Unigine::Log::message("Python3Scripting: FAILED\n");
        return -1;
    }
    Unigine::Log::message("Python3Scripting: end executing script\n");
    
    return 0;
}

PythonExecutor::~PythonExecutor() {
    for (int i = 0; i < m_vWrappers.size(); i++) {
        m_vWrappers[i]->Call_After_Py_Finalize();
    }
    PyObject* pGlobalDict = (PyObject*)m_pGlobalDict;
    Py_XDECREF(pGlobalDict);
    Py_Finalize();

    for (int i = 0; i < m_vWrappers.size(); i++) {
        delete m_vWrappers[i];
    }
    m_vWrappers.clear();
}

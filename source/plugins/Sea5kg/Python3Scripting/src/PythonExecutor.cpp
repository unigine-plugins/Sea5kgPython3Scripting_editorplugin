#include "PythonExecutor.h"

// python headers
#include <Python.h>
#include <iostream>
// local
#include "python3_unigine_stdout.h"
#include "python3_unigine_stderr.h"
#include "python3_unigine_lib.h"
#include "python3_unigine_material.h"
#include "python3_unigine_node.h"

// std
#include <codecvt>
#include <sstream>
#include <locale>

std::wstring str2wstr(const std::string& str) {
    using convert_typeX = std::codecvt_utf8<wchar_t>;
    std::wstring_convert<convert_typeX, wchar_t> converterX;
    return converterX.from_bytes(str);
}

PythonExecutor::PythonExecutor(
    const std::string &sExtensionId,
    const std::string &sDirPathWithModules
) {
    m_sExtensionId = sExtensionId;
    m_sDirPathWithModules = sDirPathWithModules;
    m_vWrappers.push_back(new Python3UnigineStdout(sExtensionId));
    m_vWrappers.push_back(new Python3UnigineStderr(sExtensionId));
    m_vWrappers.push_back(new Python3UnigineLib(sExtensionId));
    std::cout << "4" << std::endl;
    for (int i = 0; i < m_vWrappers.size(); i++) {
        m_vWrappers[i]->Call_PyImport_AppendInittab();
    }
    Py_Initialize();

    // m_sDirPathWithModules = "P:\\UnigineEditorPlugin_Python3Scripting\\Python-3.10.1\\";
    // std::wstring sDir = str2wstr(m_sDirPathWithModules);
    // PySys_SetPath(sDir.c_str());

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

void PythonExecutor::addMaterials(const QVector<Unigine::UGUID> &vGuids) {
    Unigine::Log::message("Python3Scripting: add list of materials\n");
    PyObject* pGlobalDict = (PyObject*)m_pGlobalDict;

    PyObject *pList = PyList_New(vGuids.size());
    for (int i = 0; i < vGuids.size(); i++) {
        Unigine::Ptr<Unigine::Material> pMaterial = Unigine::Materials::findMaterialByGUID(vGuids[i]);
        PyObject *pMaterialObject = PyUnigine::Material::NewObject(pMaterial);
        PyList_SetItem(pList, i, pMaterialObject);
        // Py_DECREF(pMaterial);
    }
    PyDict_SetItemString(pGlobalDict, "LIST_MATERIALS", pList);
    Py_DECREF(pList);
}

void PythonExecutor::addProperties(const QVector<Unigine::UGUID> &vGuids) {
    Unigine::Log::message("Python3Scripting: add list of properties (TODO)\n");
    PyObject* pGlobalDict = (PyObject*)m_pGlobalDict;

    PyObject *pList = PyList_New(vGuids.size());
    for (int i = 0; i < vGuids.size(); i++) {
        // TODO
        // Unigine::Ptr<Unigine::Material> pMaterial = Unigine::Materials::findMaterialByGUID(vGuids[i]);
        // PyObject *pMaterialObject = PyUnigine::Material_New(pMaterial);
        // PyList_SetItem(pList, i, pMaterialObject);
        // Py_DECREF(pMaterial);
    }
    PyDict_SetItemString(pGlobalDict, "LIST_PROPERTIES", pList);
    Py_DECREF(pList);
}

void PythonExecutor::addRuntimes(const QVector<Unigine::UGUID> &vGuids) {
    Unigine::Log::message("Python3Scripting: add list of runtimes (TODO)\n");
    PyObject* pGlobalDict = (PyObject*)m_pGlobalDict;

    PyObject *pList = PyList_New(vGuids.size());
    for (int i = 0; i < vGuids.size(); i++) {
        // TODO
        // Unigine::Ptr<Unigine::Material> pMaterial = Unigine::Materials::findMaterialByGUID(vGuids[i]);
        // PyObject *pMaterialObject = PyUnigine::Material_New(pMaterial);
        // PyList_SetItem(pList, i, pMaterialObject);
        // Py_DECREF(pMaterial);
    }
    PyDict_SetItemString(pGlobalDict, "LIST_RUNTIMES", pList);
    Py_DECREF(pList);
}

void PythonExecutor::addNodes(const QVector<Unigine::NodePtr> &vNodes) {
    Unigine::Log::message("Python3Scripting: add list of nodes (TODO)\n");
    PyObject* pGlobalDict = (PyObject*)m_pGlobalDict;

    PyObject *pList = PyList_New(vNodes.size());
    for (int i = 0; i < vNodes.size(); i++) {
        // TODO
        // Unigine::Ptr<Unigine::Node> pMaterial = Unigine::Materials::findMaterialByGUID(vGuids[i]);
        PyObject *pNode = PyUnigine::Node::NewObject(vNodes[i]);
        PyList_SetItem(pList, i, pNode);
        // Py_DECREF(pMaterial);
    }
    PyDict_SetItemString(pGlobalDict, "LIST_NODES", pList);
    Py_DECREF(pList);
}

int PythonExecutor::execCode(const std::string &sScriptContent) {
    Unigine::Log::message("Python3Scripting: start executing script\n");
    PyErr_Clear();

    // m_sDirPathWithModules = "P:\\UnigineEditorPlugin_Python3Scripting\\Python-3.10.1\\Modules";
    // std::wstring sDir = str2wstr(m_sDirPathWithModules);
    // PySys_SetPath(sDir.c_str());

    PyObject* pGlobalDict = (PyObject*)m_pGlobalDict;

    PyObject *pResult = PyRun_String(sScriptContent.c_str(), Py_file_input, pGlobalDict, NULL);
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

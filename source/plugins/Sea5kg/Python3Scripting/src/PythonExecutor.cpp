#include "PythonExecutor.h"

// python headers
#include <Python.h>
#include <frameobject.h>
#include <iostream>
#include <fstream>

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
    for (int i = 0; i < m_vWrappers.size(); i++) {
        m_vWrappers[i]->Call_PyImport_AppendInittab();
    }

    Py_Initialize();
    // Py_SetPythonHome
    // mainstate = PyThreadState_Swap(NULL);
    Py_SetProgramName(L"main.py");

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


PythonExecutor::~PythonExecutor() {
    // Unigine::Log::message("Python3Scripting: ~PythonExecutor()\n");
    for (int i = 0; i < m_vWrappers.size(); i++) {
        m_vWrappers[i]->Call_After_Py_Finalize();
    }
    PyObject* pGlobalDict = (PyObject*)m_pGlobalDict;
    Py_XDECREF(pGlobalDict);
    // Unigine::Log::message("finalize point 3\n");

    Py_FinalizeEx();

    // Unigine::Log::message("finalize point 4\n");

    for (int i = 0; i < m_vWrappers.size(); i++) {
        delete m_vWrappers[i];
    }
    m_vWrappers.clear();
    Unigine::Log::message("Finalized\n");
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
    // Unigine::Log::message(">>> startPython3Scripting: start executing script\n");
    PyErr_Clear();

    PyObject* pGlobalDict = (PyObject*)m_pGlobalDict;

    PyObject *pResult = PyRun_String(sScriptContent.c_str(), Py_file_input, pGlobalDict, NULL);
    // pResult return result from script - ignore
    Py_XDECREF(pResult);

    if (PyErr_Occurred()) {
        // PyErr_Print();
        Unigine::Log::error("Python Error in Script: \n>>>>>>>>>>>>\n%s\n<<<<<<<<<<<<\n\n", sScriptContent.c_str());

        PyObject *ptype, *pvalue, *pPyErrorTraceback;
        PyErr_Fetch(&ptype, &pvalue, &pPyErrorTraceback);
        if (ptype == nullptr) {
            Unigine::Log::error("Unknown type error\n");
        } else {
            Unigine::Log::error("Python Error:");
            PyErr_NormalizeException(&ptype, &pvalue, &pPyErrorTraceback);
            if (pPyErrorTraceback != nullptr) {
                PyException_SetTraceback(pvalue, pPyErrorTraceback);
            }

            PyObject* str_exc_type = PyObject_Repr(ptype);
            PyObject* pyStr = PyUnicode_AsEncodedString(str_exc_type, "utf-8", "Error ~");
            const char *strExcType =  PyBytes_AS_STRING(pyStr);
            Unigine::Log::error("Python Error Type: \n    %s\n", strExcType);
            Py_XDECREF(str_exc_type);
            Py_XDECREF(pyStr);

            PyObject* objectStr = PyObject_Str(pvalue);
            const char *pStrErrorMessage = PyUnicode_AsUTF8(objectStr);
            Unigine::Log::error("Error Message: \n    %s\n", pStrErrorMessage);
            Py_XDECREF(objectStr);

            Unigine::Log::error("Traceback:\n");
            PyTracebackObject* traceback = (PyTracebackObject*)pPyErrorTraceback; // get_the_traceback();
            while (traceback != NULL) {
                int lineNr = PyFrame_GetLineNumber(traceback->tb_frame);
                const char* filename = PyUnicode_AsUTF8(traceback->tb_frame->f_code->co_filename);
                std::string sSourceCodeLine = readLineCode(filename, lineNr, sScriptContent);
                std::cout << sSourceCodeLine << std::endl;

                PyObject *pSourceCodeLine = Py_BuildValue("s", sSourceCodeLine.c_str());
                PyObject *pFilename = Py_BuildValue("s", filename);
                PyObject *pStr = PyUnicode_FromFormat(
                    "    <frame at %p>, in line %R:%d\n        code: '%S'\n",
                    traceback->tb_frame,
                    pFilename, // traceback->tb_frame->f_code->co_filename,
                    lineNr,
                    pSourceCodeLine
                );
                const char *str = PyUnicode_AsUTF8(pStr);
                Unigine::Log::error("%s", str);
                traceback = traceback->tb_next;
                Py_XDECREF(pSourceCodeLine);
                Py_XDECREF(pFilename);
                Py_XDECREF(pStr);
            }
        }
        Py_XDECREF(ptype);
        Py_XDECREF(pvalue);
        Py_XDECREF(pPyErrorTraceback);
        PyErr_Clear();
        Unigine::Log::error("\nPython3Scripting: FAILED\n");
        return -1;
    }
    // Unigine::Log::message("Python3Scripting: end executing script\n");
    return 0;
}


std::string PythonExecutor::readLineCode(const char *filename, int lineNr, const std::string &sScriptContent) {
    std::string sLine = "... Not found";
    int nLineCounter = 0;
    std::string sFilepath(filename);
    std::ifstream infile(filename);
    if (infile.is_open()) {
        while (std::getline(infile, sLine)) {
            nLineCounter++;
            if (nLineCounter == lineNr) {
                break;
            }
        }
        infile.close();
    } else if (sFilepath == "<string>") {
        std::stringstream ss(sScriptContent);
        while (std::getline(ss, sLine, '\n')) {
            nLineCounter++;
            if (nLineCounter == lineNr) {
                break;
            }
        }
    }
    return sLine;
}
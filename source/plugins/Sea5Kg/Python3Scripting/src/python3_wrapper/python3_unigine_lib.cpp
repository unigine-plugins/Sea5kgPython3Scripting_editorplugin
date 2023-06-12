
#include "python3_unigine_lib.h"

// std
#include <string>

// python headers
#include <Python.h>
#include <structmember.h>

// unigine headers
#include <UnigineLog.h>
#include "python3_unigine_material.h"

static PyObject* unigine_log_info(PyObject* self, PyObject* args) {
    const char *message;
    int sts;

    if (!PyArg_ParseTuple(args, "s", &message)) {
        Unigine::Log::message("\n");
        return Py_None;
    }
    std::string sLogMessage(message);
    sLogMessage = "FromPython " + sLogMessage + "\n";
    Unigine::Log::message(sLogMessage.c_str());
    return Py_None;
}

static PyObject* unigine_log_error(PyObject* self, PyObject* args) {
	const char *message;
    int sts;

    if (!PyArg_ParseTuple(args, "s", &message)) {
        Unigine::Log::message("\n");
        return Py_None;
    }
    std::string sLogMessage(message);
    sLogMessage = "FromPython " + sLogMessage + "\n";
    Unigine::Log::error(sLogMessage.c_str());
    return Py_None;
}

static struct PyMethodDef methods[] = {
	{ "log_info", unigine_log_info, METH_VARARGS, "print to log info"},
	{ "log_error", unigine_log_error, METH_VARARGS, "print to log error" },
	{ NULL, NULL, 0, NULL }
};

static struct PyModuleDef modDefUnigine = {
	PyModuleDef_HEAD_INIT, "unigine", NULL, -1, methods, 
	NULL, NULL, NULL, NULL
};

// _PyInit_unigine_lib

PyObject* _PyInit_unigine_lib(void) {

    PyObject* pModule;

    auto *pPyTypes = new Python3PyTypeObjectAll();

    // unigine_MaterialType.tp_new = PyType_GenericNew;
    // if (PyType_Ready(&unigine_MaterialType) < 0)
    //     return NULL;
    if (!pPyTypes->isReady()) {
        delete pPyTypes;
        return NULL;
    }

    pModule = PyModule_Create(&modDefUnigine);
    if (pModule == NULL) {
        delete pPyTypes;
        return NULL;
    }
        

    if (!pPyTypes->addClassDefinitionToModule(pModule)) {
        Py_DECREF(pModule);
        delete pPyTypes;
        return NULL;
    }
    delete pPyTypes;
    return pModule;
}

// ------------------------------------------------------------------------------------------
// Python3UnigineLib

Python3UnigineLib::Python3UnigineLib(const std::string &sExtensionId) {
    m_sExtensionId = sExtensionId;
}

void Python3UnigineLib::Call_PyImport_AppendInittab() {
    PyImport_AppendInittab("unigine", &_PyInit_unigine_lib);
}

void Python3UnigineLib::Call_PyImport_ImportModule() {
    // must be imported by user
}

void Python3UnigineLib::Call_Before_Py_Finalize() {
    // nothing
}

void Python3UnigineLib::Call_After_Py_Finalize() {
    // nothing
}


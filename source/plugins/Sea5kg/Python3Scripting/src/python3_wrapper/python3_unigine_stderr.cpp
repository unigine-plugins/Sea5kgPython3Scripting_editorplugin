#include <functional>
#include <iostream>
#include <string>
#include <Python.h>
#include <UnigineLog.h>
#include "python3_unigine_stderr.h"

// code copied from here and modified
// https://stackoverflow.com/questions/4307187/how-to-catch-python-stdout-in-c-code
typedef std::function<void(std::string)> stderr_write_type;

struct Stderr
{
    PyObject_HEAD
    stderr_write_type write;
};

PyObject* Stderr_write(PyObject* self, PyObject* args)
{
    std::size_t written(0);
    Stderr* selfimpl = reinterpret_cast<Stderr*>(self);
    if (selfimpl->write)
    {
        char* data;
        if (!PyArg_ParseTuple(args, "s", &data)) {
            return 0;
        }
        std::string sOutputMessage(data);
        // selfimpl->write(sOutputMessage);
        // written = sOutputMessage.size();
        // TODO extension_id
        sOutputMessage = "ERROR. Python3Scripting: " + sOutputMessage;
        Unigine::Log::error("%s", sOutputMessage.c_str());
    }
    return PyLong_FromSize_t(written);
}

PyObject* Stderr_flush(PyObject* self, PyObject* args)
{
    // no-op
    return Py_BuildValue("");
}

PyMethodDef Stderr_methods[] =
{
    {"write", Stderr_write, METH_VARARGS, "sys.stderr.write"},
    {"flush", Stderr_flush, METH_VARARGS, "sys.stderr.flush"},
    {0, 0, 0, 0} // sentinel
};

PyTypeObject StderrType =
{
    PyVarObject_HEAD_INIT(0, 0)
    "unigine_stderr.StderrType",     /* tp_name */
    sizeof(Stderr),       /* tp_basicsize */
    0,                    /* tp_itemsize */
    0,                    /* tp_dealloc */
    0,                    /* tp_print */
    0,                    /* tp_getattr */
    0,                    /* tp_setattr */
    0,                    /* tp_reserved */
    0,                    /* tp_repr */
    0,                    /* tp_as_number */
    0,                    /* tp_as_sequence */
    0,                    /* tp_as_mapping */
    0,                    /* tp_hash  */
    0,                    /* tp_call */
    0,                    /* tp_str */
    0,                    /* tp_getattro */
    0,                    /* tp_setattro */
    0,                    /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT,   /* tp_flags */
    "unigine_stderr.Stderr objects", /* tp_doc */
    0,                    /* tp_traverse */
    0,                    /* tp_clear */
    0,                    /* tp_richcompare */
    0,                    /* tp_weaklistoffset */
    0,                    /* tp_iter */
    0,                    /* tp_iternext */
    Stderr_methods,       /* tp_methods */
    0,                    /* tp_members */
    0,                    /* tp_getset */
    0,                    /* tp_base */
    0,                    /* tp_dict */
    0,                    /* tp_descr_get */
    0,                    /* tp_descr_set */
    0,                    /* tp_dictoffset */
    0,                    /* tp_init */
    0,                    /* tp_alloc */
    0,                    /* tp_new */
};

PyModuleDef unigine_stderr_module =
{
    PyModuleDef_HEAD_INIT,
    "unigine_stderr", 0, -1, 0,
};

// Internal state
PyObject* g_stderr;
PyObject* g_stderr_saved;

PyMODINIT_FUNC _PyInit_library_stderr(void)  {
    g_stderr = 0;
    g_stderr_saved = 0;

    StderrType.tp_new = PyType_GenericNew;
    if (PyType_Ready(&StderrType) < 0) {
        return 0;
    }

    PyObject* m = PyModule_Create(&unigine_stderr_module);
    if (m) {
        Py_INCREF(&StderrType);
        PyModule_AddObject(m, "Stderr", reinterpret_cast<PyObject*>(&StderrType));
    }
    return m;
}

// ------------------------------------------------------------------------------------------
// Python3UnigineStderr

Python3UnigineStderr::Python3UnigineStderr(const std::string &sExtensionId) {
    m_sExtensionId = sExtensionId;
}

void Python3UnigineStderr::Call_PyImport_AppendInittab() {
    PyImport_AppendInittab("unigine_stderr", &_PyInit_library_stderr);
}

void Python3UnigineStderr::Call_PyImport_ImportModule() {
    PyImport_ImportModule("unigine_stderr");

    std::string buffer;
    stderr_write_type write = [&buffer] (std::string s) { buffer += s; };

    // set_stderr(write);
    if (!g_stderr)
    {
        g_stderr_saved = PySys_GetObject("stderr"); // borrowed
        g_stderr = StderrType.tp_new(&StderrType, 0, 0);
    }
    Stderr* impl = reinterpret_cast<Stderr*>(g_stderr);
    impl->write = write;
    PySys_SetObject("stderr", g_stderr);
}

void Python3UnigineStderr::Call_Before_Py_Finalize() {
    // reset stderr
    if (g_stderr_saved) {
        PySys_SetObject("stderr", g_stderr_saved);
    }

    Py_XDECREF(g_stderr);
    g_stderr = 0;
}

void Python3UnigineStderr::Call_After_Py_Finalize() {
    // nothing
}

#include <functional>
#include <iostream>
#include <string>
#include <Python.h>
#include <UnigineLog.h>
#include "unigine_python_stdout.h"

// code copied from here and modified
// https://stackoverflow.com/questions/4307187/how-to-catch-python-stdout-in-c-code
typedef std::function<void(std::string)> stdout_write_type;

// Stdout
struct Stdout
{
    PyObject_HEAD
    stdout_write_type write;
};

PyObject* Stdout_write(PyObject* self, PyObject* args)
{
    std::size_t written(0);
    Stdout* selfimpl = reinterpret_cast<Stdout*>(self);
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
        sOutputMessage = "Python3Scripting: " + sOutputMessage + "\n";
        Unigine::Log::message(sOutputMessage.c_str());
    }
    return PyLong_FromSize_t(written);
}

PyObject* Stdout_flush(PyObject* self, PyObject* args)
{
    // no-op
    return Py_BuildValue("");
}

PyMethodDef Stdout_methods[] =
{
    {"write", Stdout_write, METH_VARARGS, "sys.stdout.write"},
    {"flush", Stdout_flush, METH_VARARGS, "sys.stdout.flush"},
    {0, 0, 0, 0} // sentinel
};

PyTypeObject StdoutType =
{
    PyVarObject_HEAD_INIT(0, 0)
    "unigine_stdout.StdoutType",     /* tp_name */
    sizeof(Stdout),       /* tp_basicsize */
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
    "unigine_stdout.Stdout objects", /* tp_doc */
    0,                    /* tp_traverse */
    0,                    /* tp_clear */
    0,                    /* tp_richcompare */
    0,                    /* tp_weaklistoffset */
    0,                    /* tp_iter */
    0,                    /* tp_iternext */
    Stdout_methods,       /* tp_methods */
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

PyModuleDef unigine_stdout_module =
{
    PyModuleDef_HEAD_INIT,
    "unigine_stdout", 0, -1, 0,
};

// Internal state
PyObject* g_stdout;
PyObject* g_stdout_saved;

PyMODINIT_FUNC _PyInit_library_stdout(void)  {
    g_stdout = 0;
    g_stdout_saved = 0;

    StdoutType.tp_new = PyType_GenericNew;
    if (PyType_Ready(&StdoutType) < 0) {
        return 0;
    }

    PyObject* m = PyModule_Create(&unigine_stdout_module);
    if (m) {
        Py_INCREF(&StdoutType);
        PyModule_AddObject(m, "Stdout", reinterpret_cast<PyObject*>(&StdoutType));
    }
    return m;
}

// ------------------------------------------------------------------------------------------
// UniginePythonStdout

UniginePythonStdout::UniginePythonStdout(const std::string &sExtensionId) {
    m_sExtensionId = sExtensionId;
}

void UniginePythonStdout::Call_PyImport_AppendInittab() {
    PyImport_AppendInittab("unigine_stdout", &_PyInit_library_stdout);
}

void UniginePythonStdout::Call_PyImport_ImportModule() {
    PyImport_ImportModule("unigine_stdout");
    
    std::string buffer;
    stdout_write_type write = [&buffer] (std::string s) { buffer += s; };

    // set_stdout(write);
    if (!g_stdout)
    {
        g_stdout_saved = PySys_GetObject("stdout"); // borrowed
        g_stdout = StdoutType.tp_new(&StdoutType, 0, 0);
    }
    Stdout* impl = reinterpret_cast<Stdout*>(g_stdout);
    impl->write = write;
    PySys_SetObject("stdout", g_stdout);    
    
}

void UniginePythonStdout::Call_Before_Py_Finalize() {
    // reset stdout
    if (g_stdout_saved) {
        PySys_SetObject("stdout", g_stdout_saved);
    }

    Py_XDECREF(g_stdout);
    g_stdout = 0;
}

void UniginePythonStdout::Call_After_Py_Finalize() {
    // nothing
}


// this file automaticly generated from UnigineViewportWindow.h
#include "python3_unigine_viewportwindow.h"

#include <string>
#include <editor/UnigineViewportManager.h>
#include <UnigineLog.h>
#include <Python.h>
#include <structmember.h>

#include <iostream>

namespace PyUnigine {

// ------------------------------------------------------------------------------------------
// unigine_ViewportWindow

typedef struct {
    PyObject_HEAD
    // Type-specific fields go here.
    UnigineEditor::ViewportWindow *unigine_object_ptr;
} unigine_ViewportWindow;

static void unigine_ViewportWindow_dealloc(unigine_ViewportWindow* self) {
    // Unigine::Log::message("unigine_ViewportWindow_dealloc\n");
    Py_TYPE(self)->tp_free((PyObject*)self);
}

static PyObject *unigine_ViewportWindow_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    // Unigine::Log::message("unigine_ViewportWindow_new\n");
    unigine_ViewportWindow *self;
    self = (unigine_ViewportWindow *)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static int unigine_ViewportWindow_init(unigine_ViewportWindow *self, PyObject *args, PyObject *kwds) {
    // nothing
    return 0;
}



static PyMethodDef unigine_ViewportWindow_methods[] = {
    {NULL}  /* Sentinel */
};

static PyTypeObject unigine_ViewportWindowType = {
    PyVarObject_HEAD_INIT(NULL, 0)
    "unigine.ViewportWindow",             // tp_name
    sizeof(unigine_ViewportWindow) + 256, // tp_basicsize  (TODO magic 256 bytes!!!)
    0,                         // tp_itemsize
    (destructor)unigine_ViewportWindow_dealloc,   // tp_dealloc
    0,                         // tp_vectorcall_offset
    0,                         // tp_getattr
    0,                         // tp_setattr
    0,                         // tp_as_async
    0,                         // tp_repr
    0,                         // tp_as_number
    0,                         // tp_as_sequence
    0,                         // tp_as_mapping
    0,                         // tp_hash
    0,                         // tp_call
    0,                         // tp_str
    0,                         // tp_getattro
    0,                         // tp_setattro
    0,                         // tp_as_buffer
    Py_TPFLAGS_DEFAULT,        // tp_flags
    "ViewportWindow Object",         // tp_doc
    0,                         // traverseproc tp_traverse
    0,                         // inquiry tp_clear
    0,                         // richcmpfunc tp_richcompare
    0,                         // Py_ssize_t tp_weaklistoffset
    0,                         // getiterfunc tp_iter
    0,                         // iternextfunc tp_iternext
    unigine_ViewportWindow_methods, // tp_methods
    0, // tp_members
    0, // tp_getset
    0, // tp_base
    0, // tp_dict
    0, // tp_descr_get
    0, // tp_descr_set
    0, // tp_dictoffset
    (initproc)unigine_ViewportWindow_init, // tp_init
    0, // tp_alloc
    unigine_ViewportWindow_new, // tp_new
};


// UniginePyTypeObjectViewportWindow

bool Python3UnigineViewportWindow::isReady() {
    // Initialize tp_dict with empty dictionary
    if (!unigine_ViewportWindowType.tp_dict) {
        unigine_ViewportWindowType.tp_dict = PyDict_New();

    }
    if (PyType_Ready(&unigine_ViewportWindowType) < 0) {
        return false;
    }
    return true;
}

bool Python3UnigineViewportWindow::addClassDefinitionToModule(PyObject* pModule) {
    Py_INCREF(&unigine_ViewportWindowType);
    if (PyModule_AddObject(pModule, "ViewportWindow", (PyObject *)&unigine_ViewportWindowType) < 0) {
        Py_DECREF(&unigine_ViewportWindowType);
        return false;
    }
    return true;
}

PyObject * ViewportWindow::NewObject(UnigineEditor::ViewportWindow * unigine_object_ptr) {
    // std::cout << "sizeof(unigine_ViewportWindow) = " << sizeof(unigine_ViewportWindow) << std::endl;
    unigine_ViewportWindow *pInst = PyObject_New(unigine_ViewportWindow, &unigine_ViewportWindowType);
    pInst->unigine_object_ptr = unigine_object_ptr;
    // Py_INCREF(pInst);
    return (PyObject *)pInst;
}

UnigineEditor::ViewportWindow * ViewportWindow::Convert(PyObject *pObject) {
    if (Py_IS_TYPE(pObject, &unigine_ViewportWindowType) == 0) {
        Unigine::Log::error("Invalid type, expected 'UnigineEditor::ViewportWindow *', but got some another");
    }
    unigine_ViewportWindow *pInst = (unigine_ViewportWindow *)pObject;
    return pInst->unigine_object_ptr;
}

}; // namespace PyUnigine

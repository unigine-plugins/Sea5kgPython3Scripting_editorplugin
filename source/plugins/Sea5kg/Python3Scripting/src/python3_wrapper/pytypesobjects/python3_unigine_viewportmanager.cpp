// this file automaticly generated from UnigineViewportManager.h
#include "python3_unigine_viewportmanager.h"

#include <string>
#include <editor/UnigineViewportManager.h>
#include <UnigineLog.h>
#include <Python.h>
#include <structmember.h>

#include <iostream>

#include "python3_unigine_player.h"
#include "python3_unigine_viewportwindow.h"

namespace PyUnigine {

// ------------------------------------------------------------------------------------------
// unigine_ViewportManager

typedef struct {
    PyObject_HEAD
    // Type-specific fields go here.
} unigine_ViewportManager;

static void unigine_ViewportManager_dealloc(unigine_ViewportManager* self) {
    // Unigine::Log::message("unigine_ViewportManager_dealloc\n");
    Py_TYPE(self)->tp_free((PyObject*)self);
}

static PyObject *unigine_ViewportManager_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    // Unigine::Log::message("unigine_ViewportManager_new\n");
    unigine_ViewportManager *self;
    self = (unigine_ViewportManager *)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static int unigine_ViewportManager_init(unigine_ViewportManager *self, PyObject *args, PyObject *kwds) {
    // nothing
    return 0;
}

// public (static): getActiveViewportWindow
static PyObject * unigine_ViewportManager_get_active_viewport_window(unigine_ViewportManager* self_static_null) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = UnigineEditor::ViewportManager::getActiveViewportWindow();
            };
            // return
            UnigineEditor::ViewportWindowId retOriginal;
    };
    auto *pRunner = new LocalRunner();
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    UnigineEditor::ViewportWindowId retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyUnigine::ViewportWindow::NewObject(retOriginal);

    // end
    // return: UnigineEditor::ViewportWindowId
    return ret;
};

// public (static): getViewportWindowPlayer
static PyObject * unigine_ViewportManager_get_viewport_window_player(unigine_ViewportManager* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; //  viewport_id;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    UnigineEditor::ViewportWindowId viewport_id = PyUnigine::ViewportWindow::Convert(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = UnigineEditor::ViewportManager::getViewportWindowPlayer(viewport_id);
            };
            // args
            UnigineEditor::ViewportWindowId viewport_id;
            // return
            Unigine::Ptr<Unigine::Player> retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->viewport_id = viewport_id;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    Unigine::Ptr<Unigine::Player> retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyUnigine::Player::NewObject(retOriginal);

    // end
    // return: Unigine::Ptr<Unigine::Player>
    return ret;
};

static PyMethodDef unigine_ViewportManager_methods[] = {
    {
        "get_active_viewport_window", (PyCFunction)unigine_ViewportManager_get_active_viewport_window, METH_STATIC|METH_NOARGS,
        "public (static): getActiveViewportWindow"
    },
    {
        "get_viewport_window_player", (PyCFunction)unigine_ViewportManager_get_viewport_window_player, METH_STATIC|METH_VARARGS,
        "public (static): getViewportWindowPlayer"
    },
    {NULL}  /* Sentinel */
};

static PyTypeObject unigine_ViewportManagerType = {
    PyVarObject_HEAD_INIT(NULL, 0)
    "unigine.ViewportManager",             // tp_name
    sizeof(unigine_ViewportManager) + 256, // tp_basicsize  (TODO magic 256 bytes!!!)
    0,                         // tp_itemsize
    (destructor)unigine_ViewportManager_dealloc,   // tp_dealloc
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
    "ViewportManager Object",         // tp_doc
    0,                         // traverseproc tp_traverse
    0,                         // inquiry tp_clear
    0,                         // richcmpfunc tp_richcompare
    0,                         // Py_ssize_t tp_weaklistoffset
    0,                         // getiterfunc tp_iter
    0,                         // iternextfunc tp_iternext
    unigine_ViewportManager_methods, // tp_methods
    0, // tp_members
    0, // tp_getset
    0, // tp_base
    0, // tp_dict
    0, // tp_descr_get
    0, // tp_descr_set
    0, // tp_dictoffset
    (initproc)unigine_ViewportManager_init, // tp_init
    0, // tp_alloc
    unigine_ViewportManager_new, // tp_new
};


// UniginePyTypeObjectViewportManager

bool Python3UnigineViewportManager::isReady() {
    // Initialize tp_dict with empty dictionary
    if (!unigine_ViewportManagerType.tp_dict) {
        unigine_ViewportManagerType.tp_dict = PyDict_New();

    }
    if (PyType_Ready(&unigine_ViewportManagerType) < 0) {
        return false;
    }
    return true;
}

bool Python3UnigineViewportManager::addClassDefinitionToModule(PyObject* pModule) {
    Py_INCREF(&unigine_ViewportManagerType);
    if (PyModule_AddObject(pModule, "ViewportManager", (PyObject *)&unigine_ViewportManagerType) < 0) {
        Py_DECREF(&unigine_ViewportManagerType);
        return false;
    }
    return true;
}

PyObject * ViewportManager::NewObject() {
    // std::cout << "sizeof(unigine_ViewportManager) = " << sizeof(unigine_ViewportManager) << std::endl;
    unigine_ViewportManager *pInst = PyObject_New(unigine_ViewportManager, &unigine_ViewportManagerType);
    // Py_INCREF(pInst);
    return (PyObject *)pInst;
}

}; // namespace PyUnigine

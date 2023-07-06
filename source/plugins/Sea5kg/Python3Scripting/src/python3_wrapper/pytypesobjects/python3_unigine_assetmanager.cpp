// this file automaticly generated from UnigineAssetManager.h
#include "python3_unigine_assetmanager.h"

#include <string>
#include <editor/UnigineAssetManager.h>
#include <UnigineLog.h>
#include <Python.h>
#include <structmember.h>

#include <iostream>

namespace PyUnigine {

// ------------------------------------------------------------------------------------------
// unigine_AssetManager

typedef struct {
    PyObject_HEAD
    // Type-specific fields go here.
} unigine_AssetManager;

static void unigine_AssetManager_dealloc(unigine_AssetManager* self) {
    // Unigine::Log::message("unigine_AssetManager_dealloc\n");
    Py_TYPE(self)->tp_free((PyObject*)self);
}

static PyObject *unigine_AssetManager_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    // Unigine::Log::message("unigine_AssetManager_new\n");
    unigine_AssetManager *self;
    self = (unigine_AssetManager *)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static int unigine_AssetManager_init(unigine_AssetManager *self, PyObject *args, PyObject *kwds) {
    // nothing
    return 0;
}


// public (static): isInitialized
static PyObject * unigine_AssetManager_is_initialized(unigine_AssetManager* self_static_null) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = UnigineEditor::AssetManager::isInitialized();
            };
            // args
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    int retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: int
    return ret;
};

// public (static): isAsset
static PyObject * unigine_AssetManager_is_asset(unigine_AssetManager* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const char * asset_path;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyUnicode_Check(pArg1)) {
        // TODO - error
        std::cout << "ERROR: pArg1 No unicoode " << std::endl;
        Py_INCREF(Py_None);
        ret = Py_None;
        return ret;
    }
    const char * asset_path = PyUnicode_AsUTF8(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = UnigineEditor::AssetManager::isAsset(asset_path);
            };
            // args
            const char * asset_path;
            // return
            bool retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->asset_path = asset_path;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    bool retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyBool_FromLong(retOriginal);

    // end
    // return: bool
    return ret;
};

static PyMethodDef unigine_AssetManager_methods[] = {
    {
        "is_initialized", (PyCFunction)unigine_AssetManager_is_initialized, METH_STATIC|METH_NOARGS,
        "public (static): isInitialized"
    },
    {
        "is_asset", (PyCFunction)unigine_AssetManager_is_asset, METH_STATIC|METH_VARARGS,
        "public (static): isAsset"
    },
    {NULL}  /* Sentinel */
};

static PyTypeObject unigine_AssetManagerType = {
    PyVarObject_HEAD_INIT(NULL, 0)
    "unigine.AssetManager",             // tp_name
    sizeof(unigine_AssetManager) + 256, // tp_basicsize  (TODO magic 256 bytes!!!)
    0,                         // tp_itemsize
    (destructor)unigine_AssetManager_dealloc,   // tp_dealloc
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
    "AssetManager Object",         // tp_doc
    0,                         // traverseproc tp_traverse
    0,                         // inquiry tp_clear
    0,                         // richcmpfunc tp_richcompare
    0,                         // Py_ssize_t tp_weaklistoffset
    0,                         // getiterfunc tp_iter
    0,                         // iternextfunc tp_iternext
    unigine_AssetManager_methods, // tp_methods
    0, // tp_members
    0, // tp_getset
    0, // tp_base
    0, // tp_dict
    0, // tp_descr_get
    0, // tp_descr_set
    0, // tp_dictoffset
    (initproc)unigine_AssetManager_init, // tp_init
    0, // tp_alloc
    unigine_AssetManager_new, // tp_new
};


// UniginePyTypeObjectAssetManager

bool Python3UnigineAssetManager::isReady() {
    // Initialize tp_dict with empty dictionary
    if (!unigine_AssetManagerType.tp_dict) {
        unigine_AssetManagerType.tp_dict = PyDict_New();

    }
    if (PyType_Ready(&unigine_AssetManagerType) < 0) {
        return false;
    }
    return true;
}

bool Python3UnigineAssetManager::addClassDefinitionToModule(PyObject* pModule) {
    Py_INCREF(&unigine_AssetManagerType);
    if (PyModule_AddObject(pModule, "AssetManager", (PyObject *)&unigine_AssetManagerType) < 0) {
        Py_DECREF(&unigine_AssetManagerType);
        return false;
    }
    return true;
}

PyObject * AssetManager::NewObject() {
    // std::cout << "sizeof(unigine_AssetManager) = " << sizeof(unigine_AssetManager) << std::endl;
    unigine_AssetManager *pInst = PyObject_New(unigine_AssetManager, &unigine_AssetManagerType);
    // Py_INCREF(pInst);
    return (PyObject *)pInst;
}

}; // namespace PyUnigine

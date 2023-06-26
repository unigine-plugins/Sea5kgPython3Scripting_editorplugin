// this file automaticly generated from UnigineMaterials.h
#include "python3_unigine_materials.h"
#include "python3_unigine_material.h"
#include "python3_unigine_uguid.h"

#include <string>
#include <UnigineMaterials.h>
#include <UnigineLog.h>
#include <Python.h>
#include <structmember.h>

#include <iostream>

namespace PyUnigine {

// ------------------------------------------------------------------------------------------
// unigine_Materials

typedef struct {
    PyObject_HEAD
    // Type-specific fields go here.
} unigine_Materials;

static void unigine_Materials_dealloc(unigine_Materials* self) {
    // Unigine::Log::message("unigine_Materials_dealloc\n");
    Py_TYPE(self)->tp_free((PyObject*)self);
}

static PyObject *unigine_Materials_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    // Unigine::Log::message("unigine_Materials_new\n");
    unigine_Materials *self;
    self = (unigine_Materials *)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static int unigine_Materials_init(unigine_Materials *self, PyObject *args, PyObject *kwds) {
    // nothing
    return 0;
}


// public (static): isInitialized
static PyObject * unigine_Materials_is_initialized(unigine_Materials* self_static_null) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    // args:
    // return: int

    int retOriginal = Unigine::Materials::isInitialized();
    ret = PyLong_FromLong(retOriginal);
    return ret;
};

// public (static): getLoadingMode
static PyObject * unigine_Materials_get_loading_mode(unigine_Materials* self_static_null) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    Unigine::Materials::LOADING_MODE retOriginal = Unigine::Materials::getLoadingMode();
    ret = PyLong_FromLong(retOriginal);

    // end 
    // return: Unigine::Materials::LOADING_MODE
    return ret;
};

// public (static): loadMaterial
static PyObject * unigine_Materials_load_material(unigine_Materials* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const char * path;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    const char * path = PyBytes_AS_STRING(pArg1Str);
    std::cout << "path: " << path << std::endl;

    Unigine::Ptr<Unigine::Material> retOriginal = Unigine::Materials::loadMaterial(path);
    if (retOriginal == nullptr) {
        Py_INCREF(Py_None);
        ret = Py_None;
    } else {
        ret = PyUnigine::Material::NewObject(retOriginal);
    }

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: Unigine::Ptr<Unigine::Material>
    return ret;
};

// public (static): isMaterialGUID
static PyObject * unigine_Materials_is_material_guid(unigine_Materials* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    PyObject *pArg1;
    PyArg_ParseTuple(args, "O", &pArg1);

    Unigine::UGUID *guid = PyUnigine::UGUID::Convert(pArg1);
    // const Unigine::UGUID & guid;
    // return: bool

    bool retOriginal = Unigine::Materials::isMaterialGUID(*guid);
    ret = PyBool_FromLong(retOriginal);
    return ret;
};

// public (static): getNumMaterials
static PyObject * unigine_Materials_get_num_materials(unigine_Materials* self_static_null) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: int

    int retOriginal = Unigine::Materials::getNumMaterials();
    ret = PyLong_FromLong(retOriginal);
    return ret;
};

// public (static): compileShaders
static PyObject * unigine_Materials_compile_shaders(unigine_Materials* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: void

    Unigine::Materials::compileShaders();
    return ret;
};

// public (static): createShaders
static PyObject * unigine_Materials_create_shaders(unigine_Materials* self_static_null) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: void

    Unigine::Materials::createShaders();
    return ret;
};


static PyMethodDef unigine_Materials_methods[] = {
    {
        "is_initialized", (PyCFunction)unigine_Materials_is_initialized, METH_STATIC|METH_NOARGS,
        "public (static): isInitialized"
    },
    {
        "get_loading_mode", (PyCFunction)unigine_Materials_get_loading_mode, METH_STATIC|METH_NOARGS,
        "public (static): getLoadingMode"
    },
    {
        "load_material", (PyCFunction)unigine_Materials_load_material, METH_STATIC|METH_VARARGS,
        "public (static): loadMaterial"
    },
    {
        "is_material_guid", (PyCFunction)unigine_Materials_is_material_guid, METH_STATIC|METH_VARARGS,
        "public (static): isMaterialGUID"
    },
    {
        "get_num_materials", (PyCFunction)unigine_Materials_get_num_materials, METH_STATIC|METH_NOARGS,
        "public (static): getNumMaterials"
    },
    {
        "create_shaders", (PyCFunction)unigine_Materials_create_shaders, METH_STATIC|METH_NOARGS,
        "public (static): createShaders"
    },
    {NULL}  /* Sentinel */
};

static PyTypeObject unigine_MaterialsType = {


    PyVarObject_HEAD_INIT(NULL, 0)
    "unigine.Materials",             // tp_name
    sizeof(unigine_Materials) + 16, // tp_basicsize  (magic 16 bytes!!!)
    0,                         // tp_itemsize
    (destructor)unigine_Materials_dealloc,   // tp_dealloc
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
    "Materials Object",         // tp_doc
    0,                         // traverseproc tp_traverse
    0,                         // inquiry tp_clear
    0,                         // richcmpfunc tp_richcompare
    0,                         // Py_ssize_t tp_weaklistoffset
    0,                         // getiterfunc tp_iter
    0,                         // iternextfunc tp_iternext
    unigine_Materials_methods, // tp_methods
    0, // tp_members
    0, // tp_getset
    0, // tp_base
    0, // tp_dict
    0, // tp_descr_get
    0, // tp_descr_set
    0, // tp_dictoffset
    (initproc)unigine_Materials_init, // tp_init
    0, // tp_alloc
    unigine_Materials_new, // tp_new
};

PyObject * Materials::NewObject() {

    std::cout << "sizeof(unigine_Materials) = " << sizeof(unigine_Materials) << std::endl;

    unigine_Materials *pInst = PyObject_New(unigine_Materials, &unigine_MaterialsType);
    // Py_INCREF(pInst);
    return (PyObject *)pInst;
}

// UniginePyTypeObjectMaterials

bool Python3UnigineMaterials::isReady() {
    // Initialize tp_dict with empty dictionary
    if (!unigine_MaterialsType.tp_dict) {
        unigine_MaterialsType.tp_dict = PyDict_New();

        // enum_typename: LOADING_MODE
        PyDict_SetItemString(
            unigine_MaterialsType.tp_dict, "LOADING_MODE_FAST",
            Py_BuildValue("i", Unigine::Materials::LOADING_MODE_FAST)
        );
        // enum_typename: LOADING_MODE
        PyDict_SetItemString(
            unigine_MaterialsType.tp_dict, "LOADING_MODE_FULL_MATERIALS",
            Py_BuildValue("i", Unigine::Materials::LOADING_MODE_FULL_MATERIALS)
        );
        // enum_typename: LOADING_MODE
        PyDict_SetItemString(
            unigine_MaterialsType.tp_dict, "LOADING_MODE_FULL_MATERIALS_SHADERS",
            Py_BuildValue("i", Unigine::Materials::LOADING_MODE_FULL_MATERIALS_SHADERS)
        );
    }
    if (PyType_Ready(&unigine_MaterialsType) < 0) {
        return false;
    }
    return true;
}

bool Python3UnigineMaterials::addClassDefinitionToModule(PyObject* pModule) {
    Py_INCREF(&unigine_MaterialsType);
    if (PyModule_AddObject(pModule, "Materials", (PyObject *)&unigine_MaterialsType) < 0) {
        Py_DECREF(&unigine_MaterialsType);
        return false;
    }
    return true;
}


}; // namespace PyUnigine

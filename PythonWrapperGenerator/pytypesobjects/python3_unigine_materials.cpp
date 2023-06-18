// this file automaticly generated from UnigineMaterials.h
#include "python3_unigine_materials.h"
#include <string>
#include <UnigineMaterialss.h>
#include <Python.h>
#include <structmember.h>

#include <iostream>

// ------------------------------------------------------------------------------------------
// unigine_Materials
typedef struct {
    PyObject_HEAD
    // Type-specific fields go here.
    Unigine::Ptr<Unigine::Materials> unigine_object_ptr;
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
static PyObject * unigine_Materials_is_initialized() {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: int

    int retOriginal = self->unigine_object_ptr->isInitialized();
    ret = PyLong_FromLong(retOriginal);
    return ret;
};

// public (static): setLoadingMode
static PyObject * unigine_Materials_set_loading_mode(PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // LOADING_MODE mode
    // return: void

    self->unigine_object_ptr->setLoadingMode();
    return ret;
};

// public (static): getLoadingMode
static PyObject * unigine_Materials_get_loading_mode() {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: LOADING_MODE

    unknown type 
    return ret;
};

// public (static): loadMaterial
static PyObject * unigine_Materials_load_material(PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // const  *char path
    // return: Unigine::Ptr<Unigine::Material>

    unknown type 
    return ret;
};

// public (static): isMaterialGUID
static PyObject * unigine_Materials_is_material_g_u_i_d(PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // Unigine::UGUIDconst & guid
    // return: bool

    bool retOriginal = self->unigine_object_ptr->isMaterialGUID();
    ret = PyBool_FromLong(retOriginal);
    return ret;
};

// public (static): getNumMaterials
static PyObject * unigine_Materials_get_num_materials() {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: int

    int retOriginal = self->unigine_object_ptr->getNumMaterials();
    ret = PyLong_FromLong(retOriginal);
    return ret;
};

// public (static): getMaterial
static PyObject * unigine_Materials_get_material(PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int num
    // return: Unigine::Ptr<Unigine::Material>

    unknown type 
    return ret;
};

// public (static): findManualMaterial
static PyObject * unigine_Materials_find_manual_material(PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // const  *char name
    // return: Unigine::Ptr<Unigine::Material>

    unknown type 
    return ret;
};

// public (static): findMaterialByGUID
static PyObject * unigine_Materials_find_material_by_g_u_i_d(PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // Unigine::UGUIDconst & guid
    // return: Unigine::Ptr<Unigine::Material>

    unknown type 
    return ret;
};

// public (static): findMaterialByFileGUID
static PyObject * unigine_Materials_find_material_by_file_g_u_i_d(PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // Unigine::UGUIDconst & guid
    // return: Unigine::Ptr<Unigine::Material>

    unknown type 
    return ret;
};

// public (static): findMaterialByPath
static PyObject * unigine_Materials_find_material_by_path(PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // const  *char path
    // return: Unigine::Ptr<Unigine::Material>

    unknown type 
    return ret;
};

// public (static): setCachedMaterial
static PyObject * unigine_Materials_set_cached_material(PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // Unigine::Ptr<Unigine::Material>const & mat
    // return: void

    self->unigine_object_ptr->setCachedMaterial();
    return ret;
};

// public (static): getCachedMaterial
static PyObject * unigine_Materials_get_cached_material() {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: Unigine::Ptr<Unigine::Material>

    unknown type 
    return ret;
};

// public (static): setCachedState
static PyObject * unigine_Materials_set_cached_state(PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // const  *char name
    // int value
    // return: void

    self->unigine_object_ptr->setCachedState();
    return ret;
};

// public (static): removeMaterial
static PyObject * unigine_Materials_remove_material(PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // Unigine::UGUIDconst & guid
    // bool remove_file
    // bool remove_children
    // return: bool

    bool retOriginal = self->unigine_object_ptr->removeMaterial();
    ret = PyBool_FromLong(retOriginal);
    return ret;
};

// public (static): replaceMaterial
static PyObject * unigine_Materials_replace_material(PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // Unigine::Ptr<Unigine::Material>const & material
    // Unigine::Ptr<Unigine::Material>const & new_material
    // return: bool

    bool retOriginal = self->unigine_object_ptr->replaceMaterial();
    ret = PyBool_FromLong(retOriginal);
    return ret;
};

// public (static): saveMaterials
static PyObject * unigine_Materials_save_materials() {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: bool

    bool retOriginal = self->unigine_object_ptr->saveMaterials();
    ret = PyBool_FromLong(retOriginal);
    return ret;
};

// public (static): compileShaders
static PyObject * unigine_Materials_compile_shaders(PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // Unigine::Vector<Unigine::Ptr<Unigine::Material>>const & materials
    // return: void

    self->unigine_object_ptr->compileShaders();
    return ret;
};

// public (static): compileShaders
static PyObject * unigine_Materials_compile_shaders() {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: void

    self->unigine_object_ptr->compileShaders();
    return ret;
};

// public (static): setPrecompileAllShaders
static PyObject * unigine_Materials_set_precompile_all_shaders(PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // bool shaders
    // return: void

    self->unigine_object_ptr->setPrecompileAllShaders();
    return ret;
};

// public (static): isPrecompileAllShaders
static PyObject * unigine_Materials_is_precompile_all_shaders() {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: bool

    bool retOriginal = self->unigine_object_ptr->isPrecompileAllShaders();
    ret = PyBool_FromLong(retOriginal);
    return ret;
};

// public (static): reloadMaterials
static PyObject * unigine_Materials_reload_materials() {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: void

    self->unigine_object_ptr->reloadMaterials();
    return ret;
};

// public (static): destroyShaders
static PyObject * unigine_Materials_destroy_shaders() {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: void

    self->unigine_object_ptr->destroyShaders();
    return ret;
};

// public (static): destroyTextures
static PyObject * unigine_Materials_destroy_textures() {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: void

    self->unigine_object_ptr->destroyTextures();
    return ret;
};

// public (static): createShaders
static PyObject * unigine_Materials_create_shaders() {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: void

    self->unigine_object_ptr->createShaders();
    return ret;
};


static PyMethodDef unigine_Materials_methods[] = {
    {
        "is_initialized", (PyCFunction)unigine_Materials_is_initialized, METH_STATIC|METH_NOARGS,
        "public (static): isInitialized"
    },
    {
        "set_loading_mode", (PyCFunction)unigine_Materials_set_loading_mode, METH_STATIC|METH_0,
        "public (static): setLoadingMode"
    },
    {
        "get_loading_mode", (PyCFunction)unigine_Materials_get_loading_mode, METH_STATIC|METH_NOARGS,
        "public (static): getLoadingMode"
    },
    {
        "load_material", (PyCFunction)unigine_Materials_load_material, METH_STATIC|METH_0,
        "public (static): loadMaterial"
    },
    {
        "is_material_g_u_i_d", (PyCFunction)unigine_Materials_is_material_g_u_i_d, METH_STATIC|METH_0,
        "public (static): isMaterialGUID"
    },
    {
        "get_num_materials", (PyCFunction)unigine_Materials_get_num_materials, METH_STATIC|METH_NOARGS,
        "public (static): getNumMaterials"
    },
    {
        "get_material", (PyCFunction)unigine_Materials_get_material, METH_STATIC|METH_0,
        "public (static): getMaterial"
    },
    {
        "find_manual_material", (PyCFunction)unigine_Materials_find_manual_material, METH_STATIC|METH_0,
        "public (static): findManualMaterial"
    },
    {
        "find_material_by_g_u_i_d", (PyCFunction)unigine_Materials_find_material_by_g_u_i_d, METH_STATIC|METH_0,
        "public (static): findMaterialByGUID"
    },
    {
        "find_material_by_file_g_u_i_d", (PyCFunction)unigine_Materials_find_material_by_file_g_u_i_d, METH_STATIC|METH_0,
        "public (static): findMaterialByFileGUID"
    },
    {
        "find_material_by_path", (PyCFunction)unigine_Materials_find_material_by_path, METH_STATIC|METH_0,
        "public (static): findMaterialByPath"
    },
    {
        "set_cached_material", (PyCFunction)unigine_Materials_set_cached_material, METH_STATIC|METH_0,
        "public (static): setCachedMaterial"
    },
    {
        "get_cached_material", (PyCFunction)unigine_Materials_get_cached_material, METH_STATIC|METH_NOARGS,
        "public (static): getCachedMaterial"
    },
    {
        "set_cached_state", (PyCFunction)unigine_Materials_set_cached_state, METH_STATIC|METH_1,
        "public (static): setCachedState"
    },
    {
        "remove_material", (PyCFunction)unigine_Materials_remove_material, METH_STATIC|METH_2,
        "public (static): removeMaterial"
    },
    {
        "replace_material", (PyCFunction)unigine_Materials_replace_material, METH_STATIC|METH_1,
        "public (static): replaceMaterial"
    },
    {
        "save_materials", (PyCFunction)unigine_Materials_save_materials, METH_STATIC|METH_NOARGS,
        "public (static): saveMaterials"
    },
    {
        "compile_shaders", (PyCFunction)unigine_Materials_compile_shaders, METH_STATIC|METH_0,
        "public (static): compileShaders"
    },
    {
        "compile_shaders", (PyCFunction)unigine_Materials_compile_shaders, METH_STATIC|METH_NOARGS,
        "public (static): compileShaders"
    },
    {
        "set_precompile_all_shaders", (PyCFunction)unigine_Materials_set_precompile_all_shaders, METH_STATIC|METH_0,
        "public (static): setPrecompileAllShaders"
    },
    {
        "is_precompile_all_shaders", (PyCFunction)unigine_Materials_is_precompile_all_shaders, METH_STATIC|METH_NOARGS,
        "public (static): isPrecompileAllShaders"
    },
    {
        "reload_materials", (PyCFunction)unigine_Materials_reload_materials, METH_STATIC|METH_NOARGS,
        "public (static): reloadMaterials"
    },
    {
        "destroy_shaders", (PyCFunction)unigine_Materials_destroy_shaders, METH_STATIC|METH_NOARGS,
        "public (static): destroyShaders"
    },
    {
        "destroy_textures", (PyCFunction)unigine_Materials_destroy_textures, METH_STATIC|METH_NOARGS,
        "public (static): destroyTextures"
    },
    {
        "create_shaders", (PyCFunction)unigine_Materials_create_shaders, METH_STATIC|METH_NOARGS,
        "public (static): createShaders"
    },
    {NULL}  /* Sentinel */
};

static PyTypeObject unigine_MaterialsType = {
    // PyVarObject_HEAD_INIT(&PyType_Type, 0)
    // PyVarObject_HEAD_INIT(NULL, 0)
    // .tp_name = "unigine.Materials",
    // .tp_basicsize = sizeof(unigine_Materials) + 16, // magic!!!
    // .tp_dealloc = (destructor)unigine_Materials_dealloc,
    // .tp_flags = Py_TPFLAGS_DEFAULT, // | Py_TPFLAGS_BASETYPE,
    // .tp_doc = "Materials Object",
    // .tp_methods = unigine_Materials_methods,
    // .tp_members = 0,
    // .tp_dict = 0,
    // .tp_init = (initproc)unigine_Materials_init,
    // .tp_new = unigine_Materials_new,


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
    // 0, // tp_free
    // 0, /* inquiry tp_is_gc; */
    // 0, /* PyObject *tp_bases; */
    // 0, /* PyObject *tp_mro; */
    // 0, /* PyObject *tp_cache; */
    // 0, /* PyObject *tp_subclasses; */
    // 0, /* PyObject *tp_weaklist; */
    // 0, /* destructor tp_del; */
    // 0, /* unsigned int tp_version_tag; */
    // 0, /* destructor tp_finalize; */
    // 0, /* vectorcallfunc tp_vectorcall; */
};

PyObject * PyUnigineMaterials::NewObject(Unigine::Ptr<Unigine::Materials> unigine_object_ptr) {

    std::cout << "sizeof(unigine_Materials) = " << sizeof(unigine_Materials) << std::endl;

    unigine_Materials *pInst = PyObject_New(unigine_Materials, &unigine_MaterialsType);
    pInst->unigine_object_ptr = unigine_object_ptr;
    // Py_INCREF(pInst);
    return (PyObject *)pInst;
}

// UniginePyTypeObjectMaterials

bool Python3UnigineMaterials::isReady() {
    // Initialize tp_dict with empty dictionary
    std::cout << "sizeof(unigine_Materials) = " << sizeof(unigine_Materials) << std::endl;
    std::cout << "sizeof(Unigine::Ptr<Unigine::Materials>) = " << sizeof(Unigine::Ptr<Unigine::Materials>) << std::endl;
        // Unigine::Ptr<Unigine::Materials> material
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


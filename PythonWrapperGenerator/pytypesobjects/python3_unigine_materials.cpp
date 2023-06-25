// this file automaticly generated from UnigineMaterials.h
#include "python3_unigine_materials.h"

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
    self->unigine_object_ptr = new Unigine::Materials();
    return 0;
}


// public (static): isInitialized
static PyObject * unigine_Materials_is_initialized() {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: int

    int retOriginal = Unigine::Materials::isInitialized();
    ret = PyLong_FromLong(retOriginal);
    return ret;
};

// public (static): setLoadingMode
static PyObject * unigine_Materials_set_loading_mode(PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    Unigine::Materials::LOADING_MODE mode;
    // return: void

    Unigine::Materials::setLoadingMode(mode);
    return ret;
};

// public (static): getLoadingMode
static PyObject * unigine_Materials_get_loading_mode() {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: Unigine::Materials::LOADING_MODE

    Unigine::Materials::LOADING_MODE retOriginal = Unigine::Materials::getLoadingMode();
    ret = PyLong_FromLong(retOriginal);
    return ret;
};

// public (static): loadMaterial
static PyObject * unigine_Materials_load_material(PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const char * path;
    // return: Unigine::Ptr<Unigine::Material>

    Unigine::Ptr<Unigine::Material> retOriginal = Unigine::Materials::loadMaterial(path);
    ret = PyUnigine::Material::NewObject(retOriginal);
    return ret;
};

// public (static): isMaterialGUID
static PyObject * unigine_Materials_is_material_guid(PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const Unigine::UGUID & guid;
    // return: bool

    bool retOriginal = Unigine::Materials::isMaterialGUID(guid);
    ret = PyBool_FromLong(retOriginal);
    return ret;
};

// public (static): getNumMaterials
static PyObject * unigine_Materials_get_num_materials() {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: int

    int retOriginal = Unigine::Materials::getNumMaterials();
    ret = PyLong_FromLong(retOriginal);
    return ret;
};

// public (static): getMaterial
static PyObject * unigine_Materials_get_material(PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    int num;
    // return: Unigine::Ptr<Unigine::Material>

    Unigine::Ptr<Unigine::Material> retOriginal = Unigine::Materials::getMaterial(num);
    ret = PyUnigine::Material::NewObject(retOriginal);
    return ret;
};

// public (static): findManualMaterial
static PyObject * unigine_Materials_find_manual_material(PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const char * name;
    // return: Unigine::Ptr<Unigine::Material>

    Unigine::Ptr<Unigine::Material> retOriginal = Unigine::Materials::findManualMaterial(name);
    ret = PyUnigine::Material::NewObject(retOriginal);
    return ret;
};

// public (static): findMaterialByGUID
static PyObject * unigine_Materials_find_material_by_guid(PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const Unigine::UGUID & guid;
    // return: Unigine::Ptr<Unigine::Material>

    Unigine::Ptr<Unigine::Material> retOriginal = Unigine::Materials::findMaterialByGUID(guid);
    ret = PyUnigine::Material::NewObject(retOriginal);
    return ret;
};

// public (static): findMaterialByFileGUID
static PyObject * unigine_Materials_find_material_by_file_guid(PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const Unigine::UGUID & guid;
    // return: Unigine::Ptr<Unigine::Material>

    Unigine::Ptr<Unigine::Material> retOriginal = Unigine::Materials::findMaterialByFileGUID(guid);
    ret = PyUnigine::Material::NewObject(retOriginal);
    return ret;
};

// public (static): findMaterialByPath
static PyObject * unigine_Materials_find_material_by_path(PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const char * path;
    // return: Unigine::Ptr<Unigine::Material>

    Unigine::Ptr<Unigine::Material> retOriginal = Unigine::Materials::findMaterialByPath(path);
    ret = PyUnigine::Material::NewObject(retOriginal);
    return ret;
};

// public (static): setCachedMaterial
static PyObject * unigine_Materials_set_cached_material(PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const Unigine::Ptr<Unigine::Material> & mat;
    // return: void

    Unigine::Materials::setCachedMaterial(mat);
    return ret;
};

// public (static): getCachedMaterial
static PyObject * unigine_Materials_get_cached_material() {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: Unigine::Ptr<Unigine::Material>

    Unigine::Ptr<Unigine::Material> retOriginal = Unigine::Materials::getCachedMaterial();
    ret = PyUnigine::Material::NewObject(retOriginal);
    return ret;
};

// public (static): setCachedState
static PyObject * unigine_Materials_set_cached_state(PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const char * name;
    int value;
    // return: void

    Unigine::Materials::setCachedState(name, value);
    return ret;
};

// public (static): removeMaterial
static PyObject * unigine_Materials_remove_material(PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const Unigine::UGUID & guid;
    bool remove_file;
    bool remove_children;
    // return: bool

    bool retOriginal = Unigine::Materials::removeMaterial(guid, remove_file, remove_children);
    ret = PyBool_FromLong(retOriginal);
    return ret;
};

// public (static): replaceMaterial
static PyObject * unigine_Materials_replace_material(PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const Unigine::Ptr<Unigine::Material> & material;
    const Unigine::Ptr<Unigine::Material> & new_material;
    // return: bool

    bool retOriginal = Unigine::Materials::replaceMaterial(material, new_material);
    ret = PyBool_FromLong(retOriginal);
    return ret;
};

// public (static): saveMaterials
static PyObject * unigine_Materials_save_materials() {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: bool

    bool retOriginal = Unigine::Materials::saveMaterials();
    ret = PyBool_FromLong(retOriginal);
    return ret;
};

// public (static): compileShaders
static PyObject * unigine_Materials_compile_shaders(PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const Unigine::Vector<Unigine::Ptr<Unigine::Material>> & materials;
    // return: void

    Unigine::Materials::compileShaders(materials);
    return ret;
};

// public (static): compileShaders
static PyObject * unigine_Materials_compile_shaders() {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: void

    Unigine::Materials::compileShaders();
    return ret;
};

// public (static): setPrecompileAllShaders
static PyObject * unigine_Materials_set_precompile_all_shaders(PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    bool shaders;
    // return: void

    Unigine::Materials::setPrecompileAllShaders(shaders);
    return ret;
};

// public (static): isPrecompileAllShaders
static PyObject * unigine_Materials_is_precompile_all_shaders() {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: bool

    bool retOriginal = Unigine::Materials::isPrecompileAllShaders();
    ret = PyBool_FromLong(retOriginal);
    return ret;
};

// public (static): reloadMaterials
static PyObject * unigine_Materials_reload_materials() {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: void

    Unigine::Materials::reloadMaterials();
    return ret;
};

// public (static): destroyShaders
static PyObject * unigine_Materials_destroy_shaders() {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: void

    Unigine::Materials::destroyShaders();
    return ret;
};

// public (static): destroyTextures
static PyObject * unigine_Materials_destroy_textures() {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: void

    Unigine::Materials::destroyTextures();
    return ret;
};

// public (static): createShaders
static PyObject * unigine_Materials_create_shaders() {
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
        "set_loading_mode", (PyCFunction)unigine_Materials_set_loading_mode, METH_STATIC|METH_O,
        "public (static): setLoadingMode"
    },
    {
        "get_loading_mode", (PyCFunction)unigine_Materials_get_loading_mode, METH_STATIC|METH_NOARGS,
        "public (static): getLoadingMode"
    },
    {
        "load_material", (PyCFunction)unigine_Materials_load_material, METH_STATIC|METH_O,
        "public (static): loadMaterial"
    },
    {
        "is_material_guid", (PyCFunction)unigine_Materials_is_material_guid, METH_STATIC|METH_O,
        "public (static): isMaterialGUID"
    },
    {
        "get_num_materials", (PyCFunction)unigine_Materials_get_num_materials, METH_STATIC|METH_NOARGS,
        "public (static): getNumMaterials"
    },
    {
        "get_material", (PyCFunction)unigine_Materials_get_material, METH_STATIC|METH_O,
        "public (static): getMaterial"
    },
    {
        "find_manual_material", (PyCFunction)unigine_Materials_find_manual_material, METH_STATIC|METH_O,
        "public (static): findManualMaterial"
    },
    {
        "find_material_by_guid", (PyCFunction)unigine_Materials_find_material_by_guid, METH_STATIC|METH_O,
        "public (static): findMaterialByGUID"
    },
    {
        "find_material_by_file_guid", (PyCFunction)unigine_Materials_find_material_by_file_guid, METH_STATIC|METH_O,
        "public (static): findMaterialByFileGUID"
    },
    {
        "find_material_by_path", (PyCFunction)unigine_Materials_find_material_by_path, METH_STATIC|METH_O,
        "public (static): findMaterialByPath"
    },
    {
        "set_cached_material", (PyCFunction)unigine_Materials_set_cached_material, METH_STATIC|METH_O,
        "public (static): setCachedMaterial"
    },
    {
        "get_cached_material", (PyCFunction)unigine_Materials_get_cached_material, METH_STATIC|METH_NOARGS,
        "public (static): getCachedMaterial"
    },
    {
        "set_cached_state", (PyCFunction)unigine_Materials_set_cached_state, METH_STATIC|METH_VARARGS|METH_KEYWORDS,
        "public (static): setCachedState"
    },
    {
        "remove_material", (PyCFunction)unigine_Materials_remove_material, METH_STATIC|METH_VARARGS|METH_KEYWORDS,
        "public (static): removeMaterial"
    },
    {
        "replace_material", (PyCFunction)unigine_Materials_replace_material, METH_STATIC|METH_VARARGS|METH_KEYWORDS,
        "public (static): replaceMaterial"
    },
    {
        "save_materials", (PyCFunction)unigine_Materials_save_materials, METH_STATIC|METH_NOARGS,
        "public (static): saveMaterials"
    },
    {
        "compile_shaders", (PyCFunction)unigine_Materials_compile_shaders, METH_STATIC|METH_O,
        "public (static): compileShaders"
    },
    {
        "compile_shaders", (PyCFunction)unigine_Materials_compile_shaders, METH_STATIC|METH_NOARGS,
        "public (static): compileShaders"
    },
    {
        "set_precompile_all_shaders", (PyCFunction)unigine_Materials_set_precompile_all_shaders, METH_STATIC|METH_O,
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

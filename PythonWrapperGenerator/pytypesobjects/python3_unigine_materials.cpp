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
    // nothing
    return 0;
}


// public (static): isInitialized
static PyObject * unigine_Materials_is_initialized(unigine_Materials* self_static_null) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    int retOriginal = Unigine::Materials::isInitialized();
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: int
    return ret;
};

// public (static): setLoadingMode
static PyObject * unigine_Materials_set_loading_mode(unigine_Materials* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // Unigine::Materials::LOADING_MODE mode;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    Unigine::Materials::LOADING_MODE mode = PyBytes_AS_STRING(pArg1Str);

    Unigine::Materials::setLoadingMode(mode);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: void
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

    Unigine::Ptr<Unigine::Material> retOriginal = Unigine::Materials::loadMaterial(path);
    ret = PyUnigine::Material::NewObject(retOriginal);

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
    // parse args:
    PyObject *pArg1; // const Unigine::UGUID & guid;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    const Unigine::UGUID & guid = PyBytes_AS_STRING(pArg1Str);

    bool retOriginal = Unigine::Materials::isMaterialGUID(guid);
    ret = PyBool_FromLong(retOriginal);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: bool
    return ret;
};

// public (static): getNumMaterials
static PyObject * unigine_Materials_get_num_materials(unigine_Materials* self_static_null) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    int retOriginal = Unigine::Materials::getNumMaterials();
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: int
    return ret;
};

// public (static): getMaterial
static PyObject * unigine_Materials_get_material(unigine_Materials* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int num;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    int num = PyBytes_AS_STRING(pArg1Str);

    Unigine::Ptr<Unigine::Material> retOriginal = Unigine::Materials::getMaterial(num);
    ret = PyUnigine::Material::NewObject(retOriginal);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: Unigine::Ptr<Unigine::Material>
    return ret;
};

// public (static): findManualMaterial
static PyObject * unigine_Materials_find_manual_material(unigine_Materials* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const char * name;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    const char * name = PyBytes_AS_STRING(pArg1Str);

    Unigine::Ptr<Unigine::Material> retOriginal = Unigine::Materials::findManualMaterial(name);
    ret = PyUnigine::Material::NewObject(retOriginal);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: Unigine::Ptr<Unigine::Material>
    return ret;
};

// public (static): findMaterialByGUID
static PyObject * unigine_Materials_find_material_by_guid(unigine_Materials* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const Unigine::UGUID & guid;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    const Unigine::UGUID & guid = PyBytes_AS_STRING(pArg1Str);

    Unigine::Ptr<Unigine::Material> retOriginal = Unigine::Materials::findMaterialByGUID(guid);
    ret = PyUnigine::Material::NewObject(retOriginal);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: Unigine::Ptr<Unigine::Material>
    return ret;
};

// public (static): findMaterialByFileGUID
static PyObject * unigine_Materials_find_material_by_file_guid(unigine_Materials* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const Unigine::UGUID & guid;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    const Unigine::UGUID & guid = PyBytes_AS_STRING(pArg1Str);

    Unigine::Ptr<Unigine::Material> retOriginal = Unigine::Materials::findMaterialByFileGUID(guid);
    ret = PyUnigine::Material::NewObject(retOriginal);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: Unigine::Ptr<Unigine::Material>
    return ret;
};

// public (static): findMaterialByPath
static PyObject * unigine_Materials_find_material_by_path(unigine_Materials* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const char * path;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    const char * path = PyBytes_AS_STRING(pArg1Str);

    Unigine::Ptr<Unigine::Material> retOriginal = Unigine::Materials::findMaterialByPath(path);
    ret = PyUnigine::Material::NewObject(retOriginal);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: Unigine::Ptr<Unigine::Material>
    return ret;
};

// public (static): setCachedMaterial
static PyObject * unigine_Materials_set_cached_material(unigine_Materials* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const Unigine::Ptr<Unigine::Material> & mat;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    const Unigine::Ptr<Unigine::Material> & mat = PyBytes_AS_STRING(pArg1Str);

    Unigine::Materials::setCachedMaterial(mat);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: void
    return ret;
};

// public (static): getCachedMaterial
static PyObject * unigine_Materials_get_cached_material(unigine_Materials* self_static_null) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    Unigine::Ptr<Unigine::Material> retOriginal = Unigine::Materials::getCachedMaterial();
    ret = PyUnigine::Material::NewObject(retOriginal);

    // end
    // return: Unigine::Ptr<Unigine::Material>
    return ret;
};

// public (static): setCachedState
static PyObject * unigine_Materials_set_cached_state(unigine_Materials* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const char * name;
    PyObject *pArg2; // int value;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    const char * name = PyBytes_AS_STRING(pArg1Str);

    // pArg2
    PyObject* pArg2Repr = PyObject_Repr(pArg2);
    PyObject* pArg2Str = PyUnicode_AsEncodedString(pArg2Repr, "utf-8", "~E~");
    int value = PyBytes_AS_STRING(pArg2Str);

    Unigine::Materials::setCachedState(name, value);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    Py_XDECREF(pArg2Repr);
    Py_XDECREF(pArg2Str);
    // return: void
    return ret;
};

// public (static): removeMaterial
static PyObject * unigine_Materials_remove_material(unigine_Materials* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const Unigine::UGUID & guid;
    PyObject *pArg2; // bool remove_file;
    PyObject *pArg3; // bool remove_children;
    PyArg_ParseTuple(args, "OOO", &pArg1, &pArg2, &pArg3);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    const Unigine::UGUID & guid = PyBytes_AS_STRING(pArg1Str);

    // pArg2
    PyObject* pArg2Repr = PyObject_Repr(pArg2);
    PyObject* pArg2Str = PyUnicode_AsEncodedString(pArg2Repr, "utf-8", "~E~");
    bool remove_file = PyBytes_AS_STRING(pArg2Str);

    // pArg3
    PyObject* pArg3Repr = PyObject_Repr(pArg3);
    PyObject* pArg3Str = PyUnicode_AsEncodedString(pArg3Repr, "utf-8", "~E~");
    bool remove_children = PyBytes_AS_STRING(pArg3Str);

    bool retOriginal = Unigine::Materials::removeMaterial(guid, remove_file, remove_children);
    ret = PyBool_FromLong(retOriginal);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    Py_XDECREF(pArg2Repr);
    Py_XDECREF(pArg2Str);
    Py_XDECREF(pArg3Repr);
    Py_XDECREF(pArg3Str);
    // return: bool
    return ret;
};

// public (static): replaceMaterial
static PyObject * unigine_Materials_replace_material(unigine_Materials* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const Unigine::Ptr<Unigine::Material> & material;
    PyObject *pArg2; // const Unigine::Ptr<Unigine::Material> & new_material;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    const Unigine::Ptr<Unigine::Material> & material = PyBytes_AS_STRING(pArg1Str);

    // pArg2
    PyObject* pArg2Repr = PyObject_Repr(pArg2);
    PyObject* pArg2Str = PyUnicode_AsEncodedString(pArg2Repr, "utf-8", "~E~");
    const Unigine::Ptr<Unigine::Material> & new_material = PyBytes_AS_STRING(pArg2Str);

    bool retOriginal = Unigine::Materials::replaceMaterial(material, new_material);
    ret = PyBool_FromLong(retOriginal);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    Py_XDECREF(pArg2Repr);
    Py_XDECREF(pArg2Str);
    // return: bool
    return ret;
};

// public (static): saveMaterials
static PyObject * unigine_Materials_save_materials(unigine_Materials* self_static_null) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    bool retOriginal = Unigine::Materials::saveMaterials();
    ret = PyBool_FromLong(retOriginal);

    // end
    // return: bool
    return ret;
};

// public (static): compileShaders
static PyObject * unigine_Materials_compile_shaders(unigine_Materials* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const Unigine::Vector<Unigine::Ptr<Unigine::Material>> & materials;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    const Unigine::Vector<Unigine::Ptr<Unigine::Material>> & materials = PyBytes_AS_STRING(pArg1Str);

    Unigine::Materials::compileShaders(materials);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: void
    return ret;
};

// public (static): compileShaders
static PyObject * unigine_Materials_compile_shaders(unigine_Materials* self_static_null) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    Unigine::Materials::compileShaders();

    // end
    // return: void
    return ret;
};

// public (static): setPrecompileAllShaders
static PyObject * unigine_Materials_set_precompile_all_shaders(unigine_Materials* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // bool shaders;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    bool shaders = PyBytes_AS_STRING(pArg1Str);

    Unigine::Materials::setPrecompileAllShaders(shaders);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: void
    return ret;
};

// public (static): isPrecompileAllShaders
static PyObject * unigine_Materials_is_precompile_all_shaders(unigine_Materials* self_static_null) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    bool retOriginal = Unigine::Materials::isPrecompileAllShaders();
    ret = PyBool_FromLong(retOriginal);

    // end
    // return: bool
    return ret;
};

// public (static): reloadMaterials
static PyObject * unigine_Materials_reload_materials(unigine_Materials* self_static_null) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    Unigine::Materials::reloadMaterials();

    // end
    // return: void
    return ret;
};

// public (static): destroyShaders
static PyObject * unigine_Materials_destroy_shaders(unigine_Materials* self_static_null) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    Unigine::Materials::destroyShaders();

    // end
    // return: void
    return ret;
};

// public (static): destroyTextures
static PyObject * unigine_Materials_destroy_textures(unigine_Materials* self_static_null) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    Unigine::Materials::destroyTextures();

    // end
    // return: void
    return ret;
};

// public (static): createShaders
static PyObject * unigine_Materials_create_shaders(unigine_Materials* self_static_null) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    Unigine::Materials::createShaders();

    // end
    // return: void
    return ret;
};


static PyMethodDef unigine_Materials_methods[] = {
    {
        "is_initialized", (PyCFunction)unigine_Materials_is_initialized, METH_STATIC|METH_NOARGS,
        "public (static): isInitialized"
    },
    {
        "set_loading_mode", (PyCFunction)unigine_Materials_set_loading_mode, METH_STATIC|METH_VARARGS,
        "public (static): setLoadingMode"
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
        "get_material", (PyCFunction)unigine_Materials_get_material, METH_STATIC|METH_VARARGS,
        "public (static): getMaterial"
    },
    {
        "find_manual_material", (PyCFunction)unigine_Materials_find_manual_material, METH_STATIC|METH_VARARGS,
        "public (static): findManualMaterial"
    },
    {
        "find_material_by_guid", (PyCFunction)unigine_Materials_find_material_by_guid, METH_STATIC|METH_VARARGS,
        "public (static): findMaterialByGUID"
    },
    {
        "find_material_by_file_guid", (PyCFunction)unigine_Materials_find_material_by_file_guid, METH_STATIC|METH_VARARGS,
        "public (static): findMaterialByFileGUID"
    },
    {
        "find_material_by_path", (PyCFunction)unigine_Materials_find_material_by_path, METH_STATIC|METH_VARARGS,
        "public (static): findMaterialByPath"
    },
    {
        "set_cached_material", (PyCFunction)unigine_Materials_set_cached_material, METH_STATIC|METH_VARARGS,
        "public (static): setCachedMaterial"
    },
    {
        "get_cached_material", (PyCFunction)unigine_Materials_get_cached_material, METH_STATIC|METH_NOARGS,
        "public (static): getCachedMaterial"
    },
    {
        "set_cached_state", (PyCFunction)unigine_Materials_set_cached_state, METH_STATIC|METH_VARARGS,
        "public (static): setCachedState"
    },
    {
        "remove_material", (PyCFunction)unigine_Materials_remove_material, METH_STATIC|METH_VARARGS,
        "public (static): removeMaterial"
    },
    {
        "replace_material", (PyCFunction)unigine_Materials_replace_material, METH_STATIC|METH_VARARGS,
        "public (static): replaceMaterial"
    },
    {
        "save_materials", (PyCFunction)unigine_Materials_save_materials, METH_STATIC|METH_NOARGS,
        "public (static): saveMaterials"
    },
    {
        "compile_shaders", (PyCFunction)unigine_Materials_compile_shaders, METH_STATIC|METH_VARARGS,
        "public (static): compileShaders"
    },
    {
        "compile_shaders", (PyCFunction)unigine_Materials_compile_shaders, METH_STATIC|METH_NOARGS,
        "public (static): compileShaders"
    },
    {
        "set_precompile_all_shaders", (PyCFunction)unigine_Materials_set_precompile_all_shaders, METH_STATIC|METH_VARARGS,
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

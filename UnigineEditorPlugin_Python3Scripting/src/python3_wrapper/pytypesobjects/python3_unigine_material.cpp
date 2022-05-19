
#include "python3_unigine_material.h"
#include <string>
#include <UnigineMaterials.h>
#include <Python.h>
#include <structmember.h>

#include <iostream>

// ------------------------------------------------------------------------------------------
// unigine_Material
typedef struct {
    PyObject_HEAD
    // Type-specific fields go here.
    Unigine::Ptr<Unigine::Material> unigine_object_ptr;
} unigine_Material;

static void unigine_Material_dealloc(unigine_Material* self) {
    // Unigine::Log::message("unigine_Material_dealloc\n");
    Py_TYPE(self)->tp_free((PyObject*)self);
}

static PyObject *unigine_Material_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    // Unigine::Log::message("unigine_Material_new\n");
    unigine_Material *self;
    self = (unigine_Material *)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static int unigine_Material_init(unigine_Material *self, PyObject *args, PyObject *kwds) {
    // nothing
    return 0;
}

static PyObject *unigine_Material_get_manual_name(unigine_Material* self) {
    PyErr_Clear();
    // const char *sName = RUN_IN_MAIN_THREAD(self->unigine_object_ptr->getName())

    PyObject *pName = Py_BuildValue("s", self->unigine_object_ptr->getManualName());
    return PyUnicode_FromFormat("%S", pName);
}

static PyObject *
unigine_Material_set_shadow_mask(unigine_Material* self, PyObject *arg)
{
    PyErr_Clear();
    PyObject *ret = NULL;
    assert(arg);

    //
    // int val;
    // PyArg_ParseTuple(args, "i", &val);

    // int n = PyInt_AsInt(arg);
    uint32_t nVal = PyLong_AsLong(arg);
    // RUN_IN_MAIN_THREAD(self->unigine_object_ptr->setShadowMask(nVal))
    
    self->unigine_object_ptr->setShadowMask(nVal);
    
    Py_INCREF(Py_None);
    ret = Py_None;
    assert(! PyErr_Occurred());
    assert(ret);
    goto finally;
except:
    Py_XDECREF(ret);
    ret = NULL;
finally:
    /* If we were to treat arg as a borrowed reference and had Py_INCREF'd above we
     * should do this. See below. */
    // Py_DECREF(arg);
    return ret;
}

static PyMethodDef unigine_Material_methods[] = {
    {
        "get_manual_name", (PyCFunction)unigine_Material_get_manual_name, METH_NOARGS,
        "Return the name of material"
    },
    {
        "set_shadow_mask", (PyCFunction)unigine_Material_set_shadow_mask, METH_O,
        "Return the name of material"
    },
    {NULL}  /* Sentinel */
};

static PyTypeObject unigine_MaterialType = {
    // PyVarObject_HEAD_INIT(&PyType_Type, 0)
    // PyVarObject_HEAD_INIT(NULL, 0)
    // .tp_name = "unigine.Material",
    // .tp_basicsize = sizeof(unigine_Material) + 16, // magic!!!
    // .tp_dealloc = (destructor)unigine_Material_dealloc,
    // .tp_flags = Py_TPFLAGS_DEFAULT, // | Py_TPFLAGS_BASETYPE,
    // .tp_doc = "Material Object",
    // .tp_methods = unigine_Material_methods,
    // .tp_members = 0,
    // .tp_dict = 0,
    // .tp_init = (initproc)unigine_Material_init,
    // .tp_new = unigine_Material_new,


    PyVarObject_HEAD_INIT(NULL, 0)
    "unigine.Material",             // tp_name
    sizeof(unigine_Material) + 16, // tp_basicsize  (magic 16 bytes!!!)
    0,                         // tp_itemsize 
    (destructor)unigine_Material_dealloc,   // tp_dealloc
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
    "Material Object",         // tp_doc 
    0,                         // traverseproc tp_traverse
    0,                         // inquiry tp_clear
    0,                         // richcmpfunc tp_richcompare
    0,                         // Py_ssize_t tp_weaklistoffset
    0,                         // getiterfunc tp_iter
    0,                         // iternextfunc tp_iternext
    unigine_Material_methods, // tp_methods
    0, // tp_members
    0, // tp_getset
    0, // tp_base
    0, // tp_dict
    0, // tp_descr_get
    0, // tp_descr_set
    0, // tp_dictoffset
    (initproc)unigine_Material_init, // tp_init
    0, // tp_alloc
    unigine_Material_new, // tp_new
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

PyObject * PyUnigineMaterial::NewObject(Unigine::Ptr<Unigine::Material> unigine_object_ptr) {

    std::cout << "sizeof(unigine_Material) = " << sizeof(unigine_Material) << std::endl;

    unigine_Material *pInst = PyObject_New(unigine_Material, &unigine_MaterialType);
    pInst->unigine_object_ptr = unigine_object_ptr;
    // Py_INCREF(pInst);
    return (PyObject *)pInst;
}

// UniginePyTypeObjectMaterial

bool Python3UnigineMaterial::isReady() {
    // Initialize tp_dict with empty dictionary
    std::cout << "sizeof(unigine_Material) = " << sizeof(unigine_Material) << std::endl;
    std::cout << "sizeof(Unigine::Ptr<Unigine::Material>) = " << sizeof(Unigine::Ptr<Unigine::Material>) << std::endl;
        // Unigine::Ptr<Unigine::Material> material
    if (!unigine_MaterialType.tp_dict) {
        unigine_MaterialType.tp_dict = PyDict_New();

        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "OPTION_ORDER",
            Py_BuildValue("i", Unigine::Material::OPTION_ORDER)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "OPTION_SHADOW_MASK",
            Py_BuildValue("i", Unigine::Material::OPTION_SHADOW_MASK)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "OPTION_VIEWPORT_MASK",
            Py_BuildValue("i", Unigine::Material::OPTION_VIEWPORT_MASK)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "OPTION_TRANSPARENT",
            Py_BuildValue("i", Unigine::Material::OPTION_TRANSPARENT)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "OPTION_DEPTH_MASK",
            Py_BuildValue("i", Unigine::Material::OPTION_DEPTH_MASK)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "OPTION_DEPTH_TEST",
            Py_BuildValue("i", Unigine::Material::OPTION_DEPTH_TEST)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "OPTION_TWO_SIDED",
            Py_BuildValue("i", Unigine::Material::OPTION_TWO_SIDED)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "OPTION_CAST_PROJ_OMNI_SHADOW",
            Py_BuildValue("i", Unigine::Material::OPTION_CAST_PROJ_OMNI_SHADOW)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "OPTION_CAST_WORLD_SHADOW",
            Py_BuildValue("i", Unigine::Material::OPTION_CAST_WORLD_SHADOW)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "OPTION_OVERLAP",
            Py_BuildValue("i", Unigine::Material::OPTION_OVERLAP)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TRANSPARENT_NONE",
            Py_BuildValue("i", Unigine::Material::TRANSPARENT_NONE)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TRANSPARENT_ALPHA_TEST",
            Py_BuildValue("i", Unigine::Material::TRANSPARENT_ALPHA_TEST)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TRANSPARENT_BLEND",
            Py_BuildValue("i", Unigine::Material::TRANSPARENT_BLEND)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TRANSPARENT_WATER",
            Py_BuildValue("i", Unigine::Material::TRANSPARENT_WATER)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "STATE_TOGGLE",
            Py_BuildValue("i", Unigine::Material::STATE_TOGGLE)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "STATE_SWITCH",
            Py_BuildValue("i", Unigine::Material::STATE_SWITCH)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "STATE_INT",
            Py_BuildValue("i", Unigine::Material::STATE_INT)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_CURVE",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_CURVE)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_GBUFFER_ALBEDO",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_GBUFFER_ALBEDO)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_GBUFFER_SHADING",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_GBUFFER_SHADING)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_GBUFFER_NORMAL",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_GBUFFER_NORMAL)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_GBUFFER_VELOCITY",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_GBUFFER_VELOCITY)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_GBUFFER_MATERIAL_MASK",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_GBUFFER_MATERIAL_MASK)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_GBUFFER_FEATURES",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_GBUFFER_FEATURES)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_AUXILIARY",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_AUXILIARY)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_REFRACTION",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_REFRACTION)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_REFRACTION_MASK",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_REFRACTION_MASK)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_TRANSPARENT_BLUR",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_TRANSPARENT_BLUR)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_LIGHTS",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_LIGHTS)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_BENT_NORMAL",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_BENT_NORMAL)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_SSAO",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_SSAO)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_SSGI",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_SSGI)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_SSR",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_SSR)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_CURVATURE",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_CURVATURE)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_DOF_MASK",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_DOF_MASK)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_AUTO_EXPOSURE",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_AUTO_EXPOSURE)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_SCREEN_COLOR",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_SCREEN_COLOR)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_SCREEN_COLOR_OLD",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_SCREEN_COLOR_OLD)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_NORMAL_UNPACK",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_NORMAL_UNPACK)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_CURRENT_DEPTH",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_CURRENT_DEPTH)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_OPACITY_DEPTH",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_OPACITY_DEPTH)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_LINEAR_DEPTH",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_LINEAR_DEPTH)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_LIGHT_IMAGE",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_LIGHT_IMAGE)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_LIGHT_SHADOW_DEPTH",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_LIGHT_SHADOW_DEPTH)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_LIGHT_SHADOW_COLOR",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_LIGHT_SHADOW_COLOR)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_TRANSPARENT_ENVIRONMENT",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_TRANSPARENT_ENVIRONMENT)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_REFLECTION_2D",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_REFLECTION_2D)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_REFLECTION_CUBE",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_REFLECTION_CUBE)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_SCATTERING_SKY_LUT",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_SCATTERING_SKY_LUT)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_WBUFFER_CONSTANT_ID",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_WBUFFER_CONSTANT_ID)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_WBUFFER_DIFFUSE",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_WBUFFER_DIFFUSE)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_WBUFFER_NORMAL",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_WBUFFER_NORMAL)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_WBUFFER_WATER",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_WBUFFER_WATER)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_WBUFFER_SS_ENVIRONMENT",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_WBUFFER_SS_ENVIRONMENT)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_WBUFFER_WU_MASK",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_WBUFFER_WU_MASK)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_WBUFFER_PLANAR_REFLECTION",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_WBUFFER_PLANAR_REFLECTION)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_CLOUDS_SCREEN",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_CLOUDS_SCREEN)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_CLOUDS_STATIC_COVERAGE",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_CLOUDS_STATIC_COVERAGE)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_CLOUDS_DYNAMIC_COVERAGE",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_CLOUDS_DYNAMIC_COVERAGE)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_TERRAIN_GLOBAL_DEPTH",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_TERRAIN_GLOBAL_DEPTH)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_TERRAIN_GLOBAL_FLAT_POSITION",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_TERRAIN_GLOBAL_FLAT_POSITION)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_FIELD_HEIGHT_ARRAY",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_FIELD_HEIGHT_ARRAY)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_FIELD_SHORELINE_ARRAY",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_FIELD_SHORELINE_ARRAY)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_DECAL_DEPTH",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_DECAL_DEPTH)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_DECAL_ALBEDO",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_DECAL_ALBEDO)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_DECAL_NORMAL",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_DECAL_NORMAL)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_DECAL_SHADING",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_DECAL_SHADING)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_PROCEDURAL",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_PROCEDURAL)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_CUSTOM",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_CUSTOM)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "PARAMETER_FLOAT",
            Py_BuildValue("i", Unigine::Material::PARAMETER_FLOAT)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "PARAMETER_FLOAT2",
            Py_BuildValue("i", Unigine::Material::PARAMETER_FLOAT2)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "PARAMETER_FLOAT3",
            Py_BuildValue("i", Unigine::Material::PARAMETER_FLOAT3)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "PARAMETER_FLOAT4",
            Py_BuildValue("i", Unigine::Material::PARAMETER_FLOAT4)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "PARAMETER_INT",
            Py_BuildValue("i", Unigine::Material::PARAMETER_INT)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "PARAMETER_INT2",
            Py_BuildValue("i", Unigine::Material::PARAMETER_INT2)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "PARAMETER_INT3",
            Py_BuildValue("i", Unigine::Material::PARAMETER_INT3)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "PARAMETER_INT4",
            Py_BuildValue("i", Unigine::Material::PARAMETER_INT4)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "PARAMETER_ARRAY_FLOAT",
            Py_BuildValue("i", Unigine::Material::PARAMETER_ARRAY_FLOAT)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "PARAMETER_ARRAY_FLOAT2",
            Py_BuildValue("i", Unigine::Material::PARAMETER_ARRAY_FLOAT2)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "PARAMETER_ARRAY_FLOAT4",
            Py_BuildValue("i", Unigine::Material::PARAMETER_ARRAY_FLOAT4)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "PARAMETER_ARRAY_INT",
            Py_BuildValue("i", Unigine::Material::PARAMETER_ARRAY_INT)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "PARAMETER_ARRAY_INT2",
            Py_BuildValue("i", Unigine::Material::PARAMETER_ARRAY_INT2)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "PARAMETER_ARRAY_INT4",
            Py_BuildValue("i", Unigine::Material::PARAMETER_ARRAY_INT4)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "PARAMETER_COMBINER",
            Py_BuildValue("i", Unigine::Material::PARAMETER_COMBINER)
        );
    }
    if (PyType_Ready(&unigine_MaterialType) < 0) {
        return false;
    }
    return true;
}

bool Python3UnigineMaterial::addClassDefinitionToModule(PyObject* pModule) {
    Py_INCREF(&unigine_MaterialType);
    if (PyModule_AddObject(pModule, "Material", (PyObject *)&unigine_MaterialType) < 0) {
        Py_DECREF(&unigine_MaterialType);
        return false;
    }
    return true;
}


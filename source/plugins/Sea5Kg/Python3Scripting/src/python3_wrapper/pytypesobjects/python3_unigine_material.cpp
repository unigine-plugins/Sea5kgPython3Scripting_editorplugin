// this file automaticly generated from UnigineMaterial.h
#include "python3_unigine_material.h"

#include <string>
#include <UnigineMaterial.h>
#include <UnigineLog.h>
#include <Python.h>
#include <structmember.h>

#include <iostream>

namespace PyUnigine {

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


// public (static): create
static PyObject * unigine_Material_create() {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: Unigine::Ptr<Unigine::Material>

    Unigine::Ptr<Unigine::Material> pMat = Unigine::Material::create();

    ret = PyUnigine::Material::NewObject(pMat);
    return ret;
}
// public : setParent
// public : getParent
// public : isParent
// public : isParent
// public : getBaseMaterial
// public : getNumChildren
// public : getChild
// public : clone
// public : clone
// public : inherit
// public : inherit
// public : getNamespaceName
// public : getManualName
// public : getGUID
// public : getPath
// public : isNodeTypeSupported
// public : isNodeSupported
// public : canRenderNode
static PyObject * unigine_Material_can_render_node(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: bool

    bool retOriginal = self->unigine_object_ptr->canRenderNode();
    ret = PyBool_FromLong(retOriginal);
    return ret;
};

// public : getNumUIItems
// public : getUIItemDataType
// public : getUIItemDataID
// public : isUIItemHidden
// public : getUIItemTitle
// public : getUIItemTooltip
// public : getUIItemWidget
// public : getUIItemParent
// public : getUIItemNumChildren
// public : getUIItemChild
// public : isUIItemSliderMinExpand
// public : isUIItemSliderMaxExpand
// public : getUIItemSliderMinValue
// public : getUIItemSliderMaxValue
// public : getUIItemGroupToggleStateID
// public : isUIItemGroupCollapsed
// public (static): widgetToString
// public (static): stringToWidget
// public : setOption
// public : getOption
// public : isOptionOverridden
// public : resetOption
// public : setTransparent
// public : getTransparent
// public : isWater
static PyObject * unigine_Material_is_water(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    bool retOriginal = self->unigine_object_ptr->isWater();
    ret = PyBool_FromLong(retOriginal);

    // end 
    // return: bool
    return ret;
};

// public : isDeferred
static PyObject * unigine_Material_is_deferred(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    bool retOriginal = self->unigine_object_ptr->isDeferred();
    ret = PyBool_FromLong(retOriginal);

    // end 
    // return: bool
    return ret;
};

// public : isForward
static PyObject * unigine_Material_is_forward(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    bool retOriginal = self->unigine_object_ptr->isForward();
    ret = PyBool_FromLong(retOriginal);

    // end 
    // return: bool
    return ret;
};

// public : isAlphaTest
static PyObject * unigine_Material_is_alpha_test(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    bool retOriginal = self->unigine_object_ptr->isAlphaTest();
    ret = PyBool_FromLong(retOriginal);

    // end 
    // return: bool
    return ret;
};

// public : setBlendDestFunc
// public : getBlendDestFunc
// public : setBlendSrcFunc
// public : getBlendSrcFunc

// public : setShadowMask
static PyObject * unigine_Material_set_shadow_mask(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int mask;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    // int n = PyInt_AsInt(arg);
    uint32_t mask = PyLong_AsLong(pArg1);
    self->unigine_object_ptr->setShadowMask(mask);

    Py_INCREF(Py_None);
    ret = Py_None;
    assert(! PyErr_Occurred());
    assert(ret);
    goto finally;
except:
    Py_XDECREF(ret);
    ret = NULL;
finally:
    // end
    // Py_DECREF(arg);
    // return: void
    return ret;
};

// public : getShadowMask
static PyObject * unigine_Material_get_shadow_mask(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    int retOrig = self->unigine_object_ptr->getShadowMask();
    ret = PyLong_FromLong(retOrig);
    // args:
    // return: int
    return ret;
};
// public : setViewportMask
// public : getViewportMask
// public : setDepthMask
// public : getDepthMask
// public : setOrder
// public : getOrder
// public : setCastShadow
// public : isCastShadow
static PyObject * unigine_Material_is_cast_shadow(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: bool

    bool retOriginal = self->unigine_object_ptr->isCastShadow();
    ret = PyBool_FromLong(retOriginal);
    return ret;
};

// public : setCastWorldShadow
// public : isCastWorldShadow
static PyObject * unigine_Material_is_cast_world_shadow(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: bool

    bool retOriginal = self->unigine_object_ptr->isCastWorldShadow();
    ret = PyBool_FromLong(retOriginal);
    return ret;
};

// public : setDepthTest
// public : isDepthTest
static PyObject * unigine_Material_is_depth_test(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: bool

    bool retOriginal = self->unigine_object_ptr->isDepthTest();
    ret = PyBool_FromLong(retOriginal);
    return ret;
};

// public : setTwoSided
// public : isTwoSided
static PyObject * unigine_Material_is_two_sided(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: bool

    bool retOriginal = self->unigine_object_ptr->isTwoSided();
    ret = PyBool_FromLong(retOriginal);
    return ret;
};

// public : setOverlap
// public : isOverlap
static PyObject * unigine_Material_is_overlap(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: bool

    bool retOriginal = self->unigine_object_ptr->isOverlap();
    ret = PyBool_FromLong(retOriginal);
    return ret;
};

// public : checkShaderCache
// public : checkShaderCache
// public : compileShader
// public : fetchShader
// public : fetchShader
// public : fetchShader
// public : fetchShader
// public : createShaders
// public : destroyTextures
// public : getNumParameters
// public : findParameter
// public : resetParameter
// public : checkParameterConditions
// public : getParameterType
// public : isParameterInt
// public : isParameterFloat
// public : isParameterOverridden
// public : getParameterName
// public : isParameterExpressionEnabled
// public : setParameterExpressionEnabled
// public : getParameterExpression
// public : setParameterExpression
// public : setParameterFloat
// public : setParameterFloat
// public : getParameterFloat
// public : getParameterFloat
// public : setParameterFloat2
// public : setParameterFloat2
// public : getParameterFloat2
// public : getParameterFloat2
// public : setParameterFloat3
// public : setParameterFloat3
// public : getParameterFloat3
// public : getParameterFloat3
// public : setParameterFloat4
// public : setParameterFloat4
// public : getParameterFloat4
// public : getParameterFloat4
// public : setParameterInt
// public : setParameterInt
// public : getParameterInt
// public : getParameterInt
// public : setParameterInt2
// public : setParameterInt2
// public : getParameterInt2
// public : getParameterInt2
// public : setParameterInt3
// public : setParameterInt3
// public : getParameterInt3
// public : getParameterInt3
// public : setParameterInt4
// public : setParameterInt4
// public : getParameterInt4
// public : getParameterInt4
// public : getParameterArraySize
// public : isParameterArray
// public : getParameterArray
// public : setParameterArray
// public : getParameterArray
// public : setParameterArray
// public : getParameterArray
// public : setParameterArray
// public : getParameterArray
// public : setParameterArray
// public : getParameterArray
// public : setParameterArray
// public : getParameterArray
// public : setParameterArray
// public : getNumStates
// public : findState
// public : isStateOverridden
// public : isStateInternal
// public : resetState
// public : checkStateConditions
// public : getStateName
// public : getStateSwitchItem
// public : getStateSwitchNumItems
// public : getStateType
// public : getState
// public : setState
// public : getState
// public : setState
// public : getNumTextures
// public : findTexture
static PyObject * unigine_Material_find_texture(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const char * name;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    const char * name = PyBytes_AS_STRING(pArg1Str);

    int retOriginal = self->unigine_object_ptr->findTexture(name);
    ret = PyLong_FromLong(retOriginal);

    // end 
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: int
    return ret;
};

// public : isTextureOverridden
// public : isTextureLoaded
// public : isTextureInternal
// public : resetTexture
// public : checkTextureConditions
// public : getTextureName
// public : getTextureUnit
// public : isTextureEditable
// public : getTextureSource
// public : getTextureSamplerFlags
// public : setTextureSamplerFlags
// public : getTextureFormatFlags
// public : getTextureImage
// public : setTextureImage
// public : getTexture
// public : getTexture
// public : setTexture
// public : setTexture
// public : setTexturePath
// public : getTexturePath
// public : setTexturePath
// public : getTexturePath
// public : getTextureRamp
// public : getTextureRampOverride
// public : isEditable
// public : isHidden
// public : isBase
// public : isBrush
// public : isLegacy
// public : isPreviewHidden
// public : isReflection2D
// public : isInternal
// public : isManual
static PyObject * unigine_Material_is_manual(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    bool retOriginal = self->unigine_object_ptr->isManual();
    ret = PyBool_FromLong(retOriginal);

    // end 
    // return: bool
    return ret;
};

// public : canSave
// public : isAutoSave
// public : isFileEngine
// public : isEmpty
// public : hasOverrides
// public : saveState
// public : restoreState
// public : loadXml
// public : saveXml
// public : loadUlon
// public : load
// public : save
static PyObject * unigine_Material_save(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    bool retOriginal = self->unigine_object_ptr->save();
    ret = PyBool_FromLong(retOriginal);

    // end 
    // return: bool
    return ret;
};

// public : reload
static PyObject * unigine_Material_reload(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    bool retOriginal = self->unigine_object_ptr->reload();
    ret = PyBool_FromLong(retOriginal);

    // end 
    // return: bool
    return ret;
};

// public : createMaterialFile
// public : getRenderPass
// public : getRenderPassName
// public : runExpression
// public : renderScreen
// public : renderScreen
// public : renderCompute
// public : renderCompute



static PyObject *unigine_Material_get_manual_name(unigine_Material* self) {
    PyErr_Clear();
    // const char *sName = RUN_IN_MAIN_THREAD(self->unigine_object_ptr->getName())

    PyObject *pName = Py_BuildValue("s", self->unigine_object_ptr->getManualName());
    return PyUnicode_FromFormat("%S", pName);
}


static PyMethodDef unigine_Material_methods[] = {
    {
        "create", (PyCFunction)unigine_Material_create, METH_STATIC|METH_NOARGS,
        "public (static): create"
    },
    {
        "get_manual_name", (PyCFunction)unigine_Material_get_manual_name, METH_NOARGS,
        "public : getManualName"
    },
    {
        "set_shadow_mask", (PyCFunction)unigine_Material_set_shadow_mask, METH_VARARGS,
        "public : setShadowMask"
    },
    {
        "get_shadow_mask", (PyCFunction)unigine_Material_get_shadow_mask, METH_NOARGS,
        "public : getShadowMask"
    },
    {
        "is_cast_shadow", (PyCFunction)unigine_Material_is_cast_shadow, METH_NOARGS,
        "public : isCastShadow"
    },
    {
        "find_texture", (PyCFunction)unigine_Material_find_texture, METH_VARARGS,
        "public : findTexture"
    },
    {
        "save", (PyCFunction)unigine_Material_save, METH_NOARGS,
        "public : save"
    },
    {
        "reload", (PyCFunction)unigine_Material_reload, METH_NOARGS,
        "public : reload"
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

PyObject * Material::NewObject(Unigine::Ptr<Unigine::Material> unigine_object_ptr) {

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
            unigine_MaterialType.tp_dict, "OPTION_TRANSPARENT",
            Py_BuildValue("i", Unigine::Material::OPTION_TRANSPARENT)
        );
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
            unigine_MaterialType.tp_dict, "OPTION_BLEND_SRC",
            Py_BuildValue("i", Unigine::Material::OPTION_BLEND_SRC)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "OPTION_BLEND_DEST",
            Py_BuildValue("i", Unigine::Material::OPTION_BLEND_DEST)
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
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_ASSET",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_ASSET)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_RAMP",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_RAMP)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_PROCEDURAL",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_PROCEDURAL)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_SURFACE_CUSTOM_TEXTURE",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_SURFACE_CUSTOM_TEXTURE)
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
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_SSAO",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_SSAO)
        );
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_SSGI",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_SSGI)
        );
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_SSR",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_SSR)
        );
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_CURVATURE",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_CURVATURE)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_SHADOW_SHAFTS",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_SHADOW_SHAFTS)
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
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_AUTO_WHITE_BALANCE",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_AUTO_WHITE_BALANCE)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_SCREEN_COLOR",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_SCREEN_COLOR)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_SCREEN_COLOR_OPACITY",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_SCREEN_COLOR_OPACITY)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_SCREEN_COLOR_OLD",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_SCREEN_COLOR_OLD)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_SCREEN_COLOR_OLD_REPROJECTION",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_SCREEN_COLOR_OLD_REPROJECTION)
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
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_HAZE_AMBIENT",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_HAZE_AMBIENT)
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
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_WBUFFER_OPACITY_SCREEN",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_WBUFFER_OPACITY_SCREEN)
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
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_CLOUDS_REGION_MASK",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_CLOUDS_REGION_MASK)
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
        // enum_typename: DATA_TYPE
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "DATA_TYPE_OPTION",
            Py_BuildValue("i", Unigine::Material::DATA_TYPE_OPTION)
        );
        // enum_typename: DATA_TYPE
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "DATA_TYPE_STATE",
            Py_BuildValue("i", Unigine::Material::DATA_TYPE_STATE)
        );
        // enum_typename: DATA_TYPE
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "DATA_TYPE_PARAMETER",
            Py_BuildValue("i", Unigine::Material::DATA_TYPE_PARAMETER)
        );
        // enum_typename: DATA_TYPE
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "DATA_TYPE_TEXTURE",
            Py_BuildValue("i", Unigine::Material::DATA_TYPE_TEXTURE)
        );
        // enum_typename: DATA_TYPE
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "DATA_TYPE_GROUP",
            Py_BuildValue("i", Unigine::Material::DATA_TYPE_GROUP)
        );
        // enum_typename: WIDGET
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "WIDGET_EDIT_INT",
            Py_BuildValue("i", Unigine::Material::WIDGET_EDIT_INT)
        );
        // enum_typename: WIDGET
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "WIDGET_EDIT_INT2",
            Py_BuildValue("i", Unigine::Material::WIDGET_EDIT_INT2)
        );
        // enum_typename: WIDGET
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "WIDGET_EDIT_INT3",
            Py_BuildValue("i", Unigine::Material::WIDGET_EDIT_INT3)
        );
        // enum_typename: WIDGET
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "WIDGET_EDIT_INT4",
            Py_BuildValue("i", Unigine::Material::WIDGET_EDIT_INT4)
        );
        // enum_typename: WIDGET
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "WIDGET_EDIT_FLOAT",
            Py_BuildValue("i", Unigine::Material::WIDGET_EDIT_FLOAT)
        );
        // enum_typename: WIDGET
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "WIDGET_EDIT_FLOAT2",
            Py_BuildValue("i", Unigine::Material::WIDGET_EDIT_FLOAT2)
        );
        // enum_typename: WIDGET
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "WIDGET_EDIT_FLOAT3",
            Py_BuildValue("i", Unigine::Material::WIDGET_EDIT_FLOAT3)
        );
        // enum_typename: WIDGET
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "WIDGET_EDIT_FLOAT4",
            Py_BuildValue("i", Unigine::Material::WIDGET_EDIT_FLOAT4)
        );
        // enum_typename: WIDGET
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "WIDGET_TOGGLE",
            Py_BuildValue("i", Unigine::Material::WIDGET_TOGGLE)
        );
        // enum_typename: WIDGET
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "WIDGET_COMBOBOX",
            Py_BuildValue("i", Unigine::Material::WIDGET_COMBOBOX)
        );
        // enum_typename: WIDGET
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "WIDGET_TEXTURE_ASSET",
            Py_BuildValue("i", Unigine::Material::WIDGET_TEXTURE_ASSET)
        );
        // enum_typename: WIDGET
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "WIDGET_TEXTURE_RAMP",
            Py_BuildValue("i", Unigine::Material::WIDGET_TEXTURE_RAMP)
        );
        // enum_typename: WIDGET
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "WIDGET_ACCORDION",
            Py_BuildValue("i", Unigine::Material::WIDGET_ACCORDION)
        );
        // enum_typename: WIDGET
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "WIDGET_SLIDER",
            Py_BuildValue("i", Unigine::Material::WIDGET_SLIDER)
        );
        // enum_typename: WIDGET
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "WIDGET_COLOR",
            Py_BuildValue("i", Unigine::Material::WIDGET_COLOR)
        );
        // enum_typename: WIDGET
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "WIDGET_UV",
            Py_BuildValue("i", Unigine::Material::WIDGET_UV)
        );
        // enum_typename: WIDGET
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "WIDGET_MASK24",
            Py_BuildValue("i", Unigine::Material::WIDGET_MASK24)
        );
        // enum_typename: WIDGET
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "WIDGET_MASK32",
            Py_BuildValue("i", Unigine::Material::WIDGET_MASK32)
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

}; // namespace PyUnigine

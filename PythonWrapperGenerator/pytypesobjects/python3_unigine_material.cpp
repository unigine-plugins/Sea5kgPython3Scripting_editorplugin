// this file automaticly generated from UnigineMaterial.h
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


// public (static): create
static PyObject * unigine_Material_create() {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: Unigine::Ptr<Unigine::Material>
    return ret;
};

// public : setParent
static PyObject * unigine_Material_set_parent(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // Unigine::Ptr<Unigine::Material>const & material
    // bool save_all_values
    // return: bool
    return ret;
};

// public : getParent
static PyObject * unigine_Material_get_parent(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: Unigine::Ptr<Unigine::Material>
    return ret;
};

// public : isParent
static PyObject * unigine_Material_is_parent(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // Unigine::Ptr<Unigine::Material>const & parent
    // return: bool
    return ret;
};

// public : isParent
static PyObject * unigine_Material_is_parent(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // Unigine::UGUIDconst & guid
    // return: bool
    return ret;
};

// public : getBaseMaterial
static PyObject * unigine_Material_get_base_material(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: Unigine::Ptr<Unigine::Material>
    return ret;
};

// public : getNumChildren
static PyObject * unigine_Material_get_num_children(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: int
    return ret;
};

// public : getChild
static PyObject * unigine_Material_get_child(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int num
    // return: Unigine::Ptr<Unigine::Material>
    return ret;
};

// public : clone
static PyObject * unigine_Material_clone(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // Unigine::UGUIDconst & guid
    // return: Unigine::Ptr<Unigine::Material>
    return ret;
};

// public : clone
static PyObject * unigine_Material_clone(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: Unigine::Ptr<Unigine::Material>
    return ret;
};

// public : inherit
static PyObject * unigine_Material_inherit(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // Unigine::UGUIDconst & guid
    // return: Unigine::Ptr<Unigine::Material>
    return ret;
};

// public : inherit
static PyObject * unigine_Material_inherit(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: Unigine::Ptr<Unigine::Material>
    return ret;
};

// public : getNamespaceName
static PyObject * unigine_Material_get_namespace_name(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: const  *char
    return ret;
};

// public : getManualName
static PyObject * unigine_Material_get_manual_name(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: const  *char
    return ret;
};

// public : getGUID
static PyObject * unigine_Material_get_g_u_i_d(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: Unigine::UGUID
    return ret;
};

// public : getPath
static PyObject * unigine_Material_get_path(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: const  *char
    return ret;
};

// public : isNodeTypeSupported
static PyObject * unigine_Material_is_node_type_supported(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // TYPE type
    // return: bool
    return ret;
};

// public : isNodeSupported
static PyObject * unigine_Material_is_node_supported(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // Unigine::Ptr<Unigine::Node>const & node
    // return: bool
    return ret;
};

// public : canRenderNode
static PyObject * unigine_Material_can_render_node(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: bool
    return ret;
};

// public : getNumUIItems
static PyObject * unigine_Material_get_num_u_i_items(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: int
    return ret;
};

// public : getUIItemDataType
static PyObject * unigine_Material_get_u_i_item_data_type(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int item
    // return: DATA_TYPE
    return ret;
};

// public : getUIItemDataID
static PyObject * unigine_Material_get_u_i_item_data_i_d(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int item
    // return: int
    return ret;
};

// public : isUIItemHidden
static PyObject * unigine_Material_is_u_i_item_hidden(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int item
    // return: bool
    return ret;
};

// public : getUIItemTitle
static PyObject * unigine_Material_get_u_i_item_title(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int item
    // return: const  *char
    return ret;
};

// public : getUIItemTooltip
static PyObject * unigine_Material_get_u_i_item_tooltip(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int item
    // return: const  *char
    return ret;
};

// public : getUIItemWidget
static PyObject * unigine_Material_get_u_i_item_widget(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int item
    // return: WIDGET
    return ret;
};

// public : getUIItemParent
static PyObject * unigine_Material_get_u_i_item_parent(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int item
    // return: int
    return ret;
};

// public : getUIItemNumChildren
static PyObject * unigine_Material_get_u_i_item_num_children(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int item
    // return: int
    return ret;
};

// public : getUIItemChild
static PyObject * unigine_Material_get_u_i_item_child(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int item
    // int num
    // return: int
    return ret;
};

// public : isUIItemSliderMinExpand
static PyObject * unigine_Material_is_u_i_item_slider_min_expand(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int item
    // return: bool
    return ret;
};

// public : isUIItemSliderMaxExpand
static PyObject * unigine_Material_is_u_i_item_slider_max_expand(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int item
    // return: bool
    return ret;
};

// public : getUIItemSliderMinValue
static PyObject * unigine_Material_get_u_i_item_slider_min_value(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int item
    // return: float
    return ret;
};

// public : getUIItemSliderMaxValue
static PyObject * unigine_Material_get_u_i_item_slider_max_value(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int item
    // return: float
    return ret;
};

// public : getUIItemGroupToggleStateID
static PyObject * unigine_Material_get_u_i_item_group_toggle_state_i_d(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int item
    // return: int
    return ret;
};

// public : isUIItemGroupCollapsed
static PyObject * unigine_Material_is_u_i_item_group_collapsed(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int item
    // return: bool
    return ret;
};

// public (static): widgetToString
static PyObject * unigine_Material_widget_to_string(PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // WIDGET widget
    // return: const  *char
    return ret;
};

// public (static): stringToWidget
static PyObject * unigine_Material_string_to_widget(PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // const  *char str
    // return: WIDGET
    return ret;
};

// public : setOption
static PyObject * unigine_Material_set_option(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int num
    // int value
    // return: void
    return ret;
};

// public : getOption
static PyObject * unigine_Material_get_option(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int num
    // return: int
    return ret;
};

// public : isOptionOverridden
static PyObject * unigine_Material_is_option_overridden(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int num
    // return: bool
    return ret;
};

// public : resetOption
static PyObject * unigine_Material_reset_option(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int num
    // return: void
    return ret;
};

// public : setTransparent
static PyObject * unigine_Material_set_transparent(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int transparent
    // return: void
    return ret;
};

// public : getTransparent
static PyObject * unigine_Material_get_transparent(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: int
    return ret;
};

// public : isWater
static PyObject * unigine_Material_is_water(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: bool
    return ret;
};

// public : isDeferred
static PyObject * unigine_Material_is_deferred(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: bool
    return ret;
};

// public : isForward
static PyObject * unigine_Material_is_forward(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: bool
    return ret;
};

// public : isAlphaTest
static PyObject * unigine_Material_is_alpha_test(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: bool
    return ret;
};

// public : setBlendDestFunc
static PyObject * unigine_Material_set_blend_dest_func(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int func
    // return: void
    return ret;
};

// public : getBlendDestFunc
static PyObject * unigine_Material_get_blend_dest_func(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: int
    return ret;
};

// public : setBlendSrcFunc
static PyObject * unigine_Material_set_blend_src_func(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int func
    // return: void
    return ret;
};

// public : getBlendSrcFunc
static PyObject * unigine_Material_get_blend_src_func(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: int
    return ret;
};

// public : setShadowMask
static PyObject * unigine_Material_set_shadow_mask(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int mask
    // return: void
    return ret;
};

// public : getShadowMask
static PyObject * unigine_Material_get_shadow_mask(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: int
    return ret;
};

// public : setViewportMask
static PyObject * unigine_Material_set_viewport_mask(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int mask
    // return: void
    return ret;
};

// public : getViewportMask
static PyObject * unigine_Material_get_viewport_mask(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: int
    return ret;
};

// public : setDepthMask
static PyObject * unigine_Material_set_depth_mask(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int mask
    // return: void
    return ret;
};

// public : getDepthMask
static PyObject * unigine_Material_get_depth_mask(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: int
    return ret;
};

// public : setOrder
static PyObject * unigine_Material_set_order(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int order
    // return: void
    return ret;
};

// public : getOrder
static PyObject * unigine_Material_get_order(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: int
    return ret;
};

// public : setCastShadow
static PyObject * unigine_Material_set_cast_shadow(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // bool shadow
    // return: void
    return ret;
};

// public : isCastShadow
static PyObject * unigine_Material_is_cast_shadow(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: bool
    return ret;
};

// public : setCastWorldShadow
static PyObject * unigine_Material_set_cast_world_shadow(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // bool shadow
    // return: void
    return ret;
};

// public : isCastWorldShadow
static PyObject * unigine_Material_is_cast_world_shadow(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: bool
    return ret;
};

// public : setDepthTest
static PyObject * unigine_Material_set_depth_test(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // bool test
    // return: void
    return ret;
};

// public : isDepthTest
static PyObject * unigine_Material_is_depth_test(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: bool
    return ret;
};

// public : setTwoSided
static PyObject * unigine_Material_set_two_sided(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // bool sided
    // return: void
    return ret;
};

// public : isTwoSided
static PyObject * unigine_Material_is_two_sided(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: bool
    return ret;
};

// public : setOverlap
static PyObject * unigine_Material_set_overlap(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // bool overlap
    // return: void
    return ret;
};

// public : isOverlap
static PyObject * unigine_Material_is_overlap(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: bool
    return ret;
};

// public : checkShaderCache
static PyObject * unigine_Material_check_shader_cache(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: bool
    return ret;
};

// public : checkShaderCache
static PyObject * unigine_Material_check_shader_cache(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // PASS pass
    // TYPE node_type
    // return: bool
    return ret;
};

// public : compileShader
static PyObject * unigine_Material_compile_shader(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // PASS pass
    // TYPE node_type
    // return: bool
    return ret;
};

// public : fetchShader
static PyObject * unigine_Material_fetch_shader(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // PASS pass
    // TYPE node_type
    // return: Unigine::Ptr<Unigine::Shader>
    return ret;
};

// public : fetchShader
static PyObject * unigine_Material_fetch_shader(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // PASS pass
    // return: Unigine::Ptr<Unigine::Shader>
    return ret;
};

// public : fetchShader
static PyObject * unigine_Material_fetch_shader(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // const  *char pass_name
    // int node
    // return: Unigine::Ptr<Unigine::Shader>
    return ret;
};

// public : fetchShader
static PyObject * unigine_Material_fetch_shader(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // const  *char pass_name
    // return: Unigine::Ptr<Unigine::Shader>
    return ret;
};

// public : createShaders
static PyObject * unigine_Material_create_shaders(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // bool recursive
    // return: void
    return ret;
};

// public : destroyTextures
static PyObject * unigine_Material_destroy_textures(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: void
    return ret;
};

// public : getNumParameters
static PyObject * unigine_Material_get_num_parameters(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: int
    return ret;
};

// public : findParameter
static PyObject * unigine_Material_find_parameter(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // const  *char name
    // return: int
    return ret;
};

// public : resetParameter
static PyObject * unigine_Material_reset_parameter(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int num
    // return: void
    return ret;
};

// public : checkParameterConditions
static PyObject * unigine_Material_check_parameter_conditions(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int num
    // return: bool
    return ret;
};

// public : getParameterType
static PyObject * unigine_Material_get_parameter_type(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int num
    // return: int
    return ret;
};

// public : isParameterInt
static PyObject * unigine_Material_is_parameter_int(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int num
    // return: bool
    return ret;
};

// public : isParameterFloat
static PyObject * unigine_Material_is_parameter_float(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int num
    // return: bool
    return ret;
};

// public : isParameterOverridden
static PyObject * unigine_Material_is_parameter_overridden(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int num
    // return: bool
    return ret;
};

// public : getParameterName
static PyObject * unigine_Material_get_parameter_name(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int num
    // return: const  *char
    return ret;
};

// public : isParameterExpressionEnabled
static PyObject * unigine_Material_is_parameter_expression_enabled(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int num
    // return: bool
    return ret;
};

// public : setParameterExpressionEnabled
static PyObject * unigine_Material_set_parameter_expression_enabled(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int num
    // bool enabled
    // return: void
    return ret;
};

// public : getParameterExpression
static PyObject * unigine_Material_get_parameter_expression(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int num
    // return: const  *char
    return ret;
};

// public : setParameterExpression
static PyObject * unigine_Material_set_parameter_expression(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int num
    // const  *char expression
    // return: int
    return ret;
};

// public : setParameterFloat
static PyObject * unigine_Material_set_parameter_float(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int num
    // float value
    // return: void
    return ret;
};

// public : setParameterFloat
static PyObject * unigine_Material_set_parameter_float(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // const  *char name
    // float value
    // return: void
    return ret;
};

// public : getParameterFloat
static PyObject * unigine_Material_get_parameter_float(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int num
    // return: float
    return ret;
};

// public : getParameterFloat
static PyObject * unigine_Material_get_parameter_float(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // const  *char name
    // return: float
    return ret;
};

// public : setParameterFloat2
static PyObject * unigine_Material_set_parameter_float2(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int num
    // const & value
    // return: void
    return ret;
};

// public : setParameterFloat2
static PyObject * unigine_Material_set_parameter_float2(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // const  *char name
    // const & value
    // return: void
    return ret;
};

// public : getParameterFloat2
static PyObject * unigine_Material_get_parameter_float2(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int num
    // return: 
    return ret;
};

// public : getParameterFloat2
static PyObject * unigine_Material_get_parameter_float2(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // const  *char name
    // return: 
    return ret;
};

// public : setParameterFloat3
static PyObject * unigine_Material_set_parameter_float3(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int num
    // const & value
    // return: void
    return ret;
};

// public : setParameterFloat3
static PyObject * unigine_Material_set_parameter_float3(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // const  *char name
    // const & value
    // return: void
    return ret;
};

// public : getParameterFloat3
static PyObject * unigine_Material_get_parameter_float3(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int num
    // return: 
    return ret;
};

// public : getParameterFloat3
static PyObject * unigine_Material_get_parameter_float3(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // const  *char name
    // return: 
    return ret;
};

// public : setParameterFloat4
static PyObject * unigine_Material_set_parameter_float4(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int num
    // const & value
    // return: void
    return ret;
};

// public : setParameterFloat4
static PyObject * unigine_Material_set_parameter_float4(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // const  *char name
    // const & value
    // return: void
    return ret;
};

// public : getParameterFloat4
static PyObject * unigine_Material_get_parameter_float4(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int num
    // return: 
    return ret;
};

// public : getParameterFloat4
static PyObject * unigine_Material_get_parameter_float4(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // const  *char name
    // return: 
    return ret;
};

// public : setParameterInt
static PyObject * unigine_Material_set_parameter_int(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int num
    // int value
    // return: void
    return ret;
};

// public : setParameterInt
static PyObject * unigine_Material_set_parameter_int(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // const  *char name
    // int value
    // return: void
    return ret;
};

// public : getParameterInt
static PyObject * unigine_Material_get_parameter_int(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int num
    // return: int
    return ret;
};

// public : getParameterInt
static PyObject * unigine_Material_get_parameter_int(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // const  *char name
    // return: int
    return ret;
};

// public : setParameterInt2
static PyObject * unigine_Material_set_parameter_int2(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int num
    // const & value
    // return: void
    return ret;
};

// public : setParameterInt2
static PyObject * unigine_Material_set_parameter_int2(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // const  *char name
    // const & value
    // return: void
    return ret;
};

// public : getParameterInt2
static PyObject * unigine_Material_get_parameter_int2(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int num
    // return: 
    return ret;
};

// public : getParameterInt2
static PyObject * unigine_Material_get_parameter_int2(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // const  *char name
    // return: 
    return ret;
};

// public : setParameterInt3
static PyObject * unigine_Material_set_parameter_int3(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int num
    // const & value
    // return: void
    return ret;
};

// public : setParameterInt3
static PyObject * unigine_Material_set_parameter_int3(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // const  *char name
    // const & value
    // return: void
    return ret;
};

// public : getParameterInt3
static PyObject * unigine_Material_get_parameter_int3(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int num
    // return: 
    return ret;
};

// public : getParameterInt3
static PyObject * unigine_Material_get_parameter_int3(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // const  *char name
    // return: 
    return ret;
};

// public : setParameterInt4
static PyObject * unigine_Material_set_parameter_int4(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int num
    // const & value
    // return: void
    return ret;
};

// public : setParameterInt4
static PyObject * unigine_Material_set_parameter_int4(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // const  *char name
    // const & value
    // return: void
    return ret;
};

// public : getParameterInt4
static PyObject * unigine_Material_get_parameter_int4(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int num
    // return: 
    return ret;
};

// public : getParameterInt4
static PyObject * unigine_Material_get_parameter_int4(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // const  *char name
    // return: 
    return ret;
};

// public : getParameterArraySize
static PyObject * unigine_Material_get_parameter_array_size(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int num
    // return: int
    return ret;
};

// public : isParameterArray
static PyObject * unigine_Material_is_parameter_array(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int num
    // return: bool
    return ret;
};

// public : getParameterArray
static PyObject * unigine_Material_get_parameter_array(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int num
    // Unigine::Vector<float>& values
    // return: void
    return ret;
};

// public : setParameterArray
static PyObject * unigine_Material_set_parameter_array(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int num
    // Unigine::Vector<float>const & values
    // return: void
    return ret;
};

// public : getParameterArray
static PyObject * unigine_Material_get_parameter_array(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int num
    // Unigine::Vector<Unigine::Math::vec2>& values
    // return: void
    return ret;
};

// public : setParameterArray
static PyObject * unigine_Material_set_parameter_array(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int num
    // Unigine::Vector<Unigine::Math::vec2>const & values
    // return: void
    return ret;
};

// public : getParameterArray
static PyObject * unigine_Material_get_parameter_array(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int num
    // Unigine::Vector<Unigine::Math::vec4>& values
    // return: void
    return ret;
};

// public : setParameterArray
static PyObject * unigine_Material_set_parameter_array(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int num
    // Unigine::Vector<Unigine::Math::vec4>const & values
    // return: void
    return ret;
};

// public : getParameterArray
static PyObject * unigine_Material_get_parameter_array(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int num
    // Unigine::Vector<int>& values
    // return: void
    return ret;
};

// public : setParameterArray
static PyObject * unigine_Material_set_parameter_array(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int num
    // Unigine::Vector<int>const & values
    // return: void
    return ret;
};

// public : getParameterArray
static PyObject * unigine_Material_get_parameter_array(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int num
    // Unigine::Vector<Unigine::Math::ivec2>& values
    // return: void
    return ret;
};

// public : setParameterArray
static PyObject * unigine_Material_set_parameter_array(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int num
    // Unigine::Vector<Unigine::Math::ivec2>const & values
    // return: void
    return ret;
};

// public : getParameterArray
static PyObject * unigine_Material_get_parameter_array(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int num
    // Unigine::Vector<Unigine::Math::ivec4>& values
    // return: void
    return ret;
};

// public : setParameterArray
static PyObject * unigine_Material_set_parameter_array(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int num
    // Unigine::Vector<Unigine::Math::ivec4>const & values
    // return: void
    return ret;
};

// public : getNumStates
static PyObject * unigine_Material_get_num_states(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: int
    return ret;
};

// public : findState
static PyObject * unigine_Material_find_state(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // const  *char name
    // return: int
    return ret;
};

// public : isStateOverridden
static PyObject * unigine_Material_is_state_overridden(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int num
    // return: bool
    return ret;
};

// public : isStateInternal
static PyObject * unigine_Material_is_state_internal(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int num
    // return: bool
    return ret;
};

// public : resetState
static PyObject * unigine_Material_reset_state(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int num
    // return: void
    return ret;
};

// public : checkStateConditions
static PyObject * unigine_Material_check_state_conditions(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int num
    // return: bool
    return ret;
};

// public : getStateName
static PyObject * unigine_Material_get_state_name(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int num
    // return: const  *char
    return ret;
};

// public : getStateSwitchItem
static PyObject * unigine_Material_get_state_switch_item(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int num
    // int item
    // return: const  *char
    return ret;
};

// public : getStateSwitchNumItems
static PyObject * unigine_Material_get_state_switch_num_items(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int num
    // return: int
    return ret;
};

// public : getStateType
static PyObject * unigine_Material_get_state_type(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int num
    // return: int
    return ret;
};

// public : getState
static PyObject * unigine_Material_get_state(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int num
    // return: int
    return ret;
};

// public : setState
static PyObject * unigine_Material_set_state(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int num
    // int value
    // return: void
    return ret;
};

// public : getState
static PyObject * unigine_Material_get_state(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // const  *char name
    // return: int
    return ret;
};

// public : setState
static PyObject * unigine_Material_set_state(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // const  *char name
    // int value
    // return: void
    return ret;
};

// public : getNumTextures
static PyObject * unigine_Material_get_num_textures(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: int
    return ret;
};

// public : findTexture
static PyObject * unigine_Material_find_texture(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // const  *char name
    // return: int
    return ret;
};

// public : isTextureOverridden
static PyObject * unigine_Material_is_texture_overridden(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int num
    // return: bool
    return ret;
};

// public : isTextureLoaded
static PyObject * unigine_Material_is_texture_loaded(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int num
    // return: bool
    return ret;
};

// public : isTextureInternal
static PyObject * unigine_Material_is_texture_internal(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int num
    // return: bool
    return ret;
};

// public : resetTexture
static PyObject * unigine_Material_reset_texture(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int num
    // return: void
    return ret;
};

// public : checkTextureConditions
static PyObject * unigine_Material_check_texture_conditions(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int num
    // return: bool
    return ret;
};

// public : getTextureName
static PyObject * unigine_Material_get_texture_name(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int num
    // return: const  *char
    return ret;
};

// public : getTextureUnit
static PyObject * unigine_Material_get_texture_unit(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int num
    // return: int
    return ret;
};

// public : isTextureEditable
static PyObject * unigine_Material_is_texture_editable(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int num
    // return: bool
    return ret;
};

// public : getTextureSource
static PyObject * unigine_Material_get_texture_source(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int num
    // return: int
    return ret;
};

// public : getTextureSamplerFlags
static PyObject * unigine_Material_get_texture_sampler_flags(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int num
    // return: int
    return ret;
};

// public : setTextureSamplerFlags
static PyObject * unigine_Material_set_texture_sampler_flags(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int num
    // int sampler_flags
    // return: void
    return ret;
};

// public : getTextureFormatFlags
static PyObject * unigine_Material_get_texture_format_flags(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int num
    // return: int
    return ret;
};

// public : getTextureImage
static PyObject * unigine_Material_get_texture_image(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int num
    // Unigine::Ptr<Unigine::Image>const & image
    // return: int
    return ret;
};

// public : setTextureImage
static PyObject * unigine_Material_set_texture_image(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int num
    // Unigine::Ptr<Unigine::Image>const & image
    // return: int
    return ret;
};

// public : getTexture
static PyObject * unigine_Material_get_texture(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int num
    // return: Unigine::Ptr<Unigine::Texture>
    return ret;
};

// public : getTexture
static PyObject * unigine_Material_get_texture(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // const  *char name
    // return: Unigine::Ptr<Unigine::Texture>
    return ret;
};

// public : setTexture
static PyObject * unigine_Material_set_texture(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int num
    // Unigine::Ptr<Unigine::Texture>const & texture
    // return: void
    return ret;
};

// public : setTexture
static PyObject * unigine_Material_set_texture(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // const  *char name
    // Unigine::Ptr<Unigine::Texture>const & texture
    // return: void
    return ret;
};

// public : setTexturePath
static PyObject * unigine_Material_set_texture_path(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int num
    // const  *char path
    // return: void
    return ret;
};

// public : getTexturePath
static PyObject * unigine_Material_get_texture_path(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int num
    // return: const  *char
    return ret;
};

// public : setTexturePath
static PyObject * unigine_Material_set_texture_path(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // const  *char name
    // const  *char path
    // return: void
    return ret;
};

// public : getTexturePath
static PyObject * unigine_Material_get_texture_path(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // const  *char name
    // return: const  *char
    return ret;
};

// public : getTextureRamp
static PyObject * unigine_Material_get_texture_ramp(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int num
    // return: Unigine::Ptr<Unigine::TextureRamp>
    return ret;
};

// public : getTextureRampOverride
static PyObject * unigine_Material_get_texture_ramp_override(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // int num
    // return: Unigine::Ptr<Unigine::TextureRamp>
    return ret;
};

// public : isEditable
static PyObject * unigine_Material_is_editable(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: bool
    return ret;
};

// public : isHidden
static PyObject * unigine_Material_is_hidden(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: bool
    return ret;
};

// public : isBase
static PyObject * unigine_Material_is_base(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: bool
    return ret;
};

// public : isBrush
static PyObject * unigine_Material_is_brush(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: bool
    return ret;
};

// public : isLegacy
static PyObject * unigine_Material_is_legacy(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: bool
    return ret;
};

// public : isPreviewHidden
static PyObject * unigine_Material_is_preview_hidden(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: bool
    return ret;
};

// public : isReflection2D
static PyObject * unigine_Material_is_reflection2_d(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: bool
    return ret;
};

// public : isInternal
static PyObject * unigine_Material_is_internal(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: bool
    return ret;
};

// public : isManual
static PyObject * unigine_Material_is_manual(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: bool
    return ret;
};

// public : canSave
static PyObject * unigine_Material_can_save(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: bool
    return ret;
};

// public : isAutoSave
static PyObject * unigine_Material_is_auto_save(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: bool
    return ret;
};

// public : isFileEngine
static PyObject * unigine_Material_is_file_engine(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: bool
    return ret;
};

// public : isEmpty
static PyObject * unigine_Material_is_empty(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: bool
    return ret;
};

// public : hasOverrides
static PyObject * unigine_Material_has_overrides(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: bool
    return ret;
};

// public : saveState
static PyObject * unigine_Material_save_state(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // Unigine::Ptr<Unigine::Stream>const & stream
    // bool forced
    // return: bool
    return ret;
};

// public : restoreState
static PyObject * unigine_Material_restore_state(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // Unigine::Ptr<Unigine::Stream>const & stream
    // bool forced
    // return: bool
    return ret;
};

// public : loadXml
static PyObject * unigine_Material_load_xml(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // Unigine::Ptr<Unigine::Xml>const & xml
    // return: int
    return ret;
};

// public : saveXml
static PyObject * unigine_Material_save_xml(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // Unigine::Ptr<Unigine::Xml>const & xml
    // return: bool
    return ret;
};

// public : loadUlon
static PyObject * unigine_Material_load_ulon(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // Unigine::Ptr<Unigine::UlonNode>const & ulon
    // return: bool
    return ret;
};

// public : load
static PyObject * unigine_Material_load(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // const  *char path
    // return: bool
    return ret;
};

// public : save
static PyObject * unigine_Material_save(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: bool
    return ret;
};

// public : reload
static PyObject * unigine_Material_reload(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: bool
    return ret;
};

// public : createMaterialFile
static PyObject * unigine_Material_create_material_file(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // const  *char path
    // return: bool
    return ret;
};

// public : getRenderPass
static PyObject * unigine_Material_get_render_pass(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // const  *char pass_name
    // return: PASS
    return ret;
};

// public : getRenderPassName
static PyObject * unigine_Material_get_render_pass_name(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // PASS type
    // return: const  *char
    return ret;
};

// public : runExpression
static PyObject * unigine_Material_run_expression(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // const  *char name
    // int w
    // int h
    // int d
    // return: bool
    return ret;
};

// public : renderScreen
static PyObject * unigine_Material_render_screen(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // const  *char pass_name
    // return: bool
    return ret;
};

// public : renderScreen
static PyObject * unigine_Material_render_screen(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // PASS pass
    // return: void
    return ret;
};

// public : renderCompute
static PyObject * unigine_Material_render_compute(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // const  *char pass_name
    // int group_threads_x
    // int group_threads_y
    // int group_threads_z
    // return: bool
    return ret;
};

// public : renderCompute
static PyObject * unigine_Material_render_compute(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // PASS pass
    // int group_threads_x
    // int group_threads_y
    // int group_threads_z
    // return: void
    return ret;
};


static PyMethodDef unigine_Material_methods[] = {
    {
        "create", (PyCFunction)unigine_Material_create, METH_4,
        "public (static): create"
    },
    {
        "set_parent", (PyCFunction)unigine_Material_set_parent, METH_4,
        "public : setParent"
    },
    {
        "get_parent", (PyCFunction)unigine_Material_get_parent, METH_4,
        "public : getParent"
    },
    {
        "is_parent", (PyCFunction)unigine_Material_is_parent, METH_4,
        "public : isParent"
    },
    {
        "is_parent", (PyCFunction)unigine_Material_is_parent, METH_4,
        "public : isParent"
    },
    {
        "get_base_material", (PyCFunction)unigine_Material_get_base_material, METH_4,
        "public : getBaseMaterial"
    },
    {
        "get_num_children", (PyCFunction)unigine_Material_get_num_children, METH_4,
        "public : getNumChildren"
    },
    {
        "get_child", (PyCFunction)unigine_Material_get_child, METH_4,
        "public : getChild"
    },
    {
        "clone", (PyCFunction)unigine_Material_clone, METH_4,
        "public : clone"
    },
    {
        "clone", (PyCFunction)unigine_Material_clone, METH_4,
        "public : clone"
    },
    {
        "inherit", (PyCFunction)unigine_Material_inherit, METH_4,
        "public : inherit"
    },
    {
        "inherit", (PyCFunction)unigine_Material_inherit, METH_4,
        "public : inherit"
    },
    {
        "get_namespace_name", (PyCFunction)unigine_Material_get_namespace_name, METH_4,
        "public : getNamespaceName"
    },
    {
        "get_manual_name", (PyCFunction)unigine_Material_get_manual_name, METH_4,
        "public : getManualName"
    },
    {
        "get_g_u_i_d", (PyCFunction)unigine_Material_get_g_u_i_d, METH_4,
        "public : getGUID"
    },
    {
        "get_path", (PyCFunction)unigine_Material_get_path, METH_4,
        "public : getPath"
    },
    {
        "is_node_type_supported", (PyCFunction)unigine_Material_is_node_type_supported, METH_4,
        "public : isNodeTypeSupported"
    },
    {
        "is_node_supported", (PyCFunction)unigine_Material_is_node_supported, METH_4,
        "public : isNodeSupported"
    },
    {
        "can_render_node", (PyCFunction)unigine_Material_can_render_node, METH_4,
        "public : canRenderNode"
    },
    {
        "get_num_u_i_items", (PyCFunction)unigine_Material_get_num_u_i_items, METH_4,
        "public : getNumUIItems"
    },
    {
        "get_u_i_item_data_type", (PyCFunction)unigine_Material_get_u_i_item_data_type, METH_4,
        "public : getUIItemDataType"
    },
    {
        "get_u_i_item_data_i_d", (PyCFunction)unigine_Material_get_u_i_item_data_i_d, METH_4,
        "public : getUIItemDataID"
    },
    {
        "is_u_i_item_hidden", (PyCFunction)unigine_Material_is_u_i_item_hidden, METH_4,
        "public : isUIItemHidden"
    },
    {
        "get_u_i_item_title", (PyCFunction)unigine_Material_get_u_i_item_title, METH_4,
        "public : getUIItemTitle"
    },
    {
        "get_u_i_item_tooltip", (PyCFunction)unigine_Material_get_u_i_item_tooltip, METH_4,
        "public : getUIItemTooltip"
    },
    {
        "get_u_i_item_widget", (PyCFunction)unigine_Material_get_u_i_item_widget, METH_4,
        "public : getUIItemWidget"
    },
    {
        "get_u_i_item_parent", (PyCFunction)unigine_Material_get_u_i_item_parent, METH_4,
        "public : getUIItemParent"
    },
    {
        "get_u_i_item_num_children", (PyCFunction)unigine_Material_get_u_i_item_num_children, METH_4,
        "public : getUIItemNumChildren"
    },
    {
        "get_u_i_item_child", (PyCFunction)unigine_Material_get_u_i_item_child, METH_4,
        "public : getUIItemChild"
    },
    {
        "is_u_i_item_slider_min_expand", (PyCFunction)unigine_Material_is_u_i_item_slider_min_expand, METH_4,
        "public : isUIItemSliderMinExpand"
    },
    {
        "is_u_i_item_slider_max_expand", (PyCFunction)unigine_Material_is_u_i_item_slider_max_expand, METH_4,
        "public : isUIItemSliderMaxExpand"
    },
    {
        "get_u_i_item_slider_min_value", (PyCFunction)unigine_Material_get_u_i_item_slider_min_value, METH_4,
        "public : getUIItemSliderMinValue"
    },
    {
        "get_u_i_item_slider_max_value", (PyCFunction)unigine_Material_get_u_i_item_slider_max_value, METH_4,
        "public : getUIItemSliderMaxValue"
    },
    {
        "get_u_i_item_group_toggle_state_i_d", (PyCFunction)unigine_Material_get_u_i_item_group_toggle_state_i_d, METH_4,
        "public : getUIItemGroupToggleStateID"
    },
    {
        "is_u_i_item_group_collapsed", (PyCFunction)unigine_Material_is_u_i_item_group_collapsed, METH_4,
        "public : isUIItemGroupCollapsed"
    },
    {
        "widget_to_string", (PyCFunction)unigine_Material_widget_to_string, METH_4,
        "public (static): widgetToString"
    },
    {
        "string_to_widget", (PyCFunction)unigine_Material_string_to_widget, METH_4,
        "public (static): stringToWidget"
    },
    {
        "set_option", (PyCFunction)unigine_Material_set_option, METH_4,
        "public : setOption"
    },
    {
        "get_option", (PyCFunction)unigine_Material_get_option, METH_4,
        "public : getOption"
    },
    {
        "is_option_overridden", (PyCFunction)unigine_Material_is_option_overridden, METH_4,
        "public : isOptionOverridden"
    },
    {
        "reset_option", (PyCFunction)unigine_Material_reset_option, METH_4,
        "public : resetOption"
    },
    {
        "set_transparent", (PyCFunction)unigine_Material_set_transparent, METH_4,
        "public : setTransparent"
    },
    {
        "get_transparent", (PyCFunction)unigine_Material_get_transparent, METH_4,
        "public : getTransparent"
    },
    {
        "is_water", (PyCFunction)unigine_Material_is_water, METH_4,
        "public : isWater"
    },
    {
        "is_deferred", (PyCFunction)unigine_Material_is_deferred, METH_4,
        "public : isDeferred"
    },
    {
        "is_forward", (PyCFunction)unigine_Material_is_forward, METH_4,
        "public : isForward"
    },
    {
        "is_alpha_test", (PyCFunction)unigine_Material_is_alpha_test, METH_4,
        "public : isAlphaTest"
    },
    {
        "set_blend_dest_func", (PyCFunction)unigine_Material_set_blend_dest_func, METH_4,
        "public : setBlendDestFunc"
    },
    {
        "get_blend_dest_func", (PyCFunction)unigine_Material_get_blend_dest_func, METH_4,
        "public : getBlendDestFunc"
    },
    {
        "set_blend_src_func", (PyCFunction)unigine_Material_set_blend_src_func, METH_4,
        "public : setBlendSrcFunc"
    },
    {
        "get_blend_src_func", (PyCFunction)unigine_Material_get_blend_src_func, METH_4,
        "public : getBlendSrcFunc"
    },
    {
        "set_shadow_mask", (PyCFunction)unigine_Material_set_shadow_mask, METH_4,
        "public : setShadowMask"
    },
    {
        "get_shadow_mask", (PyCFunction)unigine_Material_get_shadow_mask, METH_4,
        "public : getShadowMask"
    },
    {
        "set_viewport_mask", (PyCFunction)unigine_Material_set_viewport_mask, METH_4,
        "public : setViewportMask"
    },
    {
        "get_viewport_mask", (PyCFunction)unigine_Material_get_viewport_mask, METH_4,
        "public : getViewportMask"
    },
    {
        "set_depth_mask", (PyCFunction)unigine_Material_set_depth_mask, METH_4,
        "public : setDepthMask"
    },
    {
        "get_depth_mask", (PyCFunction)unigine_Material_get_depth_mask, METH_4,
        "public : getDepthMask"
    },
    {
        "set_order", (PyCFunction)unigine_Material_set_order, METH_4,
        "public : setOrder"
    },
    {
        "get_order", (PyCFunction)unigine_Material_get_order, METH_4,
        "public : getOrder"
    },
    {
        "set_cast_shadow", (PyCFunction)unigine_Material_set_cast_shadow, METH_4,
        "public : setCastShadow"
    },
    {
        "is_cast_shadow", (PyCFunction)unigine_Material_is_cast_shadow, METH_4,
        "public : isCastShadow"
    },
    {
        "set_cast_world_shadow", (PyCFunction)unigine_Material_set_cast_world_shadow, METH_4,
        "public : setCastWorldShadow"
    },
    {
        "is_cast_world_shadow", (PyCFunction)unigine_Material_is_cast_world_shadow, METH_4,
        "public : isCastWorldShadow"
    },
    {
        "set_depth_test", (PyCFunction)unigine_Material_set_depth_test, METH_4,
        "public : setDepthTest"
    },
    {
        "is_depth_test", (PyCFunction)unigine_Material_is_depth_test, METH_4,
        "public : isDepthTest"
    },
    {
        "set_two_sided", (PyCFunction)unigine_Material_set_two_sided, METH_4,
        "public : setTwoSided"
    },
    {
        "is_two_sided", (PyCFunction)unigine_Material_is_two_sided, METH_4,
        "public : isTwoSided"
    },
    {
        "set_overlap", (PyCFunction)unigine_Material_set_overlap, METH_4,
        "public : setOverlap"
    },
    {
        "is_overlap", (PyCFunction)unigine_Material_is_overlap, METH_4,
        "public : isOverlap"
    },
    {
        "check_shader_cache", (PyCFunction)unigine_Material_check_shader_cache, METH_4,
        "public : checkShaderCache"
    },
    {
        "check_shader_cache", (PyCFunction)unigine_Material_check_shader_cache, METH_4,
        "public : checkShaderCache"
    },
    {
        "compile_shader", (PyCFunction)unigine_Material_compile_shader, METH_4,
        "public : compileShader"
    },
    {
        "fetch_shader", (PyCFunction)unigine_Material_fetch_shader, METH_4,
        "public : fetchShader"
    },
    {
        "fetch_shader", (PyCFunction)unigine_Material_fetch_shader, METH_4,
        "public : fetchShader"
    },
    {
        "fetch_shader", (PyCFunction)unigine_Material_fetch_shader, METH_4,
        "public : fetchShader"
    },
    {
        "fetch_shader", (PyCFunction)unigine_Material_fetch_shader, METH_4,
        "public : fetchShader"
    },
    {
        "create_shaders", (PyCFunction)unigine_Material_create_shaders, METH_4,
        "public : createShaders"
    },
    {
        "destroy_textures", (PyCFunction)unigine_Material_destroy_textures, METH_4,
        "public : destroyTextures"
    },
    {
        "get_num_parameters", (PyCFunction)unigine_Material_get_num_parameters, METH_4,
        "public : getNumParameters"
    },
    {
        "find_parameter", (PyCFunction)unigine_Material_find_parameter, METH_4,
        "public : findParameter"
    },
    {
        "reset_parameter", (PyCFunction)unigine_Material_reset_parameter, METH_4,
        "public : resetParameter"
    },
    {
        "check_parameter_conditions", (PyCFunction)unigine_Material_check_parameter_conditions, METH_4,
        "public : checkParameterConditions"
    },
    {
        "get_parameter_type", (PyCFunction)unigine_Material_get_parameter_type, METH_4,
        "public : getParameterType"
    },
    {
        "is_parameter_int", (PyCFunction)unigine_Material_is_parameter_int, METH_4,
        "public : isParameterInt"
    },
    {
        "is_parameter_float", (PyCFunction)unigine_Material_is_parameter_float, METH_4,
        "public : isParameterFloat"
    },
    {
        "is_parameter_overridden", (PyCFunction)unigine_Material_is_parameter_overridden, METH_4,
        "public : isParameterOverridden"
    },
    {
        "get_parameter_name", (PyCFunction)unigine_Material_get_parameter_name, METH_4,
        "public : getParameterName"
    },
    {
        "is_parameter_expression_enabled", (PyCFunction)unigine_Material_is_parameter_expression_enabled, METH_4,
        "public : isParameterExpressionEnabled"
    },
    {
        "set_parameter_expression_enabled", (PyCFunction)unigine_Material_set_parameter_expression_enabled, METH_4,
        "public : setParameterExpressionEnabled"
    },
    {
        "get_parameter_expression", (PyCFunction)unigine_Material_get_parameter_expression, METH_4,
        "public : getParameterExpression"
    },
    {
        "set_parameter_expression", (PyCFunction)unigine_Material_set_parameter_expression, METH_4,
        "public : setParameterExpression"
    },
    {
        "set_parameter_float", (PyCFunction)unigine_Material_set_parameter_float, METH_4,
        "public : setParameterFloat"
    },
    {
        "set_parameter_float", (PyCFunction)unigine_Material_set_parameter_float, METH_4,
        "public : setParameterFloat"
    },
    {
        "get_parameter_float", (PyCFunction)unigine_Material_get_parameter_float, METH_4,
        "public : getParameterFloat"
    },
    {
        "get_parameter_float", (PyCFunction)unigine_Material_get_parameter_float, METH_4,
        "public : getParameterFloat"
    },
    {
        "set_parameter_float2", (PyCFunction)unigine_Material_set_parameter_float2, METH_4,
        "public : setParameterFloat2"
    },
    {
        "set_parameter_float2", (PyCFunction)unigine_Material_set_parameter_float2, METH_4,
        "public : setParameterFloat2"
    },
    {
        "get_parameter_float2", (PyCFunction)unigine_Material_get_parameter_float2, METH_4,
        "public : getParameterFloat2"
    },
    {
        "get_parameter_float2", (PyCFunction)unigine_Material_get_parameter_float2, METH_4,
        "public : getParameterFloat2"
    },
    {
        "set_parameter_float3", (PyCFunction)unigine_Material_set_parameter_float3, METH_4,
        "public : setParameterFloat3"
    },
    {
        "set_parameter_float3", (PyCFunction)unigine_Material_set_parameter_float3, METH_4,
        "public : setParameterFloat3"
    },
    {
        "get_parameter_float3", (PyCFunction)unigine_Material_get_parameter_float3, METH_4,
        "public : getParameterFloat3"
    },
    {
        "get_parameter_float3", (PyCFunction)unigine_Material_get_parameter_float3, METH_4,
        "public : getParameterFloat3"
    },
    {
        "set_parameter_float4", (PyCFunction)unigine_Material_set_parameter_float4, METH_4,
        "public : setParameterFloat4"
    },
    {
        "set_parameter_float4", (PyCFunction)unigine_Material_set_parameter_float4, METH_4,
        "public : setParameterFloat4"
    },
    {
        "get_parameter_float4", (PyCFunction)unigine_Material_get_parameter_float4, METH_4,
        "public : getParameterFloat4"
    },
    {
        "get_parameter_float4", (PyCFunction)unigine_Material_get_parameter_float4, METH_4,
        "public : getParameterFloat4"
    },
    {
        "set_parameter_int", (PyCFunction)unigine_Material_set_parameter_int, METH_4,
        "public : setParameterInt"
    },
    {
        "set_parameter_int", (PyCFunction)unigine_Material_set_parameter_int, METH_4,
        "public : setParameterInt"
    },
    {
        "get_parameter_int", (PyCFunction)unigine_Material_get_parameter_int, METH_4,
        "public : getParameterInt"
    },
    {
        "get_parameter_int", (PyCFunction)unigine_Material_get_parameter_int, METH_4,
        "public : getParameterInt"
    },
    {
        "set_parameter_int2", (PyCFunction)unigine_Material_set_parameter_int2, METH_4,
        "public : setParameterInt2"
    },
    {
        "set_parameter_int2", (PyCFunction)unigine_Material_set_parameter_int2, METH_4,
        "public : setParameterInt2"
    },
    {
        "get_parameter_int2", (PyCFunction)unigine_Material_get_parameter_int2, METH_4,
        "public : getParameterInt2"
    },
    {
        "get_parameter_int2", (PyCFunction)unigine_Material_get_parameter_int2, METH_4,
        "public : getParameterInt2"
    },
    {
        "set_parameter_int3", (PyCFunction)unigine_Material_set_parameter_int3, METH_4,
        "public : setParameterInt3"
    },
    {
        "set_parameter_int3", (PyCFunction)unigine_Material_set_parameter_int3, METH_4,
        "public : setParameterInt3"
    },
    {
        "get_parameter_int3", (PyCFunction)unigine_Material_get_parameter_int3, METH_4,
        "public : getParameterInt3"
    },
    {
        "get_parameter_int3", (PyCFunction)unigine_Material_get_parameter_int3, METH_4,
        "public : getParameterInt3"
    },
    {
        "set_parameter_int4", (PyCFunction)unigine_Material_set_parameter_int4, METH_4,
        "public : setParameterInt4"
    },
    {
        "set_parameter_int4", (PyCFunction)unigine_Material_set_parameter_int4, METH_4,
        "public : setParameterInt4"
    },
    {
        "get_parameter_int4", (PyCFunction)unigine_Material_get_parameter_int4, METH_4,
        "public : getParameterInt4"
    },
    {
        "get_parameter_int4", (PyCFunction)unigine_Material_get_parameter_int4, METH_4,
        "public : getParameterInt4"
    },
    {
        "get_parameter_array_size", (PyCFunction)unigine_Material_get_parameter_array_size, METH_4,
        "public : getParameterArraySize"
    },
    {
        "is_parameter_array", (PyCFunction)unigine_Material_is_parameter_array, METH_4,
        "public : isParameterArray"
    },
    {
        "get_parameter_array", (PyCFunction)unigine_Material_get_parameter_array, METH_4,
        "public : getParameterArray"
    },
    {
        "set_parameter_array", (PyCFunction)unigine_Material_set_parameter_array, METH_4,
        "public : setParameterArray"
    },
    {
        "get_parameter_array", (PyCFunction)unigine_Material_get_parameter_array, METH_4,
        "public : getParameterArray"
    },
    {
        "set_parameter_array", (PyCFunction)unigine_Material_set_parameter_array, METH_4,
        "public : setParameterArray"
    },
    {
        "get_parameter_array", (PyCFunction)unigine_Material_get_parameter_array, METH_4,
        "public : getParameterArray"
    },
    {
        "set_parameter_array", (PyCFunction)unigine_Material_set_parameter_array, METH_4,
        "public : setParameterArray"
    },
    {
        "get_parameter_array", (PyCFunction)unigine_Material_get_parameter_array, METH_4,
        "public : getParameterArray"
    },
    {
        "set_parameter_array", (PyCFunction)unigine_Material_set_parameter_array, METH_4,
        "public : setParameterArray"
    },
    {
        "get_parameter_array", (PyCFunction)unigine_Material_get_parameter_array, METH_4,
        "public : getParameterArray"
    },
    {
        "set_parameter_array", (PyCFunction)unigine_Material_set_parameter_array, METH_4,
        "public : setParameterArray"
    },
    {
        "get_parameter_array", (PyCFunction)unigine_Material_get_parameter_array, METH_4,
        "public : getParameterArray"
    },
    {
        "set_parameter_array", (PyCFunction)unigine_Material_set_parameter_array, METH_4,
        "public : setParameterArray"
    },
    {
        "get_num_states", (PyCFunction)unigine_Material_get_num_states, METH_4,
        "public : getNumStates"
    },
    {
        "find_state", (PyCFunction)unigine_Material_find_state, METH_4,
        "public : findState"
    },
    {
        "is_state_overridden", (PyCFunction)unigine_Material_is_state_overridden, METH_4,
        "public : isStateOverridden"
    },
    {
        "is_state_internal", (PyCFunction)unigine_Material_is_state_internal, METH_4,
        "public : isStateInternal"
    },
    {
        "reset_state", (PyCFunction)unigine_Material_reset_state, METH_4,
        "public : resetState"
    },
    {
        "check_state_conditions", (PyCFunction)unigine_Material_check_state_conditions, METH_4,
        "public : checkStateConditions"
    },
    {
        "get_state_name", (PyCFunction)unigine_Material_get_state_name, METH_4,
        "public : getStateName"
    },
    {
        "get_state_switch_item", (PyCFunction)unigine_Material_get_state_switch_item, METH_4,
        "public : getStateSwitchItem"
    },
    {
        "get_state_switch_num_items", (PyCFunction)unigine_Material_get_state_switch_num_items, METH_4,
        "public : getStateSwitchNumItems"
    },
    {
        "get_state_type", (PyCFunction)unigine_Material_get_state_type, METH_4,
        "public : getStateType"
    },
    {
        "get_state", (PyCFunction)unigine_Material_get_state, METH_4,
        "public : getState"
    },
    {
        "set_state", (PyCFunction)unigine_Material_set_state, METH_4,
        "public : setState"
    },
    {
        "get_state", (PyCFunction)unigine_Material_get_state, METH_4,
        "public : getState"
    },
    {
        "set_state", (PyCFunction)unigine_Material_set_state, METH_4,
        "public : setState"
    },
    {
        "get_num_textures", (PyCFunction)unigine_Material_get_num_textures, METH_4,
        "public : getNumTextures"
    },
    {
        "find_texture", (PyCFunction)unigine_Material_find_texture, METH_4,
        "public : findTexture"
    },
    {
        "is_texture_overridden", (PyCFunction)unigine_Material_is_texture_overridden, METH_4,
        "public : isTextureOverridden"
    },
    {
        "is_texture_loaded", (PyCFunction)unigine_Material_is_texture_loaded, METH_4,
        "public : isTextureLoaded"
    },
    {
        "is_texture_internal", (PyCFunction)unigine_Material_is_texture_internal, METH_4,
        "public : isTextureInternal"
    },
    {
        "reset_texture", (PyCFunction)unigine_Material_reset_texture, METH_4,
        "public : resetTexture"
    },
    {
        "check_texture_conditions", (PyCFunction)unigine_Material_check_texture_conditions, METH_4,
        "public : checkTextureConditions"
    },
    {
        "get_texture_name", (PyCFunction)unigine_Material_get_texture_name, METH_4,
        "public : getTextureName"
    },
    {
        "get_texture_unit", (PyCFunction)unigine_Material_get_texture_unit, METH_4,
        "public : getTextureUnit"
    },
    {
        "is_texture_editable", (PyCFunction)unigine_Material_is_texture_editable, METH_4,
        "public : isTextureEditable"
    },
    {
        "get_texture_source", (PyCFunction)unigine_Material_get_texture_source, METH_4,
        "public : getTextureSource"
    },
    {
        "get_texture_sampler_flags", (PyCFunction)unigine_Material_get_texture_sampler_flags, METH_4,
        "public : getTextureSamplerFlags"
    },
    {
        "set_texture_sampler_flags", (PyCFunction)unigine_Material_set_texture_sampler_flags, METH_4,
        "public : setTextureSamplerFlags"
    },
    {
        "get_texture_format_flags", (PyCFunction)unigine_Material_get_texture_format_flags, METH_4,
        "public : getTextureFormatFlags"
    },
    {
        "get_texture_image", (PyCFunction)unigine_Material_get_texture_image, METH_4,
        "public : getTextureImage"
    },
    {
        "set_texture_image", (PyCFunction)unigine_Material_set_texture_image, METH_4,
        "public : setTextureImage"
    },
    {
        "get_texture", (PyCFunction)unigine_Material_get_texture, METH_4,
        "public : getTexture"
    },
    {
        "get_texture", (PyCFunction)unigine_Material_get_texture, METH_4,
        "public : getTexture"
    },
    {
        "set_texture", (PyCFunction)unigine_Material_set_texture, METH_4,
        "public : setTexture"
    },
    {
        "set_texture", (PyCFunction)unigine_Material_set_texture, METH_4,
        "public : setTexture"
    },
    {
        "set_texture_path", (PyCFunction)unigine_Material_set_texture_path, METH_4,
        "public : setTexturePath"
    },
    {
        "get_texture_path", (PyCFunction)unigine_Material_get_texture_path, METH_4,
        "public : getTexturePath"
    },
    {
        "set_texture_path", (PyCFunction)unigine_Material_set_texture_path, METH_4,
        "public : setTexturePath"
    },
    {
        "get_texture_path", (PyCFunction)unigine_Material_get_texture_path, METH_4,
        "public : getTexturePath"
    },
    {
        "get_texture_ramp", (PyCFunction)unigine_Material_get_texture_ramp, METH_4,
        "public : getTextureRamp"
    },
    {
        "get_texture_ramp_override", (PyCFunction)unigine_Material_get_texture_ramp_override, METH_4,
        "public : getTextureRampOverride"
    },
    {
        "is_editable", (PyCFunction)unigine_Material_is_editable, METH_4,
        "public : isEditable"
    },
    {
        "is_hidden", (PyCFunction)unigine_Material_is_hidden, METH_4,
        "public : isHidden"
    },
    {
        "is_base", (PyCFunction)unigine_Material_is_base, METH_4,
        "public : isBase"
    },
    {
        "is_brush", (PyCFunction)unigine_Material_is_brush, METH_4,
        "public : isBrush"
    },
    {
        "is_legacy", (PyCFunction)unigine_Material_is_legacy, METH_4,
        "public : isLegacy"
    },
    {
        "is_preview_hidden", (PyCFunction)unigine_Material_is_preview_hidden, METH_4,
        "public : isPreviewHidden"
    },
    {
        "is_reflection2_d", (PyCFunction)unigine_Material_is_reflection2_d, METH_4,
        "public : isReflection2D"
    },
    {
        "is_internal", (PyCFunction)unigine_Material_is_internal, METH_4,
        "public : isInternal"
    },
    {
        "is_manual", (PyCFunction)unigine_Material_is_manual, METH_4,
        "public : isManual"
    },
    {
        "can_save", (PyCFunction)unigine_Material_can_save, METH_4,
        "public : canSave"
    },
    {
        "is_auto_save", (PyCFunction)unigine_Material_is_auto_save, METH_4,
        "public : isAutoSave"
    },
    {
        "is_file_engine", (PyCFunction)unigine_Material_is_file_engine, METH_4,
        "public : isFileEngine"
    },
    {
        "is_empty", (PyCFunction)unigine_Material_is_empty, METH_4,
        "public : isEmpty"
    },
    {
        "has_overrides", (PyCFunction)unigine_Material_has_overrides, METH_4,
        "public : hasOverrides"
    },
    {
        "save_state", (PyCFunction)unigine_Material_save_state, METH_4,
        "public : saveState"
    },
    {
        "restore_state", (PyCFunction)unigine_Material_restore_state, METH_4,
        "public : restoreState"
    },
    {
        "load_xml", (PyCFunction)unigine_Material_load_xml, METH_4,
        "public : loadXml"
    },
    {
        "save_xml", (PyCFunction)unigine_Material_save_xml, METH_4,
        "public : saveXml"
    },
    {
        "load_ulon", (PyCFunction)unigine_Material_load_ulon, METH_4,
        "public : loadUlon"
    },
    {
        "load", (PyCFunction)unigine_Material_load, METH_4,
        "public : load"
    },
    {
        "save", (PyCFunction)unigine_Material_save, METH_4,
        "public : save"
    },
    {
        "reload", (PyCFunction)unigine_Material_reload, METH_4,
        "public : reload"
    },
    {
        "create_material_file", (PyCFunction)unigine_Material_create_material_file, METH_4,
        "public : createMaterialFile"
    },
    {
        "get_render_pass", (PyCFunction)unigine_Material_get_render_pass, METH_4,
        "public : getRenderPass"
    },
    {
        "get_render_pass_name", (PyCFunction)unigine_Material_get_render_pass_name, METH_4,
        "public : getRenderPassName"
    },
    {
        "run_expression", (PyCFunction)unigine_Material_run_expression, METH_4,
        "public : runExpression"
    },
    {
        "render_screen", (PyCFunction)unigine_Material_render_screen, METH_4,
        "public : renderScreen"
    },
    {
        "render_screen", (PyCFunction)unigine_Material_render_screen, METH_4,
        "public : renderScreen"
    },
    {
        "render_compute", (PyCFunction)unigine_Material_render_compute, METH_4,
        "public : renderCompute"
    },
    {
        "render_compute", (PyCFunction)unigine_Material_render_compute, METH_4,
        "public : renderCompute"
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


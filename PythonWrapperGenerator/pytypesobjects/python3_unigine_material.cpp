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
    return ret;
};

// public : setParent
static PyObject * unigine_Material_set_parent(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : getParent
static PyObject * unigine_Material_get_parent(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : isParent
static PyObject * unigine_Material_is_parent(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : isParent
static PyObject * unigine_Material_is_parent(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : getBaseMaterial
static PyObject * unigine_Material_get_base_material(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : getNumChildren
static PyObject * unigine_Material_get_num_children(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : getChild
static PyObject * unigine_Material_get_child(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : clone
static PyObject * unigine_Material_clone(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : clone
static PyObject * unigine_Material_clone(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : inherit
static PyObject * unigine_Material_inherit(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : inherit
static PyObject * unigine_Material_inherit(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : getNamespaceName
static PyObject * unigine_Material_get_namespace_name(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : getManualName
static PyObject * unigine_Material_get_manual_name(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : getGUID
static PyObject * unigine_Material_get_g_u_i_d(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : getPath
static PyObject * unigine_Material_get_path(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : isNodeTypeSupported
static PyObject * unigine_Material_is_node_type_supported(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : isNodeSupported
static PyObject * unigine_Material_is_node_supported(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : canRenderNode
static PyObject * unigine_Material_can_render_node(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : getNumUIItems
static PyObject * unigine_Material_get_num_u_i_items(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : getUIItemDataType
static PyObject * unigine_Material_get_u_i_item_data_type(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : getUIItemDataID
static PyObject * unigine_Material_get_u_i_item_data_i_d(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : isUIItemHidden
static PyObject * unigine_Material_is_u_i_item_hidden(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : getUIItemTitle
static PyObject * unigine_Material_get_u_i_item_title(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : getUIItemTooltip
static PyObject * unigine_Material_get_u_i_item_tooltip(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : getUIItemWidget
static PyObject * unigine_Material_get_u_i_item_widget(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : getUIItemParent
static PyObject * unigine_Material_get_u_i_item_parent(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : getUIItemNumChildren
static PyObject * unigine_Material_get_u_i_item_num_children(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : getUIItemChild
static PyObject * unigine_Material_get_u_i_item_child(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : isUIItemSliderMinExpand
static PyObject * unigine_Material_is_u_i_item_slider_min_expand(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : isUIItemSliderMaxExpand
static PyObject * unigine_Material_is_u_i_item_slider_max_expand(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : getUIItemSliderMinValue
static PyObject * unigine_Material_get_u_i_item_slider_min_value(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : getUIItemSliderMaxValue
static PyObject * unigine_Material_get_u_i_item_slider_max_value(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : getUIItemGroupToggleStateID
static PyObject * unigine_Material_get_u_i_item_group_toggle_state_i_d(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : isUIItemGroupCollapsed
static PyObject * unigine_Material_is_u_i_item_group_collapsed(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public (static): widgetToString
static PyObject * unigine_Material_widget_to_string(PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public (static): stringToWidget
static PyObject * unigine_Material_string_to_widget(PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : setOption
static PyObject * unigine_Material_set_option(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : getOption
static PyObject * unigine_Material_get_option(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : isOptionOverridden
static PyObject * unigine_Material_is_option_overridden(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : resetOption
static PyObject * unigine_Material_reset_option(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : setTransparent
static PyObject * unigine_Material_set_transparent(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : getTransparent
static PyObject * unigine_Material_get_transparent(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : isWater
static PyObject * unigine_Material_is_water(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : isDeferred
static PyObject * unigine_Material_is_deferred(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : isForward
static PyObject * unigine_Material_is_forward(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : isAlphaTest
static PyObject * unigine_Material_is_alpha_test(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : setBlendDestFunc
static PyObject * unigine_Material_set_blend_dest_func(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : getBlendDestFunc
static PyObject * unigine_Material_get_blend_dest_func(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : setBlendSrcFunc
static PyObject * unigine_Material_set_blend_src_func(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : getBlendSrcFunc
static PyObject * unigine_Material_get_blend_src_func(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : setShadowMask
static PyObject * unigine_Material_set_shadow_mask(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : getShadowMask
static PyObject * unigine_Material_get_shadow_mask(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : setViewportMask
static PyObject * unigine_Material_set_viewport_mask(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : getViewportMask
static PyObject * unigine_Material_get_viewport_mask(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : setDepthMask
static PyObject * unigine_Material_set_depth_mask(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : getDepthMask
static PyObject * unigine_Material_get_depth_mask(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : setOrder
static PyObject * unigine_Material_set_order(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : getOrder
static PyObject * unigine_Material_get_order(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : setCastShadow
static PyObject * unigine_Material_set_cast_shadow(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : isCastShadow
static PyObject * unigine_Material_is_cast_shadow(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : setCastWorldShadow
static PyObject * unigine_Material_set_cast_world_shadow(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : isCastWorldShadow
static PyObject * unigine_Material_is_cast_world_shadow(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : setDepthTest
static PyObject * unigine_Material_set_depth_test(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : isDepthTest
static PyObject * unigine_Material_is_depth_test(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : setTwoSided
static PyObject * unigine_Material_set_two_sided(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : isTwoSided
static PyObject * unigine_Material_is_two_sided(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : setOverlap
static PyObject * unigine_Material_set_overlap(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : isOverlap
static PyObject * unigine_Material_is_overlap(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : checkShaderCache
static PyObject * unigine_Material_check_shader_cache(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : checkShaderCache
static PyObject * unigine_Material_check_shader_cache(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : compileShader
static PyObject * unigine_Material_compile_shader(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : fetchShader
static PyObject * unigine_Material_fetch_shader(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : fetchShader
static PyObject * unigine_Material_fetch_shader(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : fetchShader
static PyObject * unigine_Material_fetch_shader(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : fetchShader
static PyObject * unigine_Material_fetch_shader(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : createShaders
static PyObject * unigine_Material_create_shaders(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : destroyTextures
static PyObject * unigine_Material_destroy_textures(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : getNumParameters
static PyObject * unigine_Material_get_num_parameters(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : findParameter
static PyObject * unigine_Material_find_parameter(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : resetParameter
static PyObject * unigine_Material_reset_parameter(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : checkParameterConditions
static PyObject * unigine_Material_check_parameter_conditions(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : getParameterType
static PyObject * unigine_Material_get_parameter_type(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : isParameterInt
static PyObject * unigine_Material_is_parameter_int(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : isParameterFloat
static PyObject * unigine_Material_is_parameter_float(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : isParameterOverridden
static PyObject * unigine_Material_is_parameter_overridden(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : getParameterName
static PyObject * unigine_Material_get_parameter_name(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : isParameterExpressionEnabled
static PyObject * unigine_Material_is_parameter_expression_enabled(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : setParameterExpressionEnabled
static PyObject * unigine_Material_set_parameter_expression_enabled(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : getParameterExpression
static PyObject * unigine_Material_get_parameter_expression(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : setParameterExpression
static PyObject * unigine_Material_set_parameter_expression(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : setParameterFloat
static PyObject * unigine_Material_set_parameter_float(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : setParameterFloat
static PyObject * unigine_Material_set_parameter_float(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : getParameterFloat
static PyObject * unigine_Material_get_parameter_float(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : getParameterFloat
static PyObject * unigine_Material_get_parameter_float(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : setParameterFloat2
static PyObject * unigine_Material_set_parameter_float2(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : setParameterFloat2
static PyObject * unigine_Material_set_parameter_float2(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : getParameterFloat2
static PyObject * unigine_Material_get_parameter_float2(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : getParameterFloat2
static PyObject * unigine_Material_get_parameter_float2(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : setParameterFloat3
static PyObject * unigine_Material_set_parameter_float3(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : setParameterFloat3
static PyObject * unigine_Material_set_parameter_float3(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : getParameterFloat3
static PyObject * unigine_Material_get_parameter_float3(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : getParameterFloat3
static PyObject * unigine_Material_get_parameter_float3(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : setParameterFloat4
static PyObject * unigine_Material_set_parameter_float4(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : setParameterFloat4
static PyObject * unigine_Material_set_parameter_float4(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : getParameterFloat4
static PyObject * unigine_Material_get_parameter_float4(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : getParameterFloat4
static PyObject * unigine_Material_get_parameter_float4(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : setParameterInt
static PyObject * unigine_Material_set_parameter_int(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : setParameterInt
static PyObject * unigine_Material_set_parameter_int(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : getParameterInt
static PyObject * unigine_Material_get_parameter_int(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : getParameterInt
static PyObject * unigine_Material_get_parameter_int(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : setParameterInt2
static PyObject * unigine_Material_set_parameter_int2(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : setParameterInt2
static PyObject * unigine_Material_set_parameter_int2(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : getParameterInt2
static PyObject * unigine_Material_get_parameter_int2(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : getParameterInt2
static PyObject * unigine_Material_get_parameter_int2(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : setParameterInt3
static PyObject * unigine_Material_set_parameter_int3(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : setParameterInt3
static PyObject * unigine_Material_set_parameter_int3(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : getParameterInt3
static PyObject * unigine_Material_get_parameter_int3(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : getParameterInt3
static PyObject * unigine_Material_get_parameter_int3(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : setParameterInt4
static PyObject * unigine_Material_set_parameter_int4(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : setParameterInt4
static PyObject * unigine_Material_set_parameter_int4(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : getParameterInt4
static PyObject * unigine_Material_get_parameter_int4(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : getParameterInt4
static PyObject * unigine_Material_get_parameter_int4(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : getParameterArraySize
static PyObject * unigine_Material_get_parameter_array_size(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : isParameterArray
static PyObject * unigine_Material_is_parameter_array(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : getParameterArray
static PyObject * unigine_Material_get_parameter_array(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : setParameterArray
static PyObject * unigine_Material_set_parameter_array(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : getParameterArray
static PyObject * unigine_Material_get_parameter_array(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : setParameterArray
static PyObject * unigine_Material_set_parameter_array(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : getParameterArray
static PyObject * unigine_Material_get_parameter_array(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : setParameterArray
static PyObject * unigine_Material_set_parameter_array(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : getParameterArray
static PyObject * unigine_Material_get_parameter_array(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : setParameterArray
static PyObject * unigine_Material_set_parameter_array(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : getParameterArray
static PyObject * unigine_Material_get_parameter_array(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : setParameterArray
static PyObject * unigine_Material_set_parameter_array(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : getParameterArray
static PyObject * unigine_Material_get_parameter_array(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : setParameterArray
static PyObject * unigine_Material_set_parameter_array(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : getNumStates
static PyObject * unigine_Material_get_num_states(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : findState
static PyObject * unigine_Material_find_state(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : isStateOverridden
static PyObject * unigine_Material_is_state_overridden(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : isStateInternal
static PyObject * unigine_Material_is_state_internal(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : resetState
static PyObject * unigine_Material_reset_state(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : checkStateConditions
static PyObject * unigine_Material_check_state_conditions(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : getStateName
static PyObject * unigine_Material_get_state_name(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : getStateSwitchItem
static PyObject * unigine_Material_get_state_switch_item(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : getStateSwitchNumItems
static PyObject * unigine_Material_get_state_switch_num_items(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : getStateType
static PyObject * unigine_Material_get_state_type(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : getState
static PyObject * unigine_Material_get_state(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : setState
static PyObject * unigine_Material_set_state(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : getState
static PyObject * unigine_Material_get_state(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : setState
static PyObject * unigine_Material_set_state(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : getNumTextures
static PyObject * unigine_Material_get_num_textures(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : findTexture
static PyObject * unigine_Material_find_texture(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : isTextureOverridden
static PyObject * unigine_Material_is_texture_overridden(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : isTextureLoaded
static PyObject * unigine_Material_is_texture_loaded(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : isTextureInternal
static PyObject * unigine_Material_is_texture_internal(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : resetTexture
static PyObject * unigine_Material_reset_texture(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : checkTextureConditions
static PyObject * unigine_Material_check_texture_conditions(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : getTextureName
static PyObject * unigine_Material_get_texture_name(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : getTextureUnit
static PyObject * unigine_Material_get_texture_unit(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : isTextureEditable
static PyObject * unigine_Material_is_texture_editable(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : getTextureSource
static PyObject * unigine_Material_get_texture_source(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : getTextureSamplerFlags
static PyObject * unigine_Material_get_texture_sampler_flags(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : setTextureSamplerFlags
static PyObject * unigine_Material_set_texture_sampler_flags(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : getTextureFormatFlags
static PyObject * unigine_Material_get_texture_format_flags(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : getTextureImage
static PyObject * unigine_Material_get_texture_image(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : setTextureImage
static PyObject * unigine_Material_set_texture_image(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : getTexture
static PyObject * unigine_Material_get_texture(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : getTexture
static PyObject * unigine_Material_get_texture(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : setTexture
static PyObject * unigine_Material_set_texture(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : setTexture
static PyObject * unigine_Material_set_texture(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : setTexturePath
static PyObject * unigine_Material_set_texture_path(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : getTexturePath
static PyObject * unigine_Material_get_texture_path(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : setTexturePath
static PyObject * unigine_Material_set_texture_path(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : getTexturePath
static PyObject * unigine_Material_get_texture_path(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : getTextureRamp
static PyObject * unigine_Material_get_texture_ramp(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : getTextureRampOverride
static PyObject * unigine_Material_get_texture_ramp_override(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : isEditable
static PyObject * unigine_Material_is_editable(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : isHidden
static PyObject * unigine_Material_is_hidden(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : isBase
static PyObject * unigine_Material_is_base(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : isBrush
static PyObject * unigine_Material_is_brush(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : isLegacy
static PyObject * unigine_Material_is_legacy(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : isPreviewHidden
static PyObject * unigine_Material_is_preview_hidden(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : isReflection2D
static PyObject * unigine_Material_is_reflection2_d(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : isInternal
static PyObject * unigine_Material_is_internal(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : isManual
static PyObject * unigine_Material_is_manual(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : canSave
static PyObject * unigine_Material_can_save(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : isAutoSave
static PyObject * unigine_Material_is_auto_save(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : isFileEngine
static PyObject * unigine_Material_is_file_engine(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : isEmpty
static PyObject * unigine_Material_is_empty(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : hasOverrides
static PyObject * unigine_Material_has_overrides(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : saveState
static PyObject * unigine_Material_save_state(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : restoreState
static PyObject * unigine_Material_restore_state(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : loadXml
static PyObject * unigine_Material_load_xml(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : saveXml
static PyObject * unigine_Material_save_xml(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : loadUlon
static PyObject * unigine_Material_load_ulon(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : load
static PyObject * unigine_Material_load(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : save
static PyObject * unigine_Material_save(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : reload
static PyObject * unigine_Material_reload(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : createMaterialFile
static PyObject * unigine_Material_create_material_file(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : getRenderPass
static PyObject * unigine_Material_get_render_pass(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : getRenderPassName
static PyObject * unigine_Material_get_render_pass_name(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : runExpression
static PyObject * unigine_Material_run_expression(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : renderScreen
static PyObject * unigine_Material_render_screen(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : renderScreen
static PyObject * unigine_Material_render_screen(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : renderCompute
static PyObject * unigine_Material_render_compute(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};

// public : renderCompute
static PyObject * unigine_Material_render_compute(unigine_Material* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    return ret;
};


static PyMethodDef unigine_Material_methods[] = {
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

        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "OPTION_TRANSPARENT",
            Py_BuildValue("i", Unigine::Material::OPTION_TRANSPARENT)
        );
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "OPTION_ORDER",
            Py_BuildValue("i", Unigine::Material::OPTION_ORDER)
        );
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "OPTION_SHADOW_MASK",
            Py_BuildValue("i", Unigine::Material::OPTION_SHADOW_MASK)
        );
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "OPTION_VIEWPORT_MASK",
            Py_BuildValue("i", Unigine::Material::OPTION_VIEWPORT_MASK)
        );
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "OPTION_BLEND_SRC",
            Py_BuildValue("i", Unigine::Material::OPTION_BLEND_SRC)
        );
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "OPTION_BLEND_DEST",
            Py_BuildValue("i", Unigine::Material::OPTION_BLEND_DEST)
        );
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "OPTION_DEPTH_MASK",
            Py_BuildValue("i", Unigine::Material::OPTION_DEPTH_MASK)
        );
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "OPTION_DEPTH_TEST",
            Py_BuildValue("i", Unigine::Material::OPTION_DEPTH_TEST)
        );
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "OPTION_TWO_SIDED",
            Py_BuildValue("i", Unigine::Material::OPTION_TWO_SIDED)
        );
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "OPTION_CAST_PROJ_OMNI_SHADOW",
            Py_BuildValue("i", Unigine::Material::OPTION_CAST_PROJ_OMNI_SHADOW)
        );
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "OPTION_CAST_WORLD_SHADOW",
            Py_BuildValue("i", Unigine::Material::OPTION_CAST_WORLD_SHADOW)
        );
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "OPTION_OVERLAP",
            Py_BuildValue("i", Unigine::Material::OPTION_OVERLAP)
        );
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TRANSPARENT_NONE",
            Py_BuildValue("i", Unigine::Material::TRANSPARENT_NONE)
        );
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TRANSPARENT_ALPHA_TEST",
            Py_BuildValue("i", Unigine::Material::TRANSPARENT_ALPHA_TEST)
        );
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TRANSPARENT_BLEND",
            Py_BuildValue("i", Unigine::Material::TRANSPARENT_BLEND)
        );
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TRANSPARENT_WATER",
            Py_BuildValue("i", Unigine::Material::TRANSPARENT_WATER)
        );
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "STATE_TOGGLE",
            Py_BuildValue("i", Unigine::Material::STATE_TOGGLE)
        );
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "STATE_SWITCH",
            Py_BuildValue("i", Unigine::Material::STATE_SWITCH)
        );
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "STATE_INT",
            Py_BuildValue("i", Unigine::Material::STATE_INT)
        );
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_ASSET",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_ASSET)
        );
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_RAMP",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_RAMP)
        );
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_PROCEDURAL",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_PROCEDURAL)
        );
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_SURFACE_CUSTOM_TEXTURE",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_SURFACE_CUSTOM_TEXTURE)
        );
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_GBUFFER_ALBEDO",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_GBUFFER_ALBEDO)
        );
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_GBUFFER_SHADING",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_GBUFFER_SHADING)
        );
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_GBUFFER_NORMAL",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_GBUFFER_NORMAL)
        );
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_GBUFFER_VELOCITY",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_GBUFFER_VELOCITY)
        );
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_GBUFFER_MATERIAL_MASK",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_GBUFFER_MATERIAL_MASK)
        );
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_GBUFFER_FEATURES",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_GBUFFER_FEATURES)
        );
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_AUXILIARY",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_AUXILIARY)
        );
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_REFRACTION",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_REFRACTION)
        );
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_REFRACTION_MASK",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_REFRACTION_MASK)
        );
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_TRANSPARENT_BLUR",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_TRANSPARENT_BLUR)
        );
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_LIGHTS",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_LIGHTS)
        );
        // enum_typename:  
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
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_SHADOW_SHAFTS",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_SHADOW_SHAFTS)
        );
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_DOF_MASK",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_DOF_MASK)
        );
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_AUTO_EXPOSURE",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_AUTO_EXPOSURE)
        );
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_AUTO_WHITE_BALANCE",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_AUTO_WHITE_BALANCE)
        );
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_SCREEN_COLOR",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_SCREEN_COLOR)
        );
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_SCREEN_COLOR_OPACITY",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_SCREEN_COLOR_OPACITY)
        );
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_SCREEN_COLOR_OLD",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_SCREEN_COLOR_OLD)
        );
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_SCREEN_COLOR_OLD_REPROJECTION",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_SCREEN_COLOR_OLD_REPROJECTION)
        );
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_NORMAL_UNPACK",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_NORMAL_UNPACK)
        );
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_CURRENT_DEPTH",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_CURRENT_DEPTH)
        );
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_OPACITY_DEPTH",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_OPACITY_DEPTH)
        );
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_LINEAR_DEPTH",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_LINEAR_DEPTH)
        );
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_LIGHT_IMAGE",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_LIGHT_IMAGE)
        );
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_LIGHT_SHADOW_DEPTH",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_LIGHT_SHADOW_DEPTH)
        );
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_LIGHT_SHADOW_COLOR",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_LIGHT_SHADOW_COLOR)
        );
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_HAZE_AMBIENT",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_HAZE_AMBIENT)
        );
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_TRANSPARENT_ENVIRONMENT",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_TRANSPARENT_ENVIRONMENT)
        );
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_REFLECTION_2D",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_REFLECTION_2D)
        );
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_REFLECTION_CUBE",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_REFLECTION_CUBE)
        );
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_SCATTERING_SKY_LUT",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_SCATTERING_SKY_LUT)
        );
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_WBUFFER_CONSTANT_ID",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_WBUFFER_CONSTANT_ID)
        );
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_WBUFFER_DIFFUSE",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_WBUFFER_DIFFUSE)
        );
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_WBUFFER_NORMAL",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_WBUFFER_NORMAL)
        );
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_WBUFFER_WATER",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_WBUFFER_WATER)
        );
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_WBUFFER_SS_ENVIRONMENT",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_WBUFFER_SS_ENVIRONMENT)
        );
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_WBUFFER_WU_MASK",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_WBUFFER_WU_MASK)
        );
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_WBUFFER_PLANAR_REFLECTION",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_WBUFFER_PLANAR_REFLECTION)
        );
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_WBUFFER_OPACITY_SCREEN",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_WBUFFER_OPACITY_SCREEN)
        );
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_CLOUDS_SCREEN",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_CLOUDS_SCREEN)
        );
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_CLOUDS_STATIC_COVERAGE",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_CLOUDS_STATIC_COVERAGE)
        );
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_CLOUDS_REGION_MASK",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_CLOUDS_REGION_MASK)
        );
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_CLOUDS_DYNAMIC_COVERAGE",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_CLOUDS_DYNAMIC_COVERAGE)
        );
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_TERRAIN_GLOBAL_DEPTH",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_TERRAIN_GLOBAL_DEPTH)
        );
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_TERRAIN_GLOBAL_FLAT_POSITION",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_TERRAIN_GLOBAL_FLAT_POSITION)
        );
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_FIELD_HEIGHT_ARRAY",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_FIELD_HEIGHT_ARRAY)
        );
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_FIELD_SHORELINE_ARRAY",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_FIELD_SHORELINE_ARRAY)
        );
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_DECAL_DEPTH",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_DECAL_DEPTH)
        );
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_DECAL_ALBEDO",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_DECAL_ALBEDO)
        );
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_DECAL_NORMAL",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_DECAL_NORMAL)
        );
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_DECAL_SHADING",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_DECAL_SHADING)
        );
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_CUSTOM",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_CUSTOM)
        );
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "PARAMETER_FLOAT",
            Py_BuildValue("i", Unigine::Material::PARAMETER_FLOAT)
        );
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "PARAMETER_FLOAT2",
            Py_BuildValue("i", Unigine::Material::PARAMETER_FLOAT2)
        );
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "PARAMETER_FLOAT3",
            Py_BuildValue("i", Unigine::Material::PARAMETER_FLOAT3)
        );
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "PARAMETER_FLOAT4",
            Py_BuildValue("i", Unigine::Material::PARAMETER_FLOAT4)
        );
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "PARAMETER_INT",
            Py_BuildValue("i", Unigine::Material::PARAMETER_INT)
        );
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "PARAMETER_INT2",
            Py_BuildValue("i", Unigine::Material::PARAMETER_INT2)
        );
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "PARAMETER_INT3",
            Py_BuildValue("i", Unigine::Material::PARAMETER_INT3)
        );
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "PARAMETER_INT4",
            Py_BuildValue("i", Unigine::Material::PARAMETER_INT4)
        );
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "PARAMETER_ARRAY_FLOAT",
            Py_BuildValue("i", Unigine::Material::PARAMETER_ARRAY_FLOAT)
        );
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "PARAMETER_ARRAY_FLOAT2",
            Py_BuildValue("i", Unigine::Material::PARAMETER_ARRAY_FLOAT2)
        );
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "PARAMETER_ARRAY_FLOAT4",
            Py_BuildValue("i", Unigine::Material::PARAMETER_ARRAY_FLOAT4)
        );
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "PARAMETER_ARRAY_INT",
            Py_BuildValue("i", Unigine::Material::PARAMETER_ARRAY_INT)
        );
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "PARAMETER_ARRAY_INT2",
            Py_BuildValue("i", Unigine::Material::PARAMETER_ARRAY_INT2)
        );
        // enum_typename:  
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "PARAMETER_ARRAY_INT4",
            Py_BuildValue("i", Unigine::Material::PARAMETER_ARRAY_INT4)
        );
        // enum_typename:  
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


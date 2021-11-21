// this file automaticly generated from UnigineMaterial.h 
#include "python3_unigine_material.h"

#include <string>
#include <Python.h>
#include <structmember.h>
bool Python3UnigineMaterial::isReady() {
    // Initialize tp_dict with empty dictionary
    
    if (!unigine_MaterialType.tp_dict) {
        unigine_MaterialType.tp_dict = PyDict_New();

        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "OPTION_BLEND",
            Py_BuildValue("i", Unigine::Material::OPTION_BLEND)
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
            unigine_MaterialType.tp_dict, "OPTION_RECEIVE_SHADOW",
            Py_BuildValue("i", Unigine::Material::OPTION_RECEIVE_SHADOW)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "OPTION_CAST_PROJ_OMNI_SHADOW",
            Py_BuildValue("i", Unigine::Material::OPTION_CAST_PROJ_OMNI_SHADOW)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "OPTION_RECEIVE_WORLD_SHADOW",
            Py_BuildValue("i", Unigine::Material::OPTION_RECEIVE_WORLD_SHADOW)
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
            unigine_MaterialType.tp_dict, "TEXTURE_IMAGE",
            Py_BuildValue("i", Unigine::Material::TEXTURE_IMAGE)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_CURVE",
            Py_BuildValue("i", Unigine::Material::TEXTURE_CURVE)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_GBUFFER_ALBEDO",
            Py_BuildValue("i", Unigine::Material::TEXTURE_GBUFFER_ALBEDO)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_GBUFFER_SHADING",
            Py_BuildValue("i", Unigine::Material::TEXTURE_GBUFFER_SHADING)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_GBUFFER_NORMAL",
            Py_BuildValue("i", Unigine::Material::TEXTURE_GBUFFER_NORMAL)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_GBUFFER_VELOCITY",
            Py_BuildValue("i", Unigine::Material::TEXTURE_GBUFFER_VELOCITY)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_GBUFFER_MATERIAL_MASK",
            Py_BuildValue("i", Unigine::Material::TEXTURE_GBUFFER_MATERIAL_MASK)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_GBUFFER_FEATURES",
            Py_BuildValue("i", Unigine::Material::TEXTURE_GBUFFER_FEATURES)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_AUXILIARY",
            Py_BuildValue("i", Unigine::Material::TEXTURE_AUXILIARY)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_REFRACTION",
            Py_BuildValue("i", Unigine::Material::TEXTURE_REFRACTION)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_REFRACTION_MASK",
            Py_BuildValue("i", Unigine::Material::TEXTURE_REFRACTION_MASK)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_TRANSPARENT_BLUR",
            Py_BuildValue("i", Unigine::Material::TEXTURE_TRANSPARENT_BLUR)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_LIGHTS",
            Py_BuildValue("i", Unigine::Material::TEXTURE_LIGHTS)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_BENT_NORMAL",
            Py_BuildValue("i", Unigine::Material::TEXTURE_BENT_NORMAL)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SSAO",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SSAO)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SSGI",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SSGI)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SSR",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SSR)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_CURVATURE",
            Py_BuildValue("i", Unigine::Material::TEXTURE_CURVATURE)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_DOF_MASK",
            Py_BuildValue("i", Unigine::Material::TEXTURE_DOF_MASK)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_AUTO_EXPOSURE",
            Py_BuildValue("i", Unigine::Material::TEXTURE_AUTO_EXPOSURE)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SCREEN_COLOR",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SCREEN_COLOR)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SCREEN_COLOR_OLD",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SCREEN_COLOR_OLD)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_NORMAL_UNPACK",
            Py_BuildValue("i", Unigine::Material::TEXTURE_NORMAL_UNPACK)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_CURRENT_DEPTH",
            Py_BuildValue("i", Unigine::Material::TEXTURE_CURRENT_DEPTH)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_OPACITY_DEPTH",
            Py_BuildValue("i", Unigine::Material::TEXTURE_OPACITY_DEPTH)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_LINEAR_DEPTH",
            Py_BuildValue("i", Unigine::Material::TEXTURE_LINEAR_DEPTH)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_OPACITY_SCREEN",
            Py_BuildValue("i", Unigine::Material::TEXTURE_OPACITY_SCREEN)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_LIGHT_IMAGE",
            Py_BuildValue("i", Unigine::Material::TEXTURE_LIGHT_IMAGE)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_LIGHT_SHADOW_DEPTH",
            Py_BuildValue("i", Unigine::Material::TEXTURE_LIGHT_SHADOW_DEPTH)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_LIGHT_SHADOW_COLOR",
            Py_BuildValue("i", Unigine::Material::TEXTURE_LIGHT_SHADOW_COLOR)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_TRANSPARENT_ENVIRONMENT",
            Py_BuildValue("i", Unigine::Material::TEXTURE_TRANSPARENT_ENVIRONMENT)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_REFLECTION_2D",
            Py_BuildValue("i", Unigine::Material::TEXTURE_REFLECTION_2D)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_REFLECTION_CUBE",
            Py_BuildValue("i", Unigine::Material::TEXTURE_REFLECTION_CUBE)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SCATTERING_SKY_LUT",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SCATTERING_SKY_LUT)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_WBUFFER_CONSTANT_ID",
            Py_BuildValue("i", Unigine::Material::TEXTURE_WBUFFER_CONSTANT_ID)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_WBUFFER_DIFFUSE",
            Py_BuildValue("i", Unigine::Material::TEXTURE_WBUFFER_DIFFUSE)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_WBUFFER_NORMAL",
            Py_BuildValue("i", Unigine::Material::TEXTURE_WBUFFER_NORMAL)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_WBUFFER_WATER",
            Py_BuildValue("i", Unigine::Material::TEXTURE_WBUFFER_WATER)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_WBUFFER_SS_ENVIRONMENT",
            Py_BuildValue("i", Unigine::Material::TEXTURE_WBUFFER_SS_ENVIRONMENT)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_WBUFFER_WU_MASK",
            Py_BuildValue("i", Unigine::Material::TEXTURE_WBUFFER_WU_MASK)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_WBUFFER_PLANAR_REFLECTION",
            Py_BuildValue("i", Unigine::Material::TEXTURE_WBUFFER_PLANAR_REFLECTION)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_CLOUDS_SCREEN",
            Py_BuildValue("i", Unigine::Material::TEXTURE_CLOUDS_SCREEN)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_CLOUDS_STATIC_COVERAGE",
            Py_BuildValue("i", Unigine::Material::TEXTURE_CLOUDS_STATIC_COVERAGE)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_CLOUDS_DYNAMIC_COVERAGE",
            Py_BuildValue("i", Unigine::Material::TEXTURE_CLOUDS_DYNAMIC_COVERAGE)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_TERRAIN_GLOBAL_DEPTH",
            Py_BuildValue("i", Unigine::Material::TEXTURE_TERRAIN_GLOBAL_DEPTH)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_TERRAIN_GLOBAL_FLAT_POSITION",
            Py_BuildValue("i", Unigine::Material::TEXTURE_TERRAIN_GLOBAL_FLAT_POSITION)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_FIELD_HEIGHT_ARRAY",
            Py_BuildValue("i", Unigine::Material::TEXTURE_FIELD_HEIGHT_ARRAY)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_FIELD_SHORELINE_ARRAY",
            Py_BuildValue("i", Unigine::Material::TEXTURE_FIELD_SHORELINE_ARRAY)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_DECAL_DEPTH",
            Py_BuildValue("i", Unigine::Material::TEXTURE_DECAL_DEPTH)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_DECAL_ALBEDO",
            Py_BuildValue("i", Unigine::Material::TEXTURE_DECAL_ALBEDO)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_DECAL_NORMAL",
            Py_BuildValue("i", Unigine::Material::TEXTURE_DECAL_NORMAL)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_DECAL_SHADING",
            Py_BuildValue("i", Unigine::Material::TEXTURE_DECAL_SHADING)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_PROCEDURAL",
            Py_BuildValue("i", Unigine::Material::TEXTURE_PROCEDURAL)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_FILTER",
            Py_BuildValue("i", Unigine::Material::TEXTURE_FILTER)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_CUSTOM",
            Py_BuildValue("i", Unigine::Material::TEXTURE_CUSTOM)
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

/* Copyright (C) 2005-2021, UNIGINE. All rights reserved.
 *
 * This file is a part of the UNIGINE 2 SDK.
 *
 * Your use and / or redistribution of this software in source and / or
 * binary form, with or without modification, is subject to: (i) your
 * ongoing acceptance of and compliance with the terms and conditions of
 * the UNIGINE License Agreement; and (ii) your inclusion of this notice
 * in any version of this software that you use or redistribute.
 * A copy of the UNIGINE License Agreement is available by contacting
 * UNIGINE. at http://unigine.com/
 */

// DO NOT EDIT DIRECTLY. This is an auto-generated file. Your changes will be lost.

#pragma once

#include "UnigineRender.h"
#include "UnigineXml.h"
#include "UnigineStreams.h"
#include "UnigineImage.h"
#include "UnigineTextures.h"
#include "UnigineShader.h"
#include "UnigineGUID.h"
#include "UnigineNode.h"
#include "UnigineCurve2d.h"

namespace Unigine
{


class UNIGINE_API Material : public APIInterface
{
public:

	enum
	{
		OPTION_BLEND = 0,
		OPTION_ORDER,
		OPTION_SHADOW_MASK,
		OPTION_VIEWPORT_MASK,
		OPTION_TRANSPARENT,
		OPTION_DEPTH_MASK,
		OPTION_DEPTH_TEST,
		OPTION_TWO_SIDED,
		OPTION_RECEIVE_SHADOW,
		OPTION_CAST_PROJ_OMNI_SHADOW,
		OPTION_RECEIVE_WORLD_SHADOW,
		OPTION_CAST_WORLD_SHADOW,
		OPTION_OVERLAP,
	};

	enum
	{
		TRANSPARENT_NONE = 0,
		TRANSPARENT_ALPHA_TEST,
		TRANSPARENT_BLEND,
		TRANSPARENT_WATER,
	};

	enum
	{
		STATE_TOGGLE = 0,
		STATE_SWITCH,
		STATE_INT,
	};

	enum
	{
		TEXTURE_IMAGE = 0,
		TEXTURE_CURVE,
		TEXTURE_GBUFFER_ALBEDO,
		TEXTURE_GBUFFER_SHADING,
		TEXTURE_GBUFFER_NORMAL,
		TEXTURE_GBUFFER_VELOCITY,
		TEXTURE_GBUFFER_MATERIAL_MASK,
		TEXTURE_GBUFFER_FEATURES,
		TEXTURE_AUXILIARY,
		TEXTURE_REFRACTION,
		TEXTURE_REFRACTION_MASK,
		TEXTURE_TRANSPARENT_BLUR,
		TEXTURE_LIGHTS,
		TEXTURE_BENT_NORMAL,
		TEXTURE_SSAO,
		TEXTURE_SSGI,
		TEXTURE_SSR,
		TEXTURE_CURVATURE,
		TEXTURE_DOF_MASK,
		TEXTURE_AUTO_EXPOSURE,
		TEXTURE_SCREEN_COLOR,
		TEXTURE_SCREEN_COLOR_OLD,
		TEXTURE_NORMAL_UNPACK,
		TEXTURE_CURRENT_DEPTH,
		TEXTURE_OPACITY_DEPTH,
		TEXTURE_LINEAR_DEPTH,
		TEXTURE_OPACITY_SCREEN,
		TEXTURE_LIGHT_IMAGE,
		TEXTURE_LIGHT_SHADOW_DEPTH,
		TEXTURE_LIGHT_SHADOW_COLOR,
		TEXTURE_TRANSPARENT_ENVIRONMENT,
		TEXTURE_REFLECTION_2D,
		TEXTURE_REFLECTION_CUBE,
		TEXTURE_SCATTERING_SKY_LUT,
		TEXTURE_WBUFFER_CONSTANT_ID,
		TEXTURE_WBUFFER_DIFFUSE,
		TEXTURE_WBUFFER_NORMAL,
		TEXTURE_WBUFFER_WATER,
		TEXTURE_WBUFFER_SS_ENVIRONMENT,
		TEXTURE_WBUFFER_WU_MASK,
		TEXTURE_WBUFFER_PLANAR_REFLECTION,
		TEXTURE_CLOUDS_SCREEN,
		TEXTURE_CLOUDS_STATIC_COVERAGE,
		TEXTURE_CLOUDS_DYNAMIC_COVERAGE,
		TEXTURE_TERRAIN_GLOBAL_DEPTH,
		TEXTURE_TERRAIN_GLOBAL_FLAT_POSITION,
		TEXTURE_FIELD_HEIGHT_ARRAY,
		TEXTURE_FIELD_SHORELINE_ARRAY,
		TEXTURE_DECAL_DEPTH,
		TEXTURE_DECAL_ALBEDO,
		TEXTURE_DECAL_NORMAL,
		TEXTURE_DECAL_SHADING,
		TEXTURE_PROCEDURAL,
		TEXTURE_FILTER,
		TEXTURE_CUSTOM,
	};

	enum
	{
		PARAMETER_FLOAT = 0,
		PARAMETER_FLOAT2,
		PARAMETER_FLOAT3,
		PARAMETER_FLOAT4,
		PARAMETER_INT,
		PARAMETER_INT2,
		PARAMETER_INT3,
		PARAMETER_INT4,
		PARAMETER_ARRAY_FLOAT,
		PARAMETER_ARRAY_FLOAT2,
		PARAMETER_ARRAY_FLOAT4,
		PARAMETER_ARRAY_INT,
		PARAMETER_ARRAY_INT2,
		PARAMETER_ARRAY_INT4,
		PARAMETER_COMBINER,
	};
	static Ptr<Material> create();
	int getBlendDestFunc() const;
	int getBlendSrcFunc() const;
	void setBlendFunc(int src, int dest);
	void setCastShadow(int shadow);
	int getCastShadow() const;
	void setCastWorldShadow(int shadow);
	int getCastWorldShadow() const;
	void setShadowMask(int mask);
	int getShadowMask() const;
	void setDepthMask(int mask);
	int getDepthMask() const;
	void setDepthTest(int test);
	int getDepthTest() const;
	void setOverlap(int overlap);
	int getOverlap() const;
	void setOrder(int order);
	int getOrder() const;
	const char *getOptionTitle(int option) const;
	const char *getOptionTooltip(int option) const;
	const char *getOptionGroup(int option) const;
	int getOptionWidgetIndex(int option) const;
	bool isOptionHidden(int option) const;
	bool setParent(const Ptr<Material> &material, bool save_all_values = true);
	Ptr<Material> getParent() const;
	bool isParent(const char *name) const;
	bool isParent(const UGUID & guid) const;
	Ptr<Material> getBaseMaterial() const;
	int getNumChildren() const;
	Ptr<Material> getChild(int num) const;
	Ptr<Material> clone(const char *name, const char *path, const UGUID & guid);
	Ptr<Material> clone(const char *name, const char *path);
	Ptr<Material> clone(const char *name);
	Ptr<Material> clone();
	Ptr<Material> inherit(const char *name, const char *path, const UGUID & guid);
	Ptr<Material> inherit(const char *name, const char *path);
	Ptr<Material> inherit(const char *name);
	Ptr<Material> inherit();
	void setName(const char *name);
	const char *getName() const;
	UGUID getGUID() const;
	void setPath(const char *path);
	const char *getPath() const;
	void setFileGUID(const UGUID & fileguid);
	UGUID getFileGUID() const;
	bool isNodeTypeSupported(Node::TYPE type) const;
	bool isNodeSupported(const Ptr<Node> &node) const;
	bool canRenderNode() const;
	bool checkShaderCache() const;
	bool checkShaderCache(Render::PASS pass, Node::TYPE node_type) const;
	bool compileShader(Render::PASS pass, Node::TYPE node_type);
	Ptr<Shader> fetchShader(Render::PASS pass, Node::TYPE node_type);
	Ptr<Shader> fetchShader(Render::PASS pass);
	Ptr<Shader> fetchShader(const char *pass_name, int node);
	Ptr<Shader> fetchShader(const char *pass_name);
	void createShaders(bool recursive = false);
	void destroyShaders();
	void destroyTextures();
	int getNumParameters() const;
	int findParameter(const char *name) const;
	int fetchParameter(const char *name, int fast_id);
	void resetParameter(int num);
	bool checkParameterConditions(int num) const;
	int getParameterType(int num) const;
	bool isParameterHidden(int num) const;
	bool isParameterInt(int num) const;
	bool isParameterFloat(int num) const;
	bool isParameterOverridden(int num) const;
	const char *getParameterName(int num) const;
	const char *getParameterTitle(int num) const;
	const char *getParameterTooltip(int num) const;
	const char *getParameterGroup(int num) const;
	const char *getParameterWidget(int num) const;
	int getParameterWidgetIndex(int num) const;
	bool isParameterExpressionEnabled(int num) const;
	void setParameterExpressionEnabled(int num, bool enabled);
	const char *getParameterExpression(int num) const;
	int setParameterExpression(int num, const char *expression);
	int getParameterMinExpand(int num) const;
	int getParameterMaxExpand(int num) const;
	float getParameterMinValue(int num) const;
	float getParameterMaxValue(int num) const;
	void setParameterFloat(int num, float value);
	void setParameterFloat(const char *name, float value);
	float getParameterFloat(int num) const;
	float getParameterFloat(const char *name) const;
	void setParameterFloat2(int num, const Math::vec2 &value);
	void setParameterFloat2(const char *name, const Math::vec2 &value);
	Math::vec2 getParameterFloat2(int num) const;
	Math::vec2 getParameterFloat2(const char *name) const;
	void setParameterFloat3(int num, const Math::vec3 &value);
	void setParameterFloat3(const char *name, const Math::vec3 &value);
	Math::vec3 getParameterFloat3(int num) const;
	Math::vec3 getParameterFloat3(const char *name) const;
	void setParameterFloat4(int num, const Math::vec4 &value);
	void setParameterFloat4(const char *name, const Math::vec4 &value);
	Math::vec4 getParameterFloat4(int num) const;
	Math::vec4 getParameterFloat4(const char *name) const;
	void setParameterInt(int num, int value);
	void setParameterInt(const char *name, int value);
	int getParameterInt(int num) const;
	int getParameterInt(const char *name) const;
	void setParameterInt2(int num, const Math::ivec2 &value);
	void setParameterInt2(const char *name, const Math::ivec2 &value);
	Math::ivec2 getParameterInt2(int num) const;
	Math::ivec2 getParameterInt2(const char *name) const;
	void setParameterInt3(int num, const Math::ivec3 &value);
	void setParameterInt3(const char *name, const Math::ivec3 &value);
	Math::ivec3 getParameterInt3(int num) const;
	Math::ivec3 getParameterInt3(const char *name) const;
	void setParameterInt4(int num, const Math::ivec4 &value);
	void setParameterInt4(const char *name, const Math::ivec4 &value);
	Math::ivec4 getParameterInt4(int num) const;
	Math::ivec4 getParameterInt4(const char *name) const;
	int getParameterArraySize(int num) const;
	bool isParameterArray(int num) const;
	void getParameterArray(int num, Vector< float > &values) const;
	void setParameterArray(int num, const Vector< float > &values);
	void getParameterArray(int num, Vector< Math::vec2 > &values) const;
	void setParameterArray(int num, const Vector< Math::vec2 > &values);
	void getParameterArray(int num, Vector< Math::vec4 > &values) const;
	void setParameterArray(int num, const Vector< Math::vec4 > &values);
	void getParameterArray(int num, Vector< int > &values) const;
	void setParameterArray(int num, const Vector< int > &values);
	void getParameterArray(int num, Vector< Math::ivec2 > &values) const;
	void setParameterArray(int num, const Vector< Math::ivec2 > &values);
	void getParameterArray(int num, Vector< Math::ivec4 > &values) const;
	void setParameterArray(int num, const Vector< Math::ivec4 > &values);
	int getNumStates() const;
	int findState(const char *name) const;
	int fetchTexture(const char *name, int fast_id);
	int fetchState(const char *name, int fast_id);
	bool isStateHidden(int num) const;
	bool isStateOverridden(int num) const;
	bool isStateInternal(int num) const;
	void resetState(int num);
	bool checkStateConditions(int num) const;
	const char *getStateName(int num) const;
	const char *getStateTitle(int num) const;
	const char *getStateTooltip(int num) const;
	const char *getStateGroup(int num) const;
	const char *getStateSwitchGroup(int num) const;
	int getStateWidgetIndex(int num) const;
	const char *getStateSwitchItem(int num, int item) const;
	int getStateSwitchNumItems(int num) const;
	int getStateType(int num) const;
	int getState(int num) const;
	void setState(int num, int value);
	int getState(const char *name) const;
	void setState(const char *name, int value);
	int getNumTextures() const;
	int findTexture(const char *name) const;
	bool isTextureHidden(int num) const;
	bool isTextureOverridden(int num) const;
	bool isTextureLoaded(int num) const;
	bool isTextureInternal(int num) const;
	void resetTexture(int num);
	bool checkTextureConditions(int num) const;
	const char *getTextureName(int num) const;
	const char *getTextureTitle(int num) const;
	const char *getTextureTooltip(int num) const;
	const char *getTextureGroup(int num) const;
	int getTextureWidgetIndex(int num) const;
	int getTextureUnit(int num) const;
	int getTextureType(int num) const;
	int getTextureFlags(int num) const;
	void setTextureFlags(int num, int flags);
	int getTextureImage(int num, const Ptr<Image> &image) const;
	int setTextureImage(int num, const Ptr<Image> &image);
	Ptr<Texture> getTexture(int num);
	void setTexture(int num, const Ptr<Texture> &texture);
	void setTexture(const char *name, const Ptr<Texture> &texture);
	void setTexturePath(int num, const char *path);
	const char *getTexturePath(int num) const;
	void setTexturePath(const char *name, const char *path);
	const char *getTexturePath(const char *name) const;
	int getProceduralTextureImage(int num, const Ptr<Image> &image);
	int setProceduralTextureImage(int num, const Ptr<Image> &image);
	void setProceduralTexture(int num, const Ptr<Texture> &texture);
	void setImageTextureProcedural(int num, const Ptr<Material> &procedural, int procedural_num);
	Ptr<TextureCurve> getTextureCurve(int num);
	Ptr<TextureCurve> getTextureCurveOverride(int num);
	void setTransparent(int transparent);
	int getTransparent() const;
	bool isWater() const;
	bool isDeferred() const;
	bool isForward() const;
	bool isAlphaTest() const;
	void setTwoSided(int sided);
	int getTwoSided() const;
	void setViewportMask(int mask);
	int getViewportMask() const;
	bool isEditable() const;
	bool isFilter() const;
	bool isHidden() const;
	bool isBase() const;
	bool isBrush() const;
	bool isLegacy() const;
	bool isOptionsHidden() const;
	bool isPreviewHidden() const;
	bool isProcedural() const;
	bool isReflection2D() const;
	bool isInternal() const;
	bool isManual() const;
	bool canSave() const;
	bool isAutoSave() const;
	bool isEngine() const;
	bool isEmpty() const;
	bool hasOverrides() const;
	bool saveState(const Ptr<Stream> &stream, bool forced = false) const;
	bool restoreState(const Ptr<Stream> &stream, bool forced = false);
	int loadXml(const Ptr<Xml> &xml);
	bool saveXml(const Ptr<Xml> &xml) const;
	bool load(const char *path);
	bool load();
	bool save(const char *path);
	bool save();
	bool reload();
	Render::PASS getRenderPass(const char *pass_name) const;
	const char *getRenderPassName(Render::PASS type) const;
	bool runExpression(const char *name, int w, int h, int d = 1);
	bool renderScreen(const char *pass_name);
	void renderScreen(Render::PASS pass);
	bool renderCompute(const char *pass_name, int group_threads_x = 1, int group_threads_y = 1, int group_threads_z = 1);
	void renderCompute(Render::PASS pass, int group_threads_x = 1, int group_threads_y = 1, int group_threads_z = 1);
};
typedef Ptr<Material> MaterialPtr;

} // namespace Unigine

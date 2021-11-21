// this file automaticly generated from UnigineMaterial.h 
#include "python3_unigine_material.h"

#include <string>
#include <Python.h>
#include <structmember.h>

// ------------------------------------------------------------------------------------------
// unigine_Material 

typedef struct {
    PyObject_HEAD
    // Type-specific fields go here.
    Unigine::Ptr<Unigine::Material> unigine_object_ptr;
} unigine_Material;

static void unigine_Material_dealloc(unigine_Material* self) {
    // Unigine::Log::message("unigine_Material_dealloc");
    Py_TYPE(self)->tp_free((PyObject*)self);
}

static PyObject *unigine_Material_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    // Unigine::Log::message("unigine_Material_new");
    unigine_Material *self;
    self = (unigine_Material *)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static int unigine_Material_init(unigine_Material *self, PyObject *args, PyObject *kwds) {
    // nothing
    return 0;
}

// methods
// SKIPPED (return type not supported): static Ptr<Material> Material::create();

// method: int Material::getBlendDestFunc();
static PyObject *unigine_Material_getBlendDestFunc(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: int Material::getBlendSrcFunc();
static PyObject *unigine_Material_getBlendSrcFunc(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: void Material::setBlendFunc(int src, int dest);
static PyObject *unigine_Material_setBlendFunc(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: void Material::setCastShadow(int shadow);
static PyObject *unigine_Material_setCastShadow(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: int Material::getCastShadow();
static PyObject *unigine_Material_getCastShadow(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: void Material::setCastWorldShadow(int shadow);
static PyObject *unigine_Material_setCastWorldShadow(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: int Material::getCastWorldShadow();
static PyObject *unigine_Material_getCastWorldShadow(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: void Material::setShadowMask(int mask);
static PyObject *unigine_Material_setShadowMask(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: int Material::getShadowMask();
static PyObject *unigine_Material_getShadowMask(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: void Material::setDepthMask(int mask);
static PyObject *unigine_Material_setDepthMask(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: int Material::getDepthMask();
static PyObject *unigine_Material_getDepthMask(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: void Material::setDepthTest(int test);
static PyObject *unigine_Material_setDepthTest(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: int Material::getDepthTest();
static PyObject *unigine_Material_getDepthTest(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: void Material::setOverlap(int overlap);
static PyObject *unigine_Material_setOverlap(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: int Material::getOverlap();
static PyObject *unigine_Material_getOverlap(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: void Material::setOrder(int order);
static PyObject *unigine_Material_setOrder(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: int Material::getOrder();
static PyObject *unigine_Material_getOrder(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: const char * Material::getOptionTitle(int option);
static PyObject *unigine_Material_getOptionTitle(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: const char * Material::getOptionTooltip(int option);
static PyObject *unigine_Material_getOptionTooltip(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: const char * Material::getOptionGroup(int option);
static PyObject *unigine_Material_getOptionGroup(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: int Material::getOptionWidgetIndex(int option);
static PyObject *unigine_Material_getOptionWidgetIndex(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: bool Material::isOptionHidden(int option);
static PyObject *unigine_Material_isOptionHidden(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// SKIPPED (some type in arguments not supported): bool Material::setParent(const Ptr<Material> & material, bool save_all_values);

// SKIPPED (return type not supported): Ptr<Material> Material::getParent();

// method: bool Material::isParent(const char * name);
static PyObject *unigine_Material_isParent(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// SKIPPED (some type in arguments not supported): bool Material::isParent(const UGUID & guid);

// SKIPPED (return type not supported): Ptr<Material> Material::getBaseMaterial();

// method: int Material::getNumChildren();
static PyObject *unigine_Material_getNumChildren(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// SKIPPED (return type not supported): Ptr<Material> Material::getChild(int num);

// SKIPPED (return type not supported): Ptr<Material> Material::clone(const char * name, const char * path, const UGUID & guid);

// SKIPPED (return type not supported): Ptr<Material> Material::clone(const char * name, const char * path);

// SKIPPED (return type not supported): Ptr<Material> Material::clone(const char * name);

// SKIPPED (return type not supported): Ptr<Material> Material::clone();

// SKIPPED (return type not supported): Ptr<Material> Material::inherit(const char * name, const char * path, const UGUID & guid);

// SKIPPED (return type not supported): Ptr<Material> Material::inherit(const char * name, const char * path);

// SKIPPED (return type not supported): Ptr<Material> Material::inherit(const char * name);

// SKIPPED (return type not supported): Ptr<Material> Material::inherit();

// method: void Material::setName(const char * name);
static PyObject *unigine_Material_setName(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: const char * Material::getName();
static PyObject *unigine_Material_getName(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// SKIPPED (return type not supported): UGUID Material::getGUID();

// method: void Material::setPath(const char * path);
static PyObject *unigine_Material_setPath(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: const char * Material::getPath();
static PyObject *unigine_Material_getPath(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// SKIPPED (some type in arguments not supported): void Material::setFileGUID(const UGUID & fileguid);

// SKIPPED (return type not supported): UGUID Material::getFileGUID();

// SKIPPED (some type in arguments not supported): bool Material::isNodeTypeSupported(Node::TYPE type);

// SKIPPED (some type in arguments not supported): bool Material::isNodeSupported(const Ptr<Node> & node);

// method: bool Material::canRenderNode();
static PyObject *unigine_Material_canRenderNode(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: bool Material::checkShaderCache();
static PyObject *unigine_Material_checkShaderCache(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// SKIPPED (some type in arguments not supported): bool Material::checkShaderCache(Render::PASS pass, Node::TYPE node_type);

// SKIPPED (some type in arguments not supported): bool Material::compileShader(Render::PASS pass, Node::TYPE node_type);

// SKIPPED (return type not supported): Ptr<Shader> Material::fetchShader(Render::PASS pass, Node::TYPE node_type);

// SKIPPED (return type not supported): Ptr<Shader> Material::fetchShader(Render::PASS pass);

// SKIPPED (return type not supported): Ptr<Shader> Material::fetchShader(const char * pass_name, int node);

// SKIPPED (return type not supported): Ptr<Shader> Material::fetchShader(const char * pass_name);

// method: void Material::createShaders(bool recursive);
static PyObject *unigine_Material_createShaders(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: void Material::destroyShaders();
static PyObject *unigine_Material_destroyShaders(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: void Material::destroyTextures();
static PyObject *unigine_Material_destroyTextures(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: int Material::getNumParameters();
static PyObject *unigine_Material_getNumParameters(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: int Material::findParameter(const char * name);
static PyObject *unigine_Material_findParameter(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: int Material::fetchParameter(const char * name, int fast_id);
static PyObject *unigine_Material_fetchParameter(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: void Material::resetParameter(int num);
static PyObject *unigine_Material_resetParameter(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: bool Material::checkParameterConditions(int num);
static PyObject *unigine_Material_checkParameterConditions(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: int Material::getParameterType(int num);
static PyObject *unigine_Material_getParameterType(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: bool Material::isParameterHidden(int num);
static PyObject *unigine_Material_isParameterHidden(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: bool Material::isParameterInt(int num);
static PyObject *unigine_Material_isParameterInt(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: bool Material::isParameterFloat(int num);
static PyObject *unigine_Material_isParameterFloat(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: bool Material::isParameterOverridden(int num);
static PyObject *unigine_Material_isParameterOverridden(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: const char * Material::getParameterName(int num);
static PyObject *unigine_Material_getParameterName(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: const char * Material::getParameterTitle(int num);
static PyObject *unigine_Material_getParameterTitle(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: const char * Material::getParameterTooltip(int num);
static PyObject *unigine_Material_getParameterTooltip(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: const char * Material::getParameterGroup(int num);
static PyObject *unigine_Material_getParameterGroup(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: const char * Material::getParameterWidget(int num);
static PyObject *unigine_Material_getParameterWidget(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: int Material::getParameterWidgetIndex(int num);
static PyObject *unigine_Material_getParameterWidgetIndex(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: bool Material::isParameterExpressionEnabled(int num);
static PyObject *unigine_Material_isParameterExpressionEnabled(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: void Material::setParameterExpressionEnabled(int num, bool enabled);
static PyObject *unigine_Material_setParameterExpressionEnabled(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: const char * Material::getParameterExpression(int num);
static PyObject *unigine_Material_getParameterExpression(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: int Material::setParameterExpression(int num, const char * expression);
static PyObject *unigine_Material_setParameterExpression(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: int Material::getParameterMinExpand(int num);
static PyObject *unigine_Material_getParameterMinExpand(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: int Material::getParameterMaxExpand(int num);
static PyObject *unigine_Material_getParameterMaxExpand(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: float Material::getParameterMinValue(int num);
static PyObject *unigine_Material_getParameterMinValue(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: float Material::getParameterMaxValue(int num);
static PyObject *unigine_Material_getParameterMaxValue(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: void Material::setParameterFloat(int num, float value);
static PyObject *unigine_Material_setParameterFloat(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: void Material::setParameterFloat(const char * name, float value);
static PyObject *unigine_Material_setParameterFloat(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: float Material::getParameterFloat(int num);
static PyObject *unigine_Material_getParameterFloat(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: float Material::getParameterFloat(const char * name);
static PyObject *unigine_Material_getParameterFloat(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// SKIPPED (some type in arguments not supported): void Material::setParameterFloat2(int num, const Math::vec2 & value);

// SKIPPED (some type in arguments not supported): void Material::setParameterFloat2(const char * name, const Math::vec2 & value);

// SKIPPED (return type not supported): Math::vec2 Material::getParameterFloat2(int num);

// SKIPPED (return type not supported): Math::vec2 Material::getParameterFloat2(const char * name);

// SKIPPED (some type in arguments not supported): void Material::setParameterFloat3(int num, const Math::vec3 & value);

// SKIPPED (some type in arguments not supported): void Material::setParameterFloat3(const char * name, const Math::vec3 & value);

// SKIPPED (return type not supported): Math::vec3 Material::getParameterFloat3(int num);

// SKIPPED (return type not supported): Math::vec3 Material::getParameterFloat3(const char * name);

// SKIPPED (some type in arguments not supported): void Material::setParameterFloat4(int num, const Math::vec4 & value);

// SKIPPED (some type in arguments not supported): void Material::setParameterFloat4(const char * name, const Math::vec4 & value);

// SKIPPED (return type not supported): Math::vec4 Material::getParameterFloat4(int num);

// SKIPPED (return type not supported): Math::vec4 Material::getParameterFloat4(const char * name);

// method: void Material::setParameterInt(int num, int value);
static PyObject *unigine_Material_setParameterInt(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: void Material::setParameterInt(const char * name, int value);
static PyObject *unigine_Material_setParameterInt(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: int Material::getParameterInt(int num);
static PyObject *unigine_Material_getParameterInt(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: int Material::getParameterInt(const char * name);
static PyObject *unigine_Material_getParameterInt(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// SKIPPED (some type in arguments not supported): void Material::setParameterInt2(int num, const Math::ivec2 & value);

// SKIPPED (some type in arguments not supported): void Material::setParameterInt2(const char * name, const Math::ivec2 & value);

// SKIPPED (return type not supported): Math::ivec2 Material::getParameterInt2(int num);

// SKIPPED (return type not supported): Math::ivec2 Material::getParameterInt2(const char * name);

// SKIPPED (some type in arguments not supported): void Material::setParameterInt3(int num, const Math::ivec3 & value);

// SKIPPED (some type in arguments not supported): void Material::setParameterInt3(const char * name, const Math::ivec3 & value);

// SKIPPED (return type not supported): Math::ivec3 Material::getParameterInt3(int num);

// SKIPPED (return type not supported): Math::ivec3 Material::getParameterInt3(const char * name);

// SKIPPED (some type in arguments not supported): void Material::setParameterInt4(int num, const Math::ivec4 & value);

// SKIPPED (some type in arguments not supported): void Material::setParameterInt4(const char * name, const Math::ivec4 & value);

// SKIPPED (return type not supported): Math::ivec4 Material::getParameterInt4(int num);

// SKIPPED (return type not supported): Math::ivec4 Material::getParameterInt4(const char * name);

// method: int Material::getParameterArraySize(int num);
static PyObject *unigine_Material_getParameterArraySize(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: bool Material::isParameterArray(int num);
static PyObject *unigine_Material_isParameterArray(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// SKIPPED (some type in arguments not supported): void Material::getParameterArray(int num, Vector< float> & values);

// SKIPPED (some type in arguments not supported): void Material::setParameterArray(int num, const Vector< float> & values);

// SKIPPED (some type in arguments not supported): void Material::getParameterArray(int num, Vector< Math::vec2> & values);

// SKIPPED (some type in arguments not supported): void Material::setParameterArray(int num, const Vector< Math::vec2> & values);

// SKIPPED (some type in arguments not supported): void Material::getParameterArray(int num, Vector< Math::vec4> & values);

// SKIPPED (some type in arguments not supported): void Material::setParameterArray(int num, const Vector< Math::vec4> & values);

// SKIPPED (some type in arguments not supported): void Material::getParameterArray(int num, Vector< int> & values);

// SKIPPED (some type in arguments not supported): void Material::setParameterArray(int num, const Vector< int> & values);

// SKIPPED (some type in arguments not supported): void Material::getParameterArray(int num, Vector< Math::ivec2> & values);

// SKIPPED (some type in arguments not supported): void Material::setParameterArray(int num, const Vector< Math::ivec2> & values);

// SKIPPED (some type in arguments not supported): void Material::getParameterArray(int num, Vector< Math::ivec4> & values);

// SKIPPED (some type in arguments not supported): void Material::setParameterArray(int num, const Vector< Math::ivec4> & values);

// method: int Material::getNumStates();
static PyObject *unigine_Material_getNumStates(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: int Material::findState(const char * name);
static PyObject *unigine_Material_findState(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: int Material::fetchTexture(const char * name, int fast_id);
static PyObject *unigine_Material_fetchTexture(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: int Material::fetchState(const char * name, int fast_id);
static PyObject *unigine_Material_fetchState(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: bool Material::isStateHidden(int num);
static PyObject *unigine_Material_isStateHidden(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: bool Material::isStateOverridden(int num);
static PyObject *unigine_Material_isStateOverridden(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: bool Material::isStateInternal(int num);
static PyObject *unigine_Material_isStateInternal(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: void Material::resetState(int num);
static PyObject *unigine_Material_resetState(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: bool Material::checkStateConditions(int num);
static PyObject *unigine_Material_checkStateConditions(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: const char * Material::getStateName(int num);
static PyObject *unigine_Material_getStateName(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: const char * Material::getStateTitle(int num);
static PyObject *unigine_Material_getStateTitle(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: const char * Material::getStateTooltip(int num);
static PyObject *unigine_Material_getStateTooltip(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: const char * Material::getStateGroup(int num);
static PyObject *unigine_Material_getStateGroup(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: const char * Material::getStateSwitchGroup(int num);
static PyObject *unigine_Material_getStateSwitchGroup(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: int Material::getStateWidgetIndex(int num);
static PyObject *unigine_Material_getStateWidgetIndex(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: const char * Material::getStateSwitchItem(int num, int item);
static PyObject *unigine_Material_getStateSwitchItem(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: int Material::getStateSwitchNumItems(int num);
static PyObject *unigine_Material_getStateSwitchNumItems(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: int Material::getStateType(int num);
static PyObject *unigine_Material_getStateType(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: int Material::getState(int num);
static PyObject *unigine_Material_getState(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: void Material::setState(int num, int value);
static PyObject *unigine_Material_setState(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: int Material::getState(const char * name);
static PyObject *unigine_Material_getState(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: void Material::setState(const char * name, int value);
static PyObject *unigine_Material_setState(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: int Material::getNumTextures();
static PyObject *unigine_Material_getNumTextures(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: int Material::findTexture(const char * name);
static PyObject *unigine_Material_findTexture(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: bool Material::isTextureHidden(int num);
static PyObject *unigine_Material_isTextureHidden(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: bool Material::isTextureOverridden(int num);
static PyObject *unigine_Material_isTextureOverridden(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: bool Material::isTextureLoaded(int num);
static PyObject *unigine_Material_isTextureLoaded(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: bool Material::isTextureInternal(int num);
static PyObject *unigine_Material_isTextureInternal(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: void Material::resetTexture(int num);
static PyObject *unigine_Material_resetTexture(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: bool Material::checkTextureConditions(int num);
static PyObject *unigine_Material_checkTextureConditions(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: const char * Material::getTextureName(int num);
static PyObject *unigine_Material_getTextureName(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: const char * Material::getTextureTitle(int num);
static PyObject *unigine_Material_getTextureTitle(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: const char * Material::getTextureTooltip(int num);
static PyObject *unigine_Material_getTextureTooltip(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: const char * Material::getTextureGroup(int num);
static PyObject *unigine_Material_getTextureGroup(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: int Material::getTextureWidgetIndex(int num);
static PyObject *unigine_Material_getTextureWidgetIndex(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: int Material::getTextureUnit(int num);
static PyObject *unigine_Material_getTextureUnit(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: int Material::getTextureType(int num);
static PyObject *unigine_Material_getTextureType(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: int Material::getTextureFlags(int num);
static PyObject *unigine_Material_getTextureFlags(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: void Material::setTextureFlags(int num, int flags);
static PyObject *unigine_Material_setTextureFlags(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// SKIPPED (some type in arguments not supported): int Material::getTextureImage(int num, const Ptr<Image> & image);

// SKIPPED (some type in arguments not supported): int Material::setTextureImage(int num, const Ptr<Image> & image);

// SKIPPED (return type not supported): Ptr<Texture> Material::getTexture(int num);

// SKIPPED (some type in arguments not supported): void Material::setTexture(int num, const Ptr<Texture> & texture);

// SKIPPED (some type in arguments not supported): void Material::setTexture(const char * name, const Ptr<Texture> & texture);

// method: void Material::setTexturePath(int num, const char * path);
static PyObject *unigine_Material_setTexturePath(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: const char * Material::getTexturePath(int num);
static PyObject *unigine_Material_getTexturePath(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: void Material::setTexturePath(const char * name, const char * path);
static PyObject *unigine_Material_setTexturePath(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: const char * Material::getTexturePath(const char * name);
static PyObject *unigine_Material_getTexturePath(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// SKIPPED (some type in arguments not supported): int Material::getProceduralTextureImage(int num, const Ptr<Image> & image);

// SKIPPED (some type in arguments not supported): int Material::setProceduralTextureImage(int num, const Ptr<Image> & image);

// SKIPPED (some type in arguments not supported): void Material::setProceduralTexture(int num, const Ptr<Texture> & texture);

// SKIPPED (some type in arguments not supported): void Material::setImageTextureProcedural(int num, const Ptr<Material> & procedural, int procedural_num);

// SKIPPED (return type not supported): Ptr<TextureCurve> Material::getTextureCurve(int num);

// SKIPPED (return type not supported): Ptr<TextureCurve> Material::getTextureCurveOverride(int num);

// method: void Material::setTransparent(int transparent);
static PyObject *unigine_Material_setTransparent(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: int Material::getTransparent();
static PyObject *unigine_Material_getTransparent(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: bool Material::isWater();
static PyObject *unigine_Material_isWater(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: bool Material::isDeferred();
static PyObject *unigine_Material_isDeferred(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: bool Material::isForward();
static PyObject *unigine_Material_isForward(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: bool Material::isAlphaTest();
static PyObject *unigine_Material_isAlphaTest(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: void Material::setTwoSided(int sided);
static PyObject *unigine_Material_setTwoSided(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: int Material::getTwoSided();
static PyObject *unigine_Material_getTwoSided(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: void Material::setViewportMask(int mask);
static PyObject *unigine_Material_setViewportMask(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: int Material::getViewportMask();
static PyObject *unigine_Material_getViewportMask(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: bool Material::isEditable();
static PyObject *unigine_Material_isEditable(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: bool Material::isFilter();
static PyObject *unigine_Material_isFilter(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: bool Material::isHidden();
static PyObject *unigine_Material_isHidden(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: bool Material::isBase();
static PyObject *unigine_Material_isBase(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: bool Material::isBrush();
static PyObject *unigine_Material_isBrush(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: bool Material::isLegacy();
static PyObject *unigine_Material_isLegacy(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: bool Material::isOptionsHidden();
static PyObject *unigine_Material_isOptionsHidden(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: bool Material::isPreviewHidden();
static PyObject *unigine_Material_isPreviewHidden(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: bool Material::isProcedural();
static PyObject *unigine_Material_isProcedural(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: bool Material::isReflection2D();
static PyObject *unigine_Material_isReflection2D(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: bool Material::isInternal();
static PyObject *unigine_Material_isInternal(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: bool Material::isManual();
static PyObject *unigine_Material_isManual(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: bool Material::canSave();
static PyObject *unigine_Material_canSave(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: bool Material::isAutoSave();
static PyObject *unigine_Material_isAutoSave(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: bool Material::isEngine();
static PyObject *unigine_Material_isEngine(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: bool Material::isEmpty();
static PyObject *unigine_Material_isEmpty(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: bool Material::hasOverrides();
static PyObject *unigine_Material_hasOverrides(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// SKIPPED (some type in arguments not supported): bool Material::saveState(const Ptr<Stream> & stream, bool forced);

// SKIPPED (some type in arguments not supported): bool Material::restoreState(const Ptr<Stream> & stream, bool forced);

// SKIPPED (some type in arguments not supported): int Material::loadXml(const Ptr<Xml> & xml);

// SKIPPED (some type in arguments not supported): bool Material::saveXml(const Ptr<Xml> & xml);

// method: bool Material::load(const char * path);
static PyObject *unigine_Material_load(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: bool Material::load();
static PyObject *unigine_Material_load(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: bool Material::save(const char * path);
static PyObject *unigine_Material_save(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: bool Material::save();
static PyObject *unigine_Material_save(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: bool Material::reload();
static PyObject *unigine_Material_reload(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// SKIPPED (return type not supported): Render::PASS Material::getRenderPass(const char * pass_name);

// SKIPPED (some type in arguments not supported): const char * Material::getRenderPassName(Render::PASS type);

// method: bool Material::runExpression(const char * name, int w, int h, int d);
static PyObject *unigine_Material_runExpression(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// method: bool Material::renderScreen(const char * pass_name);
static PyObject *unigine_Material_renderScreen(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// SKIPPED (some type in arguments not supported): void Material::renderScreen(Render::PASS pass);

// method: bool Material::renderCompute(const char * pass_name, int group_threads_x, int group_threads_y, int group_threads_z);
static PyObject *unigine_Material_renderCompute(unigine_Material* self) {
    PyErr_Clear();
    return Py_None;
}

// SKIPPED (some type in arguments not supported): void Material::renderCompute(Render::PASS pass, int group_threads_x, int group_threads_y, int group_threads_z);


static PyMethodDef unigine_Material_methods[] = {
    {
        "get_blend_dest_func", (PyCFunction)unigine_Material_getBlendDestFunc, METH_NOARGS,
        "TODO"
    },
    {
        "get_blend_src_func", (PyCFunction)unigine_Material_getBlendSrcFunc, METH_NOARGS,
        "TODO"
    },
    {
        "set_blend_func", (PyCFunction)unigine_Material_setBlendFunc, METH_VARARGS,
        "TODO"
    },
    {
        "set_cast_shadow", (PyCFunction)unigine_Material_setCastShadow, METH_O,
        "TODO"
    },
    {
        "get_cast_shadow", (PyCFunction)unigine_Material_getCastShadow, METH_NOARGS,
        "TODO"
    },
    {
        "set_cast_world_shadow", (PyCFunction)unigine_Material_setCastWorldShadow, METH_O,
        "TODO"
    },
    {
        "get_cast_world_shadow", (PyCFunction)unigine_Material_getCastWorldShadow, METH_NOARGS,
        "TODO"
    },
    {
        "set_shadow_mask", (PyCFunction)unigine_Material_setShadowMask, METH_O,
        "TODO"
    },
    {
        "get_shadow_mask", (PyCFunction)unigine_Material_getShadowMask, METH_NOARGS,
        "TODO"
    },
    {
        "set_depth_mask", (PyCFunction)unigine_Material_setDepthMask, METH_O,
        "TODO"
    },
    {
        "get_depth_mask", (PyCFunction)unigine_Material_getDepthMask, METH_NOARGS,
        "TODO"
    },
    {
        "set_depth_test", (PyCFunction)unigine_Material_setDepthTest, METH_O,
        "TODO"
    },
    {
        "get_depth_test", (PyCFunction)unigine_Material_getDepthTest, METH_NOARGS,
        "TODO"
    },
    {
        "set_overlap", (PyCFunction)unigine_Material_setOverlap, METH_O,
        "TODO"
    },
    {
        "get_overlap", (PyCFunction)unigine_Material_getOverlap, METH_NOARGS,
        "TODO"
    },
    {
        "set_order", (PyCFunction)unigine_Material_setOrder, METH_O,
        "TODO"
    },
    {
        "get_order", (PyCFunction)unigine_Material_getOrder, METH_NOARGS,
        "TODO"
    },
    {
        "get_option_title", (PyCFunction)unigine_Material_getOptionTitle, METH_O,
        "TODO"
    },
    {
        "get_option_tooltip", (PyCFunction)unigine_Material_getOptionTooltip, METH_O,
        "TODO"
    },
    {
        "get_option_group", (PyCFunction)unigine_Material_getOptionGroup, METH_O,
        "TODO"
    },
    {
        "get_option_widget_index", (PyCFunction)unigine_Material_getOptionWidgetIndex, METH_O,
        "TODO"
    },
    {
        "is_option_hidden", (PyCFunction)unigine_Material_isOptionHidden, METH_O,
        "TODO"
    },
    {
        "is_parent", (PyCFunction)unigine_Material_isParent, METH_O,
        "TODO"
    },
    {
        "get_num_children", (PyCFunction)unigine_Material_getNumChildren, METH_NOARGS,
        "TODO"
    },
    {
        "set_name", (PyCFunction)unigine_Material_setName, METH_O,
        "TODO"
    },
    {
        "get_name", (PyCFunction)unigine_Material_getName, METH_NOARGS,
        "TODO"
    },
    {
        "set_path", (PyCFunction)unigine_Material_setPath, METH_O,
        "TODO"
    },
    {
        "get_path", (PyCFunction)unigine_Material_getPath, METH_NOARGS,
        "TODO"
    },
    {
        "can_render_node", (PyCFunction)unigine_Material_canRenderNode, METH_NOARGS,
        "TODO"
    },
    {
        "check_shader_cache", (PyCFunction)unigine_Material_checkShaderCache, METH_NOARGS,
        "TODO"
    },
    {
        "create_shaders", (PyCFunction)unigine_Material_createShaders, METH_O,
        "TODO"
    },
    {
        "destroy_shaders", (PyCFunction)unigine_Material_destroyShaders, METH_NOARGS,
        "TODO"
    },
    {
        "destroy_textures", (PyCFunction)unigine_Material_destroyTextures, METH_NOARGS,
        "TODO"
    },
    {
        "get_num_parameters", (PyCFunction)unigine_Material_getNumParameters, METH_NOARGS,
        "TODO"
    },
    {
        "find_parameter", (PyCFunction)unigine_Material_findParameter, METH_O,
        "TODO"
    },
    {
        "fetch_parameter", (PyCFunction)unigine_Material_fetchParameter, METH_VARARGS,
        "TODO"
    },
    {
        "reset_parameter", (PyCFunction)unigine_Material_resetParameter, METH_O,
        "TODO"
    },
    {
        "check_parameter_conditions", (PyCFunction)unigine_Material_checkParameterConditions, METH_O,
        "TODO"
    },
    {
        "get_parameter_type", (PyCFunction)unigine_Material_getParameterType, METH_O,
        "TODO"
    },
    {
        "is_parameter_hidden", (PyCFunction)unigine_Material_isParameterHidden, METH_O,
        "TODO"
    },
    {
        "is_parameter_int", (PyCFunction)unigine_Material_isParameterInt, METH_O,
        "TODO"
    },
    {
        "is_parameter_float", (PyCFunction)unigine_Material_isParameterFloat, METH_O,
        "TODO"
    },
    {
        "is_parameter_overridden", (PyCFunction)unigine_Material_isParameterOverridden, METH_O,
        "TODO"
    },
    {
        "get_parameter_name", (PyCFunction)unigine_Material_getParameterName, METH_O,
        "TODO"
    },
    {
        "get_parameter_title", (PyCFunction)unigine_Material_getParameterTitle, METH_O,
        "TODO"
    },
    {
        "get_parameter_tooltip", (PyCFunction)unigine_Material_getParameterTooltip, METH_O,
        "TODO"
    },
    {
        "get_parameter_group", (PyCFunction)unigine_Material_getParameterGroup, METH_O,
        "TODO"
    },
    {
        "get_parameter_widget", (PyCFunction)unigine_Material_getParameterWidget, METH_O,
        "TODO"
    },
    {
        "get_parameter_widget_index", (PyCFunction)unigine_Material_getParameterWidgetIndex, METH_O,
        "TODO"
    },
    {
        "is_parameter_expression_enabled", (PyCFunction)unigine_Material_isParameterExpressionEnabled, METH_O,
        "TODO"
    },
    {
        "set_parameter_expression_enabled", (PyCFunction)unigine_Material_setParameterExpressionEnabled, METH_VARARGS,
        "TODO"
    },
    {
        "get_parameter_expression", (PyCFunction)unigine_Material_getParameterExpression, METH_O,
        "TODO"
    },
    {
        "set_parameter_expression", (PyCFunction)unigine_Material_setParameterExpression, METH_VARARGS,
        "TODO"
    },
    {
        "get_parameter_min_expand", (PyCFunction)unigine_Material_getParameterMinExpand, METH_O,
        "TODO"
    },
    {
        "get_parameter_max_expand", (PyCFunction)unigine_Material_getParameterMaxExpand, METH_O,
        "TODO"
    },
    {
        "get_parameter_min_value", (PyCFunction)unigine_Material_getParameterMinValue, METH_O,
        "TODO"
    },
    {
        "get_parameter_max_value", (PyCFunction)unigine_Material_getParameterMaxValue, METH_O,
        "TODO"
    },
    {
        "set_parameter_float", (PyCFunction)unigine_Material_setParameterFloat, METH_VARARGS,
        "TODO"
    },
    {
        "set_parameter_float", (PyCFunction)unigine_Material_setParameterFloat, METH_VARARGS,
        "TODO"
    },
    {
        "get_parameter_float", (PyCFunction)unigine_Material_getParameterFloat, METH_O,
        "TODO"
    },
    {
        "get_parameter_float", (PyCFunction)unigine_Material_getParameterFloat, METH_O,
        "TODO"
    },
    {
        "set_parameter_int", (PyCFunction)unigine_Material_setParameterInt, METH_VARARGS,
        "TODO"
    },
    {
        "set_parameter_int", (PyCFunction)unigine_Material_setParameterInt, METH_VARARGS,
        "TODO"
    },
    {
        "get_parameter_int", (PyCFunction)unigine_Material_getParameterInt, METH_O,
        "TODO"
    },
    {
        "get_parameter_int", (PyCFunction)unigine_Material_getParameterInt, METH_O,
        "TODO"
    },
    {
        "get_parameter_array_size", (PyCFunction)unigine_Material_getParameterArraySize, METH_O,
        "TODO"
    },
    {
        "is_parameter_array", (PyCFunction)unigine_Material_isParameterArray, METH_O,
        "TODO"
    },
    {
        "get_num_states", (PyCFunction)unigine_Material_getNumStates, METH_NOARGS,
        "TODO"
    },
    {
        "find_state", (PyCFunction)unigine_Material_findState, METH_O,
        "TODO"
    },
    {
        "fetch_texture", (PyCFunction)unigine_Material_fetchTexture, METH_VARARGS,
        "TODO"
    },
    {
        "fetch_state", (PyCFunction)unigine_Material_fetchState, METH_VARARGS,
        "TODO"
    },
    {
        "is_state_hidden", (PyCFunction)unigine_Material_isStateHidden, METH_O,
        "TODO"
    },
    {
        "is_state_overridden", (PyCFunction)unigine_Material_isStateOverridden, METH_O,
        "TODO"
    },
    {
        "is_state_internal", (PyCFunction)unigine_Material_isStateInternal, METH_O,
        "TODO"
    },
    {
        "reset_state", (PyCFunction)unigine_Material_resetState, METH_O,
        "TODO"
    },
    {
        "check_state_conditions", (PyCFunction)unigine_Material_checkStateConditions, METH_O,
        "TODO"
    },
    {
        "get_state_name", (PyCFunction)unigine_Material_getStateName, METH_O,
        "TODO"
    },
    {
        "get_state_title", (PyCFunction)unigine_Material_getStateTitle, METH_O,
        "TODO"
    },
    {
        "get_state_tooltip", (PyCFunction)unigine_Material_getStateTooltip, METH_O,
        "TODO"
    },
    {
        "get_state_group", (PyCFunction)unigine_Material_getStateGroup, METH_O,
        "TODO"
    },
    {
        "get_state_switch_group", (PyCFunction)unigine_Material_getStateSwitchGroup, METH_O,
        "TODO"
    },
    {
        "get_state_widget_index", (PyCFunction)unigine_Material_getStateWidgetIndex, METH_O,
        "TODO"
    },
    {
        "get_state_switch_item", (PyCFunction)unigine_Material_getStateSwitchItem, METH_VARARGS,
        "TODO"
    },
    {
        "get_state_switch_num_items", (PyCFunction)unigine_Material_getStateSwitchNumItems, METH_O,
        "TODO"
    },
    {
        "get_state_type", (PyCFunction)unigine_Material_getStateType, METH_O,
        "TODO"
    },
    {
        "get_state", (PyCFunction)unigine_Material_getState, METH_O,
        "TODO"
    },
    {
        "set_state", (PyCFunction)unigine_Material_setState, METH_VARARGS,
        "TODO"
    },
    {
        "get_state", (PyCFunction)unigine_Material_getState, METH_O,
        "TODO"
    },
    {
        "set_state", (PyCFunction)unigine_Material_setState, METH_VARARGS,
        "TODO"
    },
    {
        "get_num_textures", (PyCFunction)unigine_Material_getNumTextures, METH_NOARGS,
        "TODO"
    },
    {
        "find_texture", (PyCFunction)unigine_Material_findTexture, METH_O,
        "TODO"
    },
    {
        "is_texture_hidden", (PyCFunction)unigine_Material_isTextureHidden, METH_O,
        "TODO"
    },
    {
        "is_texture_overridden", (PyCFunction)unigine_Material_isTextureOverridden, METH_O,
        "TODO"
    },
    {
        "is_texture_loaded", (PyCFunction)unigine_Material_isTextureLoaded, METH_O,
        "TODO"
    },
    {
        "is_texture_internal", (PyCFunction)unigine_Material_isTextureInternal, METH_O,
        "TODO"
    },
    {
        "reset_texture", (PyCFunction)unigine_Material_resetTexture, METH_O,
        "TODO"
    },
    {
        "check_texture_conditions", (PyCFunction)unigine_Material_checkTextureConditions, METH_O,
        "TODO"
    },
    {
        "get_texture_name", (PyCFunction)unigine_Material_getTextureName, METH_O,
        "TODO"
    },
    {
        "get_texture_title", (PyCFunction)unigine_Material_getTextureTitle, METH_O,
        "TODO"
    },
    {
        "get_texture_tooltip", (PyCFunction)unigine_Material_getTextureTooltip, METH_O,
        "TODO"
    },
    {
        "get_texture_group", (PyCFunction)unigine_Material_getTextureGroup, METH_O,
        "TODO"
    },
    {
        "get_texture_widget_index", (PyCFunction)unigine_Material_getTextureWidgetIndex, METH_O,
        "TODO"
    },
    {
        "get_texture_unit", (PyCFunction)unigine_Material_getTextureUnit, METH_O,
        "TODO"
    },
    {
        "get_texture_type", (PyCFunction)unigine_Material_getTextureType, METH_O,
        "TODO"
    },
    {
        "get_texture_flags", (PyCFunction)unigine_Material_getTextureFlags, METH_O,
        "TODO"
    },
    {
        "set_texture_flags", (PyCFunction)unigine_Material_setTextureFlags, METH_VARARGS,
        "TODO"
    },
    {
        "set_texture_path", (PyCFunction)unigine_Material_setTexturePath, METH_VARARGS,
        "TODO"
    },
    {
        "get_texture_path", (PyCFunction)unigine_Material_getTexturePath, METH_O,
        "TODO"
    },
    {
        "set_texture_path", (PyCFunction)unigine_Material_setTexturePath, METH_VARARGS,
        "TODO"
    },
    {
        "get_texture_path", (PyCFunction)unigine_Material_getTexturePath, METH_O,
        "TODO"
    },
    {
        "set_transparent", (PyCFunction)unigine_Material_setTransparent, METH_O,
        "TODO"
    },
    {
        "get_transparent", (PyCFunction)unigine_Material_getTransparent, METH_NOARGS,
        "TODO"
    },
    {
        "is_water", (PyCFunction)unigine_Material_isWater, METH_NOARGS,
        "TODO"
    },
    {
        "is_deferred", (PyCFunction)unigine_Material_isDeferred, METH_NOARGS,
        "TODO"
    },
    {
        "is_forward", (PyCFunction)unigine_Material_isForward, METH_NOARGS,
        "TODO"
    },
    {
        "is_alpha_test", (PyCFunction)unigine_Material_isAlphaTest, METH_NOARGS,
        "TODO"
    },
    {
        "set_two_sided", (PyCFunction)unigine_Material_setTwoSided, METH_O,
        "TODO"
    },
    {
        "get_two_sided", (PyCFunction)unigine_Material_getTwoSided, METH_NOARGS,
        "TODO"
    },
    {
        "set_viewport_mask", (PyCFunction)unigine_Material_setViewportMask, METH_O,
        "TODO"
    },
    {
        "get_viewport_mask", (PyCFunction)unigine_Material_getViewportMask, METH_NOARGS,
        "TODO"
    },
    {
        "is_editable", (PyCFunction)unigine_Material_isEditable, METH_NOARGS,
        "TODO"
    },
    {
        "is_filter", (PyCFunction)unigine_Material_isFilter, METH_NOARGS,
        "TODO"
    },
    {
        "is_hidden", (PyCFunction)unigine_Material_isHidden, METH_NOARGS,
        "TODO"
    },
    {
        "is_base", (PyCFunction)unigine_Material_isBase, METH_NOARGS,
        "TODO"
    },
    {
        "is_brush", (PyCFunction)unigine_Material_isBrush, METH_NOARGS,
        "TODO"
    },
    {
        "is_legacy", (PyCFunction)unigine_Material_isLegacy, METH_NOARGS,
        "TODO"
    },
    {
        "is_options_hidden", (PyCFunction)unigine_Material_isOptionsHidden, METH_NOARGS,
        "TODO"
    },
    {
        "is_preview_hidden", (PyCFunction)unigine_Material_isPreviewHidden, METH_NOARGS,
        "TODO"
    },
    {
        "is_procedural", (PyCFunction)unigine_Material_isProcedural, METH_NOARGS,
        "TODO"
    },
    {
        "is_reflection2_d", (PyCFunction)unigine_Material_isReflection2D, METH_NOARGS,
        "TODO"
    },
    {
        "is_internal", (PyCFunction)unigine_Material_isInternal, METH_NOARGS,
        "TODO"
    },
    {
        "is_manual", (PyCFunction)unigine_Material_isManual, METH_NOARGS,
        "TODO"
    },
    {
        "can_save", (PyCFunction)unigine_Material_canSave, METH_NOARGS,
        "TODO"
    },
    {
        "is_auto_save", (PyCFunction)unigine_Material_isAutoSave, METH_NOARGS,
        "TODO"
    },
    {
        "is_engine", (PyCFunction)unigine_Material_isEngine, METH_NOARGS,
        "TODO"
    },
    {
        "is_empty", (PyCFunction)unigine_Material_isEmpty, METH_NOARGS,
        "TODO"
    },
    {
        "has_overrides", (PyCFunction)unigine_Material_hasOverrides, METH_NOARGS,
        "TODO"
    },
    {
        "load", (PyCFunction)unigine_Material_load, METH_O,
        "TODO"
    },
    {
        "load", (PyCFunction)unigine_Material_load, METH_NOARGS,
        "TODO"
    },
    {
        "save", (PyCFunction)unigine_Material_save, METH_O,
        "TODO"
    },
    {
        "save", (PyCFunction)unigine_Material_save, METH_NOARGS,
        "TODO"
    },
    {
        "reload", (PyCFunction)unigine_Material_reload, METH_NOARGS,
        "TODO"
    },
    {
        "run_expression", (PyCFunction)unigine_Material_runExpression, METH_VARARGS,
        "TODO"
    },
    {
        "render_screen", (PyCFunction)unigine_Material_renderScreen, METH_O,
        "TODO"
    },
    {
        "render_compute", (PyCFunction)unigine_Material_renderCompute, METH_VARARGS,
        "TODO"
    },
    {NULL}  //
};
static PyTypeObject unigine_MaterialType = {
    // PyVarObject_HEAD_INIT(&PyType_Type, 0)
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "unigine.Material",
    .tp_basicsize = sizeof(unigine_Material) + 16, // magic size + 16!!!
    .tp_dealloc = (destructor)unigine_Material_dealloc,
    .tp_flags = Py_TPFLAGS_DEFAULT, // | Py_TPFLAGS_BASETYPE,
    .tp_doc = "Material Object",
    .tp_methods = unigine_Material_methods,
    .tp_members = 0,
    .tp_dict = 0,
    .tp_init = (initproc)unigine_Material_init,
    .tp_new = unigine_Material_new,
};

PyObject * PyUnigineMaterial::NewObject(Unigine::Ptr<Unigine::Material> unigine_object_ptr) {
    unigine_Material *pInst = PyObject_New(unigine_Material, &unigine_MaterialType);
    pInst->unigine_object_ptr = unigine_object_ptr;
    // Py_INCREF(pInst);
    return (PyObject *)pInst;
}

// ------------------------------------------------------------------------------------------
// Python3UnigineMaterial 

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

bool Python3UnigineMaterial::addClassDefinitionToModule(PyObject* pModule) {
    Py_INCREF(&unigine_MaterialType);
    if (PyModule_AddObject(pModule, "Material", (PyObject *)&unigine_MaterialType) < 0) {
        Py_DECREF(&unigine_MaterialType);
        return false;
    }
    return true;
}

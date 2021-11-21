// this file automaticly generated from UnigineNode.h 
#include "python3_unigine_node.h"

#include <string>
#include <Python.h>
#include <structmember.h>

// ------------------------------------------------------------------------------------------
// unigine_Node 

typedef struct {
    PyObject_HEAD
    // Type-specific fields go here.
    Unigine::Ptr<Unigine::Node> unigine_object_ptr;
} unigine_Node;

static void unigine_Node_dealloc(unigine_Node* self) {
    // Unigine::Log::message("unigine_Node_dealloc");
    Py_TYPE(self)->tp_free((PyObject*)self);
}

static PyObject *unigine_Node_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    // Unigine::Log::message("unigine_Node_new");
    unigine_Node *self;
    self = (unigine_Node *)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static int unigine_Node_init(unigine_Node *self, PyObject *args, PyObject *kwds) {
    // nothing
    return 0;
}

// methods
// SKIPPED (return type not supported): static Ptr<Node> Node::getCloneNode(const Ptr<Node> & original_node);

// SKIPPED (return type not supported): static Ptr<Property> Node::getCloneProperty(const Ptr<Property> & original_property);

// SKIPPED (return type not supported): static Ptr<Node> Node::getNode(int id);

// SKIPPED (return type not supported): static int Node::isNode(const Ptr<Node> & node);

// SKIPPED (return type not supported): static int Node::isNode(int id);

// SKIPPED (return type not supported): static Node::TYPE Node::getTypeId(const char * type);

// SKIPPED (return type not supported): static const char * Node::getTypeName(Unigine::Node::TYPE type);

// SKIPPED (return type not supported): Ptr<Node> Node::clone();

// SKIPPED (some type in arguments not supported): void Node::swap(const Ptr<Node> & n);

// method: void Node::setID(int id);
static PyObject *unigine_Node_setID(unigine_Node* self) {
    PyErr_Clear();
    return Py_None;
}

// method: int Node::getID();
static PyObject *unigine_Node_getID(unigine_Node* self) {
    PyErr_Clear();
    return Py_None;
}

// SKIPPED (return type not supported): Node::TYPE Node::getType();

// method: const char * Node::getTypeName();
static PyObject *unigine_Node_getTypeName(unigine_Node* self) {
    PyErr_Clear();
    return Py_None;
}

// method: bool Node::isWorld();
static PyObject *unigine_Node_isWorld(unigine_Node* self) {
    PyErr_Clear();
    return Py_None;
}

// method: bool Node::isGeodetic();
static PyObject *unigine_Node_isGeodetic(unigine_Node* self) {
    PyErr_Clear();
    return Py_None;
}

// method: bool Node::isLight();
static PyObject *unigine_Node_isLight(unigine_Node* self) {
    PyErr_Clear();
    return Py_None;
}

// method: bool Node::isDecal();
static PyObject *unigine_Node_isDecal(unigine_Node* self) {
    PyErr_Clear();
    return Py_None;
}

// method: bool Node::isLandscapeLayer();
static PyObject *unigine_Node_isLandscapeLayer(unigine_Node* self) {
    PyErr_Clear();
    return Py_None;
}

// method: bool Node::isObject();
static PyObject *unigine_Node_isObject(unigine_Node* self) {
    PyErr_Clear();
    return Py_None;
}

// method: bool Node::isPlayer();
static PyObject *unigine_Node_isPlayer(unigine_Node* self) {
    PyErr_Clear();
    return Py_None;
}

// method: bool Node::isPhysical();
static PyObject *unigine_Node_isPhysical(unigine_Node* self) {
    PyErr_Clear();
    return Py_None;
}

// method: bool Node::isNavigation();
static PyObject *unigine_Node_isNavigation(unigine_Node* self) {
    PyErr_Clear();
    return Py_None;
}

// method: bool Node::isObstacle();
static PyObject *unigine_Node_isObstacle(unigine_Node* self) {
    PyErr_Clear();
    return Py_None;
}

// method: bool Node::isSound();
static PyObject *unigine_Node_isSound(unigine_Node* self) {
    PyErr_Clear();
    return Py_None;
}

// method: bool Node::isField();
static PyObject *unigine_Node_isField(unigine_Node* self) {
    PyErr_Clear();
    return Py_None;
}

// method: bool Node::isExtern();
static PyObject *unigine_Node_isExtern(unigine_Node* self) {
    PyErr_Clear();
    return Py_None;
}

// method: bool Node::isEnabledSelf();
static PyObject *unigine_Node_isEnabledSelf(unigine_Node* self) {
    PyErr_Clear();
    return Py_None;
}

// SKIPPED (return type not supported): Node::LIFETIME Node::getLifetimeSelf();

// method: void Node::setEnabled(bool enabled);
static PyObject *unigine_Node_setEnabled(unigine_Node* self) {
    PyErr_Clear();
    return Py_None;
}

// method: bool Node::isEnabled();
static PyObject *unigine_Node_isEnabled(unigine_Node* self) {
    PyErr_Clear();
    return Py_None;
}

// method: void Node::setHandled(bool handled);
static PyObject *unigine_Node_setHandled(unigine_Node* self) {
    PyErr_Clear();
    return Py_None;
}

// method: bool Node::isHandled();
static PyObject *unigine_Node_isHandled(unigine_Node* self) {
    PyErr_Clear();
    return Py_None;
}

// method: void Node::setImmovable(bool immovable);
static PyObject *unigine_Node_setImmovable(unigine_Node* self) {
    PyErr_Clear();
    return Py_None;
}

// method: bool Node::isImmovable();
static PyObject *unigine_Node_isImmovable(unigine_Node* self) {
    PyErr_Clear();
    return Py_None;
}

// method: void Node::setTriggerInteractionEnabled(bool enabled);
static PyObject *unigine_Node_setTriggerInteractionEnabled(unigine_Node* self) {
    PyErr_Clear();
    return Py_None;
}

// method: bool Node::isTriggerInteractionEnabled();
static PyObject *unigine_Node_isTriggerInteractionEnabled(unigine_Node* self) {
    PyErr_Clear();
    return Py_None;
}

// method: void Node::setGrassInteractionEnabled(bool enabled);
static PyObject *unigine_Node_setGrassInteractionEnabled(unigine_Node* self) {
    PyErr_Clear();
    return Py_None;
}

// method: bool Node::isGrassInteractionEnabled();
static PyObject *unigine_Node_isGrassInteractionEnabled(unigine_Node* self) {
    PyErr_Clear();
    return Py_None;
}

// method: void Node::setClutterInteractionEnabled(bool enabled);
static PyObject *unigine_Node_setClutterInteractionEnabled(unigine_Node* self) {
    PyErr_Clear();
    return Py_None;
}

// method: bool Node::isClutterInteractionEnabled();
static PyObject *unigine_Node_isClutterInteractionEnabled(unigine_Node* self) {
    PyErr_Clear();
    return Py_None;
}

// method: void Node::setQuery(bool query);
static PyObject *unigine_Node_setQuery(unigine_Node* self) {
    PyErr_Clear();
    return Py_None;
}

// method: bool Node::isQuery();
static PyObject *unigine_Node_isQuery(unigine_Node* self) {
    PyErr_Clear();
    return Py_None;
}

// method: bool Node::hasQueryForce();
static PyObject *unigine_Node_hasQueryForce(unigine_Node* self) {
    PyErr_Clear();
    return Py_None;
}

// method: void Node::setShowInEditorEnabled(bool enabled);
static PyObject *unigine_Node_setShowInEditorEnabled(unigine_Node* self) {
    PyErr_Clear();
    return Py_None;
}

// method: bool Node::isShowInEditorEnabled();
static PyObject *unigine_Node_isShowInEditorEnabled(unigine_Node* self) {
    PyErr_Clear();
    return Py_None;
}

// method: void Node::setSaveToWorldEnabled(bool enabled);
static PyObject *unigine_Node_setSaveToWorldEnabled(unigine_Node* self) {
    PyErr_Clear();
    return Py_None;
}

// method: bool Node::isSaveToWorldEnabled();
static PyObject *unigine_Node_isSaveToWorldEnabled(unigine_Node* self) {
    PyErr_Clear();
    return Py_None;
}

// SKIPPED (some type in arguments not supported): void Node::setLifetime(Unigine::Node::LIFETIME lifetime);

// SKIPPED (return type not supported): Node::LIFETIME Node::getLifetime();

// method: bool Node::isShowInEditorEnabledSelf();
static PyObject *unigine_Node_isShowInEditorEnabledSelf(unigine_Node* self) {
    PyErr_Clear();
    return Py_None;
}

// method: bool Node::isSaveToWorldEnabledSelf();
static PyObject *unigine_Node_isSaveToWorldEnabledSelf(unigine_Node* self) {
    PyErr_Clear();
    return Py_None;
}

// method: void Node::setShowInEditorEnabledRecursive(bool enable);
static PyObject *unigine_Node_setShowInEditorEnabledRecursive(unigine_Node* self) {
    PyErr_Clear();
    return Py_None;
}

// method: void Node::setSaveToWorldEnabledRecursive(bool enable);
static PyObject *unigine_Node_setSaveToWorldEnabledRecursive(unigine_Node* self) {
    PyErr_Clear();
    return Py_None;
}

// method: void Node::setName(const char * name);
static PyObject *unigine_Node_setName(unigine_Node* self) {
    PyErr_Clear();
    return Py_None;
}

// method: const char * Node::getName();
static PyObject *unigine_Node_getName(unigine_Node* self) {
    PyErr_Clear();
    return Py_None;
}

// method: void Node::setData(const char * data);
static PyObject *unigine_Node_setData(unigine_Node* self) {
    PyErr_Clear();
    return Py_None;
}

// method: const char * Node::getData();
static PyObject *unigine_Node_getData(unigine_Node* self) {
    PyErr_Clear();
    return Py_None;
}

// SKIPPED (some type in arguments not supported): void Node::setPtr(void * ptr);

// SKIPPED (return type not supported): void * Node::getPtr();

// method: int Node::getNumAncestors();
static PyObject *unigine_Node_getNumAncestors(unigine_Node* self) {
    PyErr_Clear();
    return Py_None;
}

// SKIPPED (return type not supported): Ptr<Node> Node::getAncestor(int num);

// method: int Node::findAncestor(const char * name);
static PyObject *unigine_Node_findAncestor(unigine_Node* self) {
    PyErr_Clear();
    return Py_None;
}

// method: int Node::findAncestor(int type);
static PyObject *unigine_Node_findAncestor(unigine_Node* self) {
    PyErr_Clear();
    return Py_None;
}

// SKIPPED (some type in arguments not supported): void Node::setParent(const Ptr<Node> & parent);

// SKIPPED (return type not supported): Ptr<Node> Node::getParent();

// SKIPPED (some type in arguments not supported): void Node::setWorldParent(const Ptr<Node> & n);

// SKIPPED (return type not supported): Ptr<Node> Node::getRootNode();

// SKIPPED (some type in arguments not supported): void Node::addChild(const Ptr<Node> & n);

// SKIPPED (some type in arguments not supported): void Node::removeChild(const Ptr<Node> & n);

// SKIPPED (some type in arguments not supported): void Node::addWorldChild(const Ptr<Node> & n);

// SKIPPED (some type in arguments not supported): void Node::removeWorldChild(const Ptr<Node> & n);

// SKIPPED (some type in arguments not supported): bool Node::isChild(const Ptr<Node> & n);

// method: int Node::getNumChildren();
static PyObject *unigine_Node_getNumChildren(unigine_Node* self) {
    PyErr_Clear();
    return Py_None;
}

// method: int Node::findChild(const char * name);
static PyObject *unigine_Node_findChild(unigine_Node* self) {
    PyErr_Clear();
    return Py_None;
}

// SKIPPED (return type not supported): Ptr<Node> Node::getChild(int num);

// SKIPPED (some type in arguments not supported): void Node::setChildIndex(const Ptr<Node> & n, int index);

// SKIPPED (some type in arguments not supported): int Node::getChildIndex(const Ptr<Node> & n);

// SKIPPED (return type not supported): Ptr<Node> Node::findNode(const char * name, int recursive);

// SKIPPED (return type not supported): Ptr<Node> Node::getPossessor();

// SKIPPED (some type in arguments not supported): void Node::getHierarchy(Vector< Ptr<Node> > & hierarchy);

// method: int Node::getNumProperties();
static PyObject *unigine_Node_getNumProperties(unigine_Node* self) {
    PyErr_Clear();
    return Py_None;
}

// method: int Node::addProperty(const char * name);
static PyObject *unigine_Node_addProperty(unigine_Node* self) {
    PyErr_Clear();
    return Py_None;
}

// SKIPPED (some type in arguments not supported): int Node::addProperty(const UGUID & guid);

// SKIPPED (some type in arguments not supported): int Node::addProperty(const Ptr<Property> & property);

// method: int Node::findProperty(const char * name);
static PyObject *unigine_Node_findProperty(unigine_Node* self) {
    PyErr_Clear();
    return Py_None;
}

// SKIPPED (some type in arguments not supported): int Node::findProperty(const UGUID & guid);

// SKIPPED (some type in arguments not supported): int Node::findProperty(const Ptr<Property> & property);

// method: int Node::setProperty(const char * name);
static PyObject *unigine_Node_setProperty(unigine_Node* self) {
    PyErr_Clear();
    return Py_None;
}

// SKIPPED (some type in arguments not supported): int Node::setProperty(const UGUID & guid);

// SKIPPED (some type in arguments not supported): int Node::setProperty(const Ptr<Property> & property);

// method: int Node::setProperty(int num, const char * name);
static PyObject *unigine_Node_setProperty(unigine_Node* self) {
    PyErr_Clear();
    return Py_None;
}

// SKIPPED (some type in arguments not supported): int Node::setProperty(int num, const UGUID & guid);

// SKIPPED (some type in arguments not supported): int Node::setProperty(int num, const Ptr<Property> & property);

// method: int Node::insertProperty(int num, const char * name);
static PyObject *unigine_Node_insertProperty(unigine_Node* self) {
    PyErr_Clear();
    return Py_None;
}

// SKIPPED (some type in arguments not supported): int Node::insertProperty(int num, const UGUID & guid);

// SKIPPED (some type in arguments not supported): int Node::insertProperty(int num, const Ptr<Property> & property);

// method: void Node::swapProperty(int from_num, int to_num);
static PyObject *unigine_Node_swapProperty(unigine_Node* self) {
    PyErr_Clear();
    return Py_None;
}

// method: void Node::removeProperty(int num);
static PyObject *unigine_Node_removeProperty(unigine_Node* self) {
    PyErr_Clear();
    return Py_None;
}

// method: void Node::removeProperty(const char * name);
static PyObject *unigine_Node_removeProperty(unigine_Node* self) {
    PyErr_Clear();
    return Py_None;
}

// SKIPPED (some type in arguments not supported): void Node::removeProperty(const UGUID & guid);

// SKIPPED (some type in arguments not supported): void Node::removeProperty(const Ptr<Property> & property);

// method: void Node::clearProperties();
static PyObject *unigine_Node_clearProperties(unigine_Node* self) {
    PyErr_Clear();
    return Py_None;
}

// SKIPPED (return type not supported): Ptr<Property> Node::getProperty(int num);

// method: const char * Node::getPropertyName(int num);
static PyObject *unigine_Node_getPropertyName(unigine_Node* self) {
    PyErr_Clear();
    return Py_None;
}

// method: void Node::setPropertyEnabled(int num, bool enable);
static PyObject *unigine_Node_setPropertyEnabled(unigine_Node* self) {
    PyErr_Clear();
    return Py_None;
}

// method: bool Node::isPropertyEnabled(int num);
static PyObject *unigine_Node_isPropertyEnabled(unigine_Node* self) {
    PyErr_Clear();
    return Py_None;
}

// SKIPPED (return type not supported): UGUID Node::getLostNodePropertyGUID(int num);

// SKIPPED (some type in arguments not supported): void Node::setTransform(const Math::Mat4 & transform);

// SKIPPED (return type not supported): Math::Mat4 Node::getTransform();

// SKIPPED (some type in arguments not supported): void Node::setWorldTransform(const Math::Mat4 & transform);

// SKIPPED (return type not supported): Math::Mat4 Node::getWorldTransform();

// SKIPPED (some type in arguments not supported): void Node::setOldWorldTransform(const Math::Mat4 & transform);

// SKIPPED (return type not supported): Math::Mat4 Node::getOldWorldTransform();

// SKIPPED (return type not supported): Math::Vec3 Node::getOldWorldPosition();

// SKIPPED (return type not supported): Math::Mat4 Node::getIWorldTransform();

// SKIPPED (some type in arguments not supported): void Node::setTransformWithoutChildren(const Math::Mat4 & transform);

// SKIPPED (some type in arguments not supported): void Node::setWorldTransformWithoutChildren(const Math::Mat4 & transform);

// SKIPPED (return type not supported): BoundBox Node::getBoundBox();

// SKIPPED (return type not supported): BoundSphere Node::getBoundSphere();

// SKIPPED (return type not supported): UNIGINE_BOUND_BOX Node::getWorldBoundBox();

// SKIPPED (return type not supported): UNIGINE_BOUND_SPHERE Node::getWorldBoundSphere();

// SKIPPED (return type not supported): UNIGINE_BOUND_BOX Node::getSpatialBoundBox();

// SKIPPED (return type not supported): UNIGINE_BOUND_SPHERE Node::getSpatialBoundSphere();

// SKIPPED (return type not supported): BoundBox Node::getHierarchyBoundBox();

// SKIPPED (return type not supported): BoundSphere Node::getHierarchyBoundSphere();

// SKIPPED (return type not supported): UNIGINE_BOUND_BOX Node::getHierarchyWorldBoundBox();

// SKIPPED (return type not supported): UNIGINE_BOUND_SPHERE Node::getHierarchyWorldBoundSphere();

// SKIPPED (return type not supported): UNIGINE_BOUND_BOX Node::getHierarchySpatialBoundBox();

// SKIPPED (return type not supported): UNIGINE_BOUND_SPHERE Node::getHierarchySpatialBoundSphere();

// SKIPPED (some type in arguments not supported): bool Node::loadWorld(const Ptr<Xml> & xml);

// SKIPPED (some type in arguments not supported): bool Node::saveWorld(const Ptr<Xml> & xml);

// SKIPPED (some type in arguments not supported): bool Node::saveState(const Ptr<Stream> & stream);

// SKIPPED (some type in arguments not supported): bool Node::restoreState(const Ptr<Stream> & stream);

// SKIPPED (return type not supported): Ptr<Body> Node::getObjectBody();

// SKIPPED (return type not supported): Ptr<BodyRigid> Node::getObjectBodyRigid();

// SKIPPED (return type not supported): Math::vec3 Node::getBodyLinearVelocity();

// SKIPPED (return type not supported): Math::vec3 Node::getBodyAngularVelocity();

// SKIPPED (return type not supported): Math::vec3 Node::getBodyWorldVelocity(const Math::Vec3 & point);

// method: int Node::getNumWorldTriggers();
static PyObject *unigine_Node_getNumWorldTriggers(unigine_Node* self) {
    PyErr_Clear();
    return Py_None;
}

// SKIPPED (return type not supported): Ptr<WorldTrigger> Node::getWorldTrigger(int num);

// SKIPPED (some type in arguments not supported): void Node::setPosition(const Math::Vec3 & pos);

// SKIPPED (return type not supported): Math::Vec3 Node::getPosition();

// SKIPPED (some type in arguments not supported): void Node::setRotation(const Math::quat & rot, bool identity);

// SKIPPED (return type not supported): Math::quat Node::getRotation();

// SKIPPED (some type in arguments not supported): void Node::setDirection(const Math::vec3 & dir, const Math::vec3 & up, MathLib::AXIS axis);

// SKIPPED (return type not supported): Math::vec3 Node::getDirection(MathLib::AXIS axis);

// SKIPPED (some type in arguments not supported): void Node::setScale(const Math::vec3 & s);

// SKIPPED (return type not supported): Math::vec3 Node::getScale();

// SKIPPED (some type in arguments not supported): void Node::setWorldPosition(const Math::Vec3 & pos);

// SKIPPED (return type not supported): Math::Vec3 Node::getWorldPosition();

// SKIPPED (some type in arguments not supported): void Node::setWorldRotation(const Math::quat & rot, bool identity);

// SKIPPED (return type not supported): Math::quat Node::getWorldRotation();

// SKIPPED (some type in arguments not supported): void Node::setWorldDirection(const Math::vec3 & dir, const Math::vec3 & up, MathLib::AXIS axis);

// SKIPPED (return type not supported): Math::vec3 Node::getWorldDirection(MathLib::AXIS axis);

// SKIPPED (some type in arguments not supported): void Node::setWorldScale(const Math::vec3 & s);

// SKIPPED (return type not supported): Math::vec3 Node::getWorldScale();

// SKIPPED (some type in arguments not supported): void Node::translate(const Math::Vec3 & t);

// SKIPPED (some type in arguments not supported): void Node::translate(Math::Scalar x, Math::Scalar y, Math::Scalar z);

// SKIPPED (some type in arguments not supported): void Node::rotate(const Math::quat & r);

// SKIPPED (some type in arguments not supported): void Node::rotate(const Math::vec3 & angles);

// method: void Node::rotate(float angle_x, float angle_y, float angle_z);
static PyObject *unigine_Node_rotate(unigine_Node* self) {
    PyErr_Clear();
    return Py_None;
}

// SKIPPED (some type in arguments not supported): void Node::worldTranslate(const Math::Vec3 & t);

// SKIPPED (some type in arguments not supported): void Node::worldTranslate(Math::Scalar x, Math::Scalar y, Math::Scalar z);

// SKIPPED (some type in arguments not supported): void Node::worldRotate(const Math::quat & r);

// SKIPPED (some type in arguments not supported): void Node::worldRotate(const Math::vec3 & angles);

// method: void Node::worldRotate(float angle_x, float angle_y, float angle_z);
static PyObject *unigine_Node_worldRotate(unigine_Node* self) {
    PyErr_Clear();
    return Py_None;
}

// SKIPPED (some type in arguments not supported): void Node::worldLookAt(const Math::Vec3 & target);

// SKIPPED (some type in arguments not supported): void Node::worldLookAt(const Math::Vec3 & target, const Math::vec3 & up);

// SKIPPED (return type not supported): Math::Vec3 Node::toWorld(const Math::vec3 & p);

// SKIPPED (return type not supported): Math::vec3 Node::toLocal(const Math::Vec3 & p);

// method: void Node::renderVisualizer();
static PyObject *unigine_Node_renderVisualizer(unigine_Node* self) {
    PyErr_Clear();
    return Py_None;
}

// SKIPPED (some type in arguments not supported): void Node::setVariable(const Variable & variable);

// SKIPPED (return type not supported): Variable Node::getVariable();

// method: bool Node::hasVariable();
static PyObject *unigine_Node_hasVariable(unigine_Node* self) {
    PyErr_Clear();
    return Py_None;
}

// SKIPPED (some type in arguments not supported): void Node::setVariable(const char * name, const Variable & variable);

// SKIPPED (return type not supported): Variable Node::getVariable(const char * name);

// method: bool Node::hasVariable(const char * name);
static PyObject *unigine_Node_hasVariable(unigine_Node* self) {
    PyErr_Clear();
    return Py_None;
}

// method: void Node::removeVariable(const char * name);
static PyObject *unigine_Node_removeVariable(unigine_Node* self) {
    PyErr_Clear();
    return Py_None;
}

// SKIPPED (return type not supported): Ptr<GeodeticPivot> Node::getGeodeticPivot();

// method: void Node::updateEnabled();
static PyObject *unigine_Node_updateEnabled(unigine_Node* self) {
    PyErr_Clear();
    return Py_None;
}

// SKIPPED (return type not supported): static void * Node::addCallback(Unigine::Node::CALLBACK_INDEX callback, Unigine::CallbackBase2< Ptr<Node>, Ptr<Property> > * func);

// SKIPPED (return type not supported): static void * Node::addCallback(Unigine::Node::CALLBACK_INDEX callback, Unigine::CallbackBase3< Ptr<Node>, Ptr<Property>, int> * func);

// SKIPPED (return type not supported): static void * Node::addCallback(Unigine::Node::CALLBACK_INDEX callback, Unigine::CallbackBase3< Ptr<Node>, int, int> * func);

// SKIPPED (return type not supported): static void * Node::addCallback(Unigine::Node::CALLBACK_INDEX callback, Unigine::CallbackBase2< Ptr<Node>, Ptr<Node> > * func);

// SKIPPED (return type not supported): static void * Node::addCallback(Unigine::Node::CALLBACK_INDEX callback, Unigine::CallbackBase2< Ptr<Node>, int> * func);

// SKIPPED (return type not supported): static void * Node::addCallback(Unigine::Node::CALLBACK_INDEX callback, Unigine::CallbackBase1< Ptr<Node> > * func);

// SKIPPED (return type not supported): static bool Node::removeCallback(Unigine::Node::CALLBACK_INDEX callback, void * id);

// SKIPPED (return type not supported): static void Node::clearCallbacks(Unigine::Node::CALLBACK_INDEX callback);


static PyMethodDef unigine_Node_methods[] = {
    {
        "set_i_d", (PyCFunction)unigine_Node_setID, METH_O,
        "TODO"
    },
    {
        "get_i_d", (PyCFunction)unigine_Node_getID, METH_NOARGS,
        "TODO"
    },
    {
        "get_type_name", (PyCFunction)unigine_Node_getTypeName, METH_NOARGS,
        "TODO"
    },
    {
        "is_world", (PyCFunction)unigine_Node_isWorld, METH_NOARGS,
        "TODO"
    },
    {
        "is_geodetic", (PyCFunction)unigine_Node_isGeodetic, METH_NOARGS,
        "TODO"
    },
    {
        "is_light", (PyCFunction)unigine_Node_isLight, METH_NOARGS,
        "TODO"
    },
    {
        "is_decal", (PyCFunction)unigine_Node_isDecal, METH_NOARGS,
        "TODO"
    },
    {
        "is_landscape_layer", (PyCFunction)unigine_Node_isLandscapeLayer, METH_NOARGS,
        "TODO"
    },
    {
        "is_object", (PyCFunction)unigine_Node_isObject, METH_NOARGS,
        "TODO"
    },
    {
        "is_player", (PyCFunction)unigine_Node_isPlayer, METH_NOARGS,
        "TODO"
    },
    {
        "is_physical", (PyCFunction)unigine_Node_isPhysical, METH_NOARGS,
        "TODO"
    },
    {
        "is_navigation", (PyCFunction)unigine_Node_isNavigation, METH_NOARGS,
        "TODO"
    },
    {
        "is_obstacle", (PyCFunction)unigine_Node_isObstacle, METH_NOARGS,
        "TODO"
    },
    {
        "is_sound", (PyCFunction)unigine_Node_isSound, METH_NOARGS,
        "TODO"
    },
    {
        "is_field", (PyCFunction)unigine_Node_isField, METH_NOARGS,
        "TODO"
    },
    {
        "is_extern", (PyCFunction)unigine_Node_isExtern, METH_NOARGS,
        "TODO"
    },
    {
        "is_enabled_self", (PyCFunction)unigine_Node_isEnabledSelf, METH_NOARGS,
        "TODO"
    },
    {
        "set_enabled", (PyCFunction)unigine_Node_setEnabled, METH_O,
        "TODO"
    },
    {
        "is_enabled", (PyCFunction)unigine_Node_isEnabled, METH_NOARGS,
        "TODO"
    },
    {
        "set_handled", (PyCFunction)unigine_Node_setHandled, METH_O,
        "TODO"
    },
    {
        "is_handled", (PyCFunction)unigine_Node_isHandled, METH_NOARGS,
        "TODO"
    },
    {
        "set_immovable", (PyCFunction)unigine_Node_setImmovable, METH_O,
        "TODO"
    },
    {
        "is_immovable", (PyCFunction)unigine_Node_isImmovable, METH_NOARGS,
        "TODO"
    },
    {
        "set_trigger_interaction_enabled", (PyCFunction)unigine_Node_setTriggerInteractionEnabled, METH_O,
        "TODO"
    },
    {
        "is_trigger_interaction_enabled", (PyCFunction)unigine_Node_isTriggerInteractionEnabled, METH_NOARGS,
        "TODO"
    },
    {
        "set_grass_interaction_enabled", (PyCFunction)unigine_Node_setGrassInteractionEnabled, METH_O,
        "TODO"
    },
    {
        "is_grass_interaction_enabled", (PyCFunction)unigine_Node_isGrassInteractionEnabled, METH_NOARGS,
        "TODO"
    },
    {
        "set_clutter_interaction_enabled", (PyCFunction)unigine_Node_setClutterInteractionEnabled, METH_O,
        "TODO"
    },
    {
        "is_clutter_interaction_enabled", (PyCFunction)unigine_Node_isClutterInteractionEnabled, METH_NOARGS,
        "TODO"
    },
    {
        "set_query", (PyCFunction)unigine_Node_setQuery, METH_O,
        "TODO"
    },
    {
        "is_query", (PyCFunction)unigine_Node_isQuery, METH_NOARGS,
        "TODO"
    },
    {
        "has_query_force", (PyCFunction)unigine_Node_hasQueryForce, METH_NOARGS,
        "TODO"
    },
    {
        "set_show_in_editor_enabled", (PyCFunction)unigine_Node_setShowInEditorEnabled, METH_O,
        "TODO"
    },
    {
        "is_show_in_editor_enabled", (PyCFunction)unigine_Node_isShowInEditorEnabled, METH_NOARGS,
        "TODO"
    },
    {
        "set_save_to_world_enabled", (PyCFunction)unigine_Node_setSaveToWorldEnabled, METH_O,
        "TODO"
    },
    {
        "is_save_to_world_enabled", (PyCFunction)unigine_Node_isSaveToWorldEnabled, METH_NOARGS,
        "TODO"
    },
    {
        "is_show_in_editor_enabled_self", (PyCFunction)unigine_Node_isShowInEditorEnabledSelf, METH_NOARGS,
        "TODO"
    },
    {
        "is_save_to_world_enabled_self", (PyCFunction)unigine_Node_isSaveToWorldEnabledSelf, METH_NOARGS,
        "TODO"
    },
    {
        "set_show_in_editor_enabled_recursive", (PyCFunction)unigine_Node_setShowInEditorEnabledRecursive, METH_O,
        "TODO"
    },
    {
        "set_save_to_world_enabled_recursive", (PyCFunction)unigine_Node_setSaveToWorldEnabledRecursive, METH_O,
        "TODO"
    },
    {
        "set_name", (PyCFunction)unigine_Node_setName, METH_O,
        "TODO"
    },
    {
        "get_name", (PyCFunction)unigine_Node_getName, METH_NOARGS,
        "TODO"
    },
    {
        "set_data", (PyCFunction)unigine_Node_setData, METH_O,
        "TODO"
    },
    {
        "get_data", (PyCFunction)unigine_Node_getData, METH_NOARGS,
        "TODO"
    },
    {
        "get_num_ancestors", (PyCFunction)unigine_Node_getNumAncestors, METH_NOARGS,
        "TODO"
    },
    {
        "find_ancestor", (PyCFunction)unigine_Node_findAncestor, METH_O,
        "TODO"
    },
    {
        "find_ancestor", (PyCFunction)unigine_Node_findAncestor, METH_O,
        "TODO"
    },
    {
        "get_num_children", (PyCFunction)unigine_Node_getNumChildren, METH_NOARGS,
        "TODO"
    },
    {
        "find_child", (PyCFunction)unigine_Node_findChild, METH_O,
        "TODO"
    },
    {
        "get_num_properties", (PyCFunction)unigine_Node_getNumProperties, METH_NOARGS,
        "TODO"
    },
    {
        "add_property", (PyCFunction)unigine_Node_addProperty, METH_O,
        "TODO"
    },
    {
        "find_property", (PyCFunction)unigine_Node_findProperty, METH_O,
        "TODO"
    },
    {
        "set_property", (PyCFunction)unigine_Node_setProperty, METH_O,
        "TODO"
    },
    {
        "set_property", (PyCFunction)unigine_Node_setProperty, METH_VARARGS,
        "TODO"
    },
    {
        "insert_property", (PyCFunction)unigine_Node_insertProperty, METH_VARARGS,
        "TODO"
    },
    {
        "swap_property", (PyCFunction)unigine_Node_swapProperty, METH_VARARGS,
        "TODO"
    },
    {
        "remove_property", (PyCFunction)unigine_Node_removeProperty, METH_O,
        "TODO"
    },
    {
        "remove_property", (PyCFunction)unigine_Node_removeProperty, METH_O,
        "TODO"
    },
    {
        "clear_properties", (PyCFunction)unigine_Node_clearProperties, METH_NOARGS,
        "TODO"
    },
    {
        "get_property_name", (PyCFunction)unigine_Node_getPropertyName, METH_O,
        "TODO"
    },
    {
        "set_property_enabled", (PyCFunction)unigine_Node_setPropertyEnabled, METH_VARARGS,
        "TODO"
    },
    {
        "is_property_enabled", (PyCFunction)unigine_Node_isPropertyEnabled, METH_O,
        "TODO"
    },
    {
        "get_num_world_triggers", (PyCFunction)unigine_Node_getNumWorldTriggers, METH_NOARGS,
        "TODO"
    },
    {
        "rotate", (PyCFunction)unigine_Node_rotate, METH_VARARGS,
        "TODO"
    },
    {
        "world_rotate", (PyCFunction)unigine_Node_worldRotate, METH_VARARGS,
        "TODO"
    },
    {
        "render_visualizer", (PyCFunction)unigine_Node_renderVisualizer, METH_NOARGS,
        "TODO"
    },
    {
        "has_variable", (PyCFunction)unigine_Node_hasVariable, METH_NOARGS,
        "TODO"
    },
    {
        "has_variable", (PyCFunction)unigine_Node_hasVariable, METH_O,
        "TODO"
    },
    {
        "remove_variable", (PyCFunction)unigine_Node_removeVariable, METH_O,
        "TODO"
    },
    {
        "update_enabled", (PyCFunction)unigine_Node_updateEnabled, METH_NOARGS,
        "TODO"
    },
    {NULL}  //
};
static PyTypeObject unigine_NodeType = {
    // PyVarObject_HEAD_INIT(&PyType_Type, 0)
    PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "unigine.Node",
    .tp_basicsize = sizeof(unigine_Node) + 16, // magic size + 16!!!
    .tp_dealloc = (destructor)unigine_Node_dealloc,
    .tp_flags = Py_TPFLAGS_DEFAULT, // | Py_TPFLAGS_BASETYPE,
    .tp_doc = "Node Object",
    .tp_methods = unigine_Node_methods,
    .tp_members = 0,
    .tp_dict = 0,
    .tp_init = (initproc)unigine_Node_init,
    .tp_new = unigine_Node_new,
};

PyObject * PyUnigineNode::NewObject(Unigine::Ptr<Unigine::Node> unigine_object_ptr) {
    unigine_Node *pInst = PyObject_New(unigine_Node, &unigine_NodeType);
    pInst->unigine_object_ptr = unigine_object_ptr;
    // Py_INCREF(pInst);
    return (PyObject *)pInst;
}

// ------------------------------------------------------------------------------------------
// Python3UnigineNode 

bool Python3UnigineNode::isReady() {
    // Initialize tp_dict with empty dictionary
    
    if (!unigine_NodeType.tp_dict) {
        unigine_NodeType.tp_dict = PyDict_New();

        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "ANY_TYPE",
            Py_BuildValue("i", Unigine::Node::ANY_TYPE)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "NODE_BEGIN",
            Py_BuildValue("i", Unigine::Node::NODE_BEGIN)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "NODE_DUMMY",
            Py_BuildValue("i", Unigine::Node::NODE_DUMMY)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "NODE_LAYER",
            Py_BuildValue("i", Unigine::Node::NODE_LAYER)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "NODE_TRIGGER",
            Py_BuildValue("i", Unigine::Node::NODE_TRIGGER)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "NODE_REFERENCE",
            Py_BuildValue("i", Unigine::Node::NODE_REFERENCE)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "NODE_EXTERN",
            Py_BuildValue("i", Unigine::Node::NODE_EXTERN)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "NODE_END",
            Py_BuildValue("i", Unigine::Node::NODE_END)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "WORLD_BEGIN",
            Py_BuildValue("i", Unigine::Node::WORLD_BEGIN)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "WORLD_SPLINE_GRAPH",
            Py_BuildValue("i", Unigine::Node::WORLD_SPLINE_GRAPH)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "WORLD_TRIGGER",
            Py_BuildValue("i", Unigine::Node::WORLD_TRIGGER)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "WORLD_CLUTTER",
            Py_BuildValue("i", Unigine::Node::WORLD_CLUTTER)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "WORLD_SWITCHER",
            Py_BuildValue("i", Unigine::Node::WORLD_SWITCHER)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "WORLD_OCCLUDER",
            Py_BuildValue("i", Unigine::Node::WORLD_OCCLUDER)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "WORLD_OCCLUDER_MESH",
            Py_BuildValue("i", Unigine::Node::WORLD_OCCLUDER_MESH)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "WORLD_TRANSFORM_PATH",
            Py_BuildValue("i", Unigine::Node::WORLD_TRANSFORM_PATH)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "WORLD_TRANSFORM_BONE",
            Py_BuildValue("i", Unigine::Node::WORLD_TRANSFORM_BONE)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "WORLD_EXPRESSION",
            Py_BuildValue("i", Unigine::Node::WORLD_EXPRESSION)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "WORLD_EXTERN",
            Py_BuildValue("i", Unigine::Node::WORLD_EXTERN)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "WORLD_END",
            Py_BuildValue("i", Unigine::Node::WORLD_END)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "GEODETIC_BEGIN",
            Py_BuildValue("i", Unigine::Node::GEODETIC_BEGIN)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "GEODETIC_PIVOT",
            Py_BuildValue("i", Unigine::Node::GEODETIC_PIVOT)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "GEODETIC_END",
            Py_BuildValue("i", Unigine::Node::GEODETIC_END)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "FIELD_BEGIN",
            Py_BuildValue("i", Unigine::Node::FIELD_BEGIN)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "FIELD_SPACER",
            Py_BuildValue("i", Unigine::Node::FIELD_SPACER)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "FIELD_ANIMATION",
            Py_BuildValue("i", Unigine::Node::FIELD_ANIMATION)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "FIELD_HEIGHT",
            Py_BuildValue("i", Unigine::Node::FIELD_HEIGHT)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "FIELD_SHORELINE",
            Py_BuildValue("i", Unigine::Node::FIELD_SHORELINE)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "FIELD_WEATHER",
            Py_BuildValue("i", Unigine::Node::FIELD_WEATHER)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "FIELD_END",
            Py_BuildValue("i", Unigine::Node::FIELD_END)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "LIGHT_BEGIN",
            Py_BuildValue("i", Unigine::Node::LIGHT_BEGIN)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "LIGHT_VOXEL_PROBE",
            Py_BuildValue("i", Unigine::Node::LIGHT_VOXEL_PROBE)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "LIGHT_ENVIRONMENT_PROBE",
            Py_BuildValue("i", Unigine::Node::LIGHT_ENVIRONMENT_PROBE)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "LIGHT_PLANAR_PROBE",
            Py_BuildValue("i", Unigine::Node::LIGHT_PLANAR_PROBE)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "LIGHT_OMNI",
            Py_BuildValue("i", Unigine::Node::LIGHT_OMNI)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "LIGHT_PROJ",
            Py_BuildValue("i", Unigine::Node::LIGHT_PROJ)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "LIGHT_WORLD",
            Py_BuildValue("i", Unigine::Node::LIGHT_WORLD)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "LIGHT_END",
            Py_BuildValue("i", Unigine::Node::LIGHT_END)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "DECAL_BEGIN",
            Py_BuildValue("i", Unigine::Node::DECAL_BEGIN)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "DECAL_PROJ",
            Py_BuildValue("i", Unigine::Node::DECAL_PROJ)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "DECAL_ORTHO",
            Py_BuildValue("i", Unigine::Node::DECAL_ORTHO)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "DECAL_MESH",
            Py_BuildValue("i", Unigine::Node::DECAL_MESH)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "DECAL_END",
            Py_BuildValue("i", Unigine::Node::DECAL_END)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "LANDSCAPE_LAYER_BEGIN",
            Py_BuildValue("i", Unigine::Node::LANDSCAPE_LAYER_BEGIN)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "LANDSCAPE_LAYER_MAP",
            Py_BuildValue("i", Unigine::Node::LANDSCAPE_LAYER_MAP)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "LANDSCAPE_LAYER_END",
            Py_BuildValue("i", Unigine::Node::LANDSCAPE_LAYER_END)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "OBJECT_BEGIN",
            Py_BuildValue("i", Unigine::Node::OBJECT_BEGIN)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "OBJECT_DUMMY",
            Py_BuildValue("i", Unigine::Node::OBJECT_DUMMY)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "OBJECT_DYNAMIC",
            Py_BuildValue("i", Unigine::Node::OBJECT_DYNAMIC)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "OBJECT_MESH_STATIC",
            Py_BuildValue("i", Unigine::Node::OBJECT_MESH_STATIC)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "OBJECT_MESH_CLUSTER",
            Py_BuildValue("i", Unigine::Node::OBJECT_MESH_CLUSTER)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "OBJECT_MESH_CLUTTER",
            Py_BuildValue("i", Unigine::Node::OBJECT_MESH_CLUTTER)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "OBJECT_MESH_SKINNED",
            Py_BuildValue("i", Unigine::Node::OBJECT_MESH_SKINNED)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "OBJECT_MESH_DYNAMIC",
            Py_BuildValue("i", Unigine::Node::OBJECT_MESH_DYNAMIC)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "OBJECT_MESH_SPLINE_CLUSTER",
            Py_BuildValue("i", Unigine::Node::OBJECT_MESH_SPLINE_CLUSTER)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "OBJECT_LANDSCAPE_TERRAIN",
            Py_BuildValue("i", Unigine::Node::OBJECT_LANDSCAPE_TERRAIN)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "OBJECT_TERRAIN_GLOBAL",
            Py_BuildValue("i", Unigine::Node::OBJECT_TERRAIN_GLOBAL)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "OBJECT_GRASS",
            Py_BuildValue("i", Unigine::Node::OBJECT_GRASS)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "OBJECT_PARTICLES",
            Py_BuildValue("i", Unigine::Node::OBJECT_PARTICLES)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "OBJECT_BILLBOARDS",
            Py_BuildValue("i", Unigine::Node::OBJECT_BILLBOARDS)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "OBJECT_VOLUME_BOX",
            Py_BuildValue("i", Unigine::Node::OBJECT_VOLUME_BOX)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "OBJECT_VOLUME_SPHERE",
            Py_BuildValue("i", Unigine::Node::OBJECT_VOLUME_SPHERE)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "OBJECT_VOLUME_OMNI",
            Py_BuildValue("i", Unigine::Node::OBJECT_VOLUME_OMNI)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "OBJECT_VOLUME_PROJ",
            Py_BuildValue("i", Unigine::Node::OBJECT_VOLUME_PROJ)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "OBJECT_GUI",
            Py_BuildValue("i", Unigine::Node::OBJECT_GUI)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "OBJECT_GUI_MESH",
            Py_BuildValue("i", Unigine::Node::OBJECT_GUI_MESH)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "OBJECT_WATER_GLOBAL",
            Py_BuildValue("i", Unigine::Node::OBJECT_WATER_GLOBAL)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "OBJECT_WATER_MESH",
            Py_BuildValue("i", Unigine::Node::OBJECT_WATER_MESH)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "OBJECT_SKY",
            Py_BuildValue("i", Unigine::Node::OBJECT_SKY)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "OBJECT_CLOUD_LAYER",
            Py_BuildValue("i", Unigine::Node::OBJECT_CLOUD_LAYER)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "OBJECT_EXTERN",
            Py_BuildValue("i", Unigine::Node::OBJECT_EXTERN)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "OBJECT_TEXT",
            Py_BuildValue("i", Unigine::Node::OBJECT_TEXT)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "OBJECT_END",
            Py_BuildValue("i", Unigine::Node::OBJECT_END)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "PLAYER_BEGIN",
            Py_BuildValue("i", Unigine::Node::PLAYER_BEGIN)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "PLAYER_DUMMY",
            Py_BuildValue("i", Unigine::Node::PLAYER_DUMMY)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "PLAYER_SPECTATOR",
            Py_BuildValue("i", Unigine::Node::PLAYER_SPECTATOR)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "PLAYER_PERSECUTOR",
            Py_BuildValue("i", Unigine::Node::PLAYER_PERSECUTOR)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "PLAYER_ACTOR",
            Py_BuildValue("i", Unigine::Node::PLAYER_ACTOR)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "PLAYER_END",
            Py_BuildValue("i", Unigine::Node::PLAYER_END)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "PHYSICAL_BEGIN",
            Py_BuildValue("i", Unigine::Node::PHYSICAL_BEGIN)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "PHYSICAL_WIND",
            Py_BuildValue("i", Unigine::Node::PHYSICAL_WIND)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "PHYSICAL_FORCE",
            Py_BuildValue("i", Unigine::Node::PHYSICAL_FORCE)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "PHYSICAL_NOISE",
            Py_BuildValue("i", Unigine::Node::PHYSICAL_NOISE)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "PHYSICAL_WATER",
            Py_BuildValue("i", Unigine::Node::PHYSICAL_WATER)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "PHYSICAL_TRIGGER",
            Py_BuildValue("i", Unigine::Node::PHYSICAL_TRIGGER)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "PHYSICAL_END",
            Py_BuildValue("i", Unigine::Node::PHYSICAL_END)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "NAVIGATION_BEGIN",
            Py_BuildValue("i", Unigine::Node::NAVIGATION_BEGIN)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "NAVIGATION_SECTOR",
            Py_BuildValue("i", Unigine::Node::NAVIGATION_SECTOR)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "NAVIGATION_MESH",
            Py_BuildValue("i", Unigine::Node::NAVIGATION_MESH)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "NAVIGATION_END",
            Py_BuildValue("i", Unigine::Node::NAVIGATION_END)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "OBSTACLE_BEGIN",
            Py_BuildValue("i", Unigine::Node::OBSTACLE_BEGIN)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "OBSTACLE_BOX",
            Py_BuildValue("i", Unigine::Node::OBSTACLE_BOX)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "OBSTACLE_SPHERE",
            Py_BuildValue("i", Unigine::Node::OBSTACLE_SPHERE)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "OBSTACLE_CAPSULE",
            Py_BuildValue("i", Unigine::Node::OBSTACLE_CAPSULE)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "OBSTACLE_END",
            Py_BuildValue("i", Unigine::Node::OBSTACLE_END)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "SOUND_BEGIN",
            Py_BuildValue("i", Unigine::Node::SOUND_BEGIN)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "SOUND_SOURCE",
            Py_BuildValue("i", Unigine::Node::SOUND_SOURCE)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "SOUND_REVERB",
            Py_BuildValue("i", Unigine::Node::SOUND_REVERB)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "SOUND_END",
            Py_BuildValue("i", Unigine::Node::SOUND_END)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "NUM_NODES",
            Py_BuildValue("i", Unigine::Node::NUM_NODES)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "NUM_WORLDS",
            Py_BuildValue("i", Unigine::Node::NUM_WORLDS)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "NUM_GEODETICS",
            Py_BuildValue("i", Unigine::Node::NUM_GEODETICS)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "NUM_FIELDS",
            Py_BuildValue("i", Unigine::Node::NUM_FIELDS)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "NUM_LIGHTS",
            Py_BuildValue("i", Unigine::Node::NUM_LIGHTS)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "NUM_DECALS",
            Py_BuildValue("i", Unigine::Node::NUM_DECALS)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "NUM_OBJECTS",
            Py_BuildValue("i", Unigine::Node::NUM_OBJECTS)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "NUM_PLAYERS",
            Py_BuildValue("i", Unigine::Node::NUM_PLAYERS)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "NUM_PHYSICALS",
            Py_BuildValue("i", Unigine::Node::NUM_PHYSICALS)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "NUM_NAVIGATIONS",
            Py_BuildValue("i", Unigine::Node::NUM_NAVIGATIONS)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "NUM_OBSTACLES",
            Py_BuildValue("i", Unigine::Node::NUM_OBSTACLES)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "NUM_SOUNDS",
            Py_BuildValue("i", Unigine::Node::NUM_SOUNDS)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "DUMMY",
            Py_BuildValue("i", Unigine::Node::DUMMY)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "LAYER",
            Py_BuildValue("i", Unigine::Node::LAYER)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "TRIGGER",
            Py_BuildValue("i", Unigine::Node::TRIGGER)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "REFERENCE",
            Py_BuildValue("i", Unigine::Node::REFERENCE)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "EXTERN",
            Py_BuildValue("i", Unigine::Node::EXTERN)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "CALLBACK_PROPERTY_NODE_SLOTS_CHANGED",
            Py_BuildValue("i", Unigine::Node::CALLBACK_PROPERTY_NODE_SLOTS_CHANGED)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "CALLBACK_PROPERTY_NODE_ADD",
            Py_BuildValue("i", Unigine::Node::CALLBACK_PROPERTY_NODE_ADD)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "CALLBACK_PROPERTY_NODE_SWAP",
            Py_BuildValue("i", Unigine::Node::CALLBACK_PROPERTY_NODE_SWAP)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "CALLBACK_PROPERTY_NODE_REMOVE",
            Py_BuildValue("i", Unigine::Node::CALLBACK_PROPERTY_NODE_REMOVE)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "CALLBACK_PROPERTY_CHANGE_ENABLED",
            Py_BuildValue("i", Unigine::Node::CALLBACK_PROPERTY_CHANGE_ENABLED)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "CALLBACK_PROPERTY_SURFACE_ADD",
            Py_BuildValue("i", Unigine::Node::CALLBACK_PROPERTY_SURFACE_ADD)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "CALLBACK_PROPERTY_SURFACE_REMOVE",
            Py_BuildValue("i", Unigine::Node::CALLBACK_PROPERTY_SURFACE_REMOVE)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "CALLBACK_CACHE_NODE_ADD",
            Py_BuildValue("i", Unigine::Node::CALLBACK_CACHE_NODE_ADD)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "CALLBACK_NODE_LOAD",
            Py_BuildValue("i", Unigine::Node::CALLBACK_NODE_LOAD)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "CALLBACK_NODE_CLONE",
            Py_BuildValue("i", Unigine::Node::CALLBACK_NODE_CLONE)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "CALLBACK_NODE_SWAP",
            Py_BuildValue("i", Unigine::Node::CALLBACK_NODE_SWAP)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "CALLBACK_NODE_REMOVE",
            Py_BuildValue("i", Unigine::Node::CALLBACK_NODE_REMOVE)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "CALLBACK_NODE_CHANGE_ENABLED",
            Py_BuildValue("i", Unigine::Node::CALLBACK_NODE_CHANGE_ENABLED)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "LIFETIME_WORLD",
            Py_BuildValue("i", Unigine::Node::LIFETIME_WORLD)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "LIFETIME_ENGINE",
            Py_BuildValue("i", Unigine::Node::LIFETIME_ENGINE)
        );
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "LIFETIME_MANUAL",
            Py_BuildValue("i", Unigine::Node::LIFETIME_MANUAL)
        );
    }
    if (PyType_Ready(&unigine_NodeType) < 0) {
        return false;
    }
    return true;
}

bool Python3UnigineNode::addClassDefinitionToModule(PyObject* pModule) {
    Py_INCREF(&unigine_NodeType);
    if (PyModule_AddObject(pModule, "Node", (PyObject *)&unigine_NodeType) < 0) {
        Py_DECREF(&unigine_NodeType);
        return false;
    }
    return true;
}

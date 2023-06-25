// this file automaticly generated from UnigineNode.h
#include "python3_unigine_node.h"

#include <string>
#include <UnigineNode.h>
#include <UnigineLog.h>
#include <Python.h>
#include <structmember.h>

#include <iostream>

namespace PyUnigine {

// ------------------------------------------------------------------------------------------
// unigine_Node

typedef struct {
    PyObject_HEAD
    // Type-specific fields go here.
    Unigine::Ptr<Unigine::Node> unigine_object_ptr;
} unigine_Node;

static void unigine_Node_dealloc(unigine_Node* self) {
    // Unigine::Log::message("unigine_Node_dealloc\n");
    Py_TYPE(self)->tp_free((PyObject*)self);
}

static PyObject *unigine_Node_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    // Unigine::Log::message("unigine_Node_new\n");
    unigine_Node *self;
    self = (unigine_Node *)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static int unigine_Node_init(unigine_Node *self, PyObject *args, PyObject *kwds) {
    // nothing
    return 0;
}


// public : toWorld
static PyObject * unigine_Node_to_world(unigine_Node* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const Unigine::Math::vec3 & p;
    // return: 

    unknown type 
    return ret;
};

// public (static): getCloneNode
static PyObject * unigine_Node_get_clone_node(PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const Unigine::Ptr<Unigine::Node> & original_node;
    // return: Unigine::Ptr<Unigine::Node>

    Unigine::Ptr<Unigine::Node> retOriginal = Unigine::Node::getCloneNode(original_node);
    ret = PyUnigine::Node::NewObject(retOriginal);
    return ret;
};

// public (static): getCloneProperty
static PyObject * unigine_Node_get_clone_property(PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const Unigine::Ptr<Unigine::Property> & original_property;
    // return: Unigine::Ptr<Unigine::Property>

    Unigine::Ptr<Unigine::Property> retOriginal = Unigine::Node::getCloneProperty(original_property);
    ret = PyUnigine::Property::NewObject(retOriginal);
    return ret;
};

// public (static): getNode
static PyObject * unigine_Node_get_node(PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    int id;
    // return: Unigine::Ptr<Unigine::Node>

    Unigine::Ptr<Unigine::Node> retOriginal = Unigine::Node::getNode(id);
    ret = PyUnigine::Node::NewObject(retOriginal);
    return ret;
};

// public (static): isNode
static PyObject * unigine_Node_is_node(PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const Unigine::Ptr<Unigine::Node> & node;
    // return: int

    int retOriginal = Unigine::Node::isNode(node);
    ret = PyLong_FromLong(retOriginal);
    return ret;
};

// public (static): isNode
static PyObject * unigine_Node_is_node(PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    int id;
    // return: int

    int retOriginal = Unigine::Node::isNode(id);
    ret = PyLong_FromLong(retOriginal);
    return ret;
};

// public (static): getTypeID
static PyObject * unigine_Node_get_type_id(PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const char * type;
    // return: Unigine::Node::TYPE

    Unigine::Node::TYPE retOriginal = Unigine::Node::getTypeID(type);
    ret = PyLong_FromLong(retOriginal);
    return ret;
};

// public (static): getTypeName
static PyObject * unigine_Node_get_type_name(PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    Unigine::Node::TYPE type;
    // return: const char *

    unknown type 
    return ret;
};

// public : clone
static PyObject * unigine_Node_clone(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: Unigine::Ptr<Unigine::Node>

    Unigine::Ptr<Unigine::Node> retOriginal = self->unigine_object_ptr->clone();
    ret = todo;
    return ret;
};

// public : swap
static PyObject * unigine_Node_swap(unigine_Node* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const Unigine::Ptr<Unigine::Node> & n;
    // return: void

    self->unigine_object_ptr->swap(n);
    return ret;
};

// public : setID
static PyObject * unigine_Node_set_id(unigine_Node* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    int id;
    // return: void

    self->unigine_object_ptr->setID(id);
    return ret;
};

// public : getID
static PyObject * unigine_Node_get_id(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: int

    int retOriginal = self->unigine_object_ptr->getID();
    ret = PyLong_FromLong(retOriginal);
    return ret;
};

// public : getType
static PyObject * unigine_Node_get_type(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: Unigine::Node::TYPE

    Unigine::Node::TYPE retOriginal = self->unigine_object_ptr->getType();
    ret = PyLong_FromLong(retOriginal);
    return ret;
};

// public : getTypeName
static PyObject * unigine_Node_get_type_name(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: const char *

    unknown type 
    return ret;
};

// public : isWorld
static PyObject * unigine_Node_is_world(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: bool

    bool retOriginal = self->unigine_object_ptr->isWorld();
    ret = PyBool_FromLong(retOriginal);
    return ret;
};

// public : isGeodetic
static PyObject * unigine_Node_is_geodetic(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: bool

    bool retOriginal = self->unigine_object_ptr->isGeodetic();
    ret = PyBool_FromLong(retOriginal);
    return ret;
};

// public : isLight
static PyObject * unigine_Node_is_light(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: bool

    bool retOriginal = self->unigine_object_ptr->isLight();
    ret = PyBool_FromLong(retOriginal);
    return ret;
};

// public : isDecal
static PyObject * unigine_Node_is_decal(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: bool

    bool retOriginal = self->unigine_object_ptr->isDecal();
    ret = PyBool_FromLong(retOriginal);
    return ret;
};

// public : isLandscapeLayer
static PyObject * unigine_Node_is_landscape_layer(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: bool

    bool retOriginal = self->unigine_object_ptr->isLandscapeLayer();
    ret = PyBool_FromLong(retOriginal);
    return ret;
};

// public : isObject
static PyObject * unigine_Node_is_object(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: bool

    bool retOriginal = self->unigine_object_ptr->isObject();
    ret = PyBool_FromLong(retOriginal);
    return ret;
};

// public : isPlayer
static PyObject * unigine_Node_is_player(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: bool

    bool retOriginal = self->unigine_object_ptr->isPlayer();
    ret = PyBool_FromLong(retOriginal);
    return ret;
};

// public : isPhysical
static PyObject * unigine_Node_is_physical(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: bool

    bool retOriginal = self->unigine_object_ptr->isPhysical();
    ret = PyBool_FromLong(retOriginal);
    return ret;
};

// public : isNavigation
static PyObject * unigine_Node_is_navigation(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: bool

    bool retOriginal = self->unigine_object_ptr->isNavigation();
    ret = PyBool_FromLong(retOriginal);
    return ret;
};

// public : isObstacle
static PyObject * unigine_Node_is_obstacle(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: bool

    bool retOriginal = self->unigine_object_ptr->isObstacle();
    ret = PyBool_FromLong(retOriginal);
    return ret;
};

// public : isSound
static PyObject * unigine_Node_is_sound(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: bool

    bool retOriginal = self->unigine_object_ptr->isSound();
    ret = PyBool_FromLong(retOriginal);
    return ret;
};

// public : isField
static PyObject * unigine_Node_is_field(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: bool

    bool retOriginal = self->unigine_object_ptr->isField();
    ret = PyBool_FromLong(retOriginal);
    return ret;
};

// public : isExtern
static PyObject * unigine_Node_is_extern(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: bool

    bool retOriginal = self->unigine_object_ptr->isExtern();
    ret = PyBool_FromLong(retOriginal);
    return ret;
};

// public : isEnabledSelf
static PyObject * unigine_Node_is_enabled_self(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: bool

    bool retOriginal = self->unigine_object_ptr->isEnabledSelf();
    ret = PyBool_FromLong(retOriginal);
    return ret;
};

// public : getLifetimeSelf
static PyObject * unigine_Node_get_lifetime_self(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: Unigine::Node::LIFETIME

    Unigine::Node::LIFETIME retOriginal = self->unigine_object_ptr->getLifetimeSelf();
    ret = PyLong_FromLong(retOriginal);
    return ret;
};

// public : setEnabled
static PyObject * unigine_Node_set_enabled(unigine_Node* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    bool enabled;
    // return: void

    self->unigine_object_ptr->setEnabled(enabled);
    return ret;
};

// public : isEnabled
static PyObject * unigine_Node_is_enabled(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: bool

    bool retOriginal = self->unigine_object_ptr->isEnabled();
    ret = PyBool_FromLong(retOriginal);
    return ret;
};

// public : setHandled
static PyObject * unigine_Node_set_handled(unigine_Node* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    bool handled;
    // return: void

    self->unigine_object_ptr->setHandled(handled);
    return ret;
};

// public : isHandled
static PyObject * unigine_Node_is_handled(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: bool

    bool retOriginal = self->unigine_object_ptr->isHandled();
    ret = PyBool_FromLong(retOriginal);
    return ret;
};

// public : setImmovable
static PyObject * unigine_Node_set_immovable(unigine_Node* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    bool immovable;
    // return: void

    self->unigine_object_ptr->setImmovable(immovable);
    return ret;
};

// public : isImmovable
static PyObject * unigine_Node_is_immovable(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: bool

    bool retOriginal = self->unigine_object_ptr->isImmovable();
    ret = PyBool_FromLong(retOriginal);
    return ret;
};

// public : setTriggerInteractionEnabled
static PyObject * unigine_Node_set_trigger_interaction_enabled(unigine_Node* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    bool enabled;
    // return: void

    self->unigine_object_ptr->setTriggerInteractionEnabled(enabled);
    return ret;
};

// public : isTriggerInteractionEnabled
static PyObject * unigine_Node_is_trigger_interaction_enabled(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: bool

    bool retOriginal = self->unigine_object_ptr->isTriggerInteractionEnabled();
    ret = PyBool_FromLong(retOriginal);
    return ret;
};

// public : setGrassInteractionEnabled
static PyObject * unigine_Node_set_grass_interaction_enabled(unigine_Node* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    bool enabled;
    // return: void

    self->unigine_object_ptr->setGrassInteractionEnabled(enabled);
    return ret;
};

// public : isGrassInteractionEnabled
static PyObject * unigine_Node_is_grass_interaction_enabled(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: bool

    bool retOriginal = self->unigine_object_ptr->isGrassInteractionEnabled();
    ret = PyBool_FromLong(retOriginal);
    return ret;
};

// public : setClutterInteractionEnabled
static PyObject * unigine_Node_set_clutter_interaction_enabled(unigine_Node* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    bool enabled;
    // return: void

    self->unigine_object_ptr->setClutterInteractionEnabled(enabled);
    return ret;
};

// public : isClutterInteractionEnabled
static PyObject * unigine_Node_is_clutter_interaction_enabled(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: bool

    bool retOriginal = self->unigine_object_ptr->isClutterInteractionEnabled();
    ret = PyBool_FromLong(retOriginal);
    return ret;
};

// public : setQuery
static PyObject * unigine_Node_set_query(unigine_Node* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    bool query;
    // return: void

    self->unigine_object_ptr->setQuery(query);
    return ret;
};

// public : isQuery
static PyObject * unigine_Node_is_query(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: bool

    bool retOriginal = self->unigine_object_ptr->isQuery();
    ret = PyBool_FromLong(retOriginal);
    return ret;
};

// public : hasQueryForce
static PyObject * unigine_Node_has_query_force(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: bool

    bool retOriginal = self->unigine_object_ptr->hasQueryForce();
    ret = PyBool_FromLong(retOriginal);
    return ret;
};

// public : setShowInEditorEnabled
static PyObject * unigine_Node_set_show_in_editor_enabled(unigine_Node* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    bool enabled;
    // return: void

    self->unigine_object_ptr->setShowInEditorEnabled(enabled);
    return ret;
};

// public : isShowInEditorEnabled
static PyObject * unigine_Node_is_show_in_editor_enabled(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: bool

    bool retOriginal = self->unigine_object_ptr->isShowInEditorEnabled();
    ret = PyBool_FromLong(retOriginal);
    return ret;
};

// public : setSaveToWorldEnabled
static PyObject * unigine_Node_set_save_to_world_enabled(unigine_Node* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    bool enabled;
    // return: void

    self->unigine_object_ptr->setSaveToWorldEnabled(enabled);
    return ret;
};

// public : isSaveToWorldEnabled
static PyObject * unigine_Node_is_save_to_world_enabled(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: bool

    bool retOriginal = self->unigine_object_ptr->isSaveToWorldEnabled();
    ret = PyBool_FromLong(retOriginal);
    return ret;
};

// public : setLifetime
static PyObject * unigine_Node_set_lifetime(unigine_Node* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    Unigine::Node::LIFETIME lifetime;
    // return: void

    self->unigine_object_ptr->setLifetime(lifetime);
    return ret;
};

// public : getLifetime
static PyObject * unigine_Node_get_lifetime(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: Unigine::Node::LIFETIME

    Unigine::Node::LIFETIME retOriginal = self->unigine_object_ptr->getLifetime();
    ret = PyLong_FromLong(retOriginal);
    return ret;
};

// public : isShowInEditorEnabledSelf
static PyObject * unigine_Node_is_show_in_editor_enabled_self(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: bool

    bool retOriginal = self->unigine_object_ptr->isShowInEditorEnabledSelf();
    ret = PyBool_FromLong(retOriginal);
    return ret;
};

// public : isSaveToWorldEnabledSelf
static PyObject * unigine_Node_is_save_to_world_enabled_self(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: bool

    bool retOriginal = self->unigine_object_ptr->isSaveToWorldEnabledSelf();
    ret = PyBool_FromLong(retOriginal);
    return ret;
};

// public : setShowInEditorEnabledRecursive
static PyObject * unigine_Node_set_show_in_editor_enabled_recursive(unigine_Node* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    bool enable;
    // return: void

    self->unigine_object_ptr->setShowInEditorEnabledRecursive(enable);
    return ret;
};

// public : setSaveToWorldEnabledRecursive
static PyObject * unigine_Node_set_save_to_world_enabled_recursive(unigine_Node* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    bool enable;
    // return: void

    self->unigine_object_ptr->setSaveToWorldEnabledRecursive(enable);
    return ret;
};

// public : setName
static PyObject * unigine_Node_set_name(unigine_Node* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const char * name;
    // return: void

    self->unigine_object_ptr->setName(name);
    return ret;
};

// public : getName
static PyObject * unigine_Node_get_name(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: const char *

    unknown type 
    return ret;
};

// public : setData
static PyObject * unigine_Node_set_data(unigine_Node* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const char * name;
    const char * data;
    // return: void

    self->unigine_object_ptr->setData(name, data);
    return ret;
};

// public : getData
static PyObject * unigine_Node_get_data(unigine_Node* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const char * name;
    // return: const char *

    unknown type 
    return ret;
};

// public : setPtr
static PyObject * unigine_Node_set_ptr(unigine_Node* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    void * ptr;
    // return: void

    self->unigine_object_ptr->setPtr(ptr);
    return ret;
};

// public : getPtr
static PyObject * unigine_Node_get_ptr(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: void *

    unknown type 
    return ret;
};

// public : getNumAncestors
static PyObject * unigine_Node_get_num_ancestors(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: int

    int retOriginal = self->unigine_object_ptr->getNumAncestors();
    ret = PyLong_FromLong(retOriginal);
    return ret;
};

// public : getAncestor
static PyObject * unigine_Node_get_ancestor(unigine_Node* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    int num;
    // return: Unigine::Ptr<Unigine::Node>

    Unigine::Ptr<Unigine::Node> retOriginal = self->unigine_object_ptr->getAncestor(num);
    ret = todo;
    return ret;
};

// public : findAncestor
static PyObject * unigine_Node_find_ancestor(unigine_Node* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const char * name;
    // return: int

    int retOriginal = self->unigine_object_ptr->findAncestor();
    ret = PyLong_FromLong(retOriginal);
    return ret;
};

// public : findAncestor
static PyObject * unigine_Node_find_ancestor(unigine_Node* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    int type;
    // return: int

    int retOriginal = self->unigine_object_ptr->findAncestor();
    ret = PyLong_FromLong(retOriginal);
    return ret;
};

// public : setParent
static PyObject * unigine_Node_set_parent(unigine_Node* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const Unigine::Ptr<Unigine::Node> & parent;
    // return: void

    self->unigine_object_ptr->setParent(parent);
    return ret;
};

// public : getParent
static PyObject * unigine_Node_get_parent(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: Unigine::Ptr<Unigine::Node>

    Unigine::Ptr<Unigine::Node> retOriginal = self->unigine_object_ptr->getParent();
    ret = todo;
    return ret;
};

// public : setWorldParent
static PyObject * unigine_Node_set_world_parent(unigine_Node* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const Unigine::Ptr<Unigine::Node> & n;
    // return: void

    self->unigine_object_ptr->setWorldParent(n);
    return ret;
};

// public : getRootNode
static PyObject * unigine_Node_get_root_node(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: Unigine::Ptr<Unigine::Node>

    Unigine::Ptr<Unigine::Node> retOriginal = self->unigine_object_ptr->getRootNode();
    ret = todo;
    return ret;
};

// public : addChild
static PyObject * unigine_Node_add_child(unigine_Node* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const Unigine::Ptr<Unigine::Node> & n;
    // return: void

    self->unigine_object_ptr->addChild(n);
    return ret;
};

// public : removeChild
static PyObject * unigine_Node_remove_child(unigine_Node* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const Unigine::Ptr<Unigine::Node> & n;
    // return: void

    self->unigine_object_ptr->removeChild(n);
    return ret;
};

// public : addWorldChild
static PyObject * unigine_Node_add_world_child(unigine_Node* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const Unigine::Ptr<Unigine::Node> & n;
    // return: void

    self->unigine_object_ptr->addWorldChild(n);
    return ret;
};

// public : removeWorldChild
static PyObject * unigine_Node_remove_world_child(unigine_Node* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const Unigine::Ptr<Unigine::Node> & n;
    // return: void

    self->unigine_object_ptr->removeWorldChild(n);
    return ret;
};

// public : isChild
static PyObject * unigine_Node_is_child(unigine_Node* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const Unigine::Ptr<Unigine::Node> & n;
    // return: bool

    bool retOriginal = self->unigine_object_ptr->isChild(n);
    ret = PyBool_FromLong(retOriginal);
    return ret;
};

// public : getNumChildren
static PyObject * unigine_Node_get_num_children(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: int

    int retOriginal = self->unigine_object_ptr->getNumChildren();
    ret = PyLong_FromLong(retOriginal);
    return ret;
};

// public : findChild
static PyObject * unigine_Node_find_child(unigine_Node* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const char * name;
    // return: int

    int retOriginal = self->unigine_object_ptr->findChild();
    ret = PyLong_FromLong(retOriginal);
    return ret;
};

// public : getChild
static PyObject * unigine_Node_get_child(unigine_Node* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    int num;
    // return: Unigine::Ptr<Unigine::Node>

    Unigine::Ptr<Unigine::Node> retOriginal = self->unigine_object_ptr->getChild(num);
    ret = todo;
    return ret;
};

// public : setChildIndex
static PyObject * unigine_Node_set_child_index(unigine_Node* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const Unigine::Ptr<Unigine::Node> & n;
    int index;
    // return: void

    self->unigine_object_ptr->setChildIndex(n, index);
    return ret;
};

// public : getChildIndex
static PyObject * unigine_Node_get_child_index(unigine_Node* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const Unigine::Ptr<Unigine::Node> & n;
    // return: int

    int retOriginal = self->unigine_object_ptr->getChildIndex();
    ret = PyLong_FromLong(retOriginal);
    return ret;
};

// public : findNode
static PyObject * unigine_Node_find_node(unigine_Node* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const char * name;
    int recursive;
    // return: Unigine::Ptr<Unigine::Node>

    Unigine::Ptr<Unigine::Node> retOriginal = self->unigine_object_ptr->findNode(name, recursive);
    ret = todo;
    return ret;
};

// public : getPossessor
static PyObject * unigine_Node_get_possessor(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: Unigine::Ptr<Unigine::Node>

    Unigine::Ptr<Unigine::Node> retOriginal = self->unigine_object_ptr->getPossessor();
    ret = todo;
    return ret;
};

// public : getHierarchy
static PyObject * unigine_Node_get_hierarchy(unigine_Node* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    Unigine::Vector<Unigine::Ptr<Unigine::Node>> & hierarchy;
    // return: void

    self->unigine_object_ptr->getHierarchy(hierarchy);
    return ret;
};

// public : getNumProperties
static PyObject * unigine_Node_get_num_properties(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: int

    int retOriginal = self->unigine_object_ptr->getNumProperties();
    ret = PyLong_FromLong(retOriginal);
    return ret;
};

// public : addProperty
static PyObject * unigine_Node_add_property(unigine_Node* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const char * name;
    // return: int

    int retOriginal = self->unigine_object_ptr->addProperty();
    ret = PyLong_FromLong(retOriginal);
    return ret;
};

// public : addProperty
static PyObject * unigine_Node_add_property(unigine_Node* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const Unigine::UGUID & guid;
    // return: int

    int retOriginal = self->unigine_object_ptr->addProperty();
    ret = PyLong_FromLong(retOriginal);
    return ret;
};

// public : addProperty
static PyObject * unigine_Node_add_property(unigine_Node* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const Unigine::Ptr<Unigine::Property> & property;
    // return: int

    int retOriginal = self->unigine_object_ptr->addProperty();
    ret = PyLong_FromLong(retOriginal);
    return ret;
};

// public : findProperty
static PyObject * unigine_Node_find_property(unigine_Node* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const char * name;
    // return: int

    int retOriginal = self->unigine_object_ptr->findProperty();
    ret = PyLong_FromLong(retOriginal);
    return ret;
};

// public : findProperty
static PyObject * unigine_Node_find_property(unigine_Node* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const Unigine::UGUID & guid;
    // return: int

    int retOriginal = self->unigine_object_ptr->findProperty();
    ret = PyLong_FromLong(retOriginal);
    return ret;
};

// public : findProperty
static PyObject * unigine_Node_find_property(unigine_Node* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const Unigine::Ptr<Unigine::Property> & property;
    // return: int

    int retOriginal = self->unigine_object_ptr->findProperty();
    ret = PyLong_FromLong(retOriginal);
    return ret;
};

// public : setProperty
static PyObject * unigine_Node_set_property(unigine_Node* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const char * name;
    // return: int

    int retOriginal = self->unigine_object_ptr->setProperty();
    ret = PyLong_FromLong(retOriginal);
    return ret;
};

// public : setProperty
static PyObject * unigine_Node_set_property(unigine_Node* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const Unigine::UGUID & guid;
    // return: int

    int retOriginal = self->unigine_object_ptr->setProperty();
    ret = PyLong_FromLong(retOriginal);
    return ret;
};

// public : setProperty
static PyObject * unigine_Node_set_property(unigine_Node* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const Unigine::Ptr<Unigine::Property> & property;
    // return: int

    int retOriginal = self->unigine_object_ptr->setProperty();
    ret = PyLong_FromLong(retOriginal);
    return ret;
};

// public : setProperty
static PyObject * unigine_Node_set_property(unigine_Node* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    int num;
    const char * name;
    // return: int

    int retOriginal = self->unigine_object_ptr->setProperty();
    ret = PyLong_FromLong(retOriginal);
    return ret;
};

// public : setProperty
static PyObject * unigine_Node_set_property(unigine_Node* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    int num;
    const Unigine::UGUID & guid;
    // return: int

    int retOriginal = self->unigine_object_ptr->setProperty();
    ret = PyLong_FromLong(retOriginal);
    return ret;
};

// public : setProperty
static PyObject * unigine_Node_set_property(unigine_Node* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    int num;
    const Unigine::Ptr<Unigine::Property> & property;
    // return: int

    int retOriginal = self->unigine_object_ptr->setProperty();
    ret = PyLong_FromLong(retOriginal);
    return ret;
};

// public : insertProperty
static PyObject * unigine_Node_insert_property(unigine_Node* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    int num;
    const char * name;
    // return: int

    int retOriginal = self->unigine_object_ptr->insertProperty();
    ret = PyLong_FromLong(retOriginal);
    return ret;
};

// public : insertProperty
static PyObject * unigine_Node_insert_property(unigine_Node* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    int num;
    const Unigine::UGUID & guid;
    // return: int

    int retOriginal = self->unigine_object_ptr->insertProperty();
    ret = PyLong_FromLong(retOriginal);
    return ret;
};

// public : insertProperty
static PyObject * unigine_Node_insert_property(unigine_Node* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    int num;
    const Unigine::Ptr<Unigine::Property> & property;
    // return: int

    int retOriginal = self->unigine_object_ptr->insertProperty();
    ret = PyLong_FromLong(retOriginal);
    return ret;
};

// public : swapProperty
static PyObject * unigine_Node_swap_property(unigine_Node* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    int from_num;
    int to_num;
    // return: void

    self->unigine_object_ptr->swapProperty(from_num, to_num);
    return ret;
};

// public : removeProperty
static PyObject * unigine_Node_remove_property(unigine_Node* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    int num;
    // return: void

    self->unigine_object_ptr->removeProperty(num);
    return ret;
};

// public : removeProperty
static PyObject * unigine_Node_remove_property(unigine_Node* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const char * name;
    // return: void

    self->unigine_object_ptr->removeProperty(name);
    return ret;
};

// public : removeProperty
static PyObject * unigine_Node_remove_property(unigine_Node* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const Unigine::UGUID & guid;
    // return: void

    self->unigine_object_ptr->removeProperty(guid);
    return ret;
};

// public : removeProperty
static PyObject * unigine_Node_remove_property(unigine_Node* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const Unigine::Ptr<Unigine::Property> & property;
    // return: void

    self->unigine_object_ptr->removeProperty(property);
    return ret;
};

// public : clearProperties
static PyObject * unigine_Node_clear_properties(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: void

    self->unigine_object_ptr->clearProperties();
    return ret;
};

// public : getProperty
static PyObject * unigine_Node_get_property(unigine_Node* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    int num;
    // return: Unigine::Ptr<Unigine::Property>

    Unigine::Ptr<Unigine::Property> retOriginal = self->unigine_object_ptr->getProperty(num);
    ret = todo;
    return ret;
};

// public : getPropertyName
static PyObject * unigine_Node_get_property_name(unigine_Node* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    int num;
    // return: const char *

    unknown type 
    return ret;
};

// public : setPropertyEnabled
static PyObject * unigine_Node_set_property_enabled(unigine_Node* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    int num;
    bool enable;
    // return: void

    self->unigine_object_ptr->setPropertyEnabled(num, enable);
    return ret;
};

// public : isPropertyEnabled
static PyObject * unigine_Node_is_property_enabled(unigine_Node* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    int num;
    // return: bool

    bool retOriginal = self->unigine_object_ptr->isPropertyEnabled(num);
    ret = PyBool_FromLong(retOriginal);
    return ret;
};

// public : getLostNodePropertyGUID
static PyObject * unigine_Node_get_lost_node_property_guid(unigine_Node* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    int num;
    // return: Unigine::UGUID

    Unigine::UGUID retOriginal = self->unigine_object_ptr->getLostNodePropertyGUID(num);
    ret = PyLong_FromLong(retOriginal);
    return ret;
};

// public : setTransform
static PyObject * unigine_Node_set_transform(unigine_Node* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const & transform;
    // return: void

    self->unigine_object_ptr->setTransform(transform);
    return ret;
};

// public : getTransform
static PyObject * unigine_Node_get_transform(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: 

    unknown type 
    return ret;
};

// public : setWorldTransform
static PyObject * unigine_Node_set_world_transform(unigine_Node* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const & transform;
    // return: void

    self->unigine_object_ptr->setWorldTransform(transform);
    return ret;
};

// public : getWorldTransform
static PyObject * unigine_Node_get_world_transform(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: 

    unknown type 
    return ret;
};

// public : setOldWorldTransform
static PyObject * unigine_Node_set_old_world_transform(unigine_Node* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const & transform;
    // return: void

    self->unigine_object_ptr->setOldWorldTransform(transform);
    return ret;
};

// public : getOldWorldTransform
static PyObject * unigine_Node_get_old_world_transform(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: 

    unknown type 
    return ret;
};

// public : getOldWorldPosition
static PyObject * unigine_Node_get_old_world_position(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: 

    unknown type 
    return ret;
};

// public : getIWorldTransform
static PyObject * unigine_Node_get_i_world_transform(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: 

    unknown type 
    return ret;
};

// public : setTransformWithoutChildren
static PyObject * unigine_Node_set_transform_without_children(unigine_Node* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const & transform;
    // return: void

    self->unigine_object_ptr->setTransformWithoutChildren(transform);
    return ret;
};

// public : setWorldTransformWithoutChildren
static PyObject * unigine_Node_set_world_transform_without_children(unigine_Node* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const & transform;
    // return: void

    self->unigine_object_ptr->setWorldTransformWithoutChildren(transform);
    return ret;
};

// public : getBoundBox
static PyObject * unigine_Node_get_bound_box(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: Unigine::Math::BoundBox

    Unigine::Math::BoundBox retOriginal = self->unigine_object_ptr->getBoundBox();
    ret = PyLong_FromLong(retOriginal);
    return ret;
};

// public : getBoundSphere
static PyObject * unigine_Node_get_bound_sphere(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: Unigine::Math::BoundSphere

    Unigine::Math::BoundSphere retOriginal = self->unigine_object_ptr->getBoundSphere();
    ret = PyLong_FromLong(retOriginal);
    return ret;
};

// public : getWorldBoundBox
static PyObject * unigine_Node_get_world_bound_box(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: Unigine::Math::BoundBox

    Unigine::Math::BoundBox retOriginal = self->unigine_object_ptr->getWorldBoundBox();
    ret = PyLong_FromLong(retOriginal);
    return ret;
};

// public : getWorldBoundSphere
static PyObject * unigine_Node_get_world_bound_sphere(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: Unigine::Math::BoundSphere

    Unigine::Math::BoundSphere retOriginal = self->unigine_object_ptr->getWorldBoundSphere();
    ret = PyLong_FromLong(retOriginal);
    return ret;
};

// public : getSpatialBoundBox
static PyObject * unigine_Node_get_spatial_bound_box(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: Unigine::Math::BoundBox

    Unigine::Math::BoundBox retOriginal = self->unigine_object_ptr->getSpatialBoundBox();
    ret = PyLong_FromLong(retOriginal);
    return ret;
};

// public : getSpatialBoundSphere
static PyObject * unigine_Node_get_spatial_bound_sphere(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: Unigine::Math::BoundSphere

    Unigine::Math::BoundSphere retOriginal = self->unigine_object_ptr->getSpatialBoundSphere();
    ret = PyLong_FromLong(retOriginal);
    return ret;
};

// public : getHierarchyBoundBox
static PyObject * unigine_Node_get_hierarchy_bound_box(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: Unigine::Math::BoundBox

    Unigine::Math::BoundBox retOriginal = self->unigine_object_ptr->getHierarchyBoundBox();
    ret = PyLong_FromLong(retOriginal);
    return ret;
};

// public : getHierarchyBoundSphere
static PyObject * unigine_Node_get_hierarchy_bound_sphere(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: Unigine::Math::BoundSphere

    Unigine::Math::BoundSphere retOriginal = self->unigine_object_ptr->getHierarchyBoundSphere();
    ret = PyLong_FromLong(retOriginal);
    return ret;
};

// public : getHierarchyWorldBoundBox
static PyObject * unigine_Node_get_hierarchy_world_bound_box(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: Unigine::Math::BoundBox

    Unigine::Math::BoundBox retOriginal = self->unigine_object_ptr->getHierarchyWorldBoundBox();
    ret = PyLong_FromLong(retOriginal);
    return ret;
};

// public : getHierarchyWorldBoundSphere
static PyObject * unigine_Node_get_hierarchy_world_bound_sphere(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: Unigine::Math::BoundSphere

    Unigine::Math::BoundSphere retOriginal = self->unigine_object_ptr->getHierarchyWorldBoundSphere();
    ret = PyLong_FromLong(retOriginal);
    return ret;
};

// public : getHierarchySpatialBoundBox
static PyObject * unigine_Node_get_hierarchy_spatial_bound_box(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: Unigine::Math::BoundBox

    Unigine::Math::BoundBox retOriginal = self->unigine_object_ptr->getHierarchySpatialBoundBox();
    ret = PyLong_FromLong(retOriginal);
    return ret;
};

// public : getHierarchySpatialBoundSphere
static PyObject * unigine_Node_get_hierarchy_spatial_bound_sphere(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: Unigine::Math::BoundSphere

    Unigine::Math::BoundSphere retOriginal = self->unigine_object_ptr->getHierarchySpatialBoundSphere();
    ret = PyLong_FromLong(retOriginal);
    return ret;
};

// public : loadWorld
static PyObject * unigine_Node_load_world(unigine_Node* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const Unigine::Ptr<Unigine::Xml> & xml;
    // return: bool

    bool retOriginal = self->unigine_object_ptr->loadWorld(xml);
    ret = PyBool_FromLong(retOriginal);
    return ret;
};

// public : saveWorld
static PyObject * unigine_Node_save_world(unigine_Node* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const Unigine::Ptr<Unigine::Xml> & xml;
    // return: bool

    bool retOriginal = self->unigine_object_ptr->saveWorld(xml);
    ret = PyBool_FromLong(retOriginal);
    return ret;
};

// public : saveState
static PyObject * unigine_Node_save_state(unigine_Node* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const Unigine::Ptr<Unigine::Stream> & stream;
    // return: bool

    bool retOriginal = self->unigine_object_ptr->saveState(stream);
    ret = PyBool_FromLong(retOriginal);
    return ret;
};

// public : restoreState
static PyObject * unigine_Node_restore_state(unigine_Node* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const Unigine::Ptr<Unigine::Stream> & stream;
    // return: bool

    bool retOriginal = self->unigine_object_ptr->restoreState(stream);
    ret = PyBool_FromLong(retOriginal);
    return ret;
};

// public : getObjectBody
static PyObject * unigine_Node_get_object_body(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: Unigine::Ptr<Unigine::Body>

    Unigine::Ptr<Unigine::Body> retOriginal = self->unigine_object_ptr->getObjectBody();
    ret = todo;
    return ret;
};

// public : getObjectBodyRigid
static PyObject * unigine_Node_get_object_body_rigid(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: Unigine::Ptr<Unigine::BodyRigid>

    Unigine::Ptr<Unigine::BodyRigid> retOriginal = self->unigine_object_ptr->getObjectBodyRigid();
    ret = todo;
    return ret;
};

// public : getBodyLinearVelocity
static PyObject * unigine_Node_get_body_linear_velocity(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: Unigine::Math::vec3

    Unigine::Math::vec3 retOriginal = self->unigine_object_ptr->getBodyLinearVelocity();
    ret = PyLong_FromLong(retOriginal);
    return ret;
};

// public : getBodyAngularVelocity
static PyObject * unigine_Node_get_body_angular_velocity(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: Unigine::Math::vec3

    Unigine::Math::vec3 retOriginal = self->unigine_object_ptr->getBodyAngularVelocity();
    ret = PyLong_FromLong(retOriginal);
    return ret;
};

// public : getBodyWorldVelocity
static PyObject * unigine_Node_get_body_world_velocity(unigine_Node* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const & point;
    // return: Unigine::Math::vec3

    Unigine::Math::vec3 retOriginal = self->unigine_object_ptr->getBodyWorldVelocity(point);
    ret = PyLong_FromLong(retOriginal);
    return ret;
};

// public : getNumWorldTriggers
static PyObject * unigine_Node_get_num_world_triggers(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: int

    int retOriginal = self->unigine_object_ptr->getNumWorldTriggers();
    ret = PyLong_FromLong(retOriginal);
    return ret;
};

// public : getWorldTrigger
static PyObject * unigine_Node_get_world_trigger(unigine_Node* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    int num;
    // return: Unigine::Ptr<Unigine::WorldTrigger>

    Unigine::Ptr<Unigine::WorldTrigger> retOriginal = self->unigine_object_ptr->getWorldTrigger(num);
    ret = todo;
    return ret;
};

// public : setPosition
static PyObject * unigine_Node_set_position(unigine_Node* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const & pos;
    // return: void

    self->unigine_object_ptr->setPosition(pos);
    return ret;
};

// public : getPosition
static PyObject * unigine_Node_get_position(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: 

    unknown type 
    return ret;
};

// public : setRotation
static PyObject * unigine_Node_set_rotation(unigine_Node* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const Unigine::Math::quat & rot;
    bool identity;
    // return: void

    self->unigine_object_ptr->setRotation(rot, identity);
    return ret;
};

// public : getRotation
static PyObject * unigine_Node_get_rotation(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: Unigine::Math::quat

    Unigine::Math::quat retOriginal = self->unigine_object_ptr->getRotation();
    ret = PyLong_FromLong(retOriginal);
    return ret;
};

// public : setDirection
static PyObject * unigine_Node_set_direction(unigine_Node* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const Unigine::Math::vec3 & dir;
    const Unigine::Math::vec3 & up;
    AXIS axis;
    // return: void

    self->unigine_object_ptr->setDirection(dir, up, axis);
    return ret;
};

// public : getDirection
static PyObject * unigine_Node_get_direction(unigine_Node* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    AXIS axis;
    // return: Unigine::Math::vec3

    Unigine::Math::vec3 retOriginal = self->unigine_object_ptr->getDirection(axis);
    ret = PyLong_FromLong(retOriginal);
    return ret;
};

// public : setScale
static PyObject * unigine_Node_set_scale(unigine_Node* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const Unigine::Math::vec3 & s;
    // return: void

    self->unigine_object_ptr->setScale(s);
    return ret;
};

// public : getScale
static PyObject * unigine_Node_get_scale(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: Unigine::Math::vec3

    Unigine::Math::vec3 retOriginal = self->unigine_object_ptr->getScale();
    ret = PyLong_FromLong(retOriginal);
    return ret;
};

// public : setWorldPosition
static PyObject * unigine_Node_set_world_position(unigine_Node* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const & pos;
    // return: void

    self->unigine_object_ptr->setWorldPosition(pos);
    return ret;
};

// public : getWorldPosition
static PyObject * unigine_Node_get_world_position(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: 

    unknown type 
    return ret;
};

// public : setWorldRotation
static PyObject * unigine_Node_set_world_rotation(unigine_Node* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const Unigine::Math::quat & rot;
    bool identity;
    // return: void

    self->unigine_object_ptr->setWorldRotation(rot, identity);
    return ret;
};

// public : getWorldRotation
static PyObject * unigine_Node_get_world_rotation(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: Unigine::Math::quat

    Unigine::Math::quat retOriginal = self->unigine_object_ptr->getWorldRotation();
    ret = PyLong_FromLong(retOriginal);
    return ret;
};

// public : setWorldDirection
static PyObject * unigine_Node_set_world_direction(unigine_Node* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const Unigine::Math::vec3 & dir;
    const Unigine::Math::vec3 & up;
    AXIS axis;
    // return: void

    self->unigine_object_ptr->setWorldDirection(dir, up, axis);
    return ret;
};

// public : getWorldDirection
static PyObject * unigine_Node_get_world_direction(unigine_Node* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    AXIS axis;
    // return: Unigine::Math::vec3

    Unigine::Math::vec3 retOriginal = self->unigine_object_ptr->getWorldDirection(axis);
    ret = PyLong_FromLong(retOriginal);
    return ret;
};

// public : setWorldScale
static PyObject * unigine_Node_set_world_scale(unigine_Node* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const Unigine::Math::vec3 & s;
    // return: void

    self->unigine_object_ptr->setWorldScale(s);
    return ret;
};

// public : getWorldScale
static PyObject * unigine_Node_get_world_scale(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: Unigine::Math::vec3

    Unigine::Math::vec3 retOriginal = self->unigine_object_ptr->getWorldScale();
    ret = PyLong_FromLong(retOriginal);
    return ret;
};

// public : translate
static PyObject * unigine_Node_translate(unigine_Node* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const & t;
    // return: void

    self->unigine_object_ptr->translate(t);
    return ret;
};

// public : translate
static PyObject * unigine_Node_translate(unigine_Node* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
     x;
     y;
     z;
    // return: void

    self->unigine_object_ptr->translate(x, y, z);
    return ret;
};

// public : rotate
static PyObject * unigine_Node_rotate(unigine_Node* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const Unigine::Math::quat & r;
    // return: void

    self->unigine_object_ptr->rotate(r);
    return ret;
};

// public : rotate
static PyObject * unigine_Node_rotate(unigine_Node* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const Unigine::Math::vec3 & angles;
    // return: void

    self->unigine_object_ptr->rotate(angles);
    return ret;
};

// public : rotate
static PyObject * unigine_Node_rotate(unigine_Node* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    float angle_x;
    float angle_y;
    float angle_z;
    // return: void

    self->unigine_object_ptr->rotate(angle_x, angle_y, angle_z);
    return ret;
};

// public : worldTranslate
static PyObject * unigine_Node_world_translate(unigine_Node* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const & t;
    // return: void

    self->unigine_object_ptr->worldTranslate(t);
    return ret;
};

// public : worldTranslate
static PyObject * unigine_Node_world_translate(unigine_Node* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
     x;
     y;
     z;
    // return: void

    self->unigine_object_ptr->worldTranslate(x, y, z);
    return ret;
};

// public : worldRotate
static PyObject * unigine_Node_world_rotate(unigine_Node* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const Unigine::Math::quat & r;
    // return: void

    self->unigine_object_ptr->worldRotate(r);
    return ret;
};

// public : worldRotate
static PyObject * unigine_Node_world_rotate(unigine_Node* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const Unigine::Math::vec3 & angles;
    // return: void

    self->unigine_object_ptr->worldRotate(angles);
    return ret;
};

// public : worldRotate
static PyObject * unigine_Node_world_rotate(unigine_Node* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    float angle_x;
    float angle_y;
    float angle_z;
    // return: void

    self->unigine_object_ptr->worldRotate(angle_x, angle_y, angle_z);
    return ret;
};

// public : worldLookAt
static PyObject * unigine_Node_world_look_at(unigine_Node* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const & target;
    // return: void

    self->unigine_object_ptr->worldLookAt(target);
    return ret;
};

// public : worldLookAt
static PyObject * unigine_Node_world_look_at(unigine_Node* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const & target;
    const Unigine::Math::vec3 & up;
    // return: void

    self->unigine_object_ptr->worldLookAt(target, up);
    return ret;
};

// public : toLocal
static PyObject * unigine_Node_to_local(unigine_Node* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const & p;
    // return: Unigine::Math::vec3

    Unigine::Math::vec3 retOriginal = self->unigine_object_ptr->toLocal(p);
    ret = PyLong_FromLong(retOriginal);
    return ret;
};

// public : renderVisualizer
static PyObject * unigine_Node_render_visualizer(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: void

    self->unigine_object_ptr->renderVisualizer();
    return ret;
};

// public : setVariable
static PyObject * unigine_Node_set_variable(unigine_Node* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const Unigine::Variable & variable;
    // return: void

    self->unigine_object_ptr->setVariable(variable);
    return ret;
};

// public : getVariable
static PyObject * unigine_Node_get_variable(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: Unigine::Variable

    Unigine::Variable retOriginal = self->unigine_object_ptr->getVariable();
    ret = PyLong_FromLong(retOriginal);
    return ret;
};

// public : hasVariable
static PyObject * unigine_Node_has_variable(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: bool

    bool retOriginal = self->unigine_object_ptr->hasVariable();
    ret = PyBool_FromLong(retOriginal);
    return ret;
};

// public : setVariable
static PyObject * unigine_Node_set_variable(unigine_Node* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const char * name;
    const Unigine::Variable & variable;
    // return: void

    self->unigine_object_ptr->setVariable(name, variable);
    return ret;
};

// public : getVariable
static PyObject * unigine_Node_get_variable(unigine_Node* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const char * name;
    // return: Unigine::Variable

    Unigine::Variable retOriginal = self->unigine_object_ptr->getVariable(name);
    ret = PyLong_FromLong(retOriginal);
    return ret;
};

// public : hasVariable
static PyObject * unigine_Node_has_variable(unigine_Node* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const char * name;
    // return: bool

    bool retOriginal = self->unigine_object_ptr->hasVariable(name);
    ret = PyBool_FromLong(retOriginal);
    return ret;
};

// public : removeVariable
static PyObject * unigine_Node_remove_variable(unigine_Node* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const char * name;
    // return: void

    self->unigine_object_ptr->removeVariable(name);
    return ret;
};

// public : getGeodeticPivot
static PyObject * unigine_Node_get_geodetic_pivot(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: Unigine::Ptr<Unigine::GeodeticPivot>

    Unigine::Ptr<Unigine::GeodeticPivot> retOriginal = self->unigine_object_ptr->getGeodeticPivot();
    ret = todo;
    return ret;
};

// public : updateEnabled
static PyObject * unigine_Node_update_enabled(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: void

    self->unigine_object_ptr->updateEnabled();
    return ret;
};


static PyMethodDef unigine_Node_methods[] = {
    {
        "to_world", (PyCFunction)unigine_Node_to_world, METH_O,
        "public : toWorld"
    },
    {
        "get_clone_node", (PyCFunction)unigine_Node_get_clone_node, METH_STATIC|METH_O,
        "public (static): getCloneNode"
    },
    {
        "get_clone_property", (PyCFunction)unigine_Node_get_clone_property, METH_STATIC|METH_O,
        "public (static): getCloneProperty"
    },
    {
        "get_node", (PyCFunction)unigine_Node_get_node, METH_STATIC|METH_O,
        "public (static): getNode"
    },
    {
        "is_node", (PyCFunction)unigine_Node_is_node, METH_STATIC|METH_O,
        "public (static): isNode"
    },
    {
        "is_node", (PyCFunction)unigine_Node_is_node, METH_STATIC|METH_O,
        "public (static): isNode"
    },
    {
        "get_type_id", (PyCFunction)unigine_Node_get_type_id, METH_STATIC|METH_O,
        "public (static): getTypeID"
    },
    {
        "get_type_name", (PyCFunction)unigine_Node_get_type_name, METH_STATIC|METH_O,
        "public (static): getTypeName"
    },
    {
        "clone", (PyCFunction)unigine_Node_clone, METH_NOARGS,
        "public : clone"
    },
    {
        "swap", (PyCFunction)unigine_Node_swap, METH_O,
        "public : swap"
    },
    {
        "set_id", (PyCFunction)unigine_Node_set_id, METH_O,
        "public : setID"
    },
    {
        "get_id", (PyCFunction)unigine_Node_get_id, METH_NOARGS,
        "public : getID"
    },
    {
        "get_type", (PyCFunction)unigine_Node_get_type, METH_NOARGS,
        "public : getType"
    },
    {
        "get_type_name", (PyCFunction)unigine_Node_get_type_name, METH_NOARGS,
        "public : getTypeName"
    },
    {
        "is_world", (PyCFunction)unigine_Node_is_world, METH_NOARGS,
        "public : isWorld"
    },
    {
        "is_geodetic", (PyCFunction)unigine_Node_is_geodetic, METH_NOARGS,
        "public : isGeodetic"
    },
    {
        "is_light", (PyCFunction)unigine_Node_is_light, METH_NOARGS,
        "public : isLight"
    },
    {
        "is_decal", (PyCFunction)unigine_Node_is_decal, METH_NOARGS,
        "public : isDecal"
    },
    {
        "is_landscape_layer", (PyCFunction)unigine_Node_is_landscape_layer, METH_NOARGS,
        "public : isLandscapeLayer"
    },
    {
        "is_object", (PyCFunction)unigine_Node_is_object, METH_NOARGS,
        "public : isObject"
    },
    {
        "is_player", (PyCFunction)unigine_Node_is_player, METH_NOARGS,
        "public : isPlayer"
    },
    {
        "is_physical", (PyCFunction)unigine_Node_is_physical, METH_NOARGS,
        "public : isPhysical"
    },
    {
        "is_navigation", (PyCFunction)unigine_Node_is_navigation, METH_NOARGS,
        "public : isNavigation"
    },
    {
        "is_obstacle", (PyCFunction)unigine_Node_is_obstacle, METH_NOARGS,
        "public : isObstacle"
    },
    {
        "is_sound", (PyCFunction)unigine_Node_is_sound, METH_NOARGS,
        "public : isSound"
    },
    {
        "is_field", (PyCFunction)unigine_Node_is_field, METH_NOARGS,
        "public : isField"
    },
    {
        "is_extern", (PyCFunction)unigine_Node_is_extern, METH_NOARGS,
        "public : isExtern"
    },
    {
        "is_enabled_self", (PyCFunction)unigine_Node_is_enabled_self, METH_NOARGS,
        "public : isEnabledSelf"
    },
    {
        "get_lifetime_self", (PyCFunction)unigine_Node_get_lifetime_self, METH_NOARGS,
        "public : getLifetimeSelf"
    },
    {
        "set_enabled", (PyCFunction)unigine_Node_set_enabled, METH_O,
        "public : setEnabled"
    },
    {
        "is_enabled", (PyCFunction)unigine_Node_is_enabled, METH_NOARGS,
        "public : isEnabled"
    },
    {
        "set_handled", (PyCFunction)unigine_Node_set_handled, METH_O,
        "public : setHandled"
    },
    {
        "is_handled", (PyCFunction)unigine_Node_is_handled, METH_NOARGS,
        "public : isHandled"
    },
    {
        "set_immovable", (PyCFunction)unigine_Node_set_immovable, METH_O,
        "public : setImmovable"
    },
    {
        "is_immovable", (PyCFunction)unigine_Node_is_immovable, METH_NOARGS,
        "public : isImmovable"
    },
    {
        "set_trigger_interaction_enabled", (PyCFunction)unigine_Node_set_trigger_interaction_enabled, METH_O,
        "public : setTriggerInteractionEnabled"
    },
    {
        "is_trigger_interaction_enabled", (PyCFunction)unigine_Node_is_trigger_interaction_enabled, METH_NOARGS,
        "public : isTriggerInteractionEnabled"
    },
    {
        "set_grass_interaction_enabled", (PyCFunction)unigine_Node_set_grass_interaction_enabled, METH_O,
        "public : setGrassInteractionEnabled"
    },
    {
        "is_grass_interaction_enabled", (PyCFunction)unigine_Node_is_grass_interaction_enabled, METH_NOARGS,
        "public : isGrassInteractionEnabled"
    },
    {
        "set_clutter_interaction_enabled", (PyCFunction)unigine_Node_set_clutter_interaction_enabled, METH_O,
        "public : setClutterInteractionEnabled"
    },
    {
        "is_clutter_interaction_enabled", (PyCFunction)unigine_Node_is_clutter_interaction_enabled, METH_NOARGS,
        "public : isClutterInteractionEnabled"
    },
    {
        "set_query", (PyCFunction)unigine_Node_set_query, METH_O,
        "public : setQuery"
    },
    {
        "is_query", (PyCFunction)unigine_Node_is_query, METH_NOARGS,
        "public : isQuery"
    },
    {
        "has_query_force", (PyCFunction)unigine_Node_has_query_force, METH_NOARGS,
        "public : hasQueryForce"
    },
    {
        "set_show_in_editor_enabled", (PyCFunction)unigine_Node_set_show_in_editor_enabled, METH_O,
        "public : setShowInEditorEnabled"
    },
    {
        "is_show_in_editor_enabled", (PyCFunction)unigine_Node_is_show_in_editor_enabled, METH_NOARGS,
        "public : isShowInEditorEnabled"
    },
    {
        "set_save_to_world_enabled", (PyCFunction)unigine_Node_set_save_to_world_enabled, METH_O,
        "public : setSaveToWorldEnabled"
    },
    {
        "is_save_to_world_enabled", (PyCFunction)unigine_Node_is_save_to_world_enabled, METH_NOARGS,
        "public : isSaveToWorldEnabled"
    },
    {
        "set_lifetime", (PyCFunction)unigine_Node_set_lifetime, METH_O,
        "public : setLifetime"
    },
    {
        "get_lifetime", (PyCFunction)unigine_Node_get_lifetime, METH_NOARGS,
        "public : getLifetime"
    },
    {
        "is_show_in_editor_enabled_self", (PyCFunction)unigine_Node_is_show_in_editor_enabled_self, METH_NOARGS,
        "public : isShowInEditorEnabledSelf"
    },
    {
        "is_save_to_world_enabled_self", (PyCFunction)unigine_Node_is_save_to_world_enabled_self, METH_NOARGS,
        "public : isSaveToWorldEnabledSelf"
    },
    {
        "set_show_in_editor_enabled_recursive", (PyCFunction)unigine_Node_set_show_in_editor_enabled_recursive, METH_O,
        "public : setShowInEditorEnabledRecursive"
    },
    {
        "set_save_to_world_enabled_recursive", (PyCFunction)unigine_Node_set_save_to_world_enabled_recursive, METH_O,
        "public : setSaveToWorldEnabledRecursive"
    },
    {
        "set_name", (PyCFunction)unigine_Node_set_name, METH_O,
        "public : setName"
    },
    {
        "get_name", (PyCFunction)unigine_Node_get_name, METH_NOARGS,
        "public : getName"
    },
    {
        "set_data", (PyCFunction)unigine_Node_set_data, METH_VARARGS|METH_KEYWORDS,
        "public : setData"
    },
    {
        "get_data", (PyCFunction)unigine_Node_get_data, METH_O,
        "public : getData"
    },
    {
        "set_ptr", (PyCFunction)unigine_Node_set_ptr, METH_O,
        "public : setPtr"
    },
    {
        "get_ptr", (PyCFunction)unigine_Node_get_ptr, METH_NOARGS,
        "public : getPtr"
    },
    {
        "get_num_ancestors", (PyCFunction)unigine_Node_get_num_ancestors, METH_NOARGS,
        "public : getNumAncestors"
    },
    {
        "get_ancestor", (PyCFunction)unigine_Node_get_ancestor, METH_O,
        "public : getAncestor"
    },
    {
        "find_ancestor", (PyCFunction)unigine_Node_find_ancestor, METH_O,
        "public : findAncestor"
    },
    {
        "find_ancestor", (PyCFunction)unigine_Node_find_ancestor, METH_O,
        "public : findAncestor"
    },
    {
        "set_parent", (PyCFunction)unigine_Node_set_parent, METH_O,
        "public : setParent"
    },
    {
        "get_parent", (PyCFunction)unigine_Node_get_parent, METH_NOARGS,
        "public : getParent"
    },
    {
        "set_world_parent", (PyCFunction)unigine_Node_set_world_parent, METH_O,
        "public : setWorldParent"
    },
    {
        "get_root_node", (PyCFunction)unigine_Node_get_root_node, METH_NOARGS,
        "public : getRootNode"
    },
    {
        "add_child", (PyCFunction)unigine_Node_add_child, METH_O,
        "public : addChild"
    },
    {
        "remove_child", (PyCFunction)unigine_Node_remove_child, METH_O,
        "public : removeChild"
    },
    {
        "add_world_child", (PyCFunction)unigine_Node_add_world_child, METH_O,
        "public : addWorldChild"
    },
    {
        "remove_world_child", (PyCFunction)unigine_Node_remove_world_child, METH_O,
        "public : removeWorldChild"
    },
    {
        "is_child", (PyCFunction)unigine_Node_is_child, METH_O,
        "public : isChild"
    },
    {
        "get_num_children", (PyCFunction)unigine_Node_get_num_children, METH_NOARGS,
        "public : getNumChildren"
    },
    {
        "find_child", (PyCFunction)unigine_Node_find_child, METH_O,
        "public : findChild"
    },
    {
        "get_child", (PyCFunction)unigine_Node_get_child, METH_O,
        "public : getChild"
    },
    {
        "set_child_index", (PyCFunction)unigine_Node_set_child_index, METH_VARARGS|METH_KEYWORDS,
        "public : setChildIndex"
    },
    {
        "get_child_index", (PyCFunction)unigine_Node_get_child_index, METH_O,
        "public : getChildIndex"
    },
    {
        "find_node", (PyCFunction)unigine_Node_find_node, METH_VARARGS|METH_KEYWORDS,
        "public : findNode"
    },
    {
        "get_possessor", (PyCFunction)unigine_Node_get_possessor, METH_NOARGS,
        "public : getPossessor"
    },
    {
        "get_hierarchy", (PyCFunction)unigine_Node_get_hierarchy, METH_O,
        "public : getHierarchy"
    },
    {
        "get_num_properties", (PyCFunction)unigine_Node_get_num_properties, METH_NOARGS,
        "public : getNumProperties"
    },
    {
        "add_property", (PyCFunction)unigine_Node_add_property, METH_O,
        "public : addProperty"
    },
    {
        "add_property", (PyCFunction)unigine_Node_add_property, METH_O,
        "public : addProperty"
    },
    {
        "add_property", (PyCFunction)unigine_Node_add_property, METH_O,
        "public : addProperty"
    },
    {
        "find_property", (PyCFunction)unigine_Node_find_property, METH_O,
        "public : findProperty"
    },
    {
        "find_property", (PyCFunction)unigine_Node_find_property, METH_O,
        "public : findProperty"
    },
    {
        "find_property", (PyCFunction)unigine_Node_find_property, METH_O,
        "public : findProperty"
    },
    {
        "set_property", (PyCFunction)unigine_Node_set_property, METH_O,
        "public : setProperty"
    },
    {
        "set_property", (PyCFunction)unigine_Node_set_property, METH_O,
        "public : setProperty"
    },
    {
        "set_property", (PyCFunction)unigine_Node_set_property, METH_O,
        "public : setProperty"
    },
    {
        "set_property", (PyCFunction)unigine_Node_set_property, METH_VARARGS|METH_KEYWORDS,
        "public : setProperty"
    },
    {
        "set_property", (PyCFunction)unigine_Node_set_property, METH_VARARGS|METH_KEYWORDS,
        "public : setProperty"
    },
    {
        "set_property", (PyCFunction)unigine_Node_set_property, METH_VARARGS|METH_KEYWORDS,
        "public : setProperty"
    },
    {
        "insert_property", (PyCFunction)unigine_Node_insert_property, METH_VARARGS|METH_KEYWORDS,
        "public : insertProperty"
    },
    {
        "insert_property", (PyCFunction)unigine_Node_insert_property, METH_VARARGS|METH_KEYWORDS,
        "public : insertProperty"
    },
    {
        "insert_property", (PyCFunction)unigine_Node_insert_property, METH_VARARGS|METH_KEYWORDS,
        "public : insertProperty"
    },
    {
        "swap_property", (PyCFunction)unigine_Node_swap_property, METH_VARARGS|METH_KEYWORDS,
        "public : swapProperty"
    },
    {
        "remove_property", (PyCFunction)unigine_Node_remove_property, METH_O,
        "public : removeProperty"
    },
    {
        "remove_property", (PyCFunction)unigine_Node_remove_property, METH_O,
        "public : removeProperty"
    },
    {
        "remove_property", (PyCFunction)unigine_Node_remove_property, METH_O,
        "public : removeProperty"
    },
    {
        "remove_property", (PyCFunction)unigine_Node_remove_property, METH_O,
        "public : removeProperty"
    },
    {
        "clear_properties", (PyCFunction)unigine_Node_clear_properties, METH_NOARGS,
        "public : clearProperties"
    },
    {
        "get_property", (PyCFunction)unigine_Node_get_property, METH_O,
        "public : getProperty"
    },
    {
        "get_property_name", (PyCFunction)unigine_Node_get_property_name, METH_O,
        "public : getPropertyName"
    },
    {
        "set_property_enabled", (PyCFunction)unigine_Node_set_property_enabled, METH_VARARGS|METH_KEYWORDS,
        "public : setPropertyEnabled"
    },
    {
        "is_property_enabled", (PyCFunction)unigine_Node_is_property_enabled, METH_O,
        "public : isPropertyEnabled"
    },
    {
        "get_lost_node_property_guid", (PyCFunction)unigine_Node_get_lost_node_property_guid, METH_O,
        "public : getLostNodePropertyGUID"
    },
    {
        "set_transform", (PyCFunction)unigine_Node_set_transform, METH_O,
        "public : setTransform"
    },
    {
        "get_transform", (PyCFunction)unigine_Node_get_transform, METH_NOARGS,
        "public : getTransform"
    },
    {
        "set_world_transform", (PyCFunction)unigine_Node_set_world_transform, METH_O,
        "public : setWorldTransform"
    },
    {
        "get_world_transform", (PyCFunction)unigine_Node_get_world_transform, METH_NOARGS,
        "public : getWorldTransform"
    },
    {
        "set_old_world_transform", (PyCFunction)unigine_Node_set_old_world_transform, METH_O,
        "public : setOldWorldTransform"
    },
    {
        "get_old_world_transform", (PyCFunction)unigine_Node_get_old_world_transform, METH_NOARGS,
        "public : getOldWorldTransform"
    },
    {
        "get_old_world_position", (PyCFunction)unigine_Node_get_old_world_position, METH_NOARGS,
        "public : getOldWorldPosition"
    },
    {
        "get_i_world_transform", (PyCFunction)unigine_Node_get_i_world_transform, METH_NOARGS,
        "public : getIWorldTransform"
    },
    {
        "set_transform_without_children", (PyCFunction)unigine_Node_set_transform_without_children, METH_O,
        "public : setTransformWithoutChildren"
    },
    {
        "set_world_transform_without_children", (PyCFunction)unigine_Node_set_world_transform_without_children, METH_O,
        "public : setWorldTransformWithoutChildren"
    },
    {
        "get_bound_box", (PyCFunction)unigine_Node_get_bound_box, METH_NOARGS,
        "public : getBoundBox"
    },
    {
        "get_bound_sphere", (PyCFunction)unigine_Node_get_bound_sphere, METH_NOARGS,
        "public : getBoundSphere"
    },
    {
        "get_world_bound_box", (PyCFunction)unigine_Node_get_world_bound_box, METH_NOARGS,
        "public : getWorldBoundBox"
    },
    {
        "get_world_bound_sphere", (PyCFunction)unigine_Node_get_world_bound_sphere, METH_NOARGS,
        "public : getWorldBoundSphere"
    },
    {
        "get_spatial_bound_box", (PyCFunction)unigine_Node_get_spatial_bound_box, METH_NOARGS,
        "public : getSpatialBoundBox"
    },
    {
        "get_spatial_bound_sphere", (PyCFunction)unigine_Node_get_spatial_bound_sphere, METH_NOARGS,
        "public : getSpatialBoundSphere"
    },
    {
        "get_hierarchy_bound_box", (PyCFunction)unigine_Node_get_hierarchy_bound_box, METH_NOARGS,
        "public : getHierarchyBoundBox"
    },
    {
        "get_hierarchy_bound_sphere", (PyCFunction)unigine_Node_get_hierarchy_bound_sphere, METH_NOARGS,
        "public : getHierarchyBoundSphere"
    },
    {
        "get_hierarchy_world_bound_box", (PyCFunction)unigine_Node_get_hierarchy_world_bound_box, METH_NOARGS,
        "public : getHierarchyWorldBoundBox"
    },
    {
        "get_hierarchy_world_bound_sphere", (PyCFunction)unigine_Node_get_hierarchy_world_bound_sphere, METH_NOARGS,
        "public : getHierarchyWorldBoundSphere"
    },
    {
        "get_hierarchy_spatial_bound_box", (PyCFunction)unigine_Node_get_hierarchy_spatial_bound_box, METH_NOARGS,
        "public : getHierarchySpatialBoundBox"
    },
    {
        "get_hierarchy_spatial_bound_sphere", (PyCFunction)unigine_Node_get_hierarchy_spatial_bound_sphere, METH_NOARGS,
        "public : getHierarchySpatialBoundSphere"
    },
    {
        "load_world", (PyCFunction)unigine_Node_load_world, METH_O,
        "public : loadWorld"
    },
    {
        "save_world", (PyCFunction)unigine_Node_save_world, METH_O,
        "public : saveWorld"
    },
    {
        "save_state", (PyCFunction)unigine_Node_save_state, METH_O,
        "public : saveState"
    },
    {
        "restore_state", (PyCFunction)unigine_Node_restore_state, METH_O,
        "public : restoreState"
    },
    {
        "get_object_body", (PyCFunction)unigine_Node_get_object_body, METH_NOARGS,
        "public : getObjectBody"
    },
    {
        "get_object_body_rigid", (PyCFunction)unigine_Node_get_object_body_rigid, METH_NOARGS,
        "public : getObjectBodyRigid"
    },
    {
        "get_body_linear_velocity", (PyCFunction)unigine_Node_get_body_linear_velocity, METH_NOARGS,
        "public : getBodyLinearVelocity"
    },
    {
        "get_body_angular_velocity", (PyCFunction)unigine_Node_get_body_angular_velocity, METH_NOARGS,
        "public : getBodyAngularVelocity"
    },
    {
        "get_body_world_velocity", (PyCFunction)unigine_Node_get_body_world_velocity, METH_O,
        "public : getBodyWorldVelocity"
    },
    {
        "get_num_world_triggers", (PyCFunction)unigine_Node_get_num_world_triggers, METH_NOARGS,
        "public : getNumWorldTriggers"
    },
    {
        "get_world_trigger", (PyCFunction)unigine_Node_get_world_trigger, METH_O,
        "public : getWorldTrigger"
    },
    {
        "set_position", (PyCFunction)unigine_Node_set_position, METH_O,
        "public : setPosition"
    },
    {
        "get_position", (PyCFunction)unigine_Node_get_position, METH_NOARGS,
        "public : getPosition"
    },
    {
        "set_rotation", (PyCFunction)unigine_Node_set_rotation, METH_VARARGS|METH_KEYWORDS,
        "public : setRotation"
    },
    {
        "get_rotation", (PyCFunction)unigine_Node_get_rotation, METH_NOARGS,
        "public : getRotation"
    },
    {
        "set_direction", (PyCFunction)unigine_Node_set_direction, METH_VARARGS|METH_KEYWORDS,
        "public : setDirection"
    },
    {
        "get_direction", (PyCFunction)unigine_Node_get_direction, METH_O,
        "public : getDirection"
    },
    {
        "set_scale", (PyCFunction)unigine_Node_set_scale, METH_O,
        "public : setScale"
    },
    {
        "get_scale", (PyCFunction)unigine_Node_get_scale, METH_NOARGS,
        "public : getScale"
    },
    {
        "set_world_position", (PyCFunction)unigine_Node_set_world_position, METH_O,
        "public : setWorldPosition"
    },
    {
        "get_world_position", (PyCFunction)unigine_Node_get_world_position, METH_NOARGS,
        "public : getWorldPosition"
    },
    {
        "set_world_rotation", (PyCFunction)unigine_Node_set_world_rotation, METH_VARARGS|METH_KEYWORDS,
        "public : setWorldRotation"
    },
    {
        "get_world_rotation", (PyCFunction)unigine_Node_get_world_rotation, METH_NOARGS,
        "public : getWorldRotation"
    },
    {
        "set_world_direction", (PyCFunction)unigine_Node_set_world_direction, METH_VARARGS|METH_KEYWORDS,
        "public : setWorldDirection"
    },
    {
        "get_world_direction", (PyCFunction)unigine_Node_get_world_direction, METH_O,
        "public : getWorldDirection"
    },
    {
        "set_world_scale", (PyCFunction)unigine_Node_set_world_scale, METH_O,
        "public : setWorldScale"
    },
    {
        "get_world_scale", (PyCFunction)unigine_Node_get_world_scale, METH_NOARGS,
        "public : getWorldScale"
    },
    {
        "translate", (PyCFunction)unigine_Node_translate, METH_O,
        "public : translate"
    },
    {
        "translate", (PyCFunction)unigine_Node_translate, METH_VARARGS|METH_KEYWORDS,
        "public : translate"
    },
    {
        "rotate", (PyCFunction)unigine_Node_rotate, METH_O,
        "public : rotate"
    },
    {
        "rotate", (PyCFunction)unigine_Node_rotate, METH_O,
        "public : rotate"
    },
    {
        "rotate", (PyCFunction)unigine_Node_rotate, METH_VARARGS|METH_KEYWORDS,
        "public : rotate"
    },
    {
        "world_translate", (PyCFunction)unigine_Node_world_translate, METH_O,
        "public : worldTranslate"
    },
    {
        "world_translate", (PyCFunction)unigine_Node_world_translate, METH_VARARGS|METH_KEYWORDS,
        "public : worldTranslate"
    },
    {
        "world_rotate", (PyCFunction)unigine_Node_world_rotate, METH_O,
        "public : worldRotate"
    },
    {
        "world_rotate", (PyCFunction)unigine_Node_world_rotate, METH_O,
        "public : worldRotate"
    },
    {
        "world_rotate", (PyCFunction)unigine_Node_world_rotate, METH_VARARGS|METH_KEYWORDS,
        "public : worldRotate"
    },
    {
        "world_look_at", (PyCFunction)unigine_Node_world_look_at, METH_O,
        "public : worldLookAt"
    },
    {
        "world_look_at", (PyCFunction)unigine_Node_world_look_at, METH_VARARGS|METH_KEYWORDS,
        "public : worldLookAt"
    },
    {
        "to_local", (PyCFunction)unigine_Node_to_local, METH_O,
        "public : toLocal"
    },
    {
        "render_visualizer", (PyCFunction)unigine_Node_render_visualizer, METH_NOARGS,
        "public : renderVisualizer"
    },
    {
        "set_variable", (PyCFunction)unigine_Node_set_variable, METH_O,
        "public : setVariable"
    },
    {
        "get_variable", (PyCFunction)unigine_Node_get_variable, METH_NOARGS,
        "public : getVariable"
    },
    {
        "has_variable", (PyCFunction)unigine_Node_has_variable, METH_NOARGS,
        "public : hasVariable"
    },
    {
        "set_variable", (PyCFunction)unigine_Node_set_variable, METH_VARARGS|METH_KEYWORDS,
        "public : setVariable"
    },
    {
        "get_variable", (PyCFunction)unigine_Node_get_variable, METH_O,
        "public : getVariable"
    },
    {
        "has_variable", (PyCFunction)unigine_Node_has_variable, METH_O,
        "public : hasVariable"
    },
    {
        "remove_variable", (PyCFunction)unigine_Node_remove_variable, METH_O,
        "public : removeVariable"
    },
    {
        "get_geodetic_pivot", (PyCFunction)unigine_Node_get_geodetic_pivot, METH_NOARGS,
        "public : getGeodeticPivot"
    },
    {
        "update_enabled", (PyCFunction)unigine_Node_update_enabled, METH_NOARGS,
        "public : updateEnabled"
    },
    {NULL}  /* Sentinel */
};

static PyTypeObject unigine_NodeType = {


    PyVarObject_HEAD_INIT(NULL, 0)
    "unigine.Node",             // tp_name
    sizeof(unigine_Node) + 16, // tp_basicsize  (magic 16 bytes!!!)
    0,                         // tp_itemsize
    (destructor)unigine_Node_dealloc,   // tp_dealloc
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
    "Node Object",         // tp_doc
    0,                         // traverseproc tp_traverse
    0,                         // inquiry tp_clear
    0,                         // richcmpfunc tp_richcompare
    0,                         // Py_ssize_t tp_weaklistoffset
    0,                         // getiterfunc tp_iter
    0,                         // iternextfunc tp_iternext
    unigine_Node_methods, // tp_methods
    0, // tp_members
    0, // tp_getset
    0, // tp_base
    0, // tp_dict
    0, // tp_descr_get
    0, // tp_descr_set
    0, // tp_dictoffset
    (initproc)unigine_Node_init, // tp_init
    0, // tp_alloc
    unigine_Node_new, // tp_new
};

PyObject * Node::NewObject(Unigine::Ptr<Unigine::Node> unigine_object_ptr) {

    std::cout << "sizeof(unigine_Node) = " << sizeof(unigine_Node) << std::endl;

    unigine_Node *pInst = PyObject_New(unigine_Node, &unigine_NodeType);
    pInst->unigine_object_ptr = unigine_object_ptr;
    // Py_INCREF(pInst);
    return (PyObject *)pInst;
}

Unigine::Ptr<Unigine::Node> Node::Convert(PyObject *pObject) {
    if (Py_IS_TYPE(pObject, &unigine_NodeType) == 0) {
        // TODO error
    }
    unigine_Node *pInst = (unigine_Node *)pObject;
    return pInst->unigine_object_ptr;
}

// UniginePyTypeObjectNode

bool Python3UnigineNode::isReady() {
    // Initialize tp_dict with empty dictionary
    if (!unigine_NodeType.tp_dict) {
        unigine_NodeType.tp_dict = PyDict_New();

        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "ANY_TYPE",
            Py_BuildValue("i", Unigine::Node::ANY_TYPE)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "NODE_BEGIN",
            Py_BuildValue("i", Unigine::Node::NODE_BEGIN)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "NODE_DUMMY",
            Py_BuildValue("i", Unigine::Node::NODE_DUMMY)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "NODE_LAYER",
            Py_BuildValue("i", Unigine::Node::NODE_LAYER)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "NODE_TRIGGER",
            Py_BuildValue("i", Unigine::Node::NODE_TRIGGER)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "NODE_REFERENCE",
            Py_BuildValue("i", Unigine::Node::NODE_REFERENCE)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "NODE_EXTERN",
            Py_BuildValue("i", Unigine::Node::NODE_EXTERN)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "NODE_END",
            Py_BuildValue("i", Unigine::Node::NODE_END)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "WORLD_BEGIN",
            Py_BuildValue("i", Unigine::Node::WORLD_BEGIN)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "WORLD_SPLINE_GRAPH",
            Py_BuildValue("i", Unigine::Node::WORLD_SPLINE_GRAPH)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "WORLD_TRIGGER",
            Py_BuildValue("i", Unigine::Node::WORLD_TRIGGER)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "WORLD_CLUTTER",
            Py_BuildValue("i", Unigine::Node::WORLD_CLUTTER)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "WORLD_SWITCHER",
            Py_BuildValue("i", Unigine::Node::WORLD_SWITCHER)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "WORLD_OCCLUDER",
            Py_BuildValue("i", Unigine::Node::WORLD_OCCLUDER)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "WORLD_OCCLUDER_MESH",
            Py_BuildValue("i", Unigine::Node::WORLD_OCCLUDER_MESH)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "WORLD_TRANSFORM_PATH",
            Py_BuildValue("i", Unigine::Node::WORLD_TRANSFORM_PATH)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "WORLD_TRANSFORM_BONE",
            Py_BuildValue("i", Unigine::Node::WORLD_TRANSFORM_BONE)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "WORLD_EXPRESSION",
            Py_BuildValue("i", Unigine::Node::WORLD_EXPRESSION)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "WORLD_EXTERN",
            Py_BuildValue("i", Unigine::Node::WORLD_EXTERN)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "WORLD_END",
            Py_BuildValue("i", Unigine::Node::WORLD_END)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "GEODETIC_BEGIN",
            Py_BuildValue("i", Unigine::Node::GEODETIC_BEGIN)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "GEODETIC_PIVOT",
            Py_BuildValue("i", Unigine::Node::GEODETIC_PIVOT)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "GEODETIC_END",
            Py_BuildValue("i", Unigine::Node::GEODETIC_END)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "FIELD_BEGIN",
            Py_BuildValue("i", Unigine::Node::FIELD_BEGIN)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "FIELD_SPACER",
            Py_BuildValue("i", Unigine::Node::FIELD_SPACER)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "FIELD_ANIMATION",
            Py_BuildValue("i", Unigine::Node::FIELD_ANIMATION)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "FIELD_HEIGHT",
            Py_BuildValue("i", Unigine::Node::FIELD_HEIGHT)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "FIELD_SHORELINE",
            Py_BuildValue("i", Unigine::Node::FIELD_SHORELINE)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "FIELD_WEATHER",
            Py_BuildValue("i", Unigine::Node::FIELD_WEATHER)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "FIELD_END",
            Py_BuildValue("i", Unigine::Node::FIELD_END)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "LIGHT_BEGIN",
            Py_BuildValue("i", Unigine::Node::LIGHT_BEGIN)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "LIGHT_VOXEL_PROBE",
            Py_BuildValue("i", Unigine::Node::LIGHT_VOXEL_PROBE)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "LIGHT_ENVIRONMENT_PROBE",
            Py_BuildValue("i", Unigine::Node::LIGHT_ENVIRONMENT_PROBE)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "LIGHT_PLANAR_PROBE",
            Py_BuildValue("i", Unigine::Node::LIGHT_PLANAR_PROBE)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "LIGHT_OMNI",
            Py_BuildValue("i", Unigine::Node::LIGHT_OMNI)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "LIGHT_PROJ",
            Py_BuildValue("i", Unigine::Node::LIGHT_PROJ)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "LIGHT_WORLD",
            Py_BuildValue("i", Unigine::Node::LIGHT_WORLD)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "LIGHT_END",
            Py_BuildValue("i", Unigine::Node::LIGHT_END)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "DECAL_BEGIN",
            Py_BuildValue("i", Unigine::Node::DECAL_BEGIN)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "DECAL_PROJ",
            Py_BuildValue("i", Unigine::Node::DECAL_PROJ)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "DECAL_ORTHO",
            Py_BuildValue("i", Unigine::Node::DECAL_ORTHO)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "DECAL_MESH",
            Py_BuildValue("i", Unigine::Node::DECAL_MESH)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "DECAL_END",
            Py_BuildValue("i", Unigine::Node::DECAL_END)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "LANDSCAPE_LAYER_BEGIN",
            Py_BuildValue("i", Unigine::Node::LANDSCAPE_LAYER_BEGIN)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "LANDSCAPE_LAYER_MAP",
            Py_BuildValue("i", Unigine::Node::LANDSCAPE_LAYER_MAP)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "LANDSCAPE_LAYER_END",
            Py_BuildValue("i", Unigine::Node::LANDSCAPE_LAYER_END)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "OBJECT_BEGIN",
            Py_BuildValue("i", Unigine::Node::OBJECT_BEGIN)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "OBJECT_DUMMY",
            Py_BuildValue("i", Unigine::Node::OBJECT_DUMMY)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "OBJECT_DYNAMIC",
            Py_BuildValue("i", Unigine::Node::OBJECT_DYNAMIC)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "OBJECT_MESH_STATIC",
            Py_BuildValue("i", Unigine::Node::OBJECT_MESH_STATIC)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "OBJECT_MESH_CLUSTER",
            Py_BuildValue("i", Unigine::Node::OBJECT_MESH_CLUSTER)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "OBJECT_MESH_CLUTTER",
            Py_BuildValue("i", Unigine::Node::OBJECT_MESH_CLUTTER)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "OBJECT_MESH_SKINNED",
            Py_BuildValue("i", Unigine::Node::OBJECT_MESH_SKINNED)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "OBJECT_MESH_DYNAMIC",
            Py_BuildValue("i", Unigine::Node::OBJECT_MESH_DYNAMIC)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "OBJECT_MESH_SPLINE_CLUSTER",
            Py_BuildValue("i", Unigine::Node::OBJECT_MESH_SPLINE_CLUSTER)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "OBJECT_LANDSCAPE_TERRAIN",
            Py_BuildValue("i", Unigine::Node::OBJECT_LANDSCAPE_TERRAIN)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "OBJECT_TERRAIN_GLOBAL",
            Py_BuildValue("i", Unigine::Node::OBJECT_TERRAIN_GLOBAL)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "OBJECT_GRASS",
            Py_BuildValue("i", Unigine::Node::OBJECT_GRASS)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "OBJECT_PARTICLES",
            Py_BuildValue("i", Unigine::Node::OBJECT_PARTICLES)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "OBJECT_BILLBOARDS",
            Py_BuildValue("i", Unigine::Node::OBJECT_BILLBOARDS)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "OBJECT_VOLUME_BOX",
            Py_BuildValue("i", Unigine::Node::OBJECT_VOLUME_BOX)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "OBJECT_VOLUME_SPHERE",
            Py_BuildValue("i", Unigine::Node::OBJECT_VOLUME_SPHERE)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "OBJECT_VOLUME_OMNI",
            Py_BuildValue("i", Unigine::Node::OBJECT_VOLUME_OMNI)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "OBJECT_VOLUME_PROJ",
            Py_BuildValue("i", Unigine::Node::OBJECT_VOLUME_PROJ)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "OBJECT_GUI",
            Py_BuildValue("i", Unigine::Node::OBJECT_GUI)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "OBJECT_GUI_MESH",
            Py_BuildValue("i", Unigine::Node::OBJECT_GUI_MESH)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "OBJECT_WATER_GLOBAL",
            Py_BuildValue("i", Unigine::Node::OBJECT_WATER_GLOBAL)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "OBJECT_WATER_MESH",
            Py_BuildValue("i", Unigine::Node::OBJECT_WATER_MESH)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "OBJECT_SKY",
            Py_BuildValue("i", Unigine::Node::OBJECT_SKY)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "OBJECT_CLOUD_LAYER",
            Py_BuildValue("i", Unigine::Node::OBJECT_CLOUD_LAYER)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "OBJECT_EXTERN",
            Py_BuildValue("i", Unigine::Node::OBJECT_EXTERN)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "OBJECT_TEXT",
            Py_BuildValue("i", Unigine::Node::OBJECT_TEXT)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "OBJECT_END",
            Py_BuildValue("i", Unigine::Node::OBJECT_END)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "PLAYER_BEGIN",
            Py_BuildValue("i", Unigine::Node::PLAYER_BEGIN)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "PLAYER_DUMMY",
            Py_BuildValue("i", Unigine::Node::PLAYER_DUMMY)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "PLAYER_SPECTATOR",
            Py_BuildValue("i", Unigine::Node::PLAYER_SPECTATOR)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "PLAYER_PERSECUTOR",
            Py_BuildValue("i", Unigine::Node::PLAYER_PERSECUTOR)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "PLAYER_ACTOR",
            Py_BuildValue("i", Unigine::Node::PLAYER_ACTOR)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "PLAYER_END",
            Py_BuildValue("i", Unigine::Node::PLAYER_END)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "PHYSICAL_BEGIN",
            Py_BuildValue("i", Unigine::Node::PHYSICAL_BEGIN)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "PHYSICAL_WIND",
            Py_BuildValue("i", Unigine::Node::PHYSICAL_WIND)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "PHYSICAL_FORCE",
            Py_BuildValue("i", Unigine::Node::PHYSICAL_FORCE)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "PHYSICAL_NOISE",
            Py_BuildValue("i", Unigine::Node::PHYSICAL_NOISE)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "PHYSICAL_WATER",
            Py_BuildValue("i", Unigine::Node::PHYSICAL_WATER)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "PHYSICAL_TRIGGER",
            Py_BuildValue("i", Unigine::Node::PHYSICAL_TRIGGER)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "PHYSICAL_END",
            Py_BuildValue("i", Unigine::Node::PHYSICAL_END)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "NAVIGATION_BEGIN",
            Py_BuildValue("i", Unigine::Node::NAVIGATION_BEGIN)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "NAVIGATION_SECTOR",
            Py_BuildValue("i", Unigine::Node::NAVIGATION_SECTOR)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "NAVIGATION_MESH",
            Py_BuildValue("i", Unigine::Node::NAVIGATION_MESH)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "NAVIGATION_END",
            Py_BuildValue("i", Unigine::Node::NAVIGATION_END)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "OBSTACLE_BEGIN",
            Py_BuildValue("i", Unigine::Node::OBSTACLE_BEGIN)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "OBSTACLE_BOX",
            Py_BuildValue("i", Unigine::Node::OBSTACLE_BOX)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "OBSTACLE_SPHERE",
            Py_BuildValue("i", Unigine::Node::OBSTACLE_SPHERE)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "OBSTACLE_CAPSULE",
            Py_BuildValue("i", Unigine::Node::OBSTACLE_CAPSULE)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "OBSTACLE_END",
            Py_BuildValue("i", Unigine::Node::OBSTACLE_END)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "SOUND_BEGIN",
            Py_BuildValue("i", Unigine::Node::SOUND_BEGIN)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "SOUND_SOURCE",
            Py_BuildValue("i", Unigine::Node::SOUND_SOURCE)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "SOUND_REVERB",
            Py_BuildValue("i", Unigine::Node::SOUND_REVERB)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "SOUND_END",
            Py_BuildValue("i", Unigine::Node::SOUND_END)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "NUM_NODES",
            Py_BuildValue("i", Unigine::Node::NUM_NODES)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "NUM_WORLDS",
            Py_BuildValue("i", Unigine::Node::NUM_WORLDS)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "NUM_GEODETICS",
            Py_BuildValue("i", Unigine::Node::NUM_GEODETICS)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "NUM_FIELDS",
            Py_BuildValue("i", Unigine::Node::NUM_FIELDS)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "NUM_LIGHTS",
            Py_BuildValue("i", Unigine::Node::NUM_LIGHTS)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "NUM_DECALS",
            Py_BuildValue("i", Unigine::Node::NUM_DECALS)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "NUM_OBJECTS",
            Py_BuildValue("i", Unigine::Node::NUM_OBJECTS)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "NUM_PLAYERS",
            Py_BuildValue("i", Unigine::Node::NUM_PLAYERS)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "NUM_PHYSICALS",
            Py_BuildValue("i", Unigine::Node::NUM_PHYSICALS)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "NUM_NAVIGATIONS",
            Py_BuildValue("i", Unigine::Node::NUM_NAVIGATIONS)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "NUM_OBSTACLES",
            Py_BuildValue("i", Unigine::Node::NUM_OBSTACLES)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "NUM_SOUNDS",
            Py_BuildValue("i", Unigine::Node::NUM_SOUNDS)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "DUMMY",
            Py_BuildValue("i", Unigine::Node::DUMMY)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "LAYER",
            Py_BuildValue("i", Unigine::Node::LAYER)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "TRIGGER",
            Py_BuildValue("i", Unigine::Node::TRIGGER)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "REFERENCE",
            Py_BuildValue("i", Unigine::Node::REFERENCE)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "EXTERN",
            Py_BuildValue("i", Unigine::Node::EXTERN)
        );
        // enum_typename: CALLBACK_INDEX
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "CALLBACK_PROPERTY_NODE_SLOTS_CHANGED",
            Py_BuildValue("i", Unigine::Node::CALLBACK_PROPERTY_NODE_SLOTS_CHANGED)
        );
        // enum_typename: CALLBACK_INDEX
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "CALLBACK_PROPERTY_NODE_ADD",
            Py_BuildValue("i", Unigine::Node::CALLBACK_PROPERTY_NODE_ADD)
        );
        // enum_typename: CALLBACK_INDEX
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "CALLBACK_PROPERTY_NODE_SWAP",
            Py_BuildValue("i", Unigine::Node::CALLBACK_PROPERTY_NODE_SWAP)
        );
        // enum_typename: CALLBACK_INDEX
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "CALLBACK_PROPERTY_NODE_REMOVE",
            Py_BuildValue("i", Unigine::Node::CALLBACK_PROPERTY_NODE_REMOVE)
        );
        // enum_typename: CALLBACK_INDEX
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "CALLBACK_PROPERTY_CHANGE_ENABLED",
            Py_BuildValue("i", Unigine::Node::CALLBACK_PROPERTY_CHANGE_ENABLED)
        );
        // enum_typename: CALLBACK_INDEX
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "CALLBACK_PROPERTY_SURFACE_ADD",
            Py_BuildValue("i", Unigine::Node::CALLBACK_PROPERTY_SURFACE_ADD)
        );
        // enum_typename: CALLBACK_INDEX
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "CALLBACK_PROPERTY_SURFACE_REMOVE",
            Py_BuildValue("i", Unigine::Node::CALLBACK_PROPERTY_SURFACE_REMOVE)
        );
        // enum_typename: CALLBACK_INDEX
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "CALLBACK_CACHE_NODE_ADD",
            Py_BuildValue("i", Unigine::Node::CALLBACK_CACHE_NODE_ADD)
        );
        // enum_typename: CALLBACK_INDEX
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "CALLBACK_NODE_LOAD",
            Py_BuildValue("i", Unigine::Node::CALLBACK_NODE_LOAD)
        );
        // enum_typename: CALLBACK_INDEX
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "CALLBACK_NODE_CLONE",
            Py_BuildValue("i", Unigine::Node::CALLBACK_NODE_CLONE)
        );
        // enum_typename: CALLBACK_INDEX
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "CALLBACK_NODE_SWAP",
            Py_BuildValue("i", Unigine::Node::CALLBACK_NODE_SWAP)
        );
        // enum_typename: CALLBACK_INDEX
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "CALLBACK_NODE_REMOVE",
            Py_BuildValue("i", Unigine::Node::CALLBACK_NODE_REMOVE)
        );
        // enum_typename: CALLBACK_INDEX
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "CALLBACK_NODE_CHANGE_ENABLED",
            Py_BuildValue("i", Unigine::Node::CALLBACK_NODE_CHANGE_ENABLED)
        );
        // enum_typename: LIFETIME
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "LIFETIME_WORLD",
            Py_BuildValue("i", Unigine::Node::LIFETIME_WORLD)
        );
        // enum_typename: LIFETIME
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "LIFETIME_ENGINE",
            Py_BuildValue("i", Unigine::Node::LIFETIME_ENGINE)
        );
        // enum_typename: LIFETIME
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


}; // namespace PyUnigine

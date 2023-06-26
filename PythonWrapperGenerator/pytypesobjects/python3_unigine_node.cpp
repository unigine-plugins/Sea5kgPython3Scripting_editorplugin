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
static PyObject * unigine_Node_to_world(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const Unigine::Math::vec3 & p;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    const Unigine::Math::vec3 & p = PyBytes_AS_STRING(pArg1Str);

    unknown type 

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: 
    return ret;
};

// public (static): getCloneNode
static PyObject * unigine_Node_get_clone_node(unigine_Node* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const Unigine::Ptr<Unigine::Node> & original_node;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    const Unigine::Ptr<Unigine::Node> & original_node = PyBytes_AS_STRING(pArg1Str);

    Unigine::Ptr<Unigine::Node> retOriginal = Unigine::Node::getCloneNode(original_node);
    ret = PyUnigine::Node::NewObject(retOriginal);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: Unigine::Ptr<Unigine::Node>
    return ret;
};

// public (static): getCloneProperty
static PyObject * unigine_Node_get_clone_property(unigine_Node* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const Unigine::Ptr<Unigine::Property> & original_property;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    const Unigine::Ptr<Unigine::Property> & original_property = PyBytes_AS_STRING(pArg1Str);

    Unigine::Ptr<Unigine::Property> retOriginal = Unigine::Node::getCloneProperty(original_property);
    ret = PyUnigine::Property::NewObject(retOriginal);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: Unigine::Ptr<Unigine::Property>
    return ret;
};

// public (static): getNode
static PyObject * unigine_Node_get_node(unigine_Node* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int id;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    int id = PyBytes_AS_STRING(pArg1Str);

    Unigine::Ptr<Unigine::Node> retOriginal = Unigine::Node::getNode(id);
    ret = PyUnigine::Node::NewObject(retOriginal);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: Unigine::Ptr<Unigine::Node>
    return ret;
};

// public (static): isNode
static PyObject * unigine_Node_is_node(unigine_Node* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const Unigine::Ptr<Unigine::Node> & node;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    const Unigine::Ptr<Unigine::Node> & node = PyBytes_AS_STRING(pArg1Str);

    int retOriginal = Unigine::Node::isNode(node);
    ret = PyLong_FromLong(retOriginal);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: int
    return ret;
};

// public (static): isNode
static PyObject * unigine_Node_is_node(unigine_Node* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int id;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    int id = PyBytes_AS_STRING(pArg1Str);

    int retOriginal = Unigine::Node::isNode(id);
    ret = PyLong_FromLong(retOriginal);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: int
    return ret;
};

// public (static): getTypeID
static PyObject * unigine_Node_get_type_id(unigine_Node* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const char * type;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    const char * type = PyBytes_AS_STRING(pArg1Str);

    Unigine::Node::TYPE retOriginal = Unigine::Node::getTypeID(type);
    ret = PyLong_FromLong(retOriginal);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: Unigine::Node::TYPE
    return ret;
};

// public (static): getTypeName
static PyObject * unigine_Node_get_type_name(unigine_Node* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // Unigine::Node::TYPE type;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    Unigine::Node::TYPE type = PyBytes_AS_STRING(pArg1Str);

    unknown type 

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: const char *
    return ret;
};

// public : clone
static PyObject * unigine_Node_clone(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    Unigine::Ptr<Unigine::Node> retOriginal = self->unigine_object_ptr->clone();
    ret = todo;

    // end
    // return: Unigine::Ptr<Unigine::Node>
    return ret;
};

// public : swap
static PyObject * unigine_Node_swap(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const Unigine::Ptr<Unigine::Node> & n;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    const Unigine::Ptr<Unigine::Node> & n = PyBytes_AS_STRING(pArg1Str);

    self->unigine_object_ptr->swap(n);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: void
    return ret;
};

// public : setID
static PyObject * unigine_Node_set_id(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int id;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    int id = PyBytes_AS_STRING(pArg1Str);

    self->unigine_object_ptr->setID(id);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: void
    return ret;
};

// public : getID
static PyObject * unigine_Node_get_id(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    int retOriginal = self->unigine_object_ptr->getID();
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: int
    return ret;
};

// public : getType
static PyObject * unigine_Node_get_type(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    Unigine::Node::TYPE retOriginal = self->unigine_object_ptr->getType();
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: Unigine::Node::TYPE
    return ret;
};

// public : getTypeName
static PyObject * unigine_Node_get_type_name(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    unknown type 

    // end
    // return: const char *
    return ret;
};

// public : isWorld
static PyObject * unigine_Node_is_world(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    bool retOriginal = self->unigine_object_ptr->isWorld();
    ret = PyBool_FromLong(retOriginal);

    // end
    // return: bool
    return ret;
};

// public : isGeodetic
static PyObject * unigine_Node_is_geodetic(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    bool retOriginal = self->unigine_object_ptr->isGeodetic();
    ret = PyBool_FromLong(retOriginal);

    // end
    // return: bool
    return ret;
};

// public : isLight
static PyObject * unigine_Node_is_light(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    bool retOriginal = self->unigine_object_ptr->isLight();
    ret = PyBool_FromLong(retOriginal);

    // end
    // return: bool
    return ret;
};

// public : isDecal
static PyObject * unigine_Node_is_decal(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    bool retOriginal = self->unigine_object_ptr->isDecal();
    ret = PyBool_FromLong(retOriginal);

    // end
    // return: bool
    return ret;
};

// public : isLandscapeLayer
static PyObject * unigine_Node_is_landscape_layer(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    bool retOriginal = self->unigine_object_ptr->isLandscapeLayer();
    ret = PyBool_FromLong(retOriginal);

    // end
    // return: bool
    return ret;
};

// public : isObject
static PyObject * unigine_Node_is_object(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    bool retOriginal = self->unigine_object_ptr->isObject();
    ret = PyBool_FromLong(retOriginal);

    // end
    // return: bool
    return ret;
};

// public : isPlayer
static PyObject * unigine_Node_is_player(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    bool retOriginal = self->unigine_object_ptr->isPlayer();
    ret = PyBool_FromLong(retOriginal);

    // end
    // return: bool
    return ret;
};

// public : isPhysical
static PyObject * unigine_Node_is_physical(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    bool retOriginal = self->unigine_object_ptr->isPhysical();
    ret = PyBool_FromLong(retOriginal);

    // end
    // return: bool
    return ret;
};

// public : isNavigation
static PyObject * unigine_Node_is_navigation(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    bool retOriginal = self->unigine_object_ptr->isNavigation();
    ret = PyBool_FromLong(retOriginal);

    // end
    // return: bool
    return ret;
};

// public : isObstacle
static PyObject * unigine_Node_is_obstacle(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    bool retOriginal = self->unigine_object_ptr->isObstacle();
    ret = PyBool_FromLong(retOriginal);

    // end
    // return: bool
    return ret;
};

// public : isSound
static PyObject * unigine_Node_is_sound(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    bool retOriginal = self->unigine_object_ptr->isSound();
    ret = PyBool_FromLong(retOriginal);

    // end
    // return: bool
    return ret;
};

// public : isField
static PyObject * unigine_Node_is_field(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    bool retOriginal = self->unigine_object_ptr->isField();
    ret = PyBool_FromLong(retOriginal);

    // end
    // return: bool
    return ret;
};

// public : isExtern
static PyObject * unigine_Node_is_extern(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    bool retOriginal = self->unigine_object_ptr->isExtern();
    ret = PyBool_FromLong(retOriginal);

    // end
    // return: bool
    return ret;
};

// public : isEnabledSelf
static PyObject * unigine_Node_is_enabled_self(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    bool retOriginal = self->unigine_object_ptr->isEnabledSelf();
    ret = PyBool_FromLong(retOriginal);

    // end
    // return: bool
    return ret;
};

// public : getLifetimeSelf
static PyObject * unigine_Node_get_lifetime_self(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    Unigine::Node::LIFETIME retOriginal = self->unigine_object_ptr->getLifetimeSelf();
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: Unigine::Node::LIFETIME
    return ret;
};

// public : setEnabled
static PyObject * unigine_Node_set_enabled(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // bool enabled;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    bool enabled = PyBytes_AS_STRING(pArg1Str);

    self->unigine_object_ptr->setEnabled(enabled);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: void
    return ret;
};

// public : isEnabled
static PyObject * unigine_Node_is_enabled(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    bool retOriginal = self->unigine_object_ptr->isEnabled();
    ret = PyBool_FromLong(retOriginal);

    // end
    // return: bool
    return ret;
};

// public : setHandled
static PyObject * unigine_Node_set_handled(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // bool handled;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    bool handled = PyBytes_AS_STRING(pArg1Str);

    self->unigine_object_ptr->setHandled(handled);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: void
    return ret;
};

// public : isHandled
static PyObject * unigine_Node_is_handled(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    bool retOriginal = self->unigine_object_ptr->isHandled();
    ret = PyBool_FromLong(retOriginal);

    // end
    // return: bool
    return ret;
};

// public : setImmovable
static PyObject * unigine_Node_set_immovable(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // bool immovable;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    bool immovable = PyBytes_AS_STRING(pArg1Str);

    self->unigine_object_ptr->setImmovable(immovable);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: void
    return ret;
};

// public : isImmovable
static PyObject * unigine_Node_is_immovable(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    bool retOriginal = self->unigine_object_ptr->isImmovable();
    ret = PyBool_FromLong(retOriginal);

    // end
    // return: bool
    return ret;
};

// public : setTriggerInteractionEnabled
static PyObject * unigine_Node_set_trigger_interaction_enabled(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // bool enabled;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    bool enabled = PyBytes_AS_STRING(pArg1Str);

    self->unigine_object_ptr->setTriggerInteractionEnabled(enabled);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: void
    return ret;
};

// public : isTriggerInteractionEnabled
static PyObject * unigine_Node_is_trigger_interaction_enabled(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    bool retOriginal = self->unigine_object_ptr->isTriggerInteractionEnabled();
    ret = PyBool_FromLong(retOriginal);

    // end
    // return: bool
    return ret;
};

// public : setGrassInteractionEnabled
static PyObject * unigine_Node_set_grass_interaction_enabled(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // bool enabled;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    bool enabled = PyBytes_AS_STRING(pArg1Str);

    self->unigine_object_ptr->setGrassInteractionEnabled(enabled);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: void
    return ret;
};

// public : isGrassInteractionEnabled
static PyObject * unigine_Node_is_grass_interaction_enabled(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    bool retOriginal = self->unigine_object_ptr->isGrassInteractionEnabled();
    ret = PyBool_FromLong(retOriginal);

    // end
    // return: bool
    return ret;
};

// public : setClutterInteractionEnabled
static PyObject * unigine_Node_set_clutter_interaction_enabled(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // bool enabled;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    bool enabled = PyBytes_AS_STRING(pArg1Str);

    self->unigine_object_ptr->setClutterInteractionEnabled(enabled);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: void
    return ret;
};

// public : isClutterInteractionEnabled
static PyObject * unigine_Node_is_clutter_interaction_enabled(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    bool retOriginal = self->unigine_object_ptr->isClutterInteractionEnabled();
    ret = PyBool_FromLong(retOriginal);

    // end
    // return: bool
    return ret;
};

// public : setQuery
static PyObject * unigine_Node_set_query(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // bool query;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    bool query = PyBytes_AS_STRING(pArg1Str);

    self->unigine_object_ptr->setQuery(query);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: void
    return ret;
};

// public : isQuery
static PyObject * unigine_Node_is_query(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    bool retOriginal = self->unigine_object_ptr->isQuery();
    ret = PyBool_FromLong(retOriginal);

    // end
    // return: bool
    return ret;
};

// public : hasQueryForce
static PyObject * unigine_Node_has_query_force(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    bool retOriginal = self->unigine_object_ptr->hasQueryForce();
    ret = PyBool_FromLong(retOriginal);

    // end
    // return: bool
    return ret;
};

// public : setShowInEditorEnabled
static PyObject * unigine_Node_set_show_in_editor_enabled(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // bool enabled;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    bool enabled = PyBytes_AS_STRING(pArg1Str);

    self->unigine_object_ptr->setShowInEditorEnabled(enabled);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: void
    return ret;
};

// public : isShowInEditorEnabled
static PyObject * unigine_Node_is_show_in_editor_enabled(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    bool retOriginal = self->unigine_object_ptr->isShowInEditorEnabled();
    ret = PyBool_FromLong(retOriginal);

    // end
    // return: bool
    return ret;
};

// public : setSaveToWorldEnabled
static PyObject * unigine_Node_set_save_to_world_enabled(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // bool enabled;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    bool enabled = PyBytes_AS_STRING(pArg1Str);

    self->unigine_object_ptr->setSaveToWorldEnabled(enabled);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: void
    return ret;
};

// public : isSaveToWorldEnabled
static PyObject * unigine_Node_is_save_to_world_enabled(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    bool retOriginal = self->unigine_object_ptr->isSaveToWorldEnabled();
    ret = PyBool_FromLong(retOriginal);

    // end
    // return: bool
    return ret;
};

// public : setLifetime
static PyObject * unigine_Node_set_lifetime(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // Unigine::Node::LIFETIME lifetime;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    Unigine::Node::LIFETIME lifetime = PyBytes_AS_STRING(pArg1Str);

    self->unigine_object_ptr->setLifetime(lifetime);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: void
    return ret;
};

// public : getLifetime
static PyObject * unigine_Node_get_lifetime(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    Unigine::Node::LIFETIME retOriginal = self->unigine_object_ptr->getLifetime();
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: Unigine::Node::LIFETIME
    return ret;
};

// public : isShowInEditorEnabledSelf
static PyObject * unigine_Node_is_show_in_editor_enabled_self(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    bool retOriginal = self->unigine_object_ptr->isShowInEditorEnabledSelf();
    ret = PyBool_FromLong(retOriginal);

    // end
    // return: bool
    return ret;
};

// public : isSaveToWorldEnabledSelf
static PyObject * unigine_Node_is_save_to_world_enabled_self(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    bool retOriginal = self->unigine_object_ptr->isSaveToWorldEnabledSelf();
    ret = PyBool_FromLong(retOriginal);

    // end
    // return: bool
    return ret;
};

// public : setShowInEditorEnabledRecursive
static PyObject * unigine_Node_set_show_in_editor_enabled_recursive(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // bool enable;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    bool enable = PyBytes_AS_STRING(pArg1Str);

    self->unigine_object_ptr->setShowInEditorEnabledRecursive(enable);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: void
    return ret;
};

// public : setSaveToWorldEnabledRecursive
static PyObject * unigine_Node_set_save_to_world_enabled_recursive(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // bool enable;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    bool enable = PyBytes_AS_STRING(pArg1Str);

    self->unigine_object_ptr->setSaveToWorldEnabledRecursive(enable);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: void
    return ret;
};

// public : setName
static PyObject * unigine_Node_set_name(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const char * name;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    const char * name = PyBytes_AS_STRING(pArg1Str);

    self->unigine_object_ptr->setName(name);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: void
    return ret;
};

// public : getName
static PyObject * unigine_Node_get_name(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    unknown type 

    // end
    // return: const char *
    return ret;
};

// public : setData
static PyObject * unigine_Node_set_data(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const char * name;
    PyObject *pArg2; // const char * data;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    const char * name = PyBytes_AS_STRING(pArg1Str);

    // pArg2
    PyObject* pArg2Repr = PyObject_Repr(pArg2);
    PyObject* pArg2Str = PyUnicode_AsEncodedString(pArg2Repr, "utf-8", "~E~");
    const char * data = PyBytes_AS_STRING(pArg2Str);

    self->unigine_object_ptr->setData(name, data);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    Py_XDECREF(pArg2Repr);
    Py_XDECREF(pArg2Str);
    // return: void
    return ret;
};

// public : getData
static PyObject * unigine_Node_get_data(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const char * name;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    const char * name = PyBytes_AS_STRING(pArg1Str);

    unknown type 

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: const char *
    return ret;
};

// public : setPtr
static PyObject * unigine_Node_set_ptr(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // void * ptr;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    void * ptr = PyBytes_AS_STRING(pArg1Str);

    self->unigine_object_ptr->setPtr(ptr);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: void
    return ret;
};

// public : getPtr
static PyObject * unigine_Node_get_ptr(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    unknown type 

    // end
    // return: void *
    return ret;
};

// public : getNumAncestors
static PyObject * unigine_Node_get_num_ancestors(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    int retOriginal = self->unigine_object_ptr->getNumAncestors();
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: int
    return ret;
};

// public : getAncestor
static PyObject * unigine_Node_get_ancestor(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int num;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    int num = PyBytes_AS_STRING(pArg1Str);

    Unigine::Ptr<Unigine::Node> retOriginal = self->unigine_object_ptr->getAncestor(num);
    ret = todo;

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: Unigine::Ptr<Unigine::Node>
    return ret;
};

// public : findAncestor
static PyObject * unigine_Node_find_ancestor(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const char * name;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    const char * name = PyBytes_AS_STRING(pArg1Str);

    int retOriginal = self->unigine_object_ptr->findAncestor();
    ret = PyLong_FromLong(retOriginal);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: int
    return ret;
};

// public : findAncestor
static PyObject * unigine_Node_find_ancestor(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int type;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    int type = PyBytes_AS_STRING(pArg1Str);

    int retOriginal = self->unigine_object_ptr->findAncestor();
    ret = PyLong_FromLong(retOriginal);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: int
    return ret;
};

// public : setParent
static PyObject * unigine_Node_set_parent(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const Unigine::Ptr<Unigine::Node> & parent;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    const Unigine::Ptr<Unigine::Node> & parent = PyBytes_AS_STRING(pArg1Str);

    self->unigine_object_ptr->setParent(parent);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: void
    return ret;
};

// public : getParent
static PyObject * unigine_Node_get_parent(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    Unigine::Ptr<Unigine::Node> retOriginal = self->unigine_object_ptr->getParent();
    ret = todo;

    // end
    // return: Unigine::Ptr<Unigine::Node>
    return ret;
};

// public : setWorldParent
static PyObject * unigine_Node_set_world_parent(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const Unigine::Ptr<Unigine::Node> & n;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    const Unigine::Ptr<Unigine::Node> & n = PyBytes_AS_STRING(pArg1Str);

    self->unigine_object_ptr->setWorldParent(n);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: void
    return ret;
};

// public : getRootNode
static PyObject * unigine_Node_get_root_node(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    Unigine::Ptr<Unigine::Node> retOriginal = self->unigine_object_ptr->getRootNode();
    ret = todo;

    // end
    // return: Unigine::Ptr<Unigine::Node>
    return ret;
};

// public : addChild
static PyObject * unigine_Node_add_child(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const Unigine::Ptr<Unigine::Node> & n;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    const Unigine::Ptr<Unigine::Node> & n = PyBytes_AS_STRING(pArg1Str);

    self->unigine_object_ptr->addChild(n);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: void
    return ret;
};

// public : removeChild
static PyObject * unigine_Node_remove_child(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const Unigine::Ptr<Unigine::Node> & n;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    const Unigine::Ptr<Unigine::Node> & n = PyBytes_AS_STRING(pArg1Str);

    self->unigine_object_ptr->removeChild(n);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: void
    return ret;
};

// public : addWorldChild
static PyObject * unigine_Node_add_world_child(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const Unigine::Ptr<Unigine::Node> & n;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    const Unigine::Ptr<Unigine::Node> & n = PyBytes_AS_STRING(pArg1Str);

    self->unigine_object_ptr->addWorldChild(n);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: void
    return ret;
};

// public : removeWorldChild
static PyObject * unigine_Node_remove_world_child(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const Unigine::Ptr<Unigine::Node> & n;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    const Unigine::Ptr<Unigine::Node> & n = PyBytes_AS_STRING(pArg1Str);

    self->unigine_object_ptr->removeWorldChild(n);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: void
    return ret;
};

// public : isChild
static PyObject * unigine_Node_is_child(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const Unigine::Ptr<Unigine::Node> & n;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    const Unigine::Ptr<Unigine::Node> & n = PyBytes_AS_STRING(pArg1Str);

    bool retOriginal = self->unigine_object_ptr->isChild(n);
    ret = PyBool_FromLong(retOriginal);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: bool
    return ret;
};

// public : getNumChildren
static PyObject * unigine_Node_get_num_children(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    int retOriginal = self->unigine_object_ptr->getNumChildren();
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: int
    return ret;
};

// public : findChild
static PyObject * unigine_Node_find_child(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const char * name;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    const char * name = PyBytes_AS_STRING(pArg1Str);

    int retOriginal = self->unigine_object_ptr->findChild();
    ret = PyLong_FromLong(retOriginal);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: int
    return ret;
};

// public : getChild
static PyObject * unigine_Node_get_child(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int num;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    int num = PyBytes_AS_STRING(pArg1Str);

    Unigine::Ptr<Unigine::Node> retOriginal = self->unigine_object_ptr->getChild(num);
    ret = todo;

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: Unigine::Ptr<Unigine::Node>
    return ret;
};

// public : setChildIndex
static PyObject * unigine_Node_set_child_index(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const Unigine::Ptr<Unigine::Node> & n;
    PyObject *pArg2; // int index;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    const Unigine::Ptr<Unigine::Node> & n = PyBytes_AS_STRING(pArg1Str);

    // pArg2
    PyObject* pArg2Repr = PyObject_Repr(pArg2);
    PyObject* pArg2Str = PyUnicode_AsEncodedString(pArg2Repr, "utf-8", "~E~");
    int index = PyBytes_AS_STRING(pArg2Str);

    self->unigine_object_ptr->setChildIndex(n, index);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    Py_XDECREF(pArg2Repr);
    Py_XDECREF(pArg2Str);
    // return: void
    return ret;
};

// public : getChildIndex
static PyObject * unigine_Node_get_child_index(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const Unigine::Ptr<Unigine::Node> & n;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    const Unigine::Ptr<Unigine::Node> & n = PyBytes_AS_STRING(pArg1Str);

    int retOriginal = self->unigine_object_ptr->getChildIndex();
    ret = PyLong_FromLong(retOriginal);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: int
    return ret;
};

// public : findNode
static PyObject * unigine_Node_find_node(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const char * name;
    PyObject *pArg2; // int recursive;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    const char * name = PyBytes_AS_STRING(pArg1Str);

    // pArg2
    PyObject* pArg2Repr = PyObject_Repr(pArg2);
    PyObject* pArg2Str = PyUnicode_AsEncodedString(pArg2Repr, "utf-8", "~E~");
    int recursive = PyBytes_AS_STRING(pArg2Str);

    Unigine::Ptr<Unigine::Node> retOriginal = self->unigine_object_ptr->findNode(name, recursive);
    ret = todo;

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    Py_XDECREF(pArg2Repr);
    Py_XDECREF(pArg2Str);
    // return: Unigine::Ptr<Unigine::Node>
    return ret;
};

// public : getPossessor
static PyObject * unigine_Node_get_possessor(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    Unigine::Ptr<Unigine::Node> retOriginal = self->unigine_object_ptr->getPossessor();
    ret = todo;

    // end
    // return: Unigine::Ptr<Unigine::Node>
    return ret;
};

// public : getHierarchy
static PyObject * unigine_Node_get_hierarchy(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // Unigine::Vector<Unigine::Ptr<Unigine::Node>> & hierarchy;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    Unigine::Vector<Unigine::Ptr<Unigine::Node>> & hierarchy = PyBytes_AS_STRING(pArg1Str);

    self->unigine_object_ptr->getHierarchy(hierarchy);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: void
    return ret;
};

// public : getNumProperties
static PyObject * unigine_Node_get_num_properties(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    int retOriginal = self->unigine_object_ptr->getNumProperties();
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: int
    return ret;
};

// public : addProperty
static PyObject * unigine_Node_add_property(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const char * name;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    const char * name = PyBytes_AS_STRING(pArg1Str);

    int retOriginal = self->unigine_object_ptr->addProperty();
    ret = PyLong_FromLong(retOriginal);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: int
    return ret;
};

// public : addProperty
static PyObject * unigine_Node_add_property(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const Unigine::UGUID & guid;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    const Unigine::UGUID & guid = PyBytes_AS_STRING(pArg1Str);

    int retOriginal = self->unigine_object_ptr->addProperty();
    ret = PyLong_FromLong(retOriginal);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: int
    return ret;
};

// public : addProperty
static PyObject * unigine_Node_add_property(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const Unigine::Ptr<Unigine::Property> & property;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    const Unigine::Ptr<Unigine::Property> & property = PyBytes_AS_STRING(pArg1Str);

    int retOriginal = self->unigine_object_ptr->addProperty();
    ret = PyLong_FromLong(retOriginal);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: int
    return ret;
};

// public : findProperty
static PyObject * unigine_Node_find_property(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const char * name;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    const char * name = PyBytes_AS_STRING(pArg1Str);

    int retOriginal = self->unigine_object_ptr->findProperty();
    ret = PyLong_FromLong(retOriginal);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: int
    return ret;
};

// public : findProperty
static PyObject * unigine_Node_find_property(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const Unigine::UGUID & guid;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    const Unigine::UGUID & guid = PyBytes_AS_STRING(pArg1Str);

    int retOriginal = self->unigine_object_ptr->findProperty();
    ret = PyLong_FromLong(retOriginal);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: int
    return ret;
};

// public : findProperty
static PyObject * unigine_Node_find_property(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const Unigine::Ptr<Unigine::Property> & property;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    const Unigine::Ptr<Unigine::Property> & property = PyBytes_AS_STRING(pArg1Str);

    int retOriginal = self->unigine_object_ptr->findProperty();
    ret = PyLong_FromLong(retOriginal);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: int
    return ret;
};

// public : setProperty
static PyObject * unigine_Node_set_property(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const char * name;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    const char * name = PyBytes_AS_STRING(pArg1Str);

    int retOriginal = self->unigine_object_ptr->setProperty();
    ret = PyLong_FromLong(retOriginal);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: int
    return ret;
};

// public : setProperty
static PyObject * unigine_Node_set_property(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const Unigine::UGUID & guid;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    const Unigine::UGUID & guid = PyBytes_AS_STRING(pArg1Str);

    int retOriginal = self->unigine_object_ptr->setProperty();
    ret = PyLong_FromLong(retOriginal);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: int
    return ret;
};

// public : setProperty
static PyObject * unigine_Node_set_property(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const Unigine::Ptr<Unigine::Property> & property;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    const Unigine::Ptr<Unigine::Property> & property = PyBytes_AS_STRING(pArg1Str);

    int retOriginal = self->unigine_object_ptr->setProperty();
    ret = PyLong_FromLong(retOriginal);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: int
    return ret;
};

// public : setProperty
static PyObject * unigine_Node_set_property(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int num;
    PyObject *pArg2; // const char * name;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    int num = PyBytes_AS_STRING(pArg1Str);

    // pArg2
    PyObject* pArg2Repr = PyObject_Repr(pArg2);
    PyObject* pArg2Str = PyUnicode_AsEncodedString(pArg2Repr, "utf-8", "~E~");
    const char * name = PyBytes_AS_STRING(pArg2Str);

    int retOriginal = self->unigine_object_ptr->setProperty();
    ret = PyLong_FromLong(retOriginal);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    Py_XDECREF(pArg2Repr);
    Py_XDECREF(pArg2Str);
    // return: int
    return ret;
};

// public : setProperty
static PyObject * unigine_Node_set_property(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int num;
    PyObject *pArg2; // const Unigine::UGUID & guid;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    int num = PyBytes_AS_STRING(pArg1Str);

    // pArg2
    PyObject* pArg2Repr = PyObject_Repr(pArg2);
    PyObject* pArg2Str = PyUnicode_AsEncodedString(pArg2Repr, "utf-8", "~E~");
    const Unigine::UGUID & guid = PyBytes_AS_STRING(pArg2Str);

    int retOriginal = self->unigine_object_ptr->setProperty();
    ret = PyLong_FromLong(retOriginal);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    Py_XDECREF(pArg2Repr);
    Py_XDECREF(pArg2Str);
    // return: int
    return ret;
};

// public : setProperty
static PyObject * unigine_Node_set_property(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int num;
    PyObject *pArg2; // const Unigine::Ptr<Unigine::Property> & property;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    int num = PyBytes_AS_STRING(pArg1Str);

    // pArg2
    PyObject* pArg2Repr = PyObject_Repr(pArg2);
    PyObject* pArg2Str = PyUnicode_AsEncodedString(pArg2Repr, "utf-8", "~E~");
    const Unigine::Ptr<Unigine::Property> & property = PyBytes_AS_STRING(pArg2Str);

    int retOriginal = self->unigine_object_ptr->setProperty();
    ret = PyLong_FromLong(retOriginal);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    Py_XDECREF(pArg2Repr);
    Py_XDECREF(pArg2Str);
    // return: int
    return ret;
};

// public : insertProperty
static PyObject * unigine_Node_insert_property(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int num;
    PyObject *pArg2; // const char * name;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    int num = PyBytes_AS_STRING(pArg1Str);

    // pArg2
    PyObject* pArg2Repr = PyObject_Repr(pArg2);
    PyObject* pArg2Str = PyUnicode_AsEncodedString(pArg2Repr, "utf-8", "~E~");
    const char * name = PyBytes_AS_STRING(pArg2Str);

    int retOriginal = self->unigine_object_ptr->insertProperty();
    ret = PyLong_FromLong(retOriginal);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    Py_XDECREF(pArg2Repr);
    Py_XDECREF(pArg2Str);
    // return: int
    return ret;
};

// public : insertProperty
static PyObject * unigine_Node_insert_property(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int num;
    PyObject *pArg2; // const Unigine::UGUID & guid;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    int num = PyBytes_AS_STRING(pArg1Str);

    // pArg2
    PyObject* pArg2Repr = PyObject_Repr(pArg2);
    PyObject* pArg2Str = PyUnicode_AsEncodedString(pArg2Repr, "utf-8", "~E~");
    const Unigine::UGUID & guid = PyBytes_AS_STRING(pArg2Str);

    int retOriginal = self->unigine_object_ptr->insertProperty();
    ret = PyLong_FromLong(retOriginal);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    Py_XDECREF(pArg2Repr);
    Py_XDECREF(pArg2Str);
    // return: int
    return ret;
};

// public : insertProperty
static PyObject * unigine_Node_insert_property(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int num;
    PyObject *pArg2; // const Unigine::Ptr<Unigine::Property> & property;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    int num = PyBytes_AS_STRING(pArg1Str);

    // pArg2
    PyObject* pArg2Repr = PyObject_Repr(pArg2);
    PyObject* pArg2Str = PyUnicode_AsEncodedString(pArg2Repr, "utf-8", "~E~");
    const Unigine::Ptr<Unigine::Property> & property = PyBytes_AS_STRING(pArg2Str);

    int retOriginal = self->unigine_object_ptr->insertProperty();
    ret = PyLong_FromLong(retOriginal);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    Py_XDECREF(pArg2Repr);
    Py_XDECREF(pArg2Str);
    // return: int
    return ret;
};

// public : swapProperty
static PyObject * unigine_Node_swap_property(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int from_num;
    PyObject *pArg2; // int to_num;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    int from_num = PyBytes_AS_STRING(pArg1Str);

    // pArg2
    PyObject* pArg2Repr = PyObject_Repr(pArg2);
    PyObject* pArg2Str = PyUnicode_AsEncodedString(pArg2Repr, "utf-8", "~E~");
    int to_num = PyBytes_AS_STRING(pArg2Str);

    self->unigine_object_ptr->swapProperty(from_num, to_num);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    Py_XDECREF(pArg2Repr);
    Py_XDECREF(pArg2Str);
    // return: void
    return ret;
};

// public : removeProperty
static PyObject * unigine_Node_remove_property(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int num;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    int num = PyBytes_AS_STRING(pArg1Str);

    self->unigine_object_ptr->removeProperty(num);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: void
    return ret;
};

// public : removeProperty
static PyObject * unigine_Node_remove_property(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const char * name;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    const char * name = PyBytes_AS_STRING(pArg1Str);

    self->unigine_object_ptr->removeProperty(name);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: void
    return ret;
};

// public : removeProperty
static PyObject * unigine_Node_remove_property(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const Unigine::UGUID & guid;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    const Unigine::UGUID & guid = PyBytes_AS_STRING(pArg1Str);

    self->unigine_object_ptr->removeProperty(guid);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: void
    return ret;
};

// public : removeProperty
static PyObject * unigine_Node_remove_property(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const Unigine::Ptr<Unigine::Property> & property;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    const Unigine::Ptr<Unigine::Property> & property = PyBytes_AS_STRING(pArg1Str);

    self->unigine_object_ptr->removeProperty(property);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: void
    return ret;
};

// public : clearProperties
static PyObject * unigine_Node_clear_properties(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    self->unigine_object_ptr->clearProperties();

    // end
    // return: void
    return ret;
};

// public : getProperty
static PyObject * unigine_Node_get_property(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int num;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    int num = PyBytes_AS_STRING(pArg1Str);

    Unigine::Ptr<Unigine::Property> retOriginal = self->unigine_object_ptr->getProperty(num);
    ret = todo;

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: Unigine::Ptr<Unigine::Property>
    return ret;
};

// public : getPropertyName
static PyObject * unigine_Node_get_property_name(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int num;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    int num = PyBytes_AS_STRING(pArg1Str);

    unknown type 

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: const char *
    return ret;
};

// public : setPropertyEnabled
static PyObject * unigine_Node_set_property_enabled(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int num;
    PyObject *pArg2; // bool enable;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    int num = PyBytes_AS_STRING(pArg1Str);

    // pArg2
    PyObject* pArg2Repr = PyObject_Repr(pArg2);
    PyObject* pArg2Str = PyUnicode_AsEncodedString(pArg2Repr, "utf-8", "~E~");
    bool enable = PyBytes_AS_STRING(pArg2Str);

    self->unigine_object_ptr->setPropertyEnabled(num, enable);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    Py_XDECREF(pArg2Repr);
    Py_XDECREF(pArg2Str);
    // return: void
    return ret;
};

// public : isPropertyEnabled
static PyObject * unigine_Node_is_property_enabled(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int num;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    int num = PyBytes_AS_STRING(pArg1Str);

    bool retOriginal = self->unigine_object_ptr->isPropertyEnabled(num);
    ret = PyBool_FromLong(retOriginal);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: bool
    return ret;
};

// public : getLostNodePropertyGUID
static PyObject * unigine_Node_get_lost_node_property_guid(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int num;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    int num = PyBytes_AS_STRING(pArg1Str);

    Unigine::UGUID retOriginal = self->unigine_object_ptr->getLostNodePropertyGUID(num);
    ret = PyLong_FromLong(retOriginal);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: Unigine::UGUID
    return ret;
};

// public : setTransform
static PyObject * unigine_Node_set_transform(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const & transform;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    const & transform = PyBytes_AS_STRING(pArg1Str);

    self->unigine_object_ptr->setTransform(transform);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: void
    return ret;
};

// public : getTransform
static PyObject * unigine_Node_get_transform(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    unknown type 

    // end
    // return: 
    return ret;
};

// public : setWorldTransform
static PyObject * unigine_Node_set_world_transform(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const & transform;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    const & transform = PyBytes_AS_STRING(pArg1Str);

    self->unigine_object_ptr->setWorldTransform(transform);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: void
    return ret;
};

// public : getWorldTransform
static PyObject * unigine_Node_get_world_transform(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    unknown type 

    // end
    // return: 
    return ret;
};

// public : setOldWorldTransform
static PyObject * unigine_Node_set_old_world_transform(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const & transform;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    const & transform = PyBytes_AS_STRING(pArg1Str);

    self->unigine_object_ptr->setOldWorldTransform(transform);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: void
    return ret;
};

// public : getOldWorldTransform
static PyObject * unigine_Node_get_old_world_transform(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    unknown type 

    // end
    // return: 
    return ret;
};

// public : getOldWorldPosition
static PyObject * unigine_Node_get_old_world_position(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    unknown type 

    // end
    // return: 
    return ret;
};

// public : getIWorldTransform
static PyObject * unigine_Node_get_i_world_transform(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    unknown type 

    // end
    // return: 
    return ret;
};

// public : setTransformWithoutChildren
static PyObject * unigine_Node_set_transform_without_children(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const & transform;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    const & transform = PyBytes_AS_STRING(pArg1Str);

    self->unigine_object_ptr->setTransformWithoutChildren(transform);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: void
    return ret;
};

// public : setWorldTransformWithoutChildren
static PyObject * unigine_Node_set_world_transform_without_children(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const & transform;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    const & transform = PyBytes_AS_STRING(pArg1Str);

    self->unigine_object_ptr->setWorldTransformWithoutChildren(transform);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: void
    return ret;
};

// public : getBoundBox
static PyObject * unigine_Node_get_bound_box(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    Unigine::Math::BoundBox retOriginal = self->unigine_object_ptr->getBoundBox();
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: Unigine::Math::BoundBox
    return ret;
};

// public : getBoundSphere
static PyObject * unigine_Node_get_bound_sphere(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    Unigine::Math::BoundSphere retOriginal = self->unigine_object_ptr->getBoundSphere();
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: Unigine::Math::BoundSphere
    return ret;
};

// public : getWorldBoundBox
static PyObject * unigine_Node_get_world_bound_box(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    Unigine::Math::BoundBox retOriginal = self->unigine_object_ptr->getWorldBoundBox();
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: Unigine::Math::BoundBox
    return ret;
};

// public : getWorldBoundSphere
static PyObject * unigine_Node_get_world_bound_sphere(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    Unigine::Math::BoundSphere retOriginal = self->unigine_object_ptr->getWorldBoundSphere();
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: Unigine::Math::BoundSphere
    return ret;
};

// public : getSpatialBoundBox
static PyObject * unigine_Node_get_spatial_bound_box(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    Unigine::Math::BoundBox retOriginal = self->unigine_object_ptr->getSpatialBoundBox();
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: Unigine::Math::BoundBox
    return ret;
};

// public : getSpatialBoundSphere
static PyObject * unigine_Node_get_spatial_bound_sphere(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    Unigine::Math::BoundSphere retOriginal = self->unigine_object_ptr->getSpatialBoundSphere();
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: Unigine::Math::BoundSphere
    return ret;
};

// public : getHierarchyBoundBox
static PyObject * unigine_Node_get_hierarchy_bound_box(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    Unigine::Math::BoundBox retOriginal = self->unigine_object_ptr->getHierarchyBoundBox();
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: Unigine::Math::BoundBox
    return ret;
};

// public : getHierarchyBoundSphere
static PyObject * unigine_Node_get_hierarchy_bound_sphere(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    Unigine::Math::BoundSphere retOriginal = self->unigine_object_ptr->getHierarchyBoundSphere();
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: Unigine::Math::BoundSphere
    return ret;
};

// public : getHierarchyWorldBoundBox
static PyObject * unigine_Node_get_hierarchy_world_bound_box(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    Unigine::Math::BoundBox retOriginal = self->unigine_object_ptr->getHierarchyWorldBoundBox();
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: Unigine::Math::BoundBox
    return ret;
};

// public : getHierarchyWorldBoundSphere
static PyObject * unigine_Node_get_hierarchy_world_bound_sphere(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    Unigine::Math::BoundSphere retOriginal = self->unigine_object_ptr->getHierarchyWorldBoundSphere();
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: Unigine::Math::BoundSphere
    return ret;
};

// public : getHierarchySpatialBoundBox
static PyObject * unigine_Node_get_hierarchy_spatial_bound_box(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    Unigine::Math::BoundBox retOriginal = self->unigine_object_ptr->getHierarchySpatialBoundBox();
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: Unigine::Math::BoundBox
    return ret;
};

// public : getHierarchySpatialBoundSphere
static PyObject * unigine_Node_get_hierarchy_spatial_bound_sphere(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    Unigine::Math::BoundSphere retOriginal = self->unigine_object_ptr->getHierarchySpatialBoundSphere();
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: Unigine::Math::BoundSphere
    return ret;
};

// public : loadWorld
static PyObject * unigine_Node_load_world(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const Unigine::Ptr<Unigine::Xml> & xml;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    const Unigine::Ptr<Unigine::Xml> & xml = PyBytes_AS_STRING(pArg1Str);

    bool retOriginal = self->unigine_object_ptr->loadWorld(xml);
    ret = PyBool_FromLong(retOriginal);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: bool
    return ret;
};

// public : saveWorld
static PyObject * unigine_Node_save_world(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const Unigine::Ptr<Unigine::Xml> & xml;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    const Unigine::Ptr<Unigine::Xml> & xml = PyBytes_AS_STRING(pArg1Str);

    bool retOriginal = self->unigine_object_ptr->saveWorld(xml);
    ret = PyBool_FromLong(retOriginal);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: bool
    return ret;
};

// public : saveState
static PyObject * unigine_Node_save_state(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const Unigine::Ptr<Unigine::Stream> & stream;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    const Unigine::Ptr<Unigine::Stream> & stream = PyBytes_AS_STRING(pArg1Str);

    bool retOriginal = self->unigine_object_ptr->saveState(stream);
    ret = PyBool_FromLong(retOriginal);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: bool
    return ret;
};

// public : restoreState
static PyObject * unigine_Node_restore_state(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const Unigine::Ptr<Unigine::Stream> & stream;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    const Unigine::Ptr<Unigine::Stream> & stream = PyBytes_AS_STRING(pArg1Str);

    bool retOriginal = self->unigine_object_ptr->restoreState(stream);
    ret = PyBool_FromLong(retOriginal);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: bool
    return ret;
};

// public : getObjectBody
static PyObject * unigine_Node_get_object_body(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    Unigine::Ptr<Unigine::Body> retOriginal = self->unigine_object_ptr->getObjectBody();
    ret = todo;

    // end
    // return: Unigine::Ptr<Unigine::Body>
    return ret;
};

// public : getObjectBodyRigid
static PyObject * unigine_Node_get_object_body_rigid(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    Unigine::Ptr<Unigine::BodyRigid> retOriginal = self->unigine_object_ptr->getObjectBodyRigid();
    ret = todo;

    // end
    // return: Unigine::Ptr<Unigine::BodyRigid>
    return ret;
};

// public : getBodyLinearVelocity
static PyObject * unigine_Node_get_body_linear_velocity(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    Unigine::Math::vec3 retOriginal = self->unigine_object_ptr->getBodyLinearVelocity();
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: Unigine::Math::vec3
    return ret;
};

// public : getBodyAngularVelocity
static PyObject * unigine_Node_get_body_angular_velocity(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    Unigine::Math::vec3 retOriginal = self->unigine_object_ptr->getBodyAngularVelocity();
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: Unigine::Math::vec3
    return ret;
};

// public : getBodyWorldVelocity
static PyObject * unigine_Node_get_body_world_velocity(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const & point;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    const & point = PyBytes_AS_STRING(pArg1Str);

    Unigine::Math::vec3 retOriginal = self->unigine_object_ptr->getBodyWorldVelocity(point);
    ret = PyLong_FromLong(retOriginal);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: Unigine::Math::vec3
    return ret;
};

// public : getNumWorldTriggers
static PyObject * unigine_Node_get_num_world_triggers(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    int retOriginal = self->unigine_object_ptr->getNumWorldTriggers();
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: int
    return ret;
};

// public : getWorldTrigger
static PyObject * unigine_Node_get_world_trigger(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int num;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    int num = PyBytes_AS_STRING(pArg1Str);

    Unigine::Ptr<Unigine::WorldTrigger> retOriginal = self->unigine_object_ptr->getWorldTrigger(num);
    ret = todo;

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: Unigine::Ptr<Unigine::WorldTrigger>
    return ret;
};

// public : setPosition
static PyObject * unigine_Node_set_position(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const & pos;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    const & pos = PyBytes_AS_STRING(pArg1Str);

    self->unigine_object_ptr->setPosition(pos);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: void
    return ret;
};

// public : getPosition
static PyObject * unigine_Node_get_position(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    unknown type 

    // end
    // return: 
    return ret;
};

// public : setRotation
static PyObject * unigine_Node_set_rotation(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const Unigine::Math::quat & rot;
    PyObject *pArg2; // bool identity;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    const Unigine::Math::quat & rot = PyBytes_AS_STRING(pArg1Str);

    // pArg2
    PyObject* pArg2Repr = PyObject_Repr(pArg2);
    PyObject* pArg2Str = PyUnicode_AsEncodedString(pArg2Repr, "utf-8", "~E~");
    bool identity = PyBytes_AS_STRING(pArg2Str);

    self->unigine_object_ptr->setRotation(rot, identity);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    Py_XDECREF(pArg2Repr);
    Py_XDECREF(pArg2Str);
    // return: void
    return ret;
};

// public : getRotation
static PyObject * unigine_Node_get_rotation(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    Unigine::Math::quat retOriginal = self->unigine_object_ptr->getRotation();
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: Unigine::Math::quat
    return ret;
};

// public : setDirection
static PyObject * unigine_Node_set_direction(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const Unigine::Math::vec3 & dir;
    PyObject *pArg2; // const Unigine::Math::vec3 & up;
    PyObject *pArg3; // AXIS axis;
    PyArg_ParseTuple(args, "OOO", &pArg1, &pArg2, &pArg3);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    const Unigine::Math::vec3 & dir = PyBytes_AS_STRING(pArg1Str);

    // pArg2
    PyObject* pArg2Repr = PyObject_Repr(pArg2);
    PyObject* pArg2Str = PyUnicode_AsEncodedString(pArg2Repr, "utf-8", "~E~");
    const Unigine::Math::vec3 & up = PyBytes_AS_STRING(pArg2Str);

    // pArg3
    PyObject* pArg3Repr = PyObject_Repr(pArg3);
    PyObject* pArg3Str = PyUnicode_AsEncodedString(pArg3Repr, "utf-8", "~E~");
    AXIS axis = PyBytes_AS_STRING(pArg3Str);

    self->unigine_object_ptr->setDirection(dir, up, axis);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    Py_XDECREF(pArg2Repr);
    Py_XDECREF(pArg2Str);
    Py_XDECREF(pArg3Repr);
    Py_XDECREF(pArg3Str);
    // return: void
    return ret;
};

// public : getDirection
static PyObject * unigine_Node_get_direction(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // AXIS axis;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    AXIS axis = PyBytes_AS_STRING(pArg1Str);

    Unigine::Math::vec3 retOriginal = self->unigine_object_ptr->getDirection(axis);
    ret = PyLong_FromLong(retOriginal);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: Unigine::Math::vec3
    return ret;
};

// public : setScale
static PyObject * unigine_Node_set_scale(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const Unigine::Math::vec3 & s;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    const Unigine::Math::vec3 & s = PyBytes_AS_STRING(pArg1Str);

    self->unigine_object_ptr->setScale(s);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: void
    return ret;
};

// public : getScale
static PyObject * unigine_Node_get_scale(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    Unigine::Math::vec3 retOriginal = self->unigine_object_ptr->getScale();
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: Unigine::Math::vec3
    return ret;
};

// public : setWorldPosition
static PyObject * unigine_Node_set_world_position(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const & pos;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    const & pos = PyBytes_AS_STRING(pArg1Str);

    self->unigine_object_ptr->setWorldPosition(pos);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: void
    return ret;
};

// public : getWorldPosition
static PyObject * unigine_Node_get_world_position(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    unknown type 

    // end
    // return: 
    return ret;
};

// public : setWorldRotation
static PyObject * unigine_Node_set_world_rotation(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const Unigine::Math::quat & rot;
    PyObject *pArg2; // bool identity;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    const Unigine::Math::quat & rot = PyBytes_AS_STRING(pArg1Str);

    // pArg2
    PyObject* pArg2Repr = PyObject_Repr(pArg2);
    PyObject* pArg2Str = PyUnicode_AsEncodedString(pArg2Repr, "utf-8", "~E~");
    bool identity = PyBytes_AS_STRING(pArg2Str);

    self->unigine_object_ptr->setWorldRotation(rot, identity);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    Py_XDECREF(pArg2Repr);
    Py_XDECREF(pArg2Str);
    // return: void
    return ret;
};

// public : getWorldRotation
static PyObject * unigine_Node_get_world_rotation(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    Unigine::Math::quat retOriginal = self->unigine_object_ptr->getWorldRotation();
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: Unigine::Math::quat
    return ret;
};

// public : setWorldDirection
static PyObject * unigine_Node_set_world_direction(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const Unigine::Math::vec3 & dir;
    PyObject *pArg2; // const Unigine::Math::vec3 & up;
    PyObject *pArg3; // AXIS axis;
    PyArg_ParseTuple(args, "OOO", &pArg1, &pArg2, &pArg3);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    const Unigine::Math::vec3 & dir = PyBytes_AS_STRING(pArg1Str);

    // pArg2
    PyObject* pArg2Repr = PyObject_Repr(pArg2);
    PyObject* pArg2Str = PyUnicode_AsEncodedString(pArg2Repr, "utf-8", "~E~");
    const Unigine::Math::vec3 & up = PyBytes_AS_STRING(pArg2Str);

    // pArg3
    PyObject* pArg3Repr = PyObject_Repr(pArg3);
    PyObject* pArg3Str = PyUnicode_AsEncodedString(pArg3Repr, "utf-8", "~E~");
    AXIS axis = PyBytes_AS_STRING(pArg3Str);

    self->unigine_object_ptr->setWorldDirection(dir, up, axis);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    Py_XDECREF(pArg2Repr);
    Py_XDECREF(pArg2Str);
    Py_XDECREF(pArg3Repr);
    Py_XDECREF(pArg3Str);
    // return: void
    return ret;
};

// public : getWorldDirection
static PyObject * unigine_Node_get_world_direction(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // AXIS axis;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    AXIS axis = PyBytes_AS_STRING(pArg1Str);

    Unigine::Math::vec3 retOriginal = self->unigine_object_ptr->getWorldDirection(axis);
    ret = PyLong_FromLong(retOriginal);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: Unigine::Math::vec3
    return ret;
};

// public : setWorldScale
static PyObject * unigine_Node_set_world_scale(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const Unigine::Math::vec3 & s;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    const Unigine::Math::vec3 & s = PyBytes_AS_STRING(pArg1Str);

    self->unigine_object_ptr->setWorldScale(s);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: void
    return ret;
};

// public : getWorldScale
static PyObject * unigine_Node_get_world_scale(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    Unigine::Math::vec3 retOriginal = self->unigine_object_ptr->getWorldScale();
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: Unigine::Math::vec3
    return ret;
};

// public : translate
static PyObject * unigine_Node_translate(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const & t;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    const & t = PyBytes_AS_STRING(pArg1Str);

    self->unigine_object_ptr->translate(t);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: void
    return ret;
};

// public : translate
static PyObject * unigine_Node_translate(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; //  x;
    PyObject *pArg2; //  y;
    PyObject *pArg3; //  z;
    PyArg_ParseTuple(args, "OOO", &pArg1, &pArg2, &pArg3);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
     x = PyBytes_AS_STRING(pArg1Str);

    // pArg2
    PyObject* pArg2Repr = PyObject_Repr(pArg2);
    PyObject* pArg2Str = PyUnicode_AsEncodedString(pArg2Repr, "utf-8", "~E~");
     y = PyBytes_AS_STRING(pArg2Str);

    // pArg3
    PyObject* pArg3Repr = PyObject_Repr(pArg3);
    PyObject* pArg3Str = PyUnicode_AsEncodedString(pArg3Repr, "utf-8", "~E~");
     z = PyBytes_AS_STRING(pArg3Str);

    self->unigine_object_ptr->translate(x, y, z);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    Py_XDECREF(pArg2Repr);
    Py_XDECREF(pArg2Str);
    Py_XDECREF(pArg3Repr);
    Py_XDECREF(pArg3Str);
    // return: void
    return ret;
};

// public : rotate
static PyObject * unigine_Node_rotate(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const Unigine::Math::quat & r;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    const Unigine::Math::quat & r = PyBytes_AS_STRING(pArg1Str);

    self->unigine_object_ptr->rotate(r);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: void
    return ret;
};

// public : rotate
static PyObject * unigine_Node_rotate(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const Unigine::Math::vec3 & angles;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    const Unigine::Math::vec3 & angles = PyBytes_AS_STRING(pArg1Str);

    self->unigine_object_ptr->rotate(angles);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: void
    return ret;
};

// public : rotate
static PyObject * unigine_Node_rotate(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // float angle_x;
    PyObject *pArg2; // float angle_y;
    PyObject *pArg3; // float angle_z;
    PyArg_ParseTuple(args, "OOO", &pArg1, &pArg2, &pArg3);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    float angle_x = PyBytes_AS_STRING(pArg1Str);

    // pArg2
    PyObject* pArg2Repr = PyObject_Repr(pArg2);
    PyObject* pArg2Str = PyUnicode_AsEncodedString(pArg2Repr, "utf-8", "~E~");
    float angle_y = PyBytes_AS_STRING(pArg2Str);

    // pArg3
    PyObject* pArg3Repr = PyObject_Repr(pArg3);
    PyObject* pArg3Str = PyUnicode_AsEncodedString(pArg3Repr, "utf-8", "~E~");
    float angle_z = PyBytes_AS_STRING(pArg3Str);

    self->unigine_object_ptr->rotate(angle_x, angle_y, angle_z);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    Py_XDECREF(pArg2Repr);
    Py_XDECREF(pArg2Str);
    Py_XDECREF(pArg3Repr);
    Py_XDECREF(pArg3Str);
    // return: void
    return ret;
};

// public : worldTranslate
static PyObject * unigine_Node_world_translate(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const & t;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    const & t = PyBytes_AS_STRING(pArg1Str);

    self->unigine_object_ptr->worldTranslate(t);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: void
    return ret;
};

// public : worldTranslate
static PyObject * unigine_Node_world_translate(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; //  x;
    PyObject *pArg2; //  y;
    PyObject *pArg3; //  z;
    PyArg_ParseTuple(args, "OOO", &pArg1, &pArg2, &pArg3);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
     x = PyBytes_AS_STRING(pArg1Str);

    // pArg2
    PyObject* pArg2Repr = PyObject_Repr(pArg2);
    PyObject* pArg2Str = PyUnicode_AsEncodedString(pArg2Repr, "utf-8", "~E~");
     y = PyBytes_AS_STRING(pArg2Str);

    // pArg3
    PyObject* pArg3Repr = PyObject_Repr(pArg3);
    PyObject* pArg3Str = PyUnicode_AsEncodedString(pArg3Repr, "utf-8", "~E~");
     z = PyBytes_AS_STRING(pArg3Str);

    self->unigine_object_ptr->worldTranslate(x, y, z);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    Py_XDECREF(pArg2Repr);
    Py_XDECREF(pArg2Str);
    Py_XDECREF(pArg3Repr);
    Py_XDECREF(pArg3Str);
    // return: void
    return ret;
};

// public : worldRotate
static PyObject * unigine_Node_world_rotate(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const Unigine::Math::quat & r;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    const Unigine::Math::quat & r = PyBytes_AS_STRING(pArg1Str);

    self->unigine_object_ptr->worldRotate(r);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: void
    return ret;
};

// public : worldRotate
static PyObject * unigine_Node_world_rotate(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const Unigine::Math::vec3 & angles;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    const Unigine::Math::vec3 & angles = PyBytes_AS_STRING(pArg1Str);

    self->unigine_object_ptr->worldRotate(angles);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: void
    return ret;
};

// public : worldRotate
static PyObject * unigine_Node_world_rotate(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // float angle_x;
    PyObject *pArg2; // float angle_y;
    PyObject *pArg3; // float angle_z;
    PyArg_ParseTuple(args, "OOO", &pArg1, &pArg2, &pArg3);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    float angle_x = PyBytes_AS_STRING(pArg1Str);

    // pArg2
    PyObject* pArg2Repr = PyObject_Repr(pArg2);
    PyObject* pArg2Str = PyUnicode_AsEncodedString(pArg2Repr, "utf-8", "~E~");
    float angle_y = PyBytes_AS_STRING(pArg2Str);

    // pArg3
    PyObject* pArg3Repr = PyObject_Repr(pArg3);
    PyObject* pArg3Str = PyUnicode_AsEncodedString(pArg3Repr, "utf-8", "~E~");
    float angle_z = PyBytes_AS_STRING(pArg3Str);

    self->unigine_object_ptr->worldRotate(angle_x, angle_y, angle_z);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    Py_XDECREF(pArg2Repr);
    Py_XDECREF(pArg2Str);
    Py_XDECREF(pArg3Repr);
    Py_XDECREF(pArg3Str);
    // return: void
    return ret;
};

// public : worldLookAt
static PyObject * unigine_Node_world_look_at(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const & target;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    const & target = PyBytes_AS_STRING(pArg1Str);

    self->unigine_object_ptr->worldLookAt(target);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: void
    return ret;
};

// public : worldLookAt
static PyObject * unigine_Node_world_look_at(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const & target;
    PyObject *pArg2; // const Unigine::Math::vec3 & up;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    const & target = PyBytes_AS_STRING(pArg1Str);

    // pArg2
    PyObject* pArg2Repr = PyObject_Repr(pArg2);
    PyObject* pArg2Str = PyUnicode_AsEncodedString(pArg2Repr, "utf-8", "~E~");
    const Unigine::Math::vec3 & up = PyBytes_AS_STRING(pArg2Str);

    self->unigine_object_ptr->worldLookAt(target, up);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    Py_XDECREF(pArg2Repr);
    Py_XDECREF(pArg2Str);
    // return: void
    return ret;
};

// public : toLocal
static PyObject * unigine_Node_to_local(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const & p;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    const & p = PyBytes_AS_STRING(pArg1Str);

    Unigine::Math::vec3 retOriginal = self->unigine_object_ptr->toLocal(p);
    ret = PyLong_FromLong(retOriginal);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: Unigine::Math::vec3
    return ret;
};

// public : renderVisualizer
static PyObject * unigine_Node_render_visualizer(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    self->unigine_object_ptr->renderVisualizer();

    // end
    // return: void
    return ret;
};

// public : setVariable
static PyObject * unigine_Node_set_variable(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const Unigine::Variable & variable;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    const Unigine::Variable & variable = PyBytes_AS_STRING(pArg1Str);

    self->unigine_object_ptr->setVariable(variable);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: void
    return ret;
};

// public : getVariable
static PyObject * unigine_Node_get_variable(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    Unigine::Variable retOriginal = self->unigine_object_ptr->getVariable();
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: Unigine::Variable
    return ret;
};

// public : hasVariable
static PyObject * unigine_Node_has_variable(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    bool retOriginal = self->unigine_object_ptr->hasVariable();
    ret = PyBool_FromLong(retOriginal);

    // end
    // return: bool
    return ret;
};

// public : setVariable
static PyObject * unigine_Node_set_variable(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const char * name;
    PyObject *pArg2; // const Unigine::Variable & variable;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    const char * name = PyBytes_AS_STRING(pArg1Str);

    // pArg2
    PyObject* pArg2Repr = PyObject_Repr(pArg2);
    PyObject* pArg2Str = PyUnicode_AsEncodedString(pArg2Repr, "utf-8", "~E~");
    const Unigine::Variable & variable = PyBytes_AS_STRING(pArg2Str);

    self->unigine_object_ptr->setVariable(name, variable);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    Py_XDECREF(pArg2Repr);
    Py_XDECREF(pArg2Str);
    // return: void
    return ret;
};

// public : getVariable
static PyObject * unigine_Node_get_variable(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const char * name;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    const char * name = PyBytes_AS_STRING(pArg1Str);

    Unigine::Variable retOriginal = self->unigine_object_ptr->getVariable(name);
    ret = PyLong_FromLong(retOriginal);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: Unigine::Variable
    return ret;
};

// public : hasVariable
static PyObject * unigine_Node_has_variable(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const char * name;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    const char * name = PyBytes_AS_STRING(pArg1Str);

    bool retOriginal = self->unigine_object_ptr->hasVariable(name);
    ret = PyBool_FromLong(retOriginal);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: bool
    return ret;
};

// public : removeVariable
static PyObject * unigine_Node_remove_variable(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const char * name;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    PyObject* pArg1Repr = PyObject_Repr(pArg1);
    PyObject* pArg1Str = PyUnicode_AsEncodedString(pArg1Repr, "utf-8", "~E~");
    const char * name = PyBytes_AS_STRING(pArg1Str);

    self->unigine_object_ptr->removeVariable(name);

    // end
    Py_XDECREF(pArg1Repr);
    Py_XDECREF(pArg1Str);
    // return: void
    return ret;
};

// public : getGeodeticPivot
static PyObject * unigine_Node_get_geodetic_pivot(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    Unigine::Ptr<Unigine::GeodeticPivot> retOriginal = self->unigine_object_ptr->getGeodeticPivot();
    ret = todo;

    // end
    // return: Unigine::Ptr<Unigine::GeodeticPivot>
    return ret;
};

// public : updateEnabled
static PyObject * unigine_Node_update_enabled(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    self->unigine_object_ptr->updateEnabled();

    // end
    // return: void
    return ret;
};


static PyMethodDef unigine_Node_methods[] = {
    {
        "to_world", (PyCFunction)unigine_Node_to_world, METH_VARARGS,
        "public : toWorld"
    },
    {
        "get_clone_node", (PyCFunction)unigine_Node_get_clone_node, METH_STATIC|METH_VARARGS,
        "public (static): getCloneNode"
    },
    {
        "get_clone_property", (PyCFunction)unigine_Node_get_clone_property, METH_STATIC|METH_VARARGS,
        "public (static): getCloneProperty"
    },
    {
        "get_node", (PyCFunction)unigine_Node_get_node, METH_STATIC|METH_VARARGS,
        "public (static): getNode"
    },
    {
        "is_node", (PyCFunction)unigine_Node_is_node, METH_STATIC|METH_VARARGS,
        "public (static): isNode"
    },
    {
        "is_node", (PyCFunction)unigine_Node_is_node, METH_STATIC|METH_VARARGS,
        "public (static): isNode"
    },
    {
        "get_type_id", (PyCFunction)unigine_Node_get_type_id, METH_STATIC|METH_VARARGS,
        "public (static): getTypeID"
    },
    {
        "get_type_name", (PyCFunction)unigine_Node_get_type_name, METH_STATIC|METH_VARARGS,
        "public (static): getTypeName"
    },
    {
        "clone", (PyCFunction)unigine_Node_clone, METH_NOARGS,
        "public : clone"
    },
    {
        "swap", (PyCFunction)unigine_Node_swap, METH_VARARGS,
        "public : swap"
    },
    {
        "set_id", (PyCFunction)unigine_Node_set_id, METH_VARARGS,
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
        "set_enabled", (PyCFunction)unigine_Node_set_enabled, METH_VARARGS,
        "public : setEnabled"
    },
    {
        "is_enabled", (PyCFunction)unigine_Node_is_enabled, METH_NOARGS,
        "public : isEnabled"
    },
    {
        "set_handled", (PyCFunction)unigine_Node_set_handled, METH_VARARGS,
        "public : setHandled"
    },
    {
        "is_handled", (PyCFunction)unigine_Node_is_handled, METH_NOARGS,
        "public : isHandled"
    },
    {
        "set_immovable", (PyCFunction)unigine_Node_set_immovable, METH_VARARGS,
        "public : setImmovable"
    },
    {
        "is_immovable", (PyCFunction)unigine_Node_is_immovable, METH_NOARGS,
        "public : isImmovable"
    },
    {
        "set_trigger_interaction_enabled", (PyCFunction)unigine_Node_set_trigger_interaction_enabled, METH_VARARGS,
        "public : setTriggerInteractionEnabled"
    },
    {
        "is_trigger_interaction_enabled", (PyCFunction)unigine_Node_is_trigger_interaction_enabled, METH_NOARGS,
        "public : isTriggerInteractionEnabled"
    },
    {
        "set_grass_interaction_enabled", (PyCFunction)unigine_Node_set_grass_interaction_enabled, METH_VARARGS,
        "public : setGrassInteractionEnabled"
    },
    {
        "is_grass_interaction_enabled", (PyCFunction)unigine_Node_is_grass_interaction_enabled, METH_NOARGS,
        "public : isGrassInteractionEnabled"
    },
    {
        "set_clutter_interaction_enabled", (PyCFunction)unigine_Node_set_clutter_interaction_enabled, METH_VARARGS,
        "public : setClutterInteractionEnabled"
    },
    {
        "is_clutter_interaction_enabled", (PyCFunction)unigine_Node_is_clutter_interaction_enabled, METH_NOARGS,
        "public : isClutterInteractionEnabled"
    },
    {
        "set_query", (PyCFunction)unigine_Node_set_query, METH_VARARGS,
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
        "set_show_in_editor_enabled", (PyCFunction)unigine_Node_set_show_in_editor_enabled, METH_VARARGS,
        "public : setShowInEditorEnabled"
    },
    {
        "is_show_in_editor_enabled", (PyCFunction)unigine_Node_is_show_in_editor_enabled, METH_NOARGS,
        "public : isShowInEditorEnabled"
    },
    {
        "set_save_to_world_enabled", (PyCFunction)unigine_Node_set_save_to_world_enabled, METH_VARARGS,
        "public : setSaveToWorldEnabled"
    },
    {
        "is_save_to_world_enabled", (PyCFunction)unigine_Node_is_save_to_world_enabled, METH_NOARGS,
        "public : isSaveToWorldEnabled"
    },
    {
        "set_lifetime", (PyCFunction)unigine_Node_set_lifetime, METH_VARARGS,
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
        "set_show_in_editor_enabled_recursive", (PyCFunction)unigine_Node_set_show_in_editor_enabled_recursive, METH_VARARGS,
        "public : setShowInEditorEnabledRecursive"
    },
    {
        "set_save_to_world_enabled_recursive", (PyCFunction)unigine_Node_set_save_to_world_enabled_recursive, METH_VARARGS,
        "public : setSaveToWorldEnabledRecursive"
    },
    {
        "set_name", (PyCFunction)unigine_Node_set_name, METH_VARARGS,
        "public : setName"
    },
    {
        "get_name", (PyCFunction)unigine_Node_get_name, METH_NOARGS,
        "public : getName"
    },
    {
        "set_data", (PyCFunction)unigine_Node_set_data, METH_VARARGS,
        "public : setData"
    },
    {
        "get_data", (PyCFunction)unigine_Node_get_data, METH_VARARGS,
        "public : getData"
    },
    {
        "set_ptr", (PyCFunction)unigine_Node_set_ptr, METH_VARARGS,
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
        "get_ancestor", (PyCFunction)unigine_Node_get_ancestor, METH_VARARGS,
        "public : getAncestor"
    },
    {
        "find_ancestor", (PyCFunction)unigine_Node_find_ancestor, METH_VARARGS,
        "public : findAncestor"
    },
    {
        "find_ancestor", (PyCFunction)unigine_Node_find_ancestor, METH_VARARGS,
        "public : findAncestor"
    },
    {
        "set_parent", (PyCFunction)unigine_Node_set_parent, METH_VARARGS,
        "public : setParent"
    },
    {
        "get_parent", (PyCFunction)unigine_Node_get_parent, METH_NOARGS,
        "public : getParent"
    },
    {
        "set_world_parent", (PyCFunction)unigine_Node_set_world_parent, METH_VARARGS,
        "public : setWorldParent"
    },
    {
        "get_root_node", (PyCFunction)unigine_Node_get_root_node, METH_NOARGS,
        "public : getRootNode"
    },
    {
        "add_child", (PyCFunction)unigine_Node_add_child, METH_VARARGS,
        "public : addChild"
    },
    {
        "remove_child", (PyCFunction)unigine_Node_remove_child, METH_VARARGS,
        "public : removeChild"
    },
    {
        "add_world_child", (PyCFunction)unigine_Node_add_world_child, METH_VARARGS,
        "public : addWorldChild"
    },
    {
        "remove_world_child", (PyCFunction)unigine_Node_remove_world_child, METH_VARARGS,
        "public : removeWorldChild"
    },
    {
        "is_child", (PyCFunction)unigine_Node_is_child, METH_VARARGS,
        "public : isChild"
    },
    {
        "get_num_children", (PyCFunction)unigine_Node_get_num_children, METH_NOARGS,
        "public : getNumChildren"
    },
    {
        "find_child", (PyCFunction)unigine_Node_find_child, METH_VARARGS,
        "public : findChild"
    },
    {
        "get_child", (PyCFunction)unigine_Node_get_child, METH_VARARGS,
        "public : getChild"
    },
    {
        "set_child_index", (PyCFunction)unigine_Node_set_child_index, METH_VARARGS,
        "public : setChildIndex"
    },
    {
        "get_child_index", (PyCFunction)unigine_Node_get_child_index, METH_VARARGS,
        "public : getChildIndex"
    },
    {
        "find_node", (PyCFunction)unigine_Node_find_node, METH_VARARGS,
        "public : findNode"
    },
    {
        "get_possessor", (PyCFunction)unigine_Node_get_possessor, METH_NOARGS,
        "public : getPossessor"
    },
    {
        "get_hierarchy", (PyCFunction)unigine_Node_get_hierarchy, METH_VARARGS,
        "public : getHierarchy"
    },
    {
        "get_num_properties", (PyCFunction)unigine_Node_get_num_properties, METH_NOARGS,
        "public : getNumProperties"
    },
    {
        "add_property", (PyCFunction)unigine_Node_add_property, METH_VARARGS,
        "public : addProperty"
    },
    {
        "add_property", (PyCFunction)unigine_Node_add_property, METH_VARARGS,
        "public : addProperty"
    },
    {
        "add_property", (PyCFunction)unigine_Node_add_property, METH_VARARGS,
        "public : addProperty"
    },
    {
        "find_property", (PyCFunction)unigine_Node_find_property, METH_VARARGS,
        "public : findProperty"
    },
    {
        "find_property", (PyCFunction)unigine_Node_find_property, METH_VARARGS,
        "public : findProperty"
    },
    {
        "find_property", (PyCFunction)unigine_Node_find_property, METH_VARARGS,
        "public : findProperty"
    },
    {
        "set_property", (PyCFunction)unigine_Node_set_property, METH_VARARGS,
        "public : setProperty"
    },
    {
        "set_property", (PyCFunction)unigine_Node_set_property, METH_VARARGS,
        "public : setProperty"
    },
    {
        "set_property", (PyCFunction)unigine_Node_set_property, METH_VARARGS,
        "public : setProperty"
    },
    {
        "set_property", (PyCFunction)unigine_Node_set_property, METH_VARARGS,
        "public : setProperty"
    },
    {
        "set_property", (PyCFunction)unigine_Node_set_property, METH_VARARGS,
        "public : setProperty"
    },
    {
        "set_property", (PyCFunction)unigine_Node_set_property, METH_VARARGS,
        "public : setProperty"
    },
    {
        "insert_property", (PyCFunction)unigine_Node_insert_property, METH_VARARGS,
        "public : insertProperty"
    },
    {
        "insert_property", (PyCFunction)unigine_Node_insert_property, METH_VARARGS,
        "public : insertProperty"
    },
    {
        "insert_property", (PyCFunction)unigine_Node_insert_property, METH_VARARGS,
        "public : insertProperty"
    },
    {
        "swap_property", (PyCFunction)unigine_Node_swap_property, METH_VARARGS,
        "public : swapProperty"
    },
    {
        "remove_property", (PyCFunction)unigine_Node_remove_property, METH_VARARGS,
        "public : removeProperty"
    },
    {
        "remove_property", (PyCFunction)unigine_Node_remove_property, METH_VARARGS,
        "public : removeProperty"
    },
    {
        "remove_property", (PyCFunction)unigine_Node_remove_property, METH_VARARGS,
        "public : removeProperty"
    },
    {
        "remove_property", (PyCFunction)unigine_Node_remove_property, METH_VARARGS,
        "public : removeProperty"
    },
    {
        "clear_properties", (PyCFunction)unigine_Node_clear_properties, METH_NOARGS,
        "public : clearProperties"
    },
    {
        "get_property", (PyCFunction)unigine_Node_get_property, METH_VARARGS,
        "public : getProperty"
    },
    {
        "get_property_name", (PyCFunction)unigine_Node_get_property_name, METH_VARARGS,
        "public : getPropertyName"
    },
    {
        "set_property_enabled", (PyCFunction)unigine_Node_set_property_enabled, METH_VARARGS,
        "public : setPropertyEnabled"
    },
    {
        "is_property_enabled", (PyCFunction)unigine_Node_is_property_enabled, METH_VARARGS,
        "public : isPropertyEnabled"
    },
    {
        "get_lost_node_property_guid", (PyCFunction)unigine_Node_get_lost_node_property_guid, METH_VARARGS,
        "public : getLostNodePropertyGUID"
    },
    {
        "set_transform", (PyCFunction)unigine_Node_set_transform, METH_VARARGS,
        "public : setTransform"
    },
    {
        "get_transform", (PyCFunction)unigine_Node_get_transform, METH_NOARGS,
        "public : getTransform"
    },
    {
        "set_world_transform", (PyCFunction)unigine_Node_set_world_transform, METH_VARARGS,
        "public : setWorldTransform"
    },
    {
        "get_world_transform", (PyCFunction)unigine_Node_get_world_transform, METH_NOARGS,
        "public : getWorldTransform"
    },
    {
        "set_old_world_transform", (PyCFunction)unigine_Node_set_old_world_transform, METH_VARARGS,
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
        "set_transform_without_children", (PyCFunction)unigine_Node_set_transform_without_children, METH_VARARGS,
        "public : setTransformWithoutChildren"
    },
    {
        "set_world_transform_without_children", (PyCFunction)unigine_Node_set_world_transform_without_children, METH_VARARGS,
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
        "load_world", (PyCFunction)unigine_Node_load_world, METH_VARARGS,
        "public : loadWorld"
    },
    {
        "save_world", (PyCFunction)unigine_Node_save_world, METH_VARARGS,
        "public : saveWorld"
    },
    {
        "save_state", (PyCFunction)unigine_Node_save_state, METH_VARARGS,
        "public : saveState"
    },
    {
        "restore_state", (PyCFunction)unigine_Node_restore_state, METH_VARARGS,
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
        "get_body_world_velocity", (PyCFunction)unigine_Node_get_body_world_velocity, METH_VARARGS,
        "public : getBodyWorldVelocity"
    },
    {
        "get_num_world_triggers", (PyCFunction)unigine_Node_get_num_world_triggers, METH_NOARGS,
        "public : getNumWorldTriggers"
    },
    {
        "get_world_trigger", (PyCFunction)unigine_Node_get_world_trigger, METH_VARARGS,
        "public : getWorldTrigger"
    },
    {
        "set_position", (PyCFunction)unigine_Node_set_position, METH_VARARGS,
        "public : setPosition"
    },
    {
        "get_position", (PyCFunction)unigine_Node_get_position, METH_NOARGS,
        "public : getPosition"
    },
    {
        "set_rotation", (PyCFunction)unigine_Node_set_rotation, METH_VARARGS,
        "public : setRotation"
    },
    {
        "get_rotation", (PyCFunction)unigine_Node_get_rotation, METH_NOARGS,
        "public : getRotation"
    },
    {
        "set_direction", (PyCFunction)unigine_Node_set_direction, METH_VARARGS,
        "public : setDirection"
    },
    {
        "get_direction", (PyCFunction)unigine_Node_get_direction, METH_VARARGS,
        "public : getDirection"
    },
    {
        "set_scale", (PyCFunction)unigine_Node_set_scale, METH_VARARGS,
        "public : setScale"
    },
    {
        "get_scale", (PyCFunction)unigine_Node_get_scale, METH_NOARGS,
        "public : getScale"
    },
    {
        "set_world_position", (PyCFunction)unigine_Node_set_world_position, METH_VARARGS,
        "public : setWorldPosition"
    },
    {
        "get_world_position", (PyCFunction)unigine_Node_get_world_position, METH_NOARGS,
        "public : getWorldPosition"
    },
    {
        "set_world_rotation", (PyCFunction)unigine_Node_set_world_rotation, METH_VARARGS,
        "public : setWorldRotation"
    },
    {
        "get_world_rotation", (PyCFunction)unigine_Node_get_world_rotation, METH_NOARGS,
        "public : getWorldRotation"
    },
    {
        "set_world_direction", (PyCFunction)unigine_Node_set_world_direction, METH_VARARGS,
        "public : setWorldDirection"
    },
    {
        "get_world_direction", (PyCFunction)unigine_Node_get_world_direction, METH_VARARGS,
        "public : getWorldDirection"
    },
    {
        "set_world_scale", (PyCFunction)unigine_Node_set_world_scale, METH_VARARGS,
        "public : setWorldScale"
    },
    {
        "get_world_scale", (PyCFunction)unigine_Node_get_world_scale, METH_NOARGS,
        "public : getWorldScale"
    },
    {
        "translate", (PyCFunction)unigine_Node_translate, METH_VARARGS,
        "public : translate"
    },
    {
        "translate", (PyCFunction)unigine_Node_translate, METH_VARARGS,
        "public : translate"
    },
    {
        "rotate", (PyCFunction)unigine_Node_rotate, METH_VARARGS,
        "public : rotate"
    },
    {
        "rotate", (PyCFunction)unigine_Node_rotate, METH_VARARGS,
        "public : rotate"
    },
    {
        "rotate", (PyCFunction)unigine_Node_rotate, METH_VARARGS,
        "public : rotate"
    },
    {
        "world_translate", (PyCFunction)unigine_Node_world_translate, METH_VARARGS,
        "public : worldTranslate"
    },
    {
        "world_translate", (PyCFunction)unigine_Node_world_translate, METH_VARARGS,
        "public : worldTranslate"
    },
    {
        "world_rotate", (PyCFunction)unigine_Node_world_rotate, METH_VARARGS,
        "public : worldRotate"
    },
    {
        "world_rotate", (PyCFunction)unigine_Node_world_rotate, METH_VARARGS,
        "public : worldRotate"
    },
    {
        "world_rotate", (PyCFunction)unigine_Node_world_rotate, METH_VARARGS,
        "public : worldRotate"
    },
    {
        "world_look_at", (PyCFunction)unigine_Node_world_look_at, METH_VARARGS,
        "public : worldLookAt"
    },
    {
        "world_look_at", (PyCFunction)unigine_Node_world_look_at, METH_VARARGS,
        "public : worldLookAt"
    },
    {
        "to_local", (PyCFunction)unigine_Node_to_local, METH_VARARGS,
        "public : toLocal"
    },
    {
        "render_visualizer", (PyCFunction)unigine_Node_render_visualizer, METH_NOARGS,
        "public : renderVisualizer"
    },
    {
        "set_variable", (PyCFunction)unigine_Node_set_variable, METH_VARARGS,
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
        "set_variable", (PyCFunction)unigine_Node_set_variable, METH_VARARGS,
        "public : setVariable"
    },
    {
        "get_variable", (PyCFunction)unigine_Node_get_variable, METH_VARARGS,
        "public : getVariable"
    },
    {
        "has_variable", (PyCFunction)unigine_Node_has_variable, METH_VARARGS,
        "public : hasVariable"
    },
    {
        "remove_variable", (PyCFunction)unigine_Node_remove_variable, METH_VARARGS,
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

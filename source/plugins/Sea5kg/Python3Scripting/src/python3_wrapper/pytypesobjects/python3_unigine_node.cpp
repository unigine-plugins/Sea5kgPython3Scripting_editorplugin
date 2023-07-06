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
    self->unigine_object_ptr = nullptr;
    return (PyObject *)self;
}

static int unigine_Node_init(unigine_Node *self, PyObject *args, PyObject *kwds) {
    // nothing
    return 0;
}

// public : getName
static PyObject * unigine_Node_get_name(unigine_Node* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getName();
            };
            Unigine::Ptr<Unigine::Node> unigine_object_ptr;
            // args
            // return
            const char * retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    const char * retOriginal = pRunner->retOriginal;
    delete pRunner;

    PyObject *pName = Py_BuildValue("s", retOriginal);
    return PyUnicode_FromFormat("%S", pName);
}

// public : rotate
static PyObject * unigine_Node_rotate(unigine_Node* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // float angle_x;
    PyObject *pArg2; // float angle_y;
    PyObject *pArg3; // float angle_z;
    PyArg_ParseTuple(args, "OOO", &pArg1, &pArg2, &pArg3);
    float angle_x = PyFloat_AsDouble(pArg1);
    float angle_y = PyFloat_AsDouble(pArg2);
    float angle_z = PyFloat_AsDouble(pArg3);

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->rotate(angle_x, angle_y, angle_z);
            };
            // args
            Unigine::Ptr<Unigine::Node> unigine_object_ptr;
            float angle_x;
            float angle_y;
            float angle_z;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->angle_x = angle_x;
    pRunner->angle_y = angle_y;
    pRunner->angle_z = angle_z;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    delete pRunner;
    Py_INCREF(Py_None);
    ret = Py_None;
    assert(!PyErr_Occurred());
    assert(ret);
    goto finally;
except:
    Py_XDECREF(ret);
    ret = NULL;
finally:
    /* If we were to treat arg as a borrowed reference and had Py_INCREF'd above we
     * should do this. See below. */

    // end
    // return: void
    return ret;
};

static PyMethodDef unigine_Node_methods[] = {
    {
        "get_name", (PyCFunction)unigine_Node_get_name, METH_NOARGS,
        "public : getName"
    },
    {
        "rotate", (PyCFunction)unigine_Node_rotate, METH_VARARGS,
        "public : rotate"
    },
    {NULL}  /* Sentinel */
};

static PyTypeObject unigine_NodeType = {
    PyVarObject_HEAD_INIT(NULL, 0)
    "unigine.Node",             // tp_name
    sizeof(unigine_Node) + 256, // tp_basicsize  (TODO magic 256 bytes!!!)
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
            unigine_NodeType.tp_dict, "PARTICLES_FIELD_BEGIN",
            Py_BuildValue("i", Unigine::Node::PARTICLES_FIELD_BEGIN)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "PARTICLES_FIELD_SPACER",
            Py_BuildValue("i", Unigine::Node::PARTICLES_FIELD_SPACER)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "PARTICLES_FIELD_DEFLECTOR",
            Py_BuildValue("i", Unigine::Node::PARTICLES_FIELD_DEFLECTOR)
        );
        // enum_typename: TYPE
        PyDict_SetItemString(
            unigine_NodeType.tp_dict, "PARTICLES_FIELD_END",
            Py_BuildValue("i", Unigine::Node::PARTICLES_FIELD_END)
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
            unigine_NodeType.tp_dict, "NUM_PARTICLES_FIELDS",
            Py_BuildValue("i", Unigine::Node::NUM_PARTICLES_FIELDS)
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

PyObject * Node::NewObject(Unigine::Ptr<Unigine::Node> unigine_object_ptr) {
    // std::cout << "sizeof(unigine_Node) = " << sizeof(unigine_Node) << std::endl;
    unigine_Node *pInst = PyObject_New(unigine_Node, &unigine_NodeType);
    pInst->unigine_object_ptr = unigine_object_ptr;
    // Py_INCREF(pInst);
    return (PyObject *)pInst;
}

Unigine::Ptr<Unigine::Node> Node::Convert(PyObject *pObject) {
    if (Py_IS_TYPE(pObject, &unigine_NodeType) == 0) {
        Unigine::Log::error("Invalid type, expected 'Unigine::Ptr<Unigine::Node>', but got some another");
    }
    unigine_Node *pInst = (unigine_Node *)pObject;
    return pInst->unigine_object_ptr;
}

}; // namespace PyUnigine

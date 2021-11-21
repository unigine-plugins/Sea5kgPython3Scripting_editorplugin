
#include "python3_unigine_node.h"

#include <string>
#include <UnigineMaterials.h>

#include <UnigineLog.h>
#include <Python.h>
#include <structmember.h>

// ------------------------------------------------------------------------------------------
// unigine_Node
typedef struct {
    PyObject_HEAD
    /* Type-specific fields go here. */
    Unigine::Ptr<Unigine::Node> m_pNode;
    PyObject *first; /* first name */
    PyObject *last;  /* last name */
    int number;
} unigine_Node;

static void unigine_Node_dealloc(unigine_Node* self) {
    // Unigine::Log::message("unigine_Node_dealloc\n");
    Py_XDECREF(self->first);
    Py_XDECREF(self->last);
    Py_TYPE(self)->tp_free((PyObject*)self);
}

static PyObject *
unigine_Node_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    // Unigine::Log::message("unigine_Node_new\n");
    unigine_Node *self;

    self = (unigine_Node *)type->tp_alloc(type, 0);
    if (self != NULL) {
        self->first = PyUnicode_FromString("");
        if (self->first == NULL) {
            Py_DECREF(self);
            return NULL;
        }

        self->last = PyUnicode_FromString("");
        if (self->last == NULL) {
            Py_DECREF(self);
            return NULL;
        }

        self->number = 0;
    }

    return (PyObject *)self;
}

static int
unigine_Node_init(unigine_Node *self, PyObject *args, PyObject *kwds)
{
    // Unigine::Log::message("unigine_Node_init\n");

    PyObject *first=NULL, *last=NULL, *tmp;

    static char *kwlist[] = {
        "first",
        "last",
        "number",
        NULL
    };

    if (! PyArg_ParseTupleAndKeywords(
            args, kwds, "|OOi", kwlist,
            &first, &last,
            &self->number)
        ) {
        return -1;
    }
    

    if (first) {
        tmp = self->first;
        Py_INCREF(first);
        self->first = first;
        Py_XDECREF(tmp);
    }

    if (last) {
        tmp = self->last;
        Py_INCREF(last);
        self->last = last;
        Py_XDECREF(tmp);
    }

    return 0;
}

static PyMemberDef unigine_Node_members[] = {
    {"first", T_OBJECT_EX, offsetof(unigine_Node, first), 0,
     "first name"},
    {"last", T_OBJECT_EX, offsetof(unigine_Node, last), 0,
     "last name"},
    {"number", T_INT, offsetof(unigine_Node, number), 0,
     "unigine_Node number"},
    {NULL}  /* Sentinel */
};

static PyObject *
unigine_Node_name(unigine_Node* self)
{
    if (self->first == NULL) {
        PyErr_SetString(PyExc_AttributeError, "first");
        return NULL;
    }

    if (self->last == NULL) {
        PyErr_SetString(PyExc_AttributeError, "last");
        return NULL;
    }

    return PyUnicode_FromFormat("%S %S", self->first, self->last);
}

static PyObject *
unigine_Node_get_name(unigine_Node* self)
{
    PyErr_Clear();
    PyObject *pName = Py_BuildValue("s", self->m_pNode->getName());
    return PyUnicode_FromFormat("%S", pName);
}

static PyObject *
unigine_Node_rotate_by_angels(unigine_Node* self, PyObject *args)
{
    PyErr_Clear();
    PyObject *ret = NULL;
    assert(arg);

    //
    float angle_x;
    float angle_y;
    float angle_z;
    PyArg_ParseTuple(args, "fff", &angle_x, &angle_y, &angle_z);

    // void rotate(float angle_x, float angle_y, float angle_z);
    self->m_pNode->rotate(angle_x, angle_y, angle_z);

    // 
	// void worldRotate(float angle_x, float angle_y, float angle_z);

    Py_INCREF(Py_None);
    ret = Py_None;
    assert(! PyErr_Occurred());
    assert(ret);
    goto finally;
except:
    Py_XDECREF(ret);
    ret = NULL;
finally:
    /* If we were to treat arg as a borrowed reference and had Py_INCREF'd above we
     * should do this. See below. */
    // Py_DECREF(arg);
    return ret;
}

static PyMethodDef unigine_Node_methods[] = {
    {"name", (PyCFunction)unigine_Node_name, METH_NOARGS,
     "Return the name, combining the first and last name"
    },
    {"get_name", (PyCFunction)unigine_Node_get_name, METH_NOARGS,
     "Return the name of material"
    },
    {"rotate_by_angels", (PyCFunction)unigine_Node_rotate_by_angels, METH_VARARGS,
     "Return the name of material"
    },
    
    {NULL}  /* Sentinel */
};

static PyTypeObject unigine_NodeType = {
    PyVarObject_HEAD_INIT(&PyType_Type, 0)
    // PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "unigine.Node",
    .tp_basicsize = sizeof(unigine_Node),
    .tp_dealloc = (destructor)unigine_Node_dealloc,
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,
    .tp_doc = "Node objects",
    .tp_methods = unigine_Node_methods,
    .tp_members = unigine_Node_members,
    .tp_init = (initproc)unigine_Node_init,
    .tp_new = unigine_Node_new,
};

PyObject * PyUnigineNode::NewObject(Unigine::Ptr<Unigine::Node> pNode) {
    unigine_Node *pInst = PyObject_New(unigine_Node, &unigine_NodeType);
    pInst->m_pNode = pNode;
    return (PyObject *)pInst;
}

// UniginePyTypeObjectMaterial

bool Python3UnigineNode::isReady() {
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


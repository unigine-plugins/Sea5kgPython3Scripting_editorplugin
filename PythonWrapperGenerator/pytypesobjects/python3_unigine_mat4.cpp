// this file automaticly generated from Uniginemat4.h
#include "python3_unigine_mat4.h"

#include <string>
#include <UnigineMathLibMat4.h>
#include <UnigineLog.h>
#include <Python.h>
#include <structmember.h>

#include <iostream>

namespace PyUnigine {

// ------------------------------------------------------------------------------------------
// unigine_mat4

typedef struct {
    PyObject_HEAD
    // Type-specific fields go here.
    Unigine::mat4 * unigine_object_ptr;
} unigine_mat4;

static void unigine_mat4_dealloc(unigine_mat4* self) {
    // Unigine::Log::message("unigine_mat4_dealloc\n");
    Py_TYPE(self)->tp_free((PyObject*)self);
}

static PyObject *unigine_mat4_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    // Unigine::Log::message("unigine_mat4_new\n");
    unigine_mat4 *self;
    self = (unigine_mat4 *)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static int unigine_mat4_init(unigine_mat4 *self, PyObject *args, PyObject *kwds) {
    self->unigine_object_ptr = new Unigine::mat4();
    return 0;
}


// public : set
static PyObject * unigine_mat4_set(unigine_mat4* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    int row;
    int column;
    float v;
    // return: void

    self->unigine_object_ptr->set(row, column, v);
    return ret;
};

// public : set
static PyObject * unigine_mat4_set(unigine_mat4* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const Unigine::Math::mat2 & m;
    // return: void

    self->unigine_object_ptr->set(m);
    return ret;
};

// public : set
static PyObject * unigine_mat4_set(unigine_mat4* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const Unigine::Math::mat3 & m;
    // return: void

    self->unigine_object_ptr->set(m);
    return ret;
};

// public : set
static PyObject * unigine_mat4_set(unigine_mat4* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const Unigine::Math::mat4 & m;
    // return: void

    self->unigine_object_ptr->set(m);
    return ret;
};

// public : set
static PyObject * unigine_mat4_set(unigine_mat4* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const Unigine::Math::dmat4 & m;
    // return: void

    self->unigine_object_ptr->set(m);
    return ret;
};

// public : set
static PyObject * unigine_mat4_set(unigine_mat4* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const Unigine::Math::quat & q;
    // return: void

    self->unigine_object_ptr->set(q);
    return ret;
};

// public : set
static PyObject * unigine_mat4_set(unigine_mat4* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const float * m;
    int transpose;
    // return: void

    self->unigine_object_ptr->set(m, transpose);
    return ret;
};

// public : set
static PyObject * unigine_mat4_set(unigine_mat4* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const Unigine::Math::mat3 & m;
    const Unigine::Math::vec3 & v;
    // return: void

    self->unigine_object_ptr->set(m, v);
    return ret;
};

// public : set
static PyObject * unigine_mat4_set(unigine_mat4* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const Unigine::Math::quat & q;
    const Unigine::Math::vec3 & v;
    // return: void

    self->unigine_object_ptr->set(q, v);
    return ret;
};

// public : get
static PyObject * unigine_mat4_get(unigine_mat4* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    float * m;
    int transpose;
    // return: void

    self->unigine_object_ptr->get(m, transpose);
    return ret;
};

// public : get
static PyObject * unigine_mat4_get(unigine_mat4* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: float *

    unknown type 
    return ret;
};

// public : get
static PyObject * unigine_mat4_get(unigine_mat4* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: const float *

    unknown type 
    return ret;
};

// public : get
static PyObject * unigine_mat4_get(unigine_mat4* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    int row;
    int column;
    // return: float &

    unknown type 
    return ret;
};

// public : get
static PyObject * unigine_mat4_get(unigine_mat4* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    int row;
    int column;
    // return: float

    unknown type 
    return ret;
};

// public : setRow
static PyObject * unigine_mat4_set_row(unigine_mat4* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    int row;
    const Unigine::Math::vec4 & v;
    // return: void

    self->unigine_object_ptr->setRow(row, v);
    return ret;
};

// public : setRow3
static PyObject * unigine_mat4_set_row3(unigine_mat4* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    int row;
    const Unigine::Math::vec3 & v;
    // return: void

    self->unigine_object_ptr->setRow3(row, v);
    return ret;
};

// public : getRow
static PyObject * unigine_mat4_get_row(unigine_mat4* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    int row;
    // return: Unigine::Math::vec4

    Unigine::Math::vec4 retOriginal = self->unigine_object_ptr->getRow(row);
    ret = PyLong_FromLong(retOriginal);
    return ret;
};

// public : getRow3
static PyObject * unigine_mat4_get_row3(unigine_mat4* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    int row;
    // return: Unigine::Math::vec3

    Unigine::Math::vec3 retOriginal = self->unigine_object_ptr->getRow3(row);
    ret = PyLong_FromLong(retOriginal);
    return ret;
};

// public : setColumn
static PyObject * unigine_mat4_set_column(unigine_mat4* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    int column;
    const Unigine::Math::vec4 & v;
    // return: void

    self->unigine_object_ptr->setColumn(column, v);
    return ret;
};

// public : setColumn3
static PyObject * unigine_mat4_set_column3(unigine_mat4* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    int column;
    const Unigine::Math::vec3 & v;
    // return: void

    self->unigine_object_ptr->setColumn3(column, v);
    return ret;
};

// public : getColumn
static PyObject * unigine_mat4_get_column(unigine_mat4* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    int column;
    // return: Unigine::Math::vec4

    Unigine::Math::vec4 retOriginal = self->unigine_object_ptr->getColumn(column);
    ret = PyLong_FromLong(retOriginal);
    return ret;
};

// public : getColumn3
static PyObject * unigine_mat4_get_column3(unigine_mat4* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    int column;
    // return: Unigine::Math::vec3

    Unigine::Math::vec3 retOriginal = self->unigine_object_ptr->getColumn3(column);
    ret = PyLong_FromLong(retOriginal);
    return ret;
};

// public : getAxisX
static PyObject * unigine_mat4_get_axis_x(unigine_mat4* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: Unigine::Math::vec3

    Unigine::Math::vec3 retOriginal = self->unigine_object_ptr->getAxisX();
    ret = PyLong_FromLong(retOriginal);
    return ret;
};

// public : getAxisY
static PyObject * unigine_mat4_get_axis_y(unigine_mat4* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: Unigine::Math::vec3

    Unigine::Math::vec3 retOriginal = self->unigine_object_ptr->getAxisY();
    ret = PyLong_FromLong(retOriginal);
    return ret;
};

// public : getAxisZ
static PyObject * unigine_mat4_get_axis_z(unigine_mat4* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: Unigine::Math::vec3

    Unigine::Math::vec3 retOriginal = self->unigine_object_ptr->getAxisZ();
    ret = PyLong_FromLong(retOriginal);
    return ret;
};

// public : setDiagonal
static PyObject * unigine_mat4_set_diagonal(unigine_mat4* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const Unigine::Math::vec4 & v;
    // return: void

    self->unigine_object_ptr->setDiagonal(v);
    return ret;
};

// public : getDiagonal
static PyObject * unigine_mat4_get_diagonal(unigine_mat4* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: Unigine::Math::vec4

    Unigine::Math::vec4 retOriginal = self->unigine_object_ptr->getDiagonal();
    ret = PyLong_FromLong(retOriginal);
    return ret;
};

// public : setZero
static PyObject * unigine_mat4_set_zero(unigine_mat4* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: void

    self->unigine_object_ptr->setZero();
    return ret;
};

// public : setIdentity
static PyObject * unigine_mat4_set_identity(unigine_mat4* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: void

    self->unigine_object_ptr->setIdentity();
    return ret;
};

// public : setTranslate
static PyObject * unigine_mat4_set_translate(unigine_mat4* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const Unigine::Math::vec3 & v;
    // return: void

    self->unigine_object_ptr->setTranslate(v);
    return ret;
};

// public : getTranslate
static PyObject * unigine_mat4_get_translate(unigine_mat4* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: Unigine::Math::vec3

    Unigine::Math::vec3 retOriginal = self->unigine_object_ptr->getTranslate();
    ret = PyLong_FromLong(retOriginal);
    return ret;
};

// public : setRotate
static PyObject * unigine_mat4_set_rotate(unigine_mat4* self, PyObject *args, PyObject *kwds) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const Unigine::Math::vec3 & axis;
    float angle;
    // return: void

    self->unigine_object_ptr->setRotate(axis, angle);
    return ret;
};

// public : getRotate
static PyObject * unigine_mat4_get_rotate(unigine_mat4* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: Unigine::Math::quat

    Unigine::Math::quat retOriginal = self->unigine_object_ptr->getRotate();
    ret = PyLong_FromLong(retOriginal);
    return ret;
};

// public : setRotateX
static PyObject * unigine_mat4_set_rotate_x(unigine_mat4* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    float angle;
    // return: void

    self->unigine_object_ptr->setRotateX(angle);
    return ret;
};

// public : setRotateY
static PyObject * unigine_mat4_set_rotate_y(unigine_mat4* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    float angle;
    // return: void

    self->unigine_object_ptr->setRotateY(angle);
    return ret;
};

// public : setRotateZ
static PyObject * unigine_mat4_set_rotate_z(unigine_mat4* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    float angle;
    // return: void

    self->unigine_object_ptr->setRotateZ(angle);
    return ret;
};

// public : setScale
static PyObject * unigine_mat4_set_scale(unigine_mat4* self, PyObject *arg) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    const Unigine::Math::vec3 & v;
    // return: void

    self->unigine_object_ptr->setScale(v);
    return ret;
};

// public : getScale
static PyObject * unigine_mat4_get_scale(unigine_mat4* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: Unigine::Math::vec3

    Unigine::Math::vec3 retOriginal = self->unigine_object_ptr->getScale();
    ret = PyLong_FromLong(retOriginal);
    return ret;
};

// public : trace
static PyObject * unigine_mat4_trace(unigine_mat4* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: float

    unknown type 
    return ret;
};

// public : determinant
static PyObject * unigine_mat4_determinant(unigine_mat4* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: float

    unknown type 
    return ret;
};

// public : determinant3
static PyObject * unigine_mat4_determinant3(unigine_mat4* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // args:
    // return: float

    unknown type 
    return ret;
};


static PyMethodDef unigine_mat4_methods[] = {
    {
        "set", (PyCFunction)unigine_mat4_set, METH_VARARGS|METH_KEYWORDS,
        "public : set"
    },
    {
        "set", (PyCFunction)unigine_mat4_set, METH_O,
        "public : set"
    },
    {
        "set", (PyCFunction)unigine_mat4_set, METH_O,
        "public : set"
    },
    {
        "set", (PyCFunction)unigine_mat4_set, METH_O,
        "public : set"
    },
    {
        "set", (PyCFunction)unigine_mat4_set, METH_O,
        "public : set"
    },
    {
        "set", (PyCFunction)unigine_mat4_set, METH_O,
        "public : set"
    },
    {
        "set", (PyCFunction)unigine_mat4_set, METH_VARARGS|METH_KEYWORDS,
        "public : set"
    },
    {
        "set", (PyCFunction)unigine_mat4_set, METH_VARARGS|METH_KEYWORDS,
        "public : set"
    },
    {
        "set", (PyCFunction)unigine_mat4_set, METH_VARARGS|METH_KEYWORDS,
        "public : set"
    },
    {
        "get", (PyCFunction)unigine_mat4_get, METH_VARARGS|METH_KEYWORDS,
        "public : get"
    },
    {
        "get", (PyCFunction)unigine_mat4_get, METH_NOARGS,
        "public : get"
    },
    {
        "get", (PyCFunction)unigine_mat4_get, METH_NOARGS,
        "public : get"
    },
    {
        "get", (PyCFunction)unigine_mat4_get, METH_VARARGS|METH_KEYWORDS,
        "public : get"
    },
    {
        "get", (PyCFunction)unigine_mat4_get, METH_VARARGS|METH_KEYWORDS,
        "public : get"
    },
    {
        "set_row", (PyCFunction)unigine_mat4_set_row, METH_VARARGS|METH_KEYWORDS,
        "public : setRow"
    },
    {
        "set_row3", (PyCFunction)unigine_mat4_set_row3, METH_VARARGS|METH_KEYWORDS,
        "public : setRow3"
    },
    {
        "get_row", (PyCFunction)unigine_mat4_get_row, METH_O,
        "public : getRow"
    },
    {
        "get_row3", (PyCFunction)unigine_mat4_get_row3, METH_O,
        "public : getRow3"
    },
    {
        "set_column", (PyCFunction)unigine_mat4_set_column, METH_VARARGS|METH_KEYWORDS,
        "public : setColumn"
    },
    {
        "set_column3", (PyCFunction)unigine_mat4_set_column3, METH_VARARGS|METH_KEYWORDS,
        "public : setColumn3"
    },
    {
        "get_column", (PyCFunction)unigine_mat4_get_column, METH_O,
        "public : getColumn"
    },
    {
        "get_column3", (PyCFunction)unigine_mat4_get_column3, METH_O,
        "public : getColumn3"
    },
    {
        "get_axis_x", (PyCFunction)unigine_mat4_get_axis_x, METH_NOARGS,
        "public : getAxisX"
    },
    {
        "get_axis_y", (PyCFunction)unigine_mat4_get_axis_y, METH_NOARGS,
        "public : getAxisY"
    },
    {
        "get_axis_z", (PyCFunction)unigine_mat4_get_axis_z, METH_NOARGS,
        "public : getAxisZ"
    },
    {
        "set_diagonal", (PyCFunction)unigine_mat4_set_diagonal, METH_O,
        "public : setDiagonal"
    },
    {
        "get_diagonal", (PyCFunction)unigine_mat4_get_diagonal, METH_NOARGS,
        "public : getDiagonal"
    },
    {
        "set_zero", (PyCFunction)unigine_mat4_set_zero, METH_NOARGS,
        "public : setZero"
    },
    {
        "set_identity", (PyCFunction)unigine_mat4_set_identity, METH_NOARGS,
        "public : setIdentity"
    },
    {
        "set_translate", (PyCFunction)unigine_mat4_set_translate, METH_O,
        "public : setTranslate"
    },
    {
        "get_translate", (PyCFunction)unigine_mat4_get_translate, METH_NOARGS,
        "public : getTranslate"
    },
    {
        "set_rotate", (PyCFunction)unigine_mat4_set_rotate, METH_VARARGS|METH_KEYWORDS,
        "public : setRotate"
    },
    {
        "get_rotate", (PyCFunction)unigine_mat4_get_rotate, METH_NOARGS,
        "public : getRotate"
    },
    {
        "set_rotate_x", (PyCFunction)unigine_mat4_set_rotate_x, METH_O,
        "public : setRotateX"
    },
    {
        "set_rotate_y", (PyCFunction)unigine_mat4_set_rotate_y, METH_O,
        "public : setRotateY"
    },
    {
        "set_rotate_z", (PyCFunction)unigine_mat4_set_rotate_z, METH_O,
        "public : setRotateZ"
    },
    {
        "set_scale", (PyCFunction)unigine_mat4_set_scale, METH_O,
        "public : setScale"
    },
    {
        "get_scale", (PyCFunction)unigine_mat4_get_scale, METH_NOARGS,
        "public : getScale"
    },
    {
        "trace", (PyCFunction)unigine_mat4_trace, METH_NOARGS,
        "public : trace"
    },
    {
        "determinant", (PyCFunction)unigine_mat4_determinant, METH_NOARGS,
        "public : determinant"
    },
    {
        "determinant3", (PyCFunction)unigine_mat4_determinant3, METH_NOARGS,
        "public : determinant3"
    },
    {NULL}  /* Sentinel */
};

static PyTypeObject unigine_mat4Type = {


    PyVarObject_HEAD_INIT(NULL, 0)
    "unigine.mat4",             // tp_name
    sizeof(unigine_mat4) + 16, // tp_basicsize  (magic 16 bytes!!!)
    0,                         // tp_itemsize
    (destructor)unigine_mat4_dealloc,   // tp_dealloc
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
    "mat4 Object",         // tp_doc
    0,                         // traverseproc tp_traverse
    0,                         // inquiry tp_clear
    0,                         // richcmpfunc tp_richcompare
    0,                         // Py_ssize_t tp_weaklistoffset
    0,                         // getiterfunc tp_iter
    0,                         // iternextfunc tp_iternext
    unigine_mat4_methods, // tp_methods
    0, // tp_members
    0, // tp_getset
    0, // tp_base
    0, // tp_dict
    0, // tp_descr_get
    0, // tp_descr_set
    0, // tp_dictoffset
    (initproc)unigine_mat4_init, // tp_init
    0, // tp_alloc
    unigine_mat4_new, // tp_new
};

PyObject * mat4::NewObject(Unigine::mat4 * unigine_object_ptr) {

    std::cout << "sizeof(unigine_mat4) = " << sizeof(unigine_mat4) << std::endl;

    unigine_mat4 *pInst = PyObject_New(unigine_mat4, &unigine_mat4Type);
    pInst->unigine_object_ptr = unigine_object_ptr;
    // Py_INCREF(pInst);
    return (PyObject *)pInst;
}

Unigine::mat4 * mat4::Convert(PyObject *pObject) {
    if (Py_IS_TYPE(pObject, &unigine_mat4Type) == 0) {
        // TODO error
    }
    unigine_mat4 *pInst = (unigine_mat4 *)pObject;
    return pInst->unigine_object_ptr;
}

// UniginePyTypeObjectmat4

bool Python3Uniginemat4::isReady() {
    // Initialize tp_dict with empty dictionary
    if (!unigine_mat4Type.tp_dict) {
        unigine_mat4Type.tp_dict = PyDict_New();

    }
    if (PyType_Ready(&unigine_mat4Type) < 0) {
        return false;
    }
    return true;
}

bool Python3Uniginemat4::addClassDefinitionToModule(PyObject* pModule) {
    Py_INCREF(&unigine_mat4Type);
    if (PyModule_AddObject(pModule, "mat4", (PyObject *)&unigine_mat4Type) < 0) {
        Py_DECREF(&unigine_mat4Type);
        return false;
    }
    return true;
}


}; // namespace PyUnigine

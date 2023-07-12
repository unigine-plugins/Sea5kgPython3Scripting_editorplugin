// this file automaticly generated from Uniginevec3.h
#include "python3_unigine_vec3.h"

#include <string>
#include <UnigineMathLibVec3.h>
#include <UnigineLog.h>
#include <Python.h>
#include <structmember.h>

#include <iostream>

namespace PyUnigine {

// ------------------------------------------------------------------------------------------
// unigine_vec3

typedef struct {
    PyObject_HEAD
    // Type-specific fields go here.
    Unigine::Math::vec3 * unigine_object_ptr;
} unigine_vec3;

static void unigine_vec3_dealloc(unigine_vec3* self) {
    // Unigine::Log::message("unigine_vec3_dealloc\n");
    Py_TYPE(self)->tp_free((PyObject*)self);
}

static PyObject *unigine_vec3_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    // Unigine::Log::message("unigine_vec3_new\n");
    unigine_vec3 *self;
    self = (unigine_vec3 *)type->tp_alloc(type, 0);
    self->unigine_object_ptr = nullptr;
    return (PyObject *)self;
}

static int unigine_vec3_init(unigine_vec3 *self, PyObject *args, PyObject *kwds) {
    self->unigine_object_ptr = new Unigine::Math::vec3();
    return 0;
}

// public : set
static PyObject * unigine_vec3_set(unigine_vec3* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // float x_;
    PyObject *pArg2; // float y_;
    PyObject *pArg3; // float z_;
    PyArg_ParseTuple(args, "OOO", &pArg1, &pArg2, &pArg3);

    // pArg1
    if (!PyFloat_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"x_\" to %s must be a float object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    float x_ = PyFloat_AsDouble(pArg1);


    // pArg2
    if (!PyFloat_Check(pArg2)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"y_\" to %s must be a float object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg2)->tp_name);
        return NULL;
    }
    float y_ = PyFloat_AsDouble(pArg2);


    // pArg3
    if (!PyFloat_Check(pArg3)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"z_\" to %s must be a float object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg3)->tp_name);
        return NULL;
    }
    float z_ = PyFloat_AsDouble(pArg3);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->set(x_, y_, z_);
            };
            Unigine::Math::vec3 * unigine_object_ptr;
            // args
            float x_;
            float y_;
            float z_;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->x_ = x_;
    pRunner->y_ = y_;
    pRunner->z_ = z_;
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

static PyMethodDef unigine_vec3_methods[] = {
    {
        "set", (PyCFunction)unigine_vec3_set, METH_VARARGS,
        "public : set"
    },
    {NULL}  /* Sentinel */
};

static PyTypeObject unigine_vec3Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    "unigine.vec3",            // tp_name
    sizeof(unigine_vec3) + 256, // tp_basicsize  (TODO magic 256 bytes!!!)
    0,                         // tp_itemsize
    (destructor)unigine_vec3_dealloc,   // tp_dealloc
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
    "Math.vec3 Object",         // tp_doc
    0,                         // traverseproc tp_traverse
    0,                         // inquiry tp_clear
    0,                         // richcmpfunc tp_richcompare
    0,                         // Py_ssize_t tp_weaklistoffset
    0,                         // getiterfunc tp_iter
    0,                         // iternextfunc tp_iternext
    unigine_vec3_methods, // tp_methods
    0, // tp_members
    0, // tp_getset
    0, // tp_base
    0, // tp_dict
    0, // tp_descr_get
    0, // tp_descr_set
    0, // tp_dictoffset
    (initproc)unigine_vec3_init, // tp_init
    0, // tp_alloc
    unigine_vec3_new, // tp_new
};


// UniginePyTypeObjectvec3

bool Python3Uniginevec3::isReady() {
    // Initialize tp_dict with empty dictionary
    if (!unigine_vec3Type.tp_dict) {
        unigine_vec3Type.tp_dict = PyDict_New();

    }
    if (PyType_Ready(&unigine_vec3Type) < 0) {
        return false;
    }
    return true;
}

bool Python3Uniginevec3::addClassDefinitionToModule(PyObject* pModule) {
    Py_INCREF(&unigine_vec3Type);
    if (PyModule_AddObject(pModule, "vec3", (PyObject *)&unigine_vec3Type) < 0) {
        Py_DECREF(&unigine_vec3Type);
        return false;
    }
    return true;
}

PyObject * vec3::NewObject(Unigine::Math::vec3 * unigine_object_ptr) {
    // std::cout << "sizeof(unigine_vec3) = " << sizeof(unigine_vec3) << std::endl;
    unigine_vec3 *pInst = PyObject_New(unigine_vec3, &unigine_vec3Type);
    pInst->unigine_object_ptr = unigine_object_ptr;
    // Py_INCREF(pInst);
    return (PyObject *)pInst;
}

Unigine::Math::vec3 * vec3::Convert(PyObject *pObject) {
    if (Py_IS_TYPE(pObject, &unigine_vec3Type) == 0) {
        Unigine::Log::error("Invalid type, expected 'Unigine::Math::vec3 *', but got some another");
    }
    unigine_vec3 *pInst = (unigine_vec3 *)pObject;
    return pInst->unigine_object_ptr;
}

}; // namespace PyUnigine

// this file automaticly generated from Uniginevec2.h
#include "python3_unigine_vec2.h"

#include <string>
#include <UnigineMathLibVec2.h>
#include <UnigineLog.h>
#include <Python.h>
#include <structmember.h>

#include <iostream>

namespace PyUnigine {

// ------------------------------------------------------------------------------------------
// unigine_vec2

typedef struct {
    PyObject_HEAD
    // Type-specific fields go here.
    Unigine::Math::vec2 * unigine_object_ptr;
} unigine_vec2;

static void unigine_vec2_dealloc(unigine_vec2* self) {
    // Unigine::Log::message("unigine_vec2_dealloc\n");
    Py_TYPE(self)->tp_free((PyObject*)self);
}

static PyObject *unigine_vec2_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    // Unigine::Log::message("unigine_vec2_new\n");
    unigine_vec2 *self;
    self = (unigine_vec2 *)type->tp_alloc(type, 0);
    self->unigine_object_ptr = nullptr;
    return (PyObject *)self;
}

static int unigine_vec2_init(unigine_vec2 *self, PyObject *args, PyObject *kwds) {
    self->unigine_object_ptr = new Unigine::Math::vec2();
    return 0;
}

// public : set
static PyObject * unigine_vec2_set(unigine_vec2* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // float x_;
    PyObject *pArg2; // float y_;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

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


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->set(x_, y_);
            };
            Unigine::Math::vec2 * unigine_object_ptr;
            // args
            float x_;
            float y_;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->x_ = x_;
    pRunner->y_ = y_;
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

static PyMethodDef unigine_vec2_methods[] = {
    {
        "set", (PyCFunction)unigine_vec2_set, METH_VARARGS,
        "public : set"
    },
    {NULL}  /* Sentinel */
};

static PyTypeObject unigine_vec2Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    "unigine.vec2",             // tp_name
    sizeof(unigine_vec2) + 256, // tp_basicsize  (TODO magic 256 bytes!!!)
    0,                         // tp_itemsize
    (destructor)unigine_vec2_dealloc,   // tp_dealloc
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
    "vec2 Object",         // tp_doc
    0,                         // traverseproc tp_traverse
    0,                         // inquiry tp_clear
    0,                         // richcmpfunc tp_richcompare
    0,                         // Py_ssize_t tp_weaklistoffset
    0,                         // getiterfunc tp_iter
    0,                         // iternextfunc tp_iternext
    unigine_vec2_methods, // tp_methods
    0, // tp_members
    0, // tp_getset
    0, // tp_base
    0, // tp_dict
    0, // tp_descr_get
    0, // tp_descr_set
    0, // tp_dictoffset
    (initproc)unigine_vec2_init, // tp_init
    0, // tp_alloc
    unigine_vec2_new, // tp_new
};


// UniginePyTypeObjectvec2

bool Python3Uniginevec2::isReady() {
    // Initialize tp_dict with empty dictionary
    if (!unigine_vec2Type.tp_dict) {
        unigine_vec2Type.tp_dict = PyDict_New();

    }
    if (PyType_Ready(&unigine_vec2Type) < 0) {
        return false;
    }
    return true;
}

bool Python3Uniginevec2::addClassDefinitionToModule(PyObject* pModule) {
    Py_INCREF(&unigine_vec2Type);
    if (PyModule_AddObject(pModule, "vec2", (PyObject *)&unigine_vec2Type) < 0) {
        Py_DECREF(&unigine_vec2Type);
        return false;
    }
    return true;
}

PyObject * vec2::NewObject(Unigine::Math::vec2 * unigine_object_ptr) {
    // std::cout << "sizeof(unigine_vec2) = " << sizeof(unigine_vec2) << std::endl;
    unigine_vec2 *pInst = PyObject_New(unigine_vec2, &unigine_vec2Type);
    pInst->unigine_object_ptr = unigine_object_ptr;
    // Py_INCREF(pInst);
    return (PyObject *)pInst;
}

Unigine::Math::vec2 * vec2::Convert(PyObject *pObject) {
    if (Py_IS_TYPE(pObject, &unigine_vec2Type) == 0) {
        Unigine::Log::error("Invalid type, expected 'Unigine::Math::vec2 *', but got some another");
    }
    unigine_vec2 *pInst = (unigine_vec2 *)pObject;
    return pInst->unigine_object_ptr;
}

}; // namespace PyUnigine

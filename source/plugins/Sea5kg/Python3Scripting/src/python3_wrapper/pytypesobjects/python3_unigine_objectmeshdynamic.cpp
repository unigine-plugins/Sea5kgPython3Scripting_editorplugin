// this file automaticly generated from UnigineObjectMeshDynamic.h
#include "python3_unigine_objectmeshdynamic.h"

#include <string>
#include <UnigineObjects.h>
#include <UnigineLog.h>
#include <Python.h>
#include <structmember.h>

#include <iostream>

#include "python3_unigine_material.h"
#include "python3_unigine_mesh.h"

namespace PyUnigine {

// ------------------------------------------------------------------------------------------
// unigine_ObjectMeshDynamic

typedef struct {
    PyObject_HEAD
    // Type-specific fields go here.
    Unigine::Ptr<Unigine::ObjectMeshDynamic> unigine_object_ptr;
} unigine_ObjectMeshDynamic;

static void unigine_ObjectMeshDynamic_dealloc(unigine_ObjectMeshDynamic* self) {
    // Unigine::Log::message("unigine_ObjectMeshDynamic_dealloc\n");
    Py_TYPE(self)->tp_free((PyObject*)self);
}

static PyObject *unigine_ObjectMeshDynamic_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    // Unigine::Log::message("unigine_ObjectMeshDynamic_new\n");
    unigine_ObjectMeshDynamic *self;
    self = (unigine_ObjectMeshDynamic *)type->tp_alloc(type, 0);
    self->unigine_object_ptr = nullptr;
    return (PyObject *)self;
}

static int unigine_ObjectMeshDynamic_init(unigine_ObjectMeshDynamic *self, PyObject *args, PyObject *kwds) {
    return 0;
}


// public (static): type
static PyObject * unigine_ObjectMeshDynamic_type(unigine_ObjectMeshDynamic* self_static_null) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = Unigine::ObjectMeshDynamic::type();
            };
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    int retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: int
    return ret;
};


// public (static): create
static PyObject * unigine_ObjectMeshDynamic_create(unigine_ObjectMeshDynamic* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int flags;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"flags\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int flags = PyLong_AsLong(pArg1);

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = Unigine::ObjectMeshDynamic::create(flags);
            };
            // args
            int flags;
            // return
            Unigine::Ptr<Unigine::ObjectMeshDynamic> retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->flags = flags;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    Unigine::Ptr<Unigine::ObjectMeshDynamic> retOriginal = pRunner->retOriginal;
    delete pRunner;
    if (retOriginal == nullptr) {
        Py_INCREF(Py_None);
        ret = Py_None;
    } else {
        ret = PyUnigine::ObjectMeshDynamic::NewObject(retOriginal);
    }

    // end
    // return: Unigine::Ptr<Unigine::ObjectMeshDynamic>
    return ret;
};


// public : updateBounds
static PyObject * unigine_ObjectMeshDynamic_update_bounds(unigine_ObjectMeshDynamic* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->updateBounds();
            };
            Unigine::Ptr<Unigine::ObjectMeshDynamic> unigine_object_ptr;
            // return
            bool retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    bool retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyBool_FromLong(retOriginal);

    // end
    // return: bool
    return ret;
};

// public : updateIndices
static PyObject * unigine_ObjectMeshDynamic_update_indices(unigine_ObjectMeshDynamic* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->updateIndices();
            };
            Unigine::Ptr<Unigine::ObjectMeshDynamic> unigine_object_ptr;
            // return
            bool retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    bool retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyBool_FromLong(retOriginal);

    // end
    // return: bool
    return ret;
};

// public : setMesh
static PyObject * unigine_ObjectMeshDynamic_set_mesh(unigine_ObjectMeshDynamic* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const Unigine::Ptr<Unigine::Mesh> & mesh;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    Unigine::Ptr<Unigine::Mesh> mesh = PyUnigine::Mesh::Convert(pArg1);

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->setMesh(mesh);
            };
            Unigine::Ptr<Unigine::ObjectMeshDynamic> unigine_object_ptr;
            // args
            Unigine::Ptr<Unigine::Mesh> mesh;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->mesh = mesh;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    int retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: int
    return ret;
};

// public : updateTangents
static PyObject * unigine_ObjectMeshDynamic_update_tangents(unigine_ObjectMeshDynamic* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->updateTangents();
            };
            Unigine::Ptr<Unigine::ObjectMeshDynamic> unigine_object_ptr;
            // return
            bool retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    bool retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyBool_FromLong(retOriginal);

    // end
    // return: bool
    return ret;
};

// public : flushVertex
static PyObject * unigine_ObjectMeshDynamic_flush_vertex(unigine_ObjectMeshDynamic* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->flushVertex();
            };
            Unigine::Ptr<Unigine::ObjectMeshDynamic> unigine_object_ptr;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
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

// public : flushIndices
static PyObject * unigine_ObjectMeshDynamic_flush_indices(unigine_ObjectMeshDynamic* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->flushIndices();
            };
            Unigine::Ptr<Unigine::ObjectMeshDynamic> unigine_object_ptr;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
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

// public : isFlushed
static PyObject * unigine_ObjectMeshDynamic_is_flushed(unigine_ObjectMeshDynamic* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->isFlushed();
            };
            Unigine::Ptr<Unigine::ObjectMeshDynamic> unigine_object_ptr;
            // return
            bool retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    bool retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyBool_FromLong(retOriginal);

    // end
    // return: bool
    return ret;
};


// public (inherit from Object) : getMaterial
static PyObject * unigine_ObjectMeshDynamic_get_material(unigine_ObjectMeshDynamic* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int surface;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"surface\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int surface = PyLong_AsLong(pArg1);

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getMaterial(surface);
            };
            Unigine::Ptr<Unigine::ObjectMeshDynamic> unigine_object_ptr;
            int surface;
            // return
            Unigine::Ptr<Unigine::Material> retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->surface = surface;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    Unigine::Ptr<Unigine::Material> retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyUnigine::Material::NewObject(retOriginal);

    // end
    // return: Unigine::Ptr<Unigine::Material>
    return ret;
};

// public (inherit from Node): setShowInEditorEnabledRecursive
static PyObject * unigine_ObjectMeshDynamic_set_show_in_editor_enabled_recursive(unigine_ObjectMeshDynamic* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // bool enable;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyBool_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"enable\" to %s must be a bool object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    bool enable = pArg1 == Py_True;

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->setShowInEditorEnabledRecursive(enable);
            };
            bool enable;
            Unigine::Ptr<Unigine::ObjectMeshDynamic> unigine_object_ptr;
    };
    auto *pRunner = new LocalRunner();
    pRunner->enable = enable;
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
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

// public (inherit from Node): setSaveToWorldEnabledRecursive
static PyObject * unigine_ObjectMeshDynamic_set_save_to_world_enabled_recursive(unigine_ObjectMeshDynamic* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // bool enable;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyBool_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"enable\" to %s must be a bool object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    bool enable = pArg1 == Py_True;

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->setSaveToWorldEnabledRecursive(enable);
            };
            bool enable;
            Unigine::Ptr<Unigine::ObjectMeshDynamic> unigine_object_ptr;
    };
    auto *pRunner = new LocalRunner();
    pRunner->enable = enable;
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
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

// public (inherit from Node): setName
static PyObject * unigine_ObjectMeshDynamic_set_name(unigine_ObjectMeshDynamic* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // bool enable;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyUnicode_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"name\" to %s must be a string object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    const char * name = PyUnicode_AsUTF8(pArg1);

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->setName(name);
            };
            const char * name;
            Unigine::Ptr<Unigine::ObjectMeshDynamic> unigine_object_ptr;
    };
    auto *pRunner = new LocalRunner();
    pRunner->name = name;
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
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

static PyMethodDef unigine_ObjectMeshDynamic_methods[] = {
    {
        "type", (PyCFunction)unigine_ObjectMeshDynamic_type, METH_STATIC|METH_NOARGS,
        "public (static): type"
    },
    {
        "create", (PyCFunction)unigine_ObjectMeshDynamic_create, METH_STATIC|METH_VARARGS,
        "public (static): create"
    },
    {
        "set_mesh", (PyCFunction)unigine_ObjectMeshDynamic_set_mesh, METH_VARARGS,
        "public : setMesh"
    },
    {
        "update_bounds", (PyCFunction)unigine_ObjectMeshDynamic_update_bounds, METH_NOARGS,
        "public : updateBounds"
    },
    {
        "update_indices", (PyCFunction)unigine_ObjectMeshDynamic_update_indices, METH_NOARGS,
        "public : updateIndices"
    },
    {
        "update_tangents", (PyCFunction)unigine_ObjectMeshDynamic_update_tangents, METH_NOARGS,
        "public : updateTangents"
    },
    {
        "flush_vertex", (PyCFunction)unigine_ObjectMeshDynamic_flush_vertex, METH_NOARGS,
        "public : flushVertex"
    },
    {
        "flush_indices", (PyCFunction)unigine_ObjectMeshDynamic_flush_indices, METH_NOARGS,
        "public : flushIndices"
    },
    {
        "is_flushed", (PyCFunction)unigine_ObjectMeshDynamic_is_flushed, METH_NOARGS,
        "public : isFlushed"
    },
    {
        "set_show_in_editor_enabled_recursive", (PyCFunction)unigine_ObjectMeshDynamic_set_show_in_editor_enabled_recursive, METH_VARARGS,
        "public (inherit from Node) : setShowInEditorEnabledRecursive"
    },
    {
        "set_save_to_world_enabled_recursive", (PyCFunction)unigine_ObjectMeshDynamic_set_save_to_world_enabled_recursive, METH_VARARGS,
        "public (inherit from Node) : setSaveToWorldEnabledRecursive"
    },
    {
        "set_name", (PyCFunction)unigine_ObjectMeshDynamic_set_name, METH_VARARGS,
        "public (inherit from Node) : setName"
    },
    {
        "get_material", (PyCFunction)unigine_ObjectMeshDynamic_get_material, METH_VARARGS,
        "public (inherit from Object) : getMaterial"
    },
    {NULL}  /* Sentinel */
};

static PyTypeObject unigine_ObjectMeshDynamicType = {
    PyVarObject_HEAD_INIT(NULL, 0)
    "unigine.ObjectMeshDynamic",             // tp_name
    sizeof(unigine_ObjectMeshDynamic) + 256, // tp_basicsize  (TODO magic 256 bytes!!!)
    0,                         // tp_itemsize
    (destructor)unigine_ObjectMeshDynamic_dealloc,   // tp_dealloc
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
    "ObjectMeshDynamic Object",         // tp_doc
    0,                         // traverseproc tp_traverse
    0,                         // inquiry tp_clear
    0,                         // richcmpfunc tp_richcompare
    0,                         // Py_ssize_t tp_weaklistoffset
    0,                         // getiterfunc tp_iter
    0,                         // iternextfunc tp_iternext
    unigine_ObjectMeshDynamic_methods, // tp_methods
    0, // tp_members
    0, // tp_getset
    0, // tp_base
    0, // tp_dict
    0, // tp_descr_get
    0, // tp_descr_set
    0, // tp_dictoffset
    (initproc)unigine_ObjectMeshDynamic_init, // tp_init
    0, // tp_alloc
    unigine_ObjectMeshDynamic_new, // tp_new
};


// UniginePyTypeObjectObjectMeshDynamic

bool Python3UnigineObjectMeshDynamic::isReady() {
    // Initialize tp_dict with empty dictionary
    if (!unigine_ObjectMeshDynamicType.tp_dict) {
        unigine_ObjectMeshDynamicType.tp_dict = PyDict_New();

        PyDict_SetItemString(
            unigine_ObjectMeshDynamicType.tp_dict, "IMMUTABLE_VERTEX",
            Py_BuildValue("i", Unigine::ObjectMeshDynamic::IMMUTABLE_VERTEX)
        );
        PyDict_SetItemString(
            unigine_ObjectMeshDynamicType.tp_dict, "IMMUTABLE_INDICES",
            Py_BuildValue("i", Unigine::ObjectMeshDynamic::IMMUTABLE_INDICES)
        );
        PyDict_SetItemString(
            unigine_ObjectMeshDynamicType.tp_dict, "IMMUTABLE_ALL",
            Py_BuildValue("i", Unigine::ObjectMeshDynamic::IMMUTABLE_ALL)
        );
        PyDict_SetItemString(
            unigine_ObjectMeshDynamicType.tp_dict, "DYNAMIC_VERTEX",
            Py_BuildValue("i", Unigine::ObjectMeshDynamic::DYNAMIC_VERTEX)
        );
        PyDict_SetItemString(
            unigine_ObjectMeshDynamicType.tp_dict, "DYNAMIC_INDICES",
            Py_BuildValue("i", Unigine::ObjectMeshDynamic::DYNAMIC_INDICES)
        );
        PyDict_SetItemString(
            unigine_ObjectMeshDynamicType.tp_dict, "DYNAMIC_ALL",
            Py_BuildValue("i", Unigine::ObjectMeshDynamic::DYNAMIC_ALL)
        );
    }
    if (PyType_Ready(&unigine_ObjectMeshDynamicType) < 0) {
        return false;
    }
    return true;
}

bool Python3UnigineObjectMeshDynamic::addClassDefinitionToModule(PyObject* pModule) {
    Py_INCREF(&unigine_ObjectMeshDynamicType);
    if (PyModule_AddObject(pModule, "ObjectMeshDynamic", (PyObject *)&unigine_ObjectMeshDynamicType) < 0) {
        Py_DECREF(&unigine_ObjectMeshDynamicType);
        return false;
    }
    return true;
}

PyObject * ObjectMeshDynamic::NewObject(Unigine::Ptr<Unigine::ObjectMeshDynamic> unigine_object_ptr) {
    // std::cout << "sizeof(unigine_ObjectMeshDynamic) = " << sizeof(unigine_ObjectMeshDynamic) << std::endl;
    unigine_ObjectMeshDynamic *pInst = PyObject_New(unigine_ObjectMeshDynamic, &unigine_ObjectMeshDynamicType);
    pInst->unigine_object_ptr = unigine_object_ptr;
    // Py_INCREF(pInst);
    return (PyObject *)pInst;
}

Unigine::Ptr<Unigine::ObjectMeshDynamic> ObjectMeshDynamic::Convert(PyObject *pObject) {
    if (Py_IS_TYPE(pObject, &unigine_ObjectMeshDynamicType) == 0) {
        Unigine::Log::error("Invalid type, expected 'Unigine::Ptr<Unigine::ObjectMeshDynamic>', but got some another");
    }
    unigine_ObjectMeshDynamic *pInst = (unigine_ObjectMeshDynamic *)pObject;
    return pInst->unigine_object_ptr;
}

}; // namespace PyUnigine

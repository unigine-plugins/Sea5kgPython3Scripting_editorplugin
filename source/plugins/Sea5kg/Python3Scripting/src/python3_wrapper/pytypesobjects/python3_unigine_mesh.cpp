// this file automaticly generated from UnigineMesh.h
#include "python3_unigine_mesh.h"

#include <string>
#include <UnigineMesh.h>
#include <UnigineLog.h>
#include <Python.h>
#include <structmember.h>

#include <iostream>

#include "python3_unigine_vec3.h"
#include "python3_unigine_vec2.h"

namespace PyUnigine {

// ------------------------------------------------------------------------------------------
// unigine_Mesh

typedef struct {
    PyObject_HEAD
    // Type-specific fields go here.
    Unigine::Ptr<Unigine::Mesh> unigine_object_ptr;
} unigine_Mesh;

static void unigine_Mesh_dealloc(unigine_Mesh* self) {
    // Unigine::Log::message("unigine_Mesh_dealloc\n");
    Py_TYPE(self)->tp_free((PyObject*)self);
}

static PyObject *unigine_Mesh_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    // Unigine::Log::message("unigine_Mesh_new\n");
    unigine_Mesh *self;
    self = (unigine_Mesh *)type->tp_alloc(type, 0);
    self->unigine_object_ptr = nullptr;
    return (PyObject *)self;
}

static int unigine_Mesh_init(unigine_Mesh *self, PyObject *args, PyObject *kwds) {
    // nothing
    return 0;
}


// public (static): create
static PyObject * unigine_Mesh_create(unigine_Mesh* self_static_null) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = Unigine::Mesh::create();
            };
            // return
            Unigine::Ptr<Unigine::Mesh> retOriginal;
    };
    auto *pRunner = new LocalRunner();
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    Unigine::Ptr<Unigine::Mesh> retOriginal = pRunner->retOriginal;
    delete pRunner;
    if (retOriginal == nullptr) {
        Py_INCREF(Py_None);
        ret = Py_None;
    } else {
        ret = PyUnigine::Mesh::NewObject(retOriginal);
    }

    // end
    // return: Unigine::Ptr<Unigine::Mesh>
    return ret;
};


// public : createTangents
static PyObject * unigine_Mesh_create_tangents(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int surface;
    PyObject *pArg2; // int target;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"surface\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int surface = PyLong_AsLong(pArg1);


    // pArg2
    if (!PyLong_Check(pArg2)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"target\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg2)->tp_name);
        return NULL;
    }
    int target = PyLong_AsLong(pArg2);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->createTangents(surface, target);
            };
            Unigine::Ptr<Unigine::Mesh> unigine_object_ptr;
            // args
            int surface;
            int target;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->surface = surface;
    pRunner->target = target;
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

// public : addSurface
static PyObject * unigine_Mesh_add_surface(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const char * name;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyUnicode_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"name\" to %s must be a strint object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    const char * name = PyUnicode_AsUTF8(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->addSurface(name);
            };
            Unigine::Ptr<Unigine::Mesh> unigine_object_ptr;
            // args
            const char * name;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->name = name;
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

// public : addVertex
static PyObject * unigine_Mesh_add_vertex(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const Unigine::Math::vec3 & vertex;
    PyObject *pArg2; // int surface;
    PyObject *pArg3; // int target;
    PyArg_ParseTuple(args, "OOO", &pArg1, &pArg2, &pArg3);

    // pArg1
    const Unigine::Math::vec3 *vertex = PyUnigine::vec3::Convert(pArg1);

    // pArg2
    if (!PyLong_Check(pArg2)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"surface\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg2)->tp_name);
        return NULL;
    }
    int surface = PyLong_AsLong(pArg2);


    // pArg3
    if (!PyLong_Check(pArg3)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"target\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg3)->tp_name);
        return NULL;
    }
    int target = PyLong_AsLong(pArg3);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->addVertex(*vertex, surface, target);
            };
            Unigine::Ptr<Unigine::Mesh> unigine_object_ptr;
            // args
            const Unigine::Math::vec3 *vertex;
            int surface;
            int target;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->vertex = vertex;
    pRunner->surface = surface;
    pRunner->target = target;
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

// public : addTexCoord0
static PyObject * unigine_Mesh_add_tex_coord0(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const Unigine::Math::vec2 & texcoord;
    PyObject *pArg2; // int surface;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    const Unigine::Math::vec2 *texcoord = PyUnigine::vec2::Convert(pArg1);

    // pArg2
    if (!PyLong_Check(pArg2)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"surface\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg2)->tp_name);
        return NULL;
    }
    int surface = PyLong_AsLong(pArg2);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->addTexCoord0(*texcoord, surface);
            };
            Unigine::Ptr<Unigine::Mesh> unigine_object_ptr;
            // args
            const Unigine::Math::vec2 *texcoord;
            int surface;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->texcoord = texcoord;
    pRunner->surface = surface;
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


// public : addNormal
static PyObject * unigine_Mesh_add_normal(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const Unigine::Math::vec3 & normal;
    PyObject *pArg2 = NULL; // int surface;
    PyObject *pArg3 = NULL; // int target;
    PyArg_ParseTuple(args, "OOO", &pArg1, &pArg2, &pArg3);

    // pArg1
    const Unigine::Math::vec3 *normal = PyUnigine::vec3::Convert(pArg1);

    // pArg2
    if (!PyLong_Check(pArg2)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"surface\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg2)->tp_name);
        return NULL;
    }
    int surface = PyLong_AsLong(pArg2);


    // pArg3
    if (!PyLong_Check(pArg3)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"target\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg3)->tp_name);
        return NULL;
    }
    int target = PyLong_AsLong(pArg3);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->addNormal(*normal, surface, target);
            };
            Unigine::Ptr<Unigine::Mesh> unigine_object_ptr;
            // args
            const Unigine::Math::vec3 * normal;
            int surface;
            int target;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->normal = normal;
    pRunner->surface = surface;
    pRunner->target = target;
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

// public : addIndex
static PyObject * unigine_Mesh_add_index(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int index;
    PyObject *pArg2; // int surface;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"index\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int index = PyLong_AsLong(pArg1);


    // pArg2
    if (!PyLong_Check(pArg2)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"surface\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg2)->tp_name);
        return NULL;
    }
    int surface = PyLong_AsLong(pArg2);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->addIndex(index, surface);
            };
            Unigine::Ptr<Unigine::Mesh> unigine_object_ptr;
            // args
            int index;
            int surface;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->index = index;
    pRunner->surface = surface;
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

static PyMethodDef unigine_Mesh_methods[] = {
    {
        "create", (PyCFunction)unigine_Mesh_create, METH_STATIC|METH_NOARGS,
        "public (static): create"
    },
    {
        "create_tangents", (PyCFunction)unigine_Mesh_create_tangents, METH_VARARGS,
        "public : createTangents"
    },
    {
        "add_surface", (PyCFunction)unigine_Mesh_add_surface, METH_VARARGS,
        "public : addSurface"
    },
    {
        "add_vertex", (PyCFunction)unigine_Mesh_add_vertex, METH_VARARGS,
        "public : addVertex"
    },
    {
        "add_tex_coord0", (PyCFunction)unigine_Mesh_add_tex_coord0, METH_VARARGS,
        "public : addTexCoord0"
    },
    {
        "add_normal", (PyCFunction)unigine_Mesh_add_normal, METH_VARARGS,
        "public : addNormal"
    },
    {
        "add_index", (PyCFunction)unigine_Mesh_add_index, METH_VARARGS,
        "public : addIndex"
    },
    {NULL}  /* Sentinel */
};

static PyTypeObject unigine_MeshType = {
    PyVarObject_HEAD_INIT(NULL, 0)
    "unigine.Mesh",             // tp_name
    sizeof(unigine_Mesh) + 256, // tp_basicsize  (TODO magic 256 bytes!!!)
    0,                         // tp_itemsize
    (destructor)unigine_Mesh_dealloc,   // tp_dealloc
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
    "Mesh Object",         // tp_doc
    0,                         // traverseproc tp_traverse
    0,                         // inquiry tp_clear
    0,                         // richcmpfunc tp_richcompare
    0,                         // Py_ssize_t tp_weaklistoffset
    0,                         // getiterfunc tp_iter
    0,                         // iternextfunc tp_iternext
    unigine_Mesh_methods, // tp_methods
    0, // tp_members
    0, // tp_getset
    0, // tp_base
    0, // tp_dict
    0, // tp_descr_get
    0, // tp_descr_set
    0, // tp_dictoffset
    (initproc)unigine_Mesh_init, // tp_init
    0, // tp_alloc
    unigine_Mesh_new, // tp_new
};


// UniginePyTypeObjectMesh

bool Python3UnigineMesh::isReady() {
    // Initialize tp_dict with empty dictionary
    if (!unigine_MeshType.tp_dict) {
        unigine_MeshType.tp_dict = PyDict_New();

        // enum_typename: LIGHTMAP_RESOLUTION
        PyDict_SetItemString(
            unigine_MeshType.tp_dict, "LIGHTMAP_RESOLUTION_MODE_32",
            Py_BuildValue("i", Unigine::Mesh::LIGHTMAP_RESOLUTION_MODE_32)
        );
        // enum_typename: LIGHTMAP_RESOLUTION
        PyDict_SetItemString(
            unigine_MeshType.tp_dict, "LIGHTMAP_RESOLUTION_MODE_64",
            Py_BuildValue("i", Unigine::Mesh::LIGHTMAP_RESOLUTION_MODE_64)
        );
        // enum_typename: LIGHTMAP_RESOLUTION
        PyDict_SetItemString(
            unigine_MeshType.tp_dict, "LIGHTMAP_RESOLUTION_MODE_128",
            Py_BuildValue("i", Unigine::Mesh::LIGHTMAP_RESOLUTION_MODE_128)
        );
        // enum_typename: LIGHTMAP_RESOLUTION
        PyDict_SetItemString(
            unigine_MeshType.tp_dict, "LIGHTMAP_RESOLUTION_MODE_256",
            Py_BuildValue("i", Unigine::Mesh::LIGHTMAP_RESOLUTION_MODE_256)
        );
        // enum_typename: LIGHTMAP_RESOLUTION
        PyDict_SetItemString(
            unigine_MeshType.tp_dict, "LIGHTMAP_RESOLUTION_MODE_512",
            Py_BuildValue("i", Unigine::Mesh::LIGHTMAP_RESOLUTION_MODE_512)
        );
        // enum_typename: LIGHTMAP_RESOLUTION
        PyDict_SetItemString(
            unigine_MeshType.tp_dict, "LIGHTMAP_RESOLUTION_MODE_1024",
            Py_BuildValue("i", Unigine::Mesh::LIGHTMAP_RESOLUTION_MODE_1024)
        );
        // enum_typename: LIGHTMAP_RESOLUTION
        PyDict_SetItemString(
            unigine_MeshType.tp_dict, "LIGHTMAP_RESOLUTION_MODE_2048",
            Py_BuildValue("i", Unigine::Mesh::LIGHTMAP_RESOLUTION_MODE_2048)
        );
        // enum_typename: LIGHTMAP_RESOLUTION
        PyDict_SetItemString(
            unigine_MeshType.tp_dict, "LIGHTMAP_RESOLUTION_MODE_4096",
            Py_BuildValue("i", Unigine::Mesh::LIGHTMAP_RESOLUTION_MODE_4096)
        );
        PyDict_SetItemString(
            unigine_MeshType.tp_dict, "VERTEX_CACHE",
            Py_BuildValue("i", Unigine::Mesh::VERTEX_CACHE)
        );
        PyDict_SetItemString(
            unigine_MeshType.tp_dict, "BACK_TO_FRONT",
            Py_BuildValue("i", Unigine::Mesh::BACK_TO_FRONT)
        );
        PyDict_SetItemString(
            unigine_MeshType.tp_dict, "NUM_WEIGHTS",
            Py_BuildValue("i", Unigine::Mesh::NUM_WEIGHTS)
        );
    }
    if (PyType_Ready(&unigine_MeshType) < 0) {
        return false;
    }
    return true;
}

bool Python3UnigineMesh::addClassDefinitionToModule(PyObject* pModule) {
    Py_INCREF(&unigine_MeshType);
    if (PyModule_AddObject(pModule, "Mesh", (PyObject *)&unigine_MeshType) < 0) {
        Py_DECREF(&unigine_MeshType);
        return false;
    }
    return true;
}

PyObject * Mesh::NewObject(Unigine::Ptr<Unigine::Mesh> unigine_object_ptr) {
    // std::cout << "sizeof(unigine_Mesh) = " << sizeof(unigine_Mesh) << std::endl;
    unigine_Mesh *pInst = PyObject_New(unigine_Mesh, &unigine_MeshType);
    pInst->unigine_object_ptr = unigine_object_ptr;
    // Py_INCREF(pInst);
    return (PyObject *)pInst;
}

Unigine::Ptr<Unigine::Mesh> Mesh::Convert(PyObject *pObject) {
    if (Py_IS_TYPE(pObject, &unigine_MeshType) == 0) {
        Unigine::Log::error("Invalid type, expected 'Unigine::Ptr<Unigine::Mesh>', but got some another");
    }
    unigine_Mesh *pInst = (unigine_Mesh *)pObject;
    return pInst->unigine_object_ptr;
}

}; // namespace PyUnigine

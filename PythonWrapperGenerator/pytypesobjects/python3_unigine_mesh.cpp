// this file automaticly generated from UnigineMesh.h
#include "python3_unigine_mesh.h"

#include <string>
#include <UnigineMesh.h>
#include <UnigineLog.h>
#include <Python.h>
#include <structmember.h>

#include <iostream>

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
            // args
            // return
            Unigine::Ptr<Unigine::Mesh> retOriginal;
    };
    auto *pRunner = new LocalRunner();
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
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

// public (static): create
static PyObject * unigine_Mesh_create(unigine_Mesh* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const char * name;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyUnicode_Check(pArg1)) {
        // TODO - error
        std::cout << "ERROR: pArg1 No unicoode " << std::endl;
        Py_INCREF(Py_None);
        ret = Py_None;
        return ret;
    }
    const char * name = PyUnicode_AsUTF8(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = Unigine::Mesh::create(name);
            };
            // args
            const char * name;
            // return
            Unigine::Ptr<Unigine::Mesh> retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->name = name;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
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

// public (static): create
static PyObject * unigine_Mesh_create(unigine_Mesh* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const Unigine::Ptr<Unigine::Mesh> & mesh;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for const Unigine::Ptr<Unigine::Mesh> &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = Unigine::Mesh::create(mesh);
            };
            // args
            const Unigine::Ptr<Unigine::Mesh> & mesh;
            // return
            Unigine::Ptr<Unigine::Mesh> retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->mesh = mesh;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
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

// public : assignFrom
static PyObject * unigine_Mesh_assign_from(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const Unigine::Ptr<Unigine::Mesh> & mesh;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for const Unigine::Ptr<Unigine::Mesh> &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->assignFrom(mesh);
            };
            // args
            const Unigine::Ptr<Unigine::Mesh> & mesh;
    };
    auto *pRunner = new LocalRunner();
    pRunner->mesh = mesh;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    delete pRunner;
    Py_INCREF(Py_None);
    ret = Py_None;

    // end
    // return: void
    return ret;
};

// public : info
static PyObject * unigine_Mesh_info(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const char * name;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyUnicode_Check(pArg1)) {
        // TODO - error
        std::cout << "ERROR: pArg1 No unicoode " << std::endl;
        Py_INCREF(Py_None);
        ret = Py_None;
        return ret;
    }
    const char * name = PyUnicode_AsUTF8(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->info(name);
            };
            // args
            const char * name;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->name = name;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    int retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: int
    return ret;
};

// public : load
static PyObject * unigine_Mesh_load(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const char * name;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyUnicode_Check(pArg1)) {
        // TODO - error
        std::cout << "ERROR: pArg1 No unicoode " << std::endl;
        Py_INCREF(Py_None);
        ret = Py_None;
        return ret;
    }
    const char * name = PyUnicode_AsUTF8(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->load(name);
            };
            // args
            const char * name;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->name = name;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    int retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: int
    return ret;
};

// public : save
static PyObject * unigine_Mesh_save(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const char * name;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyUnicode_Check(pArg1)) {
        // TODO - error
        std::cout << "ERROR: pArg1 No unicoode " << std::endl;
        Py_INCREF(Py_None);
        ret = Py_None;
        return ret;
    }
    const char * name = PyUnicode_AsUTF8(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->save(name);
            };
            // args
            const char * name;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->name = name;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    int retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: int
    return ret;
};

// public : clear
static PyObject * unigine_Mesh_clear(unigine_Mesh* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->clear();
            };
            // args
    };
    auto *pRunner = new LocalRunner();
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    delete pRunner;
    Py_INCREF(Py_None);
    ret = Py_None;

    // end
    // return: void
    return ret;
};

// public : flipYZ
static PyObject * unigine_Mesh_flip_yz(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int surface;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->flipYZ(surface);
            };
            // args
            int surface;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->surface = surface;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    int retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: int
    return ret;
};

// public : flipTangent
static PyObject * unigine_Mesh_flip_tangent(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int surface;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->flipTangent(surface);
            };
            // args
            int surface;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->surface = surface;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    int retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: int
    return ret;
};

// public : createBounds
static PyObject * unigine_Mesh_create_bounds(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int surface;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->createBounds(surface);
            };
            // args
            int surface;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->surface = surface;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    int retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: int
    return ret;
};

// public : removeIndices
static PyObject * unigine_Mesh_remove_indices(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int surface;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->removeIndices(surface);
            };
            // args
            int surface;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->surface = surface;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    int retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: int
    return ret;
};

// public : createIndices
static PyObject * unigine_Mesh_create_indices(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int surface;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->createIndices(surface);
            };
            // args
            int surface;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->surface = surface;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    int retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: int
    return ret;
};

// public : optimizeIndices
static PyObject * unigine_Mesh_optimize_indices(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int flags;
    PyObject *pArg2; // int surface;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
TODO for int


    // pArg2
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->optimizeIndices(flags, surface);
            };
            // args
            int flags;
            int surface;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->flags = flags;
    pRunner->surface = surface;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    int retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: int
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
TODO for int


    // pArg2
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->createTangents(surface, target);
            };
            // args
            int surface;
            int target;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->surface = surface;
    pRunner->target = target;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    int retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: int
    return ret;
};

// public : createTangents
static PyObject * unigine_Mesh_create_tangents(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // float angle;
    PyObject *pArg2; // const Unigine::Vector<int> & surfaces;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
TODO for float


    // pArg2
TODO for const Unigine::Vector<int> &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->createTangents(angle, surfaces);
            };
            // args
            float angle;
            const Unigine::Vector<int> & surfaces;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->angle = angle;
    pRunner->surfaces = surfaces;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    int retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: int
    return ret;
};

// public : createNormals
static PyObject * unigine_Mesh_create_normals(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int surface;
    PyObject *pArg2; // int target;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
TODO for int


    // pArg2
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->createNormals(surface, target);
            };
            // args
            int surface;
            int target;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->surface = surface;
    pRunner->target = target;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    int retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: int
    return ret;
};

// public : createNormals
static PyObject * unigine_Mesh_create_normals(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // float angle;
    PyObject *pArg2; // int surface;
    PyObject *pArg3; // int target;
    PyArg_ParseTuple(args, "OOO", &pArg1, &pArg2, &pArg3);

    // pArg1
TODO for float


    // pArg2
TODO for int


    // pArg3
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->createNormals(angle, surface, target);
            };
            // args
            float angle;
            int surface;
            int target;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->angle = angle;
    pRunner->surface = surface;
    pRunner->target = target;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    int retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: int
    return ret;
};

// public : getNumBones
static PyObject * unigine_Mesh_get_num_bones(unigine_Mesh* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->getNumBones();
            };
            // args
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    int retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: int
    return ret;
};

// public : findBone
static PyObject * unigine_Mesh_find_bone(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const char * name;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyUnicode_Check(pArg1)) {
        // TODO - error
        std::cout << "ERROR: pArg1 No unicoode " << std::endl;
        Py_INCREF(Py_None);
        ret = Py_None;
        return ret;
    }
    const char * name = PyUnicode_AsUTF8(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->findBone(name);
            };
            // args
            const char * name;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->name = name;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    int retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: int
    return ret;
};

// public : addBone
static PyObject * unigine_Mesh_add_bone(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const char * name;
    PyObject *pArg2; // int parent;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    if (!PyUnicode_Check(pArg1)) {
        // TODO - error
        std::cout << "ERROR: pArg1 No unicoode " << std::endl;
        Py_INCREF(Py_None);
        ret = Py_None;
        return ret;
    }
    const char * name = PyUnicode_AsUTF8(pArg1);


    // pArg2
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->addBone(name, parent);
            };
            // args
            const char * name;
            int parent;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->name = name;
    pRunner->parent = parent;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    int retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: int
    return ret;
};

// public : setBoneName
static PyObject * unigine_Mesh_set_bone_name(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int bone;
    PyObject *pArg2; // const char * name;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
TODO for int


    // pArg2
    if (!PyUnicode_Check(pArg2)) {
        // TODO - error
        std::cout << "ERROR: pArg2 No unicoode " << std::endl;
        Py_INCREF(Py_None);
        ret = Py_None;
        return ret;
    }
    const char * name = PyUnicode_AsUTF8(pArg2);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->setBoneName(bone, name);
            };
            // args
            int bone;
            const char * name;
    };
    auto *pRunner = new LocalRunner();
    pRunner->bone = bone;
    pRunner->name = name;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    delete pRunner;
    Py_INCREF(Py_None);
    ret = Py_None;

    // end
    // return: void
    return ret;
};

// public : getBoneName
static PyObject * unigine_Mesh_get_bone_name(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int bone;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->getBoneName(bone);
            };
            // args
            int bone;
            // return
            const char * retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->bone = bone;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    const char * retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = TODO: unknown type 'const char *'

    // end
    // return: const char *
    return ret;
};

// public : setBoneParent
static PyObject * unigine_Mesh_set_bone_parent(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int bone;
    PyObject *pArg2; // int parent;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
TODO for int


    // pArg2
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->setBoneParent(bone, parent);
            };
            // args
            int bone;
            int parent;
    };
    auto *pRunner = new LocalRunner();
    pRunner->bone = bone;
    pRunner->parent = parent;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    delete pRunner;
    Py_INCREF(Py_None);
    ret = Py_None;

    // end
    // return: void
    return ret;
};

// public : getBoneParent
static PyObject * unigine_Mesh_get_bone_parent(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int bone;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->getBoneParent(bone);
            };
            // args
            int bone;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->bone = bone;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    int retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: int
    return ret;
};

// public : setBoneTransform
static PyObject * unigine_Mesh_set_bone_transform(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int bone;
    PyObject *pArg2; // const Unigine::Math::mat4 & transform;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
TODO for int


    // pArg2
TODO for const Unigine::Math::mat4 &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->setBoneTransform(bone, transform);
            };
            // args
            int bone;
            const Unigine::Math::mat4 & transform;
    };
    auto *pRunner = new LocalRunner();
    pRunner->bone = bone;
    pRunner->transform = transform;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    delete pRunner;
    Py_INCREF(Py_None);
    ret = Py_None;

    // end
    // return: void
    return ret;
};

// public : getBoneTransform
static PyObject * unigine_Mesh_get_bone_transform(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int bone;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->getBoneTransform(bone);
            };
            // args
            int bone;
            // return
            Unigine::Math::mat4 retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->bone = bone;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    Unigine::Math::mat4 retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: Unigine::Math::mat4
    return ret;
};

// public : setBoneTransforms
static PyObject * unigine_Mesh_set_bone_transforms(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const Unigine::Vector<Unigine::Math::mat4> & transforms;
    PyObject *pArg2; // int animation;
    PyObject *pArg3; // int frame;
    PyArg_ParseTuple(args, "OOO", &pArg1, &pArg2, &pArg3);

    // pArg1
TODO for const Unigine::Vector<Unigine::Math::mat4> &


    // pArg2
TODO for int


    // pArg3
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->setBoneTransforms(transforms, animation, frame);
            };
            // args
            const Unigine::Vector<Unigine::Math::mat4> & transforms;
            int animation;
            int frame;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->transforms = transforms;
    pRunner->animation = animation;
    pRunner->frame = frame;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    int retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: int
    return ret;
};

// public : getBoneTransforms
static PyObject * unigine_Mesh_get_bone_transforms(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // Unigine::Vector<Unigine::Math::mat4> & transforms;
    PyObject *pArg2; // int animation;
    PyObject *pArg3; // int frame;
    PyArg_ParseTuple(args, "OOO", &pArg1, &pArg2, &pArg3);

    // pArg1
TODO for Unigine::Vector<Unigine::Math::mat4> &


    // pArg2
TODO for int


    // pArg3
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->getBoneTransforms(transforms, animation, frame);
            };
            // args
            Unigine::Vector<Unigine::Math::mat4> & transforms;
            int animation;
            int frame;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->transforms = transforms;
    pRunner->animation = animation;
    pRunner->frame = frame;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    int retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: int
    return ret;
};

// public : getNumAnimations
static PyObject * unigine_Mesh_get_num_animations(unigine_Mesh* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->getNumAnimations();
            };
            // args
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    int retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: int
    return ret;
};

// public : findAnimation
static PyObject * unigine_Mesh_find_animation(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const char * name;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyUnicode_Check(pArg1)) {
        // TODO - error
        std::cout << "ERROR: pArg1 No unicoode " << std::endl;
        Py_INCREF(Py_None);
        ret = Py_None;
        return ret;
    }
    const char * name = PyUnicode_AsUTF8(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->findAnimation(name);
            };
            // args
            const char * name;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->name = name;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    int retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: int
    return ret;
};

// public : sortAnimations
static PyObject * unigine_Mesh_sort_animations(unigine_Mesh* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->sortAnimations();
            };
            // args
    };
    auto *pRunner = new LocalRunner();
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    delete pRunner;
    Py_INCREF(Py_None);
    ret = Py_None;

    // end
    // return: void
    return ret;
};

// public : addAnimation
static PyObject * unigine_Mesh_add_animation(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const char * name;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyUnicode_Check(pArg1)) {
        // TODO - error
        std::cout << "ERROR: pArg1 No unicoode " << std::endl;
        Py_INCREF(Py_None);
        ret = Py_None;
        return ret;
    }
    const char * name = PyUnicode_AsUTF8(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->addAnimation(name);
            };
            // args
            const char * name;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->name = name;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    int retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: int
    return ret;
};

// public : setAnimationName
static PyObject * unigine_Mesh_set_animation_name(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int animation;
    PyObject *pArg2; // const char * name;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
TODO for int


    // pArg2
    if (!PyUnicode_Check(pArg2)) {
        // TODO - error
        std::cout << "ERROR: pArg2 No unicoode " << std::endl;
        Py_INCREF(Py_None);
        ret = Py_None;
        return ret;
    }
    const char * name = PyUnicode_AsUTF8(pArg2);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->setAnimationName(animation, name);
            };
            // args
            int animation;
            const char * name;
    };
    auto *pRunner = new LocalRunner();
    pRunner->animation = animation;
    pRunner->name = name;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    delete pRunner;
    Py_INCREF(Py_None);
    ret = Py_None;

    // end
    // return: void
    return ret;
};

// public : getAnimationName
static PyObject * unigine_Mesh_get_animation_name(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int animation;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->getAnimationName(animation);
            };
            // args
            int animation;
            // return
            const char * retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->animation = animation;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    const char * retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = TODO: unknown type 'const char *'

    // end
    // return: const char *
    return ret;
};

// public : setAnimationBones
static PyObject * unigine_Mesh_set_animation_bones(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int animation;
    PyObject *pArg2; // const Unigine::Vector<short> & bones;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
TODO for int


    // pArg2
TODO for const Unigine::Vector<short> &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->setAnimationBones(animation, bones);
            };
            // args
            int animation;
            const Unigine::Vector<short> & bones;
    };
    auto *pRunner = new LocalRunner();
    pRunner->animation = animation;
    pRunner->bones = bones;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    delete pRunner;
    Py_INCREF(Py_None);
    ret = Py_None;

    // end
    // return: void
    return ret;
};

// public : getAnimationBones
static PyObject * unigine_Mesh_get_animation_bones(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int animation;
    PyObject *pArg2; // Unigine::Vector<short> & bones;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
TODO for int


    // pArg2
TODO for Unigine::Vector<short> &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->getAnimationBones(animation, bones);
            };
            // args
            int animation;
            Unigine::Vector<short> & bones;
    };
    auto *pRunner = new LocalRunner();
    pRunner->animation = animation;
    pRunner->bones = bones;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    delete pRunner;
    Py_INCREF(Py_None);
    ret = Py_None;

    // end
    // return: void
    return ret;
};

// public : setNumAnimationFrames
static PyObject * unigine_Mesh_set_num_animation_frames(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int animation;
    PyObject *pArg2; // int num;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
TODO for int


    // pArg2
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->setNumAnimationFrames(animation, num);
            };
            // args
            int animation;
            int num;
    };
    auto *pRunner = new LocalRunner();
    pRunner->animation = animation;
    pRunner->num = num;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    delete pRunner;
    Py_INCREF(Py_None);
    ret = Py_None;

    // end
    // return: void
    return ret;
};

// public : getNumAnimationFrames
static PyObject * unigine_Mesh_get_num_animation_frames(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int animation;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->getNumAnimationFrames(animation);
            };
            // args
            int animation;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->animation = animation;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    int retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: int
    return ret;
};

// public : setAnimationFrame
static PyObject * unigine_Mesh_set_animation_frame(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int animation;
    PyObject *pArg2; // int num;
    PyObject *pArg3; // const Unigine::Vector<Unigine::Math::mat4> & frames;
    PyArg_ParseTuple(args, "OOO", &pArg1, &pArg2, &pArg3);

    // pArg1
TODO for int


    // pArg2
TODO for int


    // pArg3
TODO for const Unigine::Vector<Unigine::Math::mat4> &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->setAnimationFrame(animation, num, frames);
            };
            // args
            int animation;
            int num;
            const Unigine::Vector<Unigine::Math::mat4> & frames;
    };
    auto *pRunner = new LocalRunner();
    pRunner->animation = animation;
    pRunner->num = num;
    pRunner->frames = frames;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    delete pRunner;
    Py_INCREF(Py_None);
    ret = Py_None;

    // end
    // return: void
    return ret;
};

// public : getAnimationFrame
static PyObject * unigine_Mesh_get_animation_frame(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int animation;
    PyObject *pArg2; // int num;
    PyObject *pArg3; // Unigine::Vector<Unigine::Math::mat4> & frames;
    PyArg_ParseTuple(args, "OOO", &pArg1, &pArg2, &pArg3);

    // pArg1
TODO for int


    // pArg2
TODO for int


    // pArg3
TODO for Unigine::Vector<Unigine::Math::mat4> &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->getAnimationFrame(animation, num, frames);
            };
            // args
            int animation;
            int num;
            Unigine::Vector<Unigine::Math::mat4> & frames;
    };
    auto *pRunner = new LocalRunner();
    pRunner->animation = animation;
    pRunner->num = num;
    pRunner->frames = frames;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    delete pRunner;
    Py_INCREF(Py_None);
    ret = Py_None;

    // end
    // return: void
    return ret;
};

// public : setAnimationFrame
static PyObject * unigine_Mesh_set_animation_frame(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int animation;
    PyObject *pArg2; // int num;
    PyObject *pArg3; // const Unigine::Vector<Unigine::Math::vec3> & xyz;
    PyObject *pArg4; // const Unigine::Vector<Unigine::Math::quat> & rot;
    PyObject *pArg5; // const Unigine::Vector<Unigine::Math::vec3> & scale;
    PyArg_ParseTuple(args, "OOOOO", &pArg1, &pArg2, &pArg3, &pArg4, &pArg5);

    // pArg1
TODO for int


    // pArg2
TODO for int


    // pArg3
TODO for const Unigine::Vector<Unigine::Math::vec3> &


    // pArg4
TODO for const Unigine::Vector<Unigine::Math::quat> &


    // pArg5
TODO for const Unigine::Vector<Unigine::Math::vec3> &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->setAnimationFrame(animation, num, xyz, rot, scale);
            };
            // args
            int animation;
            int num;
            const Unigine::Vector<Unigine::Math::vec3> & xyz;
            const Unigine::Vector<Unigine::Math::quat> & rot;
            const Unigine::Vector<Unigine::Math::vec3> & scale;
    };
    auto *pRunner = new LocalRunner();
    pRunner->animation = animation;
    pRunner->num = num;
    pRunner->xyz = xyz;
    pRunner->rot = rot;
    pRunner->scale = scale;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    delete pRunner;
    Py_INCREF(Py_None);
    ret = Py_None;

    // end
    // return: void
    return ret;
};

// public : getAnimationFrame
static PyObject * unigine_Mesh_get_animation_frame(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int animation;
    PyObject *pArg2; // int num;
    PyObject *pArg3; // Unigine::Vector<Unigine::Math::vec3> & xyz;
    PyObject *pArg4; // Unigine::Vector<Unigine::Math::quat> & rot;
    PyObject *pArg5; // Unigine::Vector<Unigine::Math::vec3> & scale;
    PyArg_ParseTuple(args, "OOOOO", &pArg1, &pArg2, &pArg3, &pArg4, &pArg5);

    // pArg1
TODO for int


    // pArg2
TODO for int


    // pArg3
TODO for Unigine::Vector<Unigine::Math::vec3> &


    // pArg4
TODO for Unigine::Vector<Unigine::Math::quat> &


    // pArg5
TODO for Unigine::Vector<Unigine::Math::vec3> &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->getAnimationFrame(animation, num, xyz, rot, scale);
            };
            // args
            int animation;
            int num;
            Unigine::Vector<Unigine::Math::vec3> & xyz;
            Unigine::Vector<Unigine::Math::quat> & rot;
            Unigine::Vector<Unigine::Math::vec3> & scale;
    };
    auto *pRunner = new LocalRunner();
    pRunner->animation = animation;
    pRunner->num = num;
    pRunner->xyz = xyz;
    pRunner->rot = rot;
    pRunner->scale = scale;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    delete pRunner;
    Py_INCREF(Py_None);
    ret = Py_None;

    // end
    // return: void
    return ret;
};

// public : getNumSurfaces
static PyObject * unigine_Mesh_get_num_surfaces(unigine_Mesh* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->getNumSurfaces();
            };
            // args
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    int retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: int
    return ret;
};

// public : findSurface
static PyObject * unigine_Mesh_find_surface(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const char * name;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyUnicode_Check(pArg1)) {
        // TODO - error
        std::cout << "ERROR: pArg1 No unicoode " << std::endl;
        Py_INCREF(Py_None);
        ret = Py_None;
        return ret;
    }
    const char * name = PyUnicode_AsUTF8(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->findSurface(name);
            };
            // args
            const char * name;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->name = name;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    int retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: int
    return ret;
};

// public : sortSurfaces
static PyObject * unigine_Mesh_sort_surfaces(unigine_Mesh* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->sortSurfaces();
            };
            // args
    };
    auto *pRunner = new LocalRunner();
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    delete pRunner;
    Py_INCREF(Py_None);
    ret = Py_None;

    // end
    // return: void
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
        // TODO - error
        std::cout << "ERROR: pArg1 No unicoode " << std::endl;
        Py_INCREF(Py_None);
        ret = Py_None;
        return ret;
    }
    const char * name = PyUnicode_AsUTF8(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->addSurface(name);
            };
            // args
            const char * name;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->name = name;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    int retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: int
    return ret;
};

// public : setSurfaceName
static PyObject * unigine_Mesh_set_surface_name(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int surface;
    PyObject *pArg2; // const char * name;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
TODO for int


    // pArg2
    if (!PyUnicode_Check(pArg2)) {
        // TODO - error
        std::cout << "ERROR: pArg2 No unicoode " << std::endl;
        Py_INCREF(Py_None);
        ret = Py_None;
        return ret;
    }
    const char * name = PyUnicode_AsUTF8(pArg2);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->setSurfaceName(surface, name);
            };
            // args
            int surface;
            const char * name;
    };
    auto *pRunner = new LocalRunner();
    pRunner->surface = surface;
    pRunner->name = name;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    delete pRunner;
    Py_INCREF(Py_None);
    ret = Py_None;

    // end
    // return: void
    return ret;
};

// public : getSurfaceName
static PyObject * unigine_Mesh_get_surface_name(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int surface;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->getSurfaceName(surface);
            };
            // args
            int surface;
            // return
            const char * retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->surface = surface;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    const char * retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = TODO: unknown type 'const char *'

    // end
    // return: const char *
    return ret;
};

// public : setSurfaceLightmapUVChannel
static PyObject * unigine_Mesh_set_surface_lightmap_uv_channel(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int surface;
    PyObject *pArg2; // char uv_channel;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
TODO for int


    // pArg2
TODO for char


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->setSurfaceLightmapUVChannel(surface, uv_channel);
            };
            // args
            int surface;
            char uv_channel;
    };
    auto *pRunner = new LocalRunner();
    pRunner->surface = surface;
    pRunner->uv_channel = uv_channel;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    delete pRunner;
    Py_INCREF(Py_None);
    ret = Py_None;

    // end
    // return: void
    return ret;
};

// public : getSurfaceLightmapUVChannel
static PyObject * unigine_Mesh_get_surface_lightmap_uv_channel(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int surface;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->getSurfaceLightmapUVChannel(surface);
            };
            // args
            int surface;
            // return
            char retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->surface = surface;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    char retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = TODO: unknown type 'char'

    // end
    // return: char
    return ret;
};

// public : setSurfaceLightmapResolution
static PyObject * unigine_Mesh_set_surface_lightmap_resolution(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int surface;
    PyObject *pArg2; // Unigine::Mesh::LIGHTMAP_RESOLUTION resolution;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
TODO for int


    // pArg2
TODO for Unigine::Mesh::LIGHTMAP_RESOLUTION


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->setSurfaceLightmapResolution(surface, resolution);
            };
            // args
            int surface;
            Unigine::Mesh::LIGHTMAP_RESOLUTION resolution;
    };
    auto *pRunner = new LocalRunner();
    pRunner->surface = surface;
    pRunner->resolution = resolution;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    delete pRunner;
    Py_INCREF(Py_None);
    ret = Py_None;

    // end
    // return: void
    return ret;
};

// public : getSurfaceLightmapResolution
static PyObject * unigine_Mesh_get_surface_lightmap_resolution(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int surface;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->getSurfaceLightmapResolution(surface);
            };
            // args
            int surface;
            // return
            Unigine::Mesh::LIGHTMAP_RESOLUTION retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->surface = surface;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    Unigine::Mesh::LIGHTMAP_RESOLUTION retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: Unigine::Mesh::LIGHTMAP_RESOLUTION
    return ret;
};

// public : setNumSurfaceTargets
static PyObject * unigine_Mesh_set_num_surface_targets(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int surface;
    PyObject *pArg2; // int num;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
TODO for int


    // pArg2
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->setNumSurfaceTargets(surface, num);
            };
            // args
            int surface;
            int num;
    };
    auto *pRunner = new LocalRunner();
    pRunner->surface = surface;
    pRunner->num = num;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    delete pRunner;
    Py_INCREF(Py_None);
    ret = Py_None;

    // end
    // return: void
    return ret;
};

// public : getNumSurfaceTargets
static PyObject * unigine_Mesh_get_num_surface_targets(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int surface;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->getNumSurfaceTargets(surface);
            };
            // args
            int surface;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->surface = surface;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    int retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: int
    return ret;
};

// public : setSurfaceTargetName
static PyObject * unigine_Mesh_set_surface_target_name(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int surface;
    PyObject *pArg2; // int target;
    PyObject *pArg3; // const char * name;
    PyArg_ParseTuple(args, "OOO", &pArg1, &pArg2, &pArg3);

    // pArg1
TODO for int


    // pArg2
TODO for int


    // pArg3
    if (!PyUnicode_Check(pArg3)) {
        // TODO - error
        std::cout << "ERROR: pArg3 No unicoode " << std::endl;
        Py_INCREF(Py_None);
        ret = Py_None;
        return ret;
    }
    const char * name = PyUnicode_AsUTF8(pArg3);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->setSurfaceTargetName(surface, target, name);
            };
            // args
            int surface;
            int target;
            const char * name;
    };
    auto *pRunner = new LocalRunner();
    pRunner->surface = surface;
    pRunner->target = target;
    pRunner->name = name;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    delete pRunner;
    Py_INCREF(Py_None);
    ret = Py_None;

    // end
    // return: void
    return ret;
};

// public : getSurfaceTargetName
static PyObject * unigine_Mesh_get_surface_target_name(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int surface;
    PyObject *pArg2; // int target;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
TODO for int


    // pArg2
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->getSurfaceTargetName(surface, target);
            };
            // args
            int surface;
            int target;
            // return
            const char * retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->surface = surface;
    pRunner->target = target;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    const char * retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = TODO: unknown type 'const char *'

    // end
    // return: const char *
    return ret;
};

// public : findSurfaceTarget
static PyObject * unigine_Mesh_find_surface_target(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int surface;
    PyObject *pArg2; // const char * name;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
TODO for int


    // pArg2
    if (!PyUnicode_Check(pArg2)) {
        // TODO - error
        std::cout << "ERROR: pArg2 No unicoode " << std::endl;
        Py_INCREF(Py_None);
        ret = Py_None;
        return ret;
    }
    const char * name = PyUnicode_AsUTF8(pArg2);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->findSurfaceTarget(surface, name);
            };
            // args
            int surface;
            const char * name;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->surface = surface;
    pRunner->name = name;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    int retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: int
    return ret;
};

// public : createIntersection
static PyObject * unigine_Mesh_create_intersection(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int surface;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->createIntersection(surface);
            };
            // args
            int surface;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->surface = surface;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    int retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: int
    return ret;
};

// public : getIntersection
static PyObject * unigine_Mesh_get_intersection(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const Unigine::Math::vec3 & p0;
    PyObject *pArg2; // const Unigine::Math::vec3 & p1;
    PyObject *pArg3; // Unigine::Math::vec3 * ret_point;
    PyObject *pArg4; // Unigine::Math::vec3 * ret_normal;
    PyObject *pArg5; // int * ret_index;
    PyObject *pArg6; // int surface;
    PyObject *pArg7; // int target;
    PyArg_ParseTuple(args, "OOOOOOO", &pArg1, &pArg2, &pArg3, &pArg4, &pArg5, &pArg6, &pArg7);

    // pArg1
TODO for const Unigine::Math::vec3 &


    // pArg2
TODO for const Unigine::Math::vec3 &


    // pArg3
TODO for Unigine::Math::vec3 *


    // pArg4
TODO for Unigine::Math::vec3 *


    // pArg5
TODO for int *


    // pArg6
TODO for int


    // pArg7
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->getIntersection(p0, p1, ret_point, ret_normal, ret_index, surface, target);
            };
            // args
            const Unigine::Math::vec3 & p0;
            const Unigine::Math::vec3 & p1;
            Unigine::Math::vec3 * ret_point;
            Unigine::Math::vec3 * ret_normal;
            int * ret_index;
            int surface;
            int target;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->p0 = p0;
    pRunner->p1 = p1;
    pRunner->ret_point = ret_point;
    pRunner->ret_normal = ret_normal;
    pRunner->ret_index = ret_index;
    pRunner->surface = surface;
    pRunner->target = target;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    int retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: int
    return ret;
};

// public : setSurfaceTransform
static PyObject * unigine_Mesh_set_surface_transform(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const Unigine::Math::mat4 & transform;
    PyObject *pArg2; // int surface;
    PyObject *pArg3; // int target;
    PyArg_ParseTuple(args, "OOO", &pArg1, &pArg2, &pArg3);

    // pArg1
TODO for const Unigine::Math::mat4 &


    // pArg2
TODO for int


    // pArg3
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->setSurfaceTransform(transform, surface, target);
            };
            // args
            const Unigine::Math::mat4 & transform;
            int surface;
            int target;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->transform = transform;
    pRunner->surface = surface;
    pRunner->target = target;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    int retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: int
    return ret;
};

// public : addMeshSurface
static PyObject * unigine_Mesh_add_mesh_surface(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const char * v;
    PyObject *pArg2; // const Unigine::Ptr<Unigine::Mesh> & mesh;
    PyObject *pArg3; // int surface;
    PyObject *pArg4; // int target;
    PyArg_ParseTuple(args, "OOOO", &pArg1, &pArg2, &pArg3, &pArg4);

    // pArg1
    if (!PyUnicode_Check(pArg1)) {
        // TODO - error
        std::cout << "ERROR: pArg1 No unicoode " << std::endl;
        Py_INCREF(Py_None);
        ret = Py_None;
        return ret;
    }
    const char * v = PyUnicode_AsUTF8(pArg1);


    // pArg2
TODO for const Unigine::Ptr<Unigine::Mesh> &


    // pArg3
TODO for int


    // pArg4
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->addMeshSurface(v, mesh, surface, target);
            };
            // args
            const char * v;
            const Unigine::Ptr<Unigine::Mesh> & mesh;
            int surface;
            int target;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->v = v;
    pRunner->mesh = mesh;
    pRunner->surface = surface;
    pRunner->target = target;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    int retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: int
    return ret;
};

// public : addMeshSurface
static PyObject * unigine_Mesh_add_mesh_surface(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int v;
    PyObject *pArg2; // const Unigine::Ptr<Unigine::Mesh> & mesh;
    PyObject *pArg3; // int surface;
    PyObject *pArg4; // int target;
    PyArg_ParseTuple(args, "OOOO", &pArg1, &pArg2, &pArg3, &pArg4);

    // pArg1
TODO for int


    // pArg2
TODO for const Unigine::Ptr<Unigine::Mesh> &


    // pArg3
TODO for int


    // pArg4
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->addMeshSurface(v, mesh, surface, target);
            };
            // args
            int v;
            const Unigine::Ptr<Unigine::Mesh> & mesh;
            int surface;
            int target;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->v = v;
    pRunner->mesh = mesh;
    pRunner->surface = surface;
    pRunner->target = target;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    int retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: int
    return ret;
};

// public : addEmptySurface
static PyObject * unigine_Mesh_add_empty_surface(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const char * name;
    PyObject *pArg2; // int num_vertex;
    PyObject *pArg3; // int num_indices;
    PyArg_ParseTuple(args, "OOO", &pArg1, &pArg2, &pArg3);

    // pArg1
    if (!PyUnicode_Check(pArg1)) {
        // TODO - error
        std::cout << "ERROR: pArg1 No unicoode " << std::endl;
        Py_INCREF(Py_None);
        ret = Py_None;
        return ret;
    }
    const char * name = PyUnicode_AsUTF8(pArg1);


    // pArg2
TODO for int


    // pArg3
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->addEmptySurface(name, num_vertex, num_indices);
            };
            // args
            const char * name;
            int num_vertex;
            int num_indices;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->name = name;
    pRunner->num_vertex = num_vertex;
    pRunner->num_indices = num_indices;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    int retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: int
    return ret;
};

// public : addSurfaceTarget
static PyObject * unigine_Mesh_add_surface_target(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int surface;
    PyObject *pArg2; // const char * name;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
TODO for int


    // pArg2
    if (!PyUnicode_Check(pArg2)) {
        // TODO - error
        std::cout << "ERROR: pArg2 No unicoode " << std::endl;
        Py_INCREF(Py_None);
        ret = Py_None;
        return ret;
    }
    const char * name = PyUnicode_AsUTF8(pArg2);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->addSurfaceTarget(surface, name);
            };
            // args
            int surface;
            const char * name;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->surface = surface;
    pRunner->name = name;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    int retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: int
    return ret;
};

// public : addBoxSurface
static PyObject * unigine_Mesh_add_box_surface(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const char * name;
    PyObject *pArg2; // const Unigine::Math::vec3 & size;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    if (!PyUnicode_Check(pArg1)) {
        // TODO - error
        std::cout << "ERROR: pArg1 No unicoode " << std::endl;
        Py_INCREF(Py_None);
        ret = Py_None;
        return ret;
    }
    const char * name = PyUnicode_AsUTF8(pArg1);


    // pArg2
TODO for const Unigine::Math::vec3 &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->addBoxSurface(name, size);
            };
            // args
            const char * name;
            const Unigine::Math::vec3 & size;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->name = name;
    pRunner->size = size;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    int retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: int
    return ret;
};

// public : addPlaneSurface
static PyObject * unigine_Mesh_add_plane_surface(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const char * name;
    PyObject *pArg2; // float width;
    PyObject *pArg3; // float height;
    PyObject *pArg4; // float step;
    PyArg_ParseTuple(args, "OOOO", &pArg1, &pArg2, &pArg3, &pArg4);

    // pArg1
    if (!PyUnicode_Check(pArg1)) {
        // TODO - error
        std::cout << "ERROR: pArg1 No unicoode " << std::endl;
        Py_INCREF(Py_None);
        ret = Py_None;
        return ret;
    }
    const char * name = PyUnicode_AsUTF8(pArg1);


    // pArg2
TODO for float


    // pArg3
TODO for float


    // pArg4
TODO for float


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->addPlaneSurface(name, width, height, step);
            };
            // args
            const char * name;
            float width;
            float height;
            float step;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->name = name;
    pRunner->width = width;
    pRunner->height = height;
    pRunner->step = step;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    int retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: int
    return ret;
};

// public : addSphereSurface
static PyObject * unigine_Mesh_add_sphere_surface(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const char * name;
    PyObject *pArg2; // float radius;
    PyObject *pArg3; // int stacks;
    PyObject *pArg4; // int slices;
    PyArg_ParseTuple(args, "OOOO", &pArg1, &pArg2, &pArg3, &pArg4);

    // pArg1
    if (!PyUnicode_Check(pArg1)) {
        // TODO - error
        std::cout << "ERROR: pArg1 No unicoode " << std::endl;
        Py_INCREF(Py_None);
        ret = Py_None;
        return ret;
    }
    const char * name = PyUnicode_AsUTF8(pArg1);


    // pArg2
TODO for float


    // pArg3
TODO for int


    // pArg4
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->addSphereSurface(name, radius, stacks, slices);
            };
            // args
            const char * name;
            float radius;
            int stacks;
            int slices;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->name = name;
    pRunner->radius = radius;
    pRunner->stacks = stacks;
    pRunner->slices = slices;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    int retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: int
    return ret;
};

// public : addCapsuleSurface
static PyObject * unigine_Mesh_add_capsule_surface(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const char * name;
    PyObject *pArg2; // float radius;
    PyObject *pArg3; // float height;
    PyObject *pArg4; // int stacks;
    PyObject *pArg5; // int slices;
    PyArg_ParseTuple(args, "OOOOO", &pArg1, &pArg2, &pArg3, &pArg4, &pArg5);

    // pArg1
    if (!PyUnicode_Check(pArg1)) {
        // TODO - error
        std::cout << "ERROR: pArg1 No unicoode " << std::endl;
        Py_INCREF(Py_None);
        ret = Py_None;
        return ret;
    }
    const char * name = PyUnicode_AsUTF8(pArg1);


    // pArg2
TODO for float


    // pArg3
TODO for float


    // pArg4
TODO for int


    // pArg5
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->addCapsuleSurface(name, radius, height, stacks, slices);
            };
            // args
            const char * name;
            float radius;
            float height;
            int stacks;
            int slices;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->name = name;
    pRunner->radius = radius;
    pRunner->height = height;
    pRunner->stacks = stacks;
    pRunner->slices = slices;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    int retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: int
    return ret;
};

// public : addCylinderSurface
static PyObject * unigine_Mesh_add_cylinder_surface(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const char * name;
    PyObject *pArg2; // float radius;
    PyObject *pArg3; // float height;
    PyObject *pArg4; // int stacks;
    PyObject *pArg5; // int slices;
    PyArg_ParseTuple(args, "OOOOO", &pArg1, &pArg2, &pArg3, &pArg4, &pArg5);

    // pArg1
    if (!PyUnicode_Check(pArg1)) {
        // TODO - error
        std::cout << "ERROR: pArg1 No unicoode " << std::endl;
        Py_INCREF(Py_None);
        ret = Py_None;
        return ret;
    }
    const char * name = PyUnicode_AsUTF8(pArg1);


    // pArg2
TODO for float


    // pArg3
TODO for float


    // pArg4
TODO for int


    // pArg5
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->addCylinderSurface(name, radius, height, stacks, slices);
            };
            // args
            const char * name;
            float radius;
            float height;
            int stacks;
            int slices;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->name = name;
    pRunner->radius = radius;
    pRunner->height = height;
    pRunner->stacks = stacks;
    pRunner->slices = slices;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    int retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: int
    return ret;
};

// public : addPrismSurface
static PyObject * unigine_Mesh_add_prism_surface(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const char * name;
    PyObject *pArg2; // float size_0;
    PyObject *pArg3; // float size_1;
    PyObject *pArg4; // float height;
    PyObject *pArg5; // int sides;
    PyArg_ParseTuple(args, "OOOOO", &pArg1, &pArg2, &pArg3, &pArg4, &pArg5);

    // pArg1
    if (!PyUnicode_Check(pArg1)) {
        // TODO - error
        std::cout << "ERROR: pArg1 No unicoode " << std::endl;
        Py_INCREF(Py_None);
        ret = Py_None;
        return ret;
    }
    const char * name = PyUnicode_AsUTF8(pArg1);


    // pArg2
TODO for float


    // pArg3
TODO for float


    // pArg4
TODO for float


    // pArg5
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->addPrismSurface(name, size_0, size_1, height, sides);
            };
            // args
            const char * name;
            float size_0;
            float size_1;
            float height;
            int sides;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->name = name;
    pRunner->size_0 = size_0;
    pRunner->size_1 = size_1;
    pRunner->height = height;
    pRunner->sides = sides;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    int retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: int
    return ret;
};

// public : addIcosahedronSurface
static PyObject * unigine_Mesh_add_icosahedron_surface(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const char * name;
    PyObject *pArg2; // float radius;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    if (!PyUnicode_Check(pArg1)) {
        // TODO - error
        std::cout << "ERROR: pArg1 No unicoode " << std::endl;
        Py_INCREF(Py_None);
        ret = Py_None;
        return ret;
    }
    const char * name = PyUnicode_AsUTF8(pArg1);


    // pArg2
TODO for float


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->addIcosahedronSurface(name, radius);
            };
            // args
            const char * name;
            float radius;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->name = name;
    pRunner->radius = radius;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    int retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: int
    return ret;
};

// public : addDodecahedronSurface
static PyObject * unigine_Mesh_add_dodecahedron_surface(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const char * name;
    PyObject *pArg2; // float radius;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    if (!PyUnicode_Check(pArg1)) {
        // TODO - error
        std::cout << "ERROR: pArg1 No unicoode " << std::endl;
        Py_INCREF(Py_None);
        ret = Py_None;
        return ret;
    }
    const char * name = PyUnicode_AsUTF8(pArg1);


    // pArg2
TODO for float


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->addDodecahedronSurface(name, radius);
            };
            // args
            const char * name;
            float radius;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->name = name;
    pRunner->radius = radius;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    int retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: int
    return ret;
};

// public : getNumCVertex
static PyObject * unigine_Mesh_get_num_c_vertex(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int surface;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->getNumCVertex(surface);
            };
            // args
            int surface;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->surface = surface;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    int retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: int
    return ret;
};

// public : getNumTVertex
static PyObject * unigine_Mesh_get_num_t_vertex(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int surface;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->getNumTVertex(surface);
            };
            // args
            int surface;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->surface = surface;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    int retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: int
    return ret;
};

// public : remapCVertex
static PyObject * unigine_Mesh_remap_c_vertex(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int surface;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->remapCVertex(surface);
            };
            // args
            int surface;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->surface = surface;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    int retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: int
    return ret;
};

// public : setNumWeights
static PyObject * unigine_Mesh_set_num_weights(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int size;
    PyObject *pArg2; // int surface;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
TODO for int


    // pArg2
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->setNumWeights(size, surface);
            };
            // args
            int size;
            int surface;
    };
    auto *pRunner = new LocalRunner();
    pRunner->size = size;
    pRunner->surface = surface;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    delete pRunner;
    Py_INCREF(Py_None);
    ret = Py_None;

    // end
    // return: void
    return ret;
};

// public : getNumWeights
static PyObject * unigine_Mesh_get_num_weights(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int surface;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->getNumWeights(surface);
            };
            // args
            int surface;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->surface = surface;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    int retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: int
    return ret;
};

// public : setWeightCount
static PyObject * unigine_Mesh_set_weight_count(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int num;
    PyObject *pArg2; // int count;
    PyObject *pArg3; // int surface;
    PyArg_ParseTuple(args, "OOO", &pArg1, &pArg2, &pArg3);

    // pArg1
TODO for int


    // pArg2
TODO for int


    // pArg3
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->setWeightCount(num, count, surface);
            };
            // args
            int num;
            int count;
            int surface;
    };
    auto *pRunner = new LocalRunner();
    pRunner->num = num;
    pRunner->count = count;
    pRunner->surface = surface;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    delete pRunner;
    Py_INCREF(Py_None);
    ret = Py_None;

    // end
    // return: void
    return ret;
};

// public : getWeightCount
static PyObject * unigine_Mesh_get_weight_count(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int num;
    PyObject *pArg2; // int surface;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
TODO for int


    // pArg2
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->getWeightCount(num, surface);
            };
            // args
            int num;
            int surface;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->num = num;
    pRunner->surface = surface;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    int retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: int
    return ret;
};

// public : setWeightBones
static PyObject * unigine_Mesh_set_weight_bones(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int num;
    PyObject *pArg2; // const Unigine::Math::ivec4 & bones;
    PyObject *pArg3; // int surface;
    PyArg_ParseTuple(args, "OOO", &pArg1, &pArg2, &pArg3);

    // pArg1
TODO for int


    // pArg2
TODO for const Unigine::Math::ivec4 &


    // pArg3
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->setWeightBones(num, bones, surface);
            };
            // args
            int num;
            const Unigine::Math::ivec4 & bones;
            int surface;
    };
    auto *pRunner = new LocalRunner();
    pRunner->num = num;
    pRunner->bones = bones;
    pRunner->surface = surface;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    delete pRunner;
    Py_INCREF(Py_None);
    ret = Py_None;

    // end
    // return: void
    return ret;
};

// public : getWeightBones
static PyObject * unigine_Mesh_get_weight_bones(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int num;
    PyObject *pArg2; // int surface;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
TODO for int


    // pArg2
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->getWeightBones(num, surface);
            };
            // args
            int num;
            int surface;
            // return
            Unigine::Math::ivec4 retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->num = num;
    pRunner->surface = surface;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    Unigine::Math::ivec4 retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: Unigine::Math::ivec4
    return ret;
};

// public : setWeightWeights
static PyObject * unigine_Mesh_set_weight_weights(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int num;
    PyObject *pArg2; // const Unigine::Math::vec4 & weights;
    PyObject *pArg3; // int surface;
    PyArg_ParseTuple(args, "OOO", &pArg1, &pArg2, &pArg3);

    // pArg1
TODO for int


    // pArg2
TODO for const Unigine::Math::vec4 &


    // pArg3
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->setWeightWeights(num, weights, surface);
            };
            // args
            int num;
            const Unigine::Math::vec4 & weights;
            int surface;
    };
    auto *pRunner = new LocalRunner();
    pRunner->num = num;
    pRunner->weights = weights;
    pRunner->surface = surface;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    delete pRunner;
    Py_INCREF(Py_None);
    ret = Py_None;

    // end
    // return: void
    return ret;
};

// public : getWeightWeights
static PyObject * unigine_Mesh_get_weight_weights(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int num;
    PyObject *pArg2; // int surface;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
TODO for int


    // pArg2
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->getWeightWeights(num, surface);
            };
            // args
            int num;
            int surface;
            // return
            Unigine::Math::vec4 retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->num = num;
    pRunner->surface = surface;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    Unigine::Math::vec4 retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: Unigine::Math::vec4
    return ret;
};

// public : setNumVertex
static PyObject * unigine_Mesh_set_num_vertex(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int size;
    PyObject *pArg2; // int surface;
    PyObject *pArg3; // int target;
    PyArg_ParseTuple(args, "OOO", &pArg1, &pArg2, &pArg3);

    // pArg1
TODO for int


    // pArg2
TODO for int


    // pArg3
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->setNumVertex(size, surface, target);
            };
            // args
            int size;
            int surface;
            int target;
    };
    auto *pRunner = new LocalRunner();
    pRunner->size = size;
    pRunner->surface = surface;
    pRunner->target = target;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    delete pRunner;
    Py_INCREF(Py_None);
    ret = Py_None;

    // end
    // return: void
    return ret;
};

// public : getNumVertex
static PyObject * unigine_Mesh_get_num_vertex(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int surface;
    PyObject *pArg2; // int target;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
TODO for int


    // pArg2
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->getNumVertex(surface, target);
            };
            // args
            int surface;
            int target;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->surface = surface;
    pRunner->target = target;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
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
    PyObject *pArg1; // const Unigine::Vector<Unigine::Math::vec3> & vertices;
    PyObject *pArg2; // int surface;
    PyObject *pArg3; // int target;
    PyArg_ParseTuple(args, "OOO", &pArg1, &pArg2, &pArg3);

    // pArg1
TODO for const Unigine::Vector<Unigine::Math::vec3> &


    // pArg2
TODO for int


    // pArg3
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->addVertex(vertices, surface, target);
            };
            // args
            const Unigine::Vector<Unigine::Math::vec3> & vertices;
            int surface;
            int target;
    };
    auto *pRunner = new LocalRunner();
    pRunner->vertices = vertices;
    pRunner->surface = surface;
    pRunner->target = target;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    delete pRunner;
    Py_INCREF(Py_None);
    ret = Py_None;

    // end
    // return: void
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
TODO for const Unigine::Math::vec3 &


    // pArg2
TODO for int


    // pArg3
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->addVertex(vertex, surface, target);
            };
            // args
            const Unigine::Math::vec3 & vertex;
            int surface;
            int target;
    };
    auto *pRunner = new LocalRunner();
    pRunner->vertex = vertex;
    pRunner->surface = surface;
    pRunner->target = target;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    delete pRunner;
    Py_INCREF(Py_None);
    ret = Py_None;

    // end
    // return: void
    return ret;
};

// public : setVertex
static PyObject * unigine_Mesh_set_vertex(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int num;
    PyObject *pArg2; // const Unigine::Math::vec3 & vertex;
    PyObject *pArg3; // int surface;
    PyObject *pArg4; // int target;
    PyArg_ParseTuple(args, "OOOO", &pArg1, &pArg2, &pArg3, &pArg4);

    // pArg1
TODO for int


    // pArg2
TODO for const Unigine::Math::vec3 &


    // pArg3
TODO for int


    // pArg4
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->setVertex(num, vertex, surface, target);
            };
            // args
            int num;
            const Unigine::Math::vec3 & vertex;
            int surface;
            int target;
    };
    auto *pRunner = new LocalRunner();
    pRunner->num = num;
    pRunner->vertex = vertex;
    pRunner->surface = surface;
    pRunner->target = target;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    delete pRunner;
    Py_INCREF(Py_None);
    ret = Py_None;

    // end
    // return: void
    return ret;
};

// public : getVertex
static PyObject * unigine_Mesh_get_vertex(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int num;
    PyObject *pArg2; // int surface;
    PyObject *pArg3; // int target;
    PyArg_ParseTuple(args, "OOO", &pArg1, &pArg2, &pArg3);

    // pArg1
TODO for int


    // pArg2
TODO for int


    // pArg3
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->getVertex(num, surface, target);
            };
            // args
            int num;
            int surface;
            int target;
            // return
            Unigine::Math::vec3 retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->num = num;
    pRunner->surface = surface;
    pRunner->target = target;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    Unigine::Math::vec3 retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: Unigine::Math::vec3
    return ret;
};

// public : setNumTexCoords0
static PyObject * unigine_Mesh_set_num_tex_coords0(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int size;
    PyObject *pArg2; // int surface;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
TODO for int


    // pArg2
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->setNumTexCoords0(size, surface);
            };
            // args
            int size;
            int surface;
    };
    auto *pRunner = new LocalRunner();
    pRunner->size = size;
    pRunner->surface = surface;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    delete pRunner;
    Py_INCREF(Py_None);
    ret = Py_None;

    // end
    // return: void
    return ret;
};

// public : getNumTexCoords0
static PyObject * unigine_Mesh_get_num_tex_coords0(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int surface;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->getNumTexCoords0(surface);
            };
            // args
            int surface;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->surface = surface;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    int retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: int
    return ret;
};

// public : addTexCoords0
static PyObject * unigine_Mesh_add_tex_coords0(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const Unigine::Vector<Unigine::Math::vec2> & texcoords;
    PyObject *pArg2; // int surface;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
TODO for const Unigine::Vector<Unigine::Math::vec2> &


    // pArg2
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->addTexCoords0(texcoords, surface);
            };
            // args
            const Unigine::Vector<Unigine::Math::vec2> & texcoords;
            int surface;
    };
    auto *pRunner = new LocalRunner();
    pRunner->texcoords = texcoords;
    pRunner->surface = surface;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    delete pRunner;
    Py_INCREF(Py_None);
    ret = Py_None;

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
TODO for const Unigine::Math::vec2 &


    // pArg2
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->addTexCoord0(texcoord, surface);
            };
            // args
            const Unigine::Math::vec2 & texcoord;
            int surface;
    };
    auto *pRunner = new LocalRunner();
    pRunner->texcoord = texcoord;
    pRunner->surface = surface;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    delete pRunner;
    Py_INCREF(Py_None);
    ret = Py_None;

    // end
    // return: void
    return ret;
};

// public : setTexCoord0
static PyObject * unigine_Mesh_set_tex_coord0(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int num;
    PyObject *pArg2; // const Unigine::Math::vec2 & texcoord;
    PyObject *pArg3; // int surface;
    PyArg_ParseTuple(args, "OOO", &pArg1, &pArg2, &pArg3);

    // pArg1
TODO for int


    // pArg2
TODO for const Unigine::Math::vec2 &


    // pArg3
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->setTexCoord0(num, texcoord, surface);
            };
            // args
            int num;
            const Unigine::Math::vec2 & texcoord;
            int surface;
    };
    auto *pRunner = new LocalRunner();
    pRunner->num = num;
    pRunner->texcoord = texcoord;
    pRunner->surface = surface;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    delete pRunner;
    Py_INCREF(Py_None);
    ret = Py_None;

    // end
    // return: void
    return ret;
};

// public : getTexCoord0
static PyObject * unigine_Mesh_get_tex_coord0(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int num;
    PyObject *pArg2; // int surface;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
TODO for int


    // pArg2
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->getTexCoord0(num, surface);
            };
            // args
            int num;
            int surface;
            // return
            Unigine::Math::vec2 retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->num = num;
    pRunner->surface = surface;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    Unigine::Math::vec2 retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: Unigine::Math::vec2
    return ret;
};

// public : setNumTexCoords1
static PyObject * unigine_Mesh_set_num_tex_coords1(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int size;
    PyObject *pArg2; // int surface;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
TODO for int


    // pArg2
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->setNumTexCoords1(size, surface);
            };
            // args
            int size;
            int surface;
    };
    auto *pRunner = new LocalRunner();
    pRunner->size = size;
    pRunner->surface = surface;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    delete pRunner;
    Py_INCREF(Py_None);
    ret = Py_None;

    // end
    // return: void
    return ret;
};

// public : getNumTexCoords1
static PyObject * unigine_Mesh_get_num_tex_coords1(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int surface;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->getNumTexCoords1(surface);
            };
            // args
            int surface;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->surface = surface;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    int retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: int
    return ret;
};

// public : addTexCoords1
static PyObject * unigine_Mesh_add_tex_coords1(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const Unigine::Vector<Unigine::Math::vec2> & texcoords;
    PyObject *pArg2; // int surface;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
TODO for const Unigine::Vector<Unigine::Math::vec2> &


    // pArg2
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->addTexCoords1(texcoords, surface);
            };
            // args
            const Unigine::Vector<Unigine::Math::vec2> & texcoords;
            int surface;
    };
    auto *pRunner = new LocalRunner();
    pRunner->texcoords = texcoords;
    pRunner->surface = surface;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    delete pRunner;
    Py_INCREF(Py_None);
    ret = Py_None;

    // end
    // return: void
    return ret;
};

// public : addTexCoord1
static PyObject * unigine_Mesh_add_tex_coord1(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const Unigine::Math::vec2 & texcoord;
    PyObject *pArg2; // int surface;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
TODO for const Unigine::Math::vec2 &


    // pArg2
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->addTexCoord1(texcoord, surface);
            };
            // args
            const Unigine::Math::vec2 & texcoord;
            int surface;
    };
    auto *pRunner = new LocalRunner();
    pRunner->texcoord = texcoord;
    pRunner->surface = surface;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    delete pRunner;
    Py_INCREF(Py_None);
    ret = Py_None;

    // end
    // return: void
    return ret;
};

// public : setTexCoord1
static PyObject * unigine_Mesh_set_tex_coord1(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int num;
    PyObject *pArg2; // const Unigine::Math::vec2 & texcoord;
    PyObject *pArg3; // int surface;
    PyArg_ParseTuple(args, "OOO", &pArg1, &pArg2, &pArg3);

    // pArg1
TODO for int


    // pArg2
TODO for const Unigine::Math::vec2 &


    // pArg3
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->setTexCoord1(num, texcoord, surface);
            };
            // args
            int num;
            const Unigine::Math::vec2 & texcoord;
            int surface;
    };
    auto *pRunner = new LocalRunner();
    pRunner->num = num;
    pRunner->texcoord = texcoord;
    pRunner->surface = surface;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    delete pRunner;
    Py_INCREF(Py_None);
    ret = Py_None;

    // end
    // return: void
    return ret;
};

// public : getTexCoord1
static PyObject * unigine_Mesh_get_tex_coord1(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int num;
    PyObject *pArg2; // int surface;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
TODO for int


    // pArg2
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->getTexCoord1(num, surface);
            };
            // args
            int num;
            int surface;
            // return
            Unigine::Math::vec2 retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->num = num;
    pRunner->surface = surface;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    Unigine::Math::vec2 retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: Unigine::Math::vec2
    return ret;
};

// public : setNumNormals
static PyObject * unigine_Mesh_set_num_normals(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int size;
    PyObject *pArg2; // int surface;
    PyObject *pArg3; // int target;
    PyArg_ParseTuple(args, "OOO", &pArg1, &pArg2, &pArg3);

    // pArg1
TODO for int


    // pArg2
TODO for int


    // pArg3
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->setNumNormals(size, surface, target);
            };
            // args
            int size;
            int surface;
            int target;
    };
    auto *pRunner = new LocalRunner();
    pRunner->size = size;
    pRunner->surface = surface;
    pRunner->target = target;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    delete pRunner;
    Py_INCREF(Py_None);
    ret = Py_None;

    // end
    // return: void
    return ret;
};

// public : getNumNormals
static PyObject * unigine_Mesh_get_num_normals(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int surface;
    PyObject *pArg2; // int target;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
TODO for int


    // pArg2
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->getNumNormals(surface, target);
            };
            // args
            int surface;
            int target;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->surface = surface;
    pRunner->target = target;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    int retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: int
    return ret;
};

// public : addNormals
static PyObject * unigine_Mesh_add_normals(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const Unigine::Vector<Unigine::Math::vec3> & normals;
    PyObject *pArg2; // int surface;
    PyObject *pArg3; // int target;
    PyArg_ParseTuple(args, "OOO", &pArg1, &pArg2, &pArg3);

    // pArg1
TODO for const Unigine::Vector<Unigine::Math::vec3> &


    // pArg2
TODO for int


    // pArg3
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->addNormals(normals, surface, target);
            };
            // args
            const Unigine::Vector<Unigine::Math::vec3> & normals;
            int surface;
            int target;
    };
    auto *pRunner = new LocalRunner();
    pRunner->normals = normals;
    pRunner->surface = surface;
    pRunner->target = target;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    delete pRunner;
    Py_INCREF(Py_None);
    ret = Py_None;

    // end
    // return: void
    return ret;
};

// public : addNormal
static PyObject * unigine_Mesh_add_normal(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const Unigine::Math::vec3 & normal;
    PyObject *pArg2; // int surface;
    PyObject *pArg3; // int target;
    PyArg_ParseTuple(args, "OOO", &pArg1, &pArg2, &pArg3);

    // pArg1
TODO for const Unigine::Math::vec3 &


    // pArg2
TODO for int


    // pArg3
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->addNormal(normal, surface, target);
            };
            // args
            const Unigine::Math::vec3 & normal;
            int surface;
            int target;
    };
    auto *pRunner = new LocalRunner();
    pRunner->normal = normal;
    pRunner->surface = surface;
    pRunner->target = target;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    delete pRunner;
    Py_INCREF(Py_None);
    ret = Py_None;

    // end
    // return: void
    return ret;
};

// public : setNormal
static PyObject * unigine_Mesh_set_normal(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int num;
    PyObject *pArg2; // const Unigine::Math::vec3 & normal;
    PyObject *pArg3; // int surface;
    PyObject *pArg4; // int target;
    PyArg_ParseTuple(args, "OOOO", &pArg1, &pArg2, &pArg3, &pArg4);

    // pArg1
TODO for int


    // pArg2
TODO for const Unigine::Math::vec3 &


    // pArg3
TODO for int


    // pArg4
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->setNormal(num, normal, surface, target);
            };
            // args
            int num;
            const Unigine::Math::vec3 & normal;
            int surface;
            int target;
    };
    auto *pRunner = new LocalRunner();
    pRunner->num = num;
    pRunner->normal = normal;
    pRunner->surface = surface;
    pRunner->target = target;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    delete pRunner;
    Py_INCREF(Py_None);
    ret = Py_None;

    // end
    // return: void
    return ret;
};

// public : getNormal
static PyObject * unigine_Mesh_get_normal(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int num;
    PyObject *pArg2; // int surface;
    PyObject *pArg3; // int target;
    PyArg_ParseTuple(args, "OOO", &pArg1, &pArg2, &pArg3);

    // pArg1
TODO for int


    // pArg2
TODO for int


    // pArg3
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->getNormal(num, surface, target);
            };
            // args
            int num;
            int surface;
            int target;
            // return
            Unigine::Math::vec3 retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->num = num;
    pRunner->surface = surface;
    pRunner->target = target;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    Unigine::Math::vec3 retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: Unigine::Math::vec3
    return ret;
};

// public : setNumTangents
static PyObject * unigine_Mesh_set_num_tangents(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int size;
    PyObject *pArg2; // int surface;
    PyObject *pArg3; // int target;
    PyArg_ParseTuple(args, "OOO", &pArg1, &pArg2, &pArg3);

    // pArg1
TODO for int


    // pArg2
TODO for int


    // pArg3
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->setNumTangents(size, surface, target);
            };
            // args
            int size;
            int surface;
            int target;
    };
    auto *pRunner = new LocalRunner();
    pRunner->size = size;
    pRunner->surface = surface;
    pRunner->target = target;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    delete pRunner;
    Py_INCREF(Py_None);
    ret = Py_None;

    // end
    // return: void
    return ret;
};

// public : getNumTangents
static PyObject * unigine_Mesh_get_num_tangents(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int surface;
    PyObject *pArg2; // int tangent;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
TODO for int


    // pArg2
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->getNumTangents(surface, tangent);
            };
            // args
            int surface;
            int tangent;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->surface = surface;
    pRunner->tangent = tangent;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    int retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: int
    return ret;
};

// public : addTangents
static PyObject * unigine_Mesh_add_tangents(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const Unigine::Vector<Unigine::Math::quat> & tangents;
    PyObject *pArg2; // int surface;
    PyObject *pArg3; // int target;
    PyArg_ParseTuple(args, "OOO", &pArg1, &pArg2, &pArg3);

    // pArg1
TODO for const Unigine::Vector<Unigine::Math::quat> &


    // pArg2
TODO for int


    // pArg3
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->addTangents(tangents, surface, target);
            };
            // args
            const Unigine::Vector<Unigine::Math::quat> & tangents;
            int surface;
            int target;
    };
    auto *pRunner = new LocalRunner();
    pRunner->tangents = tangents;
    pRunner->surface = surface;
    pRunner->target = target;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    delete pRunner;
    Py_INCREF(Py_None);
    ret = Py_None;

    // end
    // return: void
    return ret;
};

// public : addTangent
static PyObject * unigine_Mesh_add_tangent(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const Unigine::Math::quat & tangent;
    PyObject *pArg2; // int surface;
    PyObject *pArg3; // int target;
    PyArg_ParseTuple(args, "OOO", &pArg1, &pArg2, &pArg3);

    // pArg1
TODO for const Unigine::Math::quat &


    // pArg2
TODO for int


    // pArg3
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->addTangent(tangent, surface, target);
            };
            // args
            const Unigine::Math::quat & tangent;
            int surface;
            int target;
    };
    auto *pRunner = new LocalRunner();
    pRunner->tangent = tangent;
    pRunner->surface = surface;
    pRunner->target = target;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    delete pRunner;
    Py_INCREF(Py_None);
    ret = Py_None;

    // end
    // return: void
    return ret;
};

// public : setTangent
static PyObject * unigine_Mesh_set_tangent(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int num;
    PyObject *pArg2; // const Unigine::Math::quat & tangent;
    PyObject *pArg3; // int surface;
    PyObject *pArg4; // int target;
    PyArg_ParseTuple(args, "OOOO", &pArg1, &pArg2, &pArg3, &pArg4);

    // pArg1
TODO for int


    // pArg2
TODO for const Unigine::Math::quat &


    // pArg3
TODO for int


    // pArg4
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->setTangent(num, tangent, surface, target);
            };
            // args
            int num;
            const Unigine::Math::quat & tangent;
            int surface;
            int target;
    };
    auto *pRunner = new LocalRunner();
    pRunner->num = num;
    pRunner->tangent = tangent;
    pRunner->surface = surface;
    pRunner->target = target;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    delete pRunner;
    Py_INCREF(Py_None);
    ret = Py_None;

    // end
    // return: void
    return ret;
};

// public : getTangent
static PyObject * unigine_Mesh_get_tangent(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int num;
    PyObject *pArg2; // int surface;
    PyObject *pArg3; // int target;
    PyArg_ParseTuple(args, "OOO", &pArg1, &pArg2, &pArg3);

    // pArg1
TODO for int


    // pArg2
TODO for int


    // pArg3
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->getTangent(num, surface, target);
            };
            // args
            int num;
            int surface;
            int target;
            // return
            Unigine::Math::quat retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->num = num;
    pRunner->surface = surface;
    pRunner->target = target;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    Unigine::Math::quat retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: Unigine::Math::quat
    return ret;
};

// public : setNumColors
static PyObject * unigine_Mesh_set_num_colors(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int size;
    PyObject *pArg2; // int surface;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
TODO for int


    // pArg2
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->setNumColors(size, surface);
            };
            // args
            int size;
            int surface;
    };
    auto *pRunner = new LocalRunner();
    pRunner->size = size;
    pRunner->surface = surface;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    delete pRunner;
    Py_INCREF(Py_None);
    ret = Py_None;

    // end
    // return: void
    return ret;
};

// public : getNumColors
static PyObject * unigine_Mesh_get_num_colors(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int surface;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->getNumColors(surface);
            };
            // args
            int surface;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->surface = surface;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    int retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: int
    return ret;
};

// public : addColors
static PyObject * unigine_Mesh_add_colors(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const Unigine::Vector<Unigine::Math::vec4> & colors;
    PyObject *pArg2; // int surface;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
TODO for const Unigine::Vector<Unigine::Math::vec4> &


    // pArg2
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->addColors(colors, surface);
            };
            // args
            const Unigine::Vector<Unigine::Math::vec4> & colors;
            int surface;
    };
    auto *pRunner = new LocalRunner();
    pRunner->colors = colors;
    pRunner->surface = surface;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    delete pRunner;
    Py_INCREF(Py_None);
    ret = Py_None;

    // end
    // return: void
    return ret;
};

// public : addColor
static PyObject * unigine_Mesh_add_color(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const Unigine::Math::vec4 & color;
    PyObject *pArg2; // int surface;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
TODO for const Unigine::Math::vec4 &


    // pArg2
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->addColor(color, surface);
            };
            // args
            const Unigine::Math::vec4 & color;
            int surface;
    };
    auto *pRunner = new LocalRunner();
    pRunner->color = color;
    pRunner->surface = surface;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    delete pRunner;
    Py_INCREF(Py_None);
    ret = Py_None;

    // end
    // return: void
    return ret;
};

// public : setColor
static PyObject * unigine_Mesh_set_color(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int num;
    PyObject *pArg2; // const Unigine::Math::vec4 & color;
    PyObject *pArg3; // int surface;
    PyArg_ParseTuple(args, "OOO", &pArg1, &pArg2, &pArg3);

    // pArg1
TODO for int


    // pArg2
TODO for const Unigine::Math::vec4 &


    // pArg3
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->setColor(num, color, surface);
            };
            // args
            int num;
            const Unigine::Math::vec4 & color;
            int surface;
    };
    auto *pRunner = new LocalRunner();
    pRunner->num = num;
    pRunner->color = color;
    pRunner->surface = surface;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    delete pRunner;
    Py_INCREF(Py_None);
    ret = Py_None;

    // end
    // return: void
    return ret;
};

// public : getColor
static PyObject * unigine_Mesh_get_color(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int num;
    PyObject *pArg2; // int surface;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
TODO for int


    // pArg2
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->getColor(num, surface);
            };
            // args
            int num;
            int surface;
            // return
            Unigine::Math::vec4 retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->num = num;
    pRunner->surface = surface;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    Unigine::Math::vec4 retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: Unigine::Math::vec4
    return ret;
};

// public : setNumCIndices
static PyObject * unigine_Mesh_set_num_c_indices(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int size;
    PyObject *pArg2; // int surface;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
TODO for int


    // pArg2
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->setNumCIndices(size, surface);
            };
            // args
            int size;
            int surface;
    };
    auto *pRunner = new LocalRunner();
    pRunner->size = size;
    pRunner->surface = surface;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    delete pRunner;
    Py_INCREF(Py_None);
    ret = Py_None;

    // end
    // return: void
    return ret;
};

// public : getNumCIndices
static PyObject * unigine_Mesh_get_num_c_indices(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int surface;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->getNumCIndices(surface);
            };
            // args
            int surface;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->surface = surface;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    int retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: int
    return ret;
};

// public : addCIndices
static PyObject * unigine_Mesh_add_c_indices(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const Unigine::Vector<int> & indices;
    PyObject *pArg2; // int surface;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
TODO for const Unigine::Vector<int> &


    // pArg2
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->addCIndices(indices, surface);
            };
            // args
            const Unigine::Vector<int> & indices;
            int surface;
    };
    auto *pRunner = new LocalRunner();
    pRunner->indices = indices;
    pRunner->surface = surface;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    delete pRunner;
    Py_INCREF(Py_None);
    ret = Py_None;

    // end
    // return: void
    return ret;
};

// public : addCIndex
static PyObject * unigine_Mesh_add_c_index(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int index;
    PyObject *pArg2; // int surface;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
TODO for int


    // pArg2
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->addCIndex(index, surface);
            };
            // args
            int index;
            int surface;
    };
    auto *pRunner = new LocalRunner();
    pRunner->index = index;
    pRunner->surface = surface;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    delete pRunner;
    Py_INCREF(Py_None);
    ret = Py_None;

    // end
    // return: void
    return ret;
};

// public : setCIndex
static PyObject * unigine_Mesh_set_c_index(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int num;
    PyObject *pArg2; // int index;
    PyObject *pArg3; // int surface;
    PyArg_ParseTuple(args, "OOO", &pArg1, &pArg2, &pArg3);

    // pArg1
TODO for int


    // pArg2
TODO for int


    // pArg3
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->setCIndex(num, index, surface);
            };
            // args
            int num;
            int index;
            int surface;
    };
    auto *pRunner = new LocalRunner();
    pRunner->num = num;
    pRunner->index = index;
    pRunner->surface = surface;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    delete pRunner;
    Py_INCREF(Py_None);
    ret = Py_None;

    // end
    // return: void
    return ret;
};

// public : getCIndex
static PyObject * unigine_Mesh_get_c_index(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int num;
    PyObject *pArg2; // int surface;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
TODO for int


    // pArg2
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->getCIndex(num, surface);
            };
            // args
            int num;
            int surface;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->num = num;
    pRunner->surface = surface;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    int retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: int
    return ret;
};

// public : setNumTIndices
static PyObject * unigine_Mesh_set_num_t_indices(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int size;
    PyObject *pArg2; // int surface;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
TODO for int


    // pArg2
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->setNumTIndices(size, surface);
            };
            // args
            int size;
            int surface;
    };
    auto *pRunner = new LocalRunner();
    pRunner->size = size;
    pRunner->surface = surface;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    delete pRunner;
    Py_INCREF(Py_None);
    ret = Py_None;

    // end
    // return: void
    return ret;
};

// public : getNumTIndices
static PyObject * unigine_Mesh_get_num_t_indices(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int surface;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->getNumTIndices(surface);
            };
            // args
            int surface;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->surface = surface;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    int retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: int
    return ret;
};

// public : addTIndices
static PyObject * unigine_Mesh_add_t_indices(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const Unigine::Vector<int> & indices;
    PyObject *pArg2; // int surface;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
TODO for const Unigine::Vector<int> &


    // pArg2
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->addTIndices(indices, surface);
            };
            // args
            const Unigine::Vector<int> & indices;
            int surface;
    };
    auto *pRunner = new LocalRunner();
    pRunner->indices = indices;
    pRunner->surface = surface;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    delete pRunner;
    Py_INCREF(Py_None);
    ret = Py_None;

    // end
    // return: void
    return ret;
};

// public : addTIndex
static PyObject * unigine_Mesh_add_t_index(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int index;
    PyObject *pArg2; // int surface;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
TODO for int


    // pArg2
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->addTIndex(index, surface);
            };
            // args
            int index;
            int surface;
    };
    auto *pRunner = new LocalRunner();
    pRunner->index = index;
    pRunner->surface = surface;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    delete pRunner;
    Py_INCREF(Py_None);
    ret = Py_None;

    // end
    // return: void
    return ret;
};

// public : setTIndex
static PyObject * unigine_Mesh_set_t_index(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int num;
    PyObject *pArg2; // int index;
    PyObject *pArg3; // int surface;
    PyArg_ParseTuple(args, "OOO", &pArg1, &pArg2, &pArg3);

    // pArg1
TODO for int


    // pArg2
TODO for int


    // pArg3
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->setTIndex(num, index, surface);
            };
            // args
            int num;
            int index;
            int surface;
    };
    auto *pRunner = new LocalRunner();
    pRunner->num = num;
    pRunner->index = index;
    pRunner->surface = surface;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    delete pRunner;
    Py_INCREF(Py_None);
    ret = Py_None;

    // end
    // return: void
    return ret;
};

// public : getTIndex
static PyObject * unigine_Mesh_get_t_index(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int num;
    PyObject *pArg2; // int surface;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
TODO for int


    // pArg2
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->getTIndex(num, surface);
            };
            // args
            int num;
            int surface;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->num = num;
    pRunner->surface = surface;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    int retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: int
    return ret;
};

// public : setNumIndices
static PyObject * unigine_Mesh_set_num_indices(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int size;
    PyObject *pArg2; // int surface;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
TODO for int


    // pArg2
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->setNumIndices(size, surface);
            };
            // args
            int size;
            int surface;
    };
    auto *pRunner = new LocalRunner();
    pRunner->size = size;
    pRunner->surface = surface;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    delete pRunner;
    Py_INCREF(Py_None);
    ret = Py_None;

    // end
    // return: void
    return ret;
};

// public : getNumIndices
static PyObject * unigine_Mesh_get_num_indices(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int surface;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->getNumIndices(surface);
            };
            // args
            int surface;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->surface = surface;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    int retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: int
    return ret;
};

// public : addIndices
static PyObject * unigine_Mesh_add_indices(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const Unigine::Vector<int> & indices;
    PyObject *pArg2; // int surface;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
TODO for const Unigine::Vector<int> &


    // pArg2
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->addIndices(indices, surface);
            };
            // args
            const Unigine::Vector<int> & indices;
            int surface;
    };
    auto *pRunner = new LocalRunner();
    pRunner->indices = indices;
    pRunner->surface = surface;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    delete pRunner;
    Py_INCREF(Py_None);
    ret = Py_None;

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
TODO for int


    // pArg2
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->addIndex(index, surface);
            };
            // args
            int index;
            int surface;
    };
    auto *pRunner = new LocalRunner();
    pRunner->index = index;
    pRunner->surface = surface;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    delete pRunner;
    Py_INCREF(Py_None);
    ret = Py_None;

    // end
    // return: void
    return ret;
};

// public : setIndex
static PyObject * unigine_Mesh_set_index(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int num;
    PyObject *pArg2; // int index;
    PyObject *pArg3; // int surface;
    PyArg_ParseTuple(args, "OOO", &pArg1, &pArg2, &pArg3);

    // pArg1
TODO for int


    // pArg2
TODO for int


    // pArg3
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->setIndex(num, index, surface);
            };
            // args
            int num;
            int index;
            int surface;
    };
    auto *pRunner = new LocalRunner();
    pRunner->num = num;
    pRunner->index = index;
    pRunner->surface = surface;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    delete pRunner;
    Py_INCREF(Py_None);
    ret = Py_None;

    // end
    // return: void
    return ret;
};

// public : getIndex
static PyObject * unigine_Mesh_get_index(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int num;
    PyObject *pArg2; // int surface;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
TODO for int


    // pArg2
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->getIndex(num, surface);
            };
            // args
            int num;
            int surface;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->num = num;
    pRunner->surface = surface;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    int retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: int
    return ret;
};

// public : getVertices
static PyObject * unigine_Mesh_get_vertices(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int surface;
    PyObject *pArg2; // int target;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
TODO for int


    // pArg2
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->getVertices(surface, target);
            };
            // args
            int surface;
            int target;
            // return
            Unigine::Vector<Unigine::Math::vec3> & retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->surface = surface;
    pRunner->target = target;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    Unigine::Vector<Unigine::Math::vec3> & retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: Unigine::Vector<Unigine::Math::vec3> &
    return ret;
};

// public : getNormals
static PyObject * unigine_Mesh_get_normals(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int surface;
    PyObject *pArg2; // int target;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
TODO for int


    // pArg2
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->getNormals(surface, target);
            };
            // args
            int surface;
            int target;
            // return
            Unigine::Vector<Unigine::Math::vec3> & retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->surface = surface;
    pRunner->target = target;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    Unigine::Vector<Unigine::Math::vec3> & retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: Unigine::Vector<Unigine::Math::vec3> &
    return ret;
};

// public : getTangents
static PyObject * unigine_Mesh_get_tangents(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int surface;
    PyObject *pArg2; // int target;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
TODO for int


    // pArg2
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->getTangents(surface, target);
            };
            // args
            int surface;
            int target;
            // return
            Unigine::Vector<Unigine::Math::quat> & retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->surface = surface;
    pRunner->target = target;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    Unigine::Vector<Unigine::Math::quat> & retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: Unigine::Vector<Unigine::Math::quat> &
    return ret;
};

// public : getTexCoords0
static PyObject * unigine_Mesh_get_tex_coords0(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int surface;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->getTexCoords0(surface);
            };
            // args
            int surface;
            // return
            Unigine::Vector<Unigine::Math::vec2> & retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->surface = surface;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    Unigine::Vector<Unigine::Math::vec2> & retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: Unigine::Vector<Unigine::Math::vec2> &
    return ret;
};

// public : getTexCoords1
static PyObject * unigine_Mesh_get_tex_coords1(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int surface;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->getTexCoords1(surface);
            };
            // args
            int surface;
            // return
            Unigine::Vector<Unigine::Math::vec2> & retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->surface = surface;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    Unigine::Vector<Unigine::Math::vec2> & retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: Unigine::Vector<Unigine::Math::vec2> &
    return ret;
};

// public : getColors
static PyObject * unigine_Mesh_get_colors(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int surface;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->getColors(surface);
            };
            // args
            int surface;
            // return
            Unigine::Vector<Unigine::Math::bvec4> & retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->surface = surface;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    Unigine::Vector<Unigine::Math::bvec4> & retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: Unigine::Vector<Unigine::Math::bvec4> &
    return ret;
};

// public : getCIndices
static PyObject * unigine_Mesh_get_c_indices(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int surface;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->getCIndices(surface);
            };
            // args
            int surface;
            // return
            Unigine::Vector<int> & retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->surface = surface;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    Unigine::Vector<int> & retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: Unigine::Vector<int> &
    return ret;
};

// public : getTIndices
static PyObject * unigine_Mesh_get_t_indices(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int surface;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->getTIndices(surface);
            };
            // args
            int surface;
            // return
            Unigine::Vector<int> & retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->surface = surface;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    Unigine::Vector<int> & retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: Unigine::Vector<int> &
    return ret;
};

// public : getBoundBox
static PyObject * unigine_Mesh_get_bound_box(unigine_Mesh* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->getBoundBox();
            };
            // args
            // return
            Unigine::Math::BoundBox retOriginal;
    };
    auto *pRunner = new LocalRunner();
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    Unigine::Math::BoundBox retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: Unigine::Math::BoundBox
    return ret;
};

// public : getBoundBox
static PyObject * unigine_Mesh_get_bound_box(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int surface;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->getBoundBox(surface);
            };
            // args
            int surface;
            // return
            Unigine::Math::BoundBox retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->surface = surface;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    Unigine::Math::BoundBox retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: Unigine::Math::BoundBox
    return ret;
};

// public : getBoundSphere
static PyObject * unigine_Mesh_get_bound_sphere(unigine_Mesh* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->getBoundSphere();
            };
            // args
            // return
            Unigine::Math::BoundSphere retOriginal;
    };
    auto *pRunner = new LocalRunner();
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    Unigine::Math::BoundSphere retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: Unigine::Math::BoundSphere
    return ret;
};

// public : getBoundSphere
static PyObject * unigine_Mesh_get_bound_sphere(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int surface;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->getBoundSphere(surface);
            };
            // args
            int surface;
            // return
            Unigine::Math::BoundSphere retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->surface = surface;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    Unigine::Math::BoundSphere retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: Unigine::Math::BoundSphere
    return ret;
};

// public : setBoundBox
static PyObject * unigine_Mesh_set_bound_box(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const Unigine::Math::BoundBox & bb;
    PyObject *pArg2; // int surface;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
TODO for const Unigine::Math::BoundBox &


    // pArg2
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->setBoundBox(bb, surface);
            };
            // args
            const Unigine::Math::BoundBox & bb;
            int surface;
    };
    auto *pRunner = new LocalRunner();
    pRunner->bb = bb;
    pRunner->surface = surface;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    delete pRunner;
    Py_INCREF(Py_None);
    ret = Py_None;

    // end
    // return: void
    return ret;
};

// public : setBoundBox
static PyObject * unigine_Mesh_set_bound_box(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const Unigine::Math::BoundBox & bb;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for const Unigine::Math::BoundBox &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->setBoundBox(bb);
            };
            // args
            const Unigine::Math::BoundBox & bb;
    };
    auto *pRunner = new LocalRunner();
    pRunner->bb = bb;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    delete pRunner;
    Py_INCREF(Py_None);
    ret = Py_None;

    // end
    // return: void
    return ret;
};

// public : setBoundSphere
static PyObject * unigine_Mesh_set_bound_sphere(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const Unigine::Math::BoundSphere & bs;
    PyObject *pArg2; // int surface;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
TODO for const Unigine::Math::BoundSphere &


    // pArg2
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->setBoundSphere(bs, surface);
            };
            // args
            const Unigine::Math::BoundSphere & bs;
            int surface;
    };
    auto *pRunner = new LocalRunner();
    pRunner->bs = bs;
    pRunner->surface = surface;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    delete pRunner;
    Py_INCREF(Py_None);
    ret = Py_None;

    // end
    // return: void
    return ret;
};

// public : setBoundSphere
static PyObject * unigine_Mesh_set_bound_sphere(unigine_Mesh* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const Unigine::Math::BoundSphere & bs;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for const Unigine::Math::BoundSphere &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->setBoundSphere(bs);
            };
            // args
            const Unigine::Math::BoundSphere & bs;
    };
    auto *pRunner = new LocalRunner();
    pRunner->bs = bs;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    delete pRunner;
    Py_INCREF(Py_None);
    ret = Py_None;

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
        "create", (PyCFunction)unigine_Mesh_create, METH_STATIC|METH_VARARGS,
        "public (static): create"
    },
    {
        "create", (PyCFunction)unigine_Mesh_create, METH_STATIC|METH_VARARGS,
        "public (static): create"
    },
    {
        "assign_from", (PyCFunction)unigine_Mesh_assign_from, METH_VARARGS,
        "public : assignFrom"
    },
    {
        "info", (PyCFunction)unigine_Mesh_info, METH_VARARGS,
        "public : info"
    },
    {
        "load", (PyCFunction)unigine_Mesh_load, METH_VARARGS,
        "public : load"
    },
    {
        "save", (PyCFunction)unigine_Mesh_save, METH_VARARGS,
        "public : save"
    },
    {
        "clear", (PyCFunction)unigine_Mesh_clear, METH_NOARGS,
        "public : clear"
    },
    {
        "flip_yz", (PyCFunction)unigine_Mesh_flip_yz, METH_VARARGS,
        "public : flipYZ"
    },
    {
        "flip_tangent", (PyCFunction)unigine_Mesh_flip_tangent, METH_VARARGS,
        "public : flipTangent"
    },
    {
        "create_bounds", (PyCFunction)unigine_Mesh_create_bounds, METH_VARARGS,
        "public : createBounds"
    },
    {
        "remove_indices", (PyCFunction)unigine_Mesh_remove_indices, METH_VARARGS,
        "public : removeIndices"
    },
    {
        "create_indices", (PyCFunction)unigine_Mesh_create_indices, METH_VARARGS,
        "public : createIndices"
    },
    {
        "optimize_indices", (PyCFunction)unigine_Mesh_optimize_indices, METH_VARARGS,
        "public : optimizeIndices"
    },
    {
        "create_tangents", (PyCFunction)unigine_Mesh_create_tangents, METH_VARARGS,
        "public : createTangents"
    },
    {
        "create_tangents", (PyCFunction)unigine_Mesh_create_tangents, METH_VARARGS,
        "public : createTangents"
    },
    {
        "create_normals", (PyCFunction)unigine_Mesh_create_normals, METH_VARARGS,
        "public : createNormals"
    },
    {
        "create_normals", (PyCFunction)unigine_Mesh_create_normals, METH_VARARGS,
        "public : createNormals"
    },
    {
        "get_num_bones", (PyCFunction)unigine_Mesh_get_num_bones, METH_NOARGS,
        "public : getNumBones"
    },
    {
        "find_bone", (PyCFunction)unigine_Mesh_find_bone, METH_VARARGS,
        "public : findBone"
    },
    {
        "add_bone", (PyCFunction)unigine_Mesh_add_bone, METH_VARARGS,
        "public : addBone"
    },
    {
        "set_bone_name", (PyCFunction)unigine_Mesh_set_bone_name, METH_VARARGS,
        "public : setBoneName"
    },
    {
        "get_bone_name", (PyCFunction)unigine_Mesh_get_bone_name, METH_VARARGS,
        "public : getBoneName"
    },
    {
        "set_bone_parent", (PyCFunction)unigine_Mesh_set_bone_parent, METH_VARARGS,
        "public : setBoneParent"
    },
    {
        "get_bone_parent", (PyCFunction)unigine_Mesh_get_bone_parent, METH_VARARGS,
        "public : getBoneParent"
    },
    {
        "set_bone_transform", (PyCFunction)unigine_Mesh_set_bone_transform, METH_VARARGS,
        "public : setBoneTransform"
    },
    {
        "get_bone_transform", (PyCFunction)unigine_Mesh_get_bone_transform, METH_VARARGS,
        "public : getBoneTransform"
    },
    {
        "set_bone_transforms", (PyCFunction)unigine_Mesh_set_bone_transforms, METH_VARARGS,
        "public : setBoneTransforms"
    },
    {
        "get_bone_transforms", (PyCFunction)unigine_Mesh_get_bone_transforms, METH_VARARGS,
        "public : getBoneTransforms"
    },
    {
        "get_num_animations", (PyCFunction)unigine_Mesh_get_num_animations, METH_NOARGS,
        "public : getNumAnimations"
    },
    {
        "find_animation", (PyCFunction)unigine_Mesh_find_animation, METH_VARARGS,
        "public : findAnimation"
    },
    {
        "sort_animations", (PyCFunction)unigine_Mesh_sort_animations, METH_NOARGS,
        "public : sortAnimations"
    },
    {
        "add_animation", (PyCFunction)unigine_Mesh_add_animation, METH_VARARGS,
        "public : addAnimation"
    },
    {
        "set_animation_name", (PyCFunction)unigine_Mesh_set_animation_name, METH_VARARGS,
        "public : setAnimationName"
    },
    {
        "get_animation_name", (PyCFunction)unigine_Mesh_get_animation_name, METH_VARARGS,
        "public : getAnimationName"
    },
    {
        "set_animation_bones", (PyCFunction)unigine_Mesh_set_animation_bones, METH_VARARGS,
        "public : setAnimationBones"
    },
    {
        "get_animation_bones", (PyCFunction)unigine_Mesh_get_animation_bones, METH_VARARGS,
        "public : getAnimationBones"
    },
    {
        "set_num_animation_frames", (PyCFunction)unigine_Mesh_set_num_animation_frames, METH_VARARGS,
        "public : setNumAnimationFrames"
    },
    {
        "get_num_animation_frames", (PyCFunction)unigine_Mesh_get_num_animation_frames, METH_VARARGS,
        "public : getNumAnimationFrames"
    },
    {
        "set_animation_frame", (PyCFunction)unigine_Mesh_set_animation_frame, METH_VARARGS,
        "public : setAnimationFrame"
    },
    {
        "get_animation_frame", (PyCFunction)unigine_Mesh_get_animation_frame, METH_VARARGS,
        "public : getAnimationFrame"
    },
    {
        "set_animation_frame", (PyCFunction)unigine_Mesh_set_animation_frame, METH_VARARGS,
        "public : setAnimationFrame"
    },
    {
        "get_animation_frame", (PyCFunction)unigine_Mesh_get_animation_frame, METH_VARARGS,
        "public : getAnimationFrame"
    },
    {
        "get_num_surfaces", (PyCFunction)unigine_Mesh_get_num_surfaces, METH_NOARGS,
        "public : getNumSurfaces"
    },
    {
        "find_surface", (PyCFunction)unigine_Mesh_find_surface, METH_VARARGS,
        "public : findSurface"
    },
    {
        "sort_surfaces", (PyCFunction)unigine_Mesh_sort_surfaces, METH_NOARGS,
        "public : sortSurfaces"
    },
    {
        "add_surface", (PyCFunction)unigine_Mesh_add_surface, METH_VARARGS,
        "public : addSurface"
    },
    {
        "set_surface_name", (PyCFunction)unigine_Mesh_set_surface_name, METH_VARARGS,
        "public : setSurfaceName"
    },
    {
        "get_surface_name", (PyCFunction)unigine_Mesh_get_surface_name, METH_VARARGS,
        "public : getSurfaceName"
    },
    {
        "set_surface_lightmap_uv_channel", (PyCFunction)unigine_Mesh_set_surface_lightmap_uv_channel, METH_VARARGS,
        "public : setSurfaceLightmapUVChannel"
    },
    {
        "get_surface_lightmap_uv_channel", (PyCFunction)unigine_Mesh_get_surface_lightmap_uv_channel, METH_VARARGS,
        "public : getSurfaceLightmapUVChannel"
    },
    {
        "set_surface_lightmap_resolution", (PyCFunction)unigine_Mesh_set_surface_lightmap_resolution, METH_VARARGS,
        "public : setSurfaceLightmapResolution"
    },
    {
        "get_surface_lightmap_resolution", (PyCFunction)unigine_Mesh_get_surface_lightmap_resolution, METH_VARARGS,
        "public : getSurfaceLightmapResolution"
    },
    {
        "set_num_surface_targets", (PyCFunction)unigine_Mesh_set_num_surface_targets, METH_VARARGS,
        "public : setNumSurfaceTargets"
    },
    {
        "get_num_surface_targets", (PyCFunction)unigine_Mesh_get_num_surface_targets, METH_VARARGS,
        "public : getNumSurfaceTargets"
    },
    {
        "set_surface_target_name", (PyCFunction)unigine_Mesh_set_surface_target_name, METH_VARARGS,
        "public : setSurfaceTargetName"
    },
    {
        "get_surface_target_name", (PyCFunction)unigine_Mesh_get_surface_target_name, METH_VARARGS,
        "public : getSurfaceTargetName"
    },
    {
        "find_surface_target", (PyCFunction)unigine_Mesh_find_surface_target, METH_VARARGS,
        "public : findSurfaceTarget"
    },
    {
        "create_intersection", (PyCFunction)unigine_Mesh_create_intersection, METH_VARARGS,
        "public : createIntersection"
    },
    {
        "get_intersection", (PyCFunction)unigine_Mesh_get_intersection, METH_VARARGS,
        "public : getIntersection"
    },
    {
        "set_surface_transform", (PyCFunction)unigine_Mesh_set_surface_transform, METH_VARARGS,
        "public : setSurfaceTransform"
    },
    {
        "add_mesh_surface", (PyCFunction)unigine_Mesh_add_mesh_surface, METH_VARARGS,
        "public : addMeshSurface"
    },
    {
        "add_mesh_surface", (PyCFunction)unigine_Mesh_add_mesh_surface, METH_VARARGS,
        "public : addMeshSurface"
    },
    {
        "add_empty_surface", (PyCFunction)unigine_Mesh_add_empty_surface, METH_VARARGS,
        "public : addEmptySurface"
    },
    {
        "add_surface_target", (PyCFunction)unigine_Mesh_add_surface_target, METH_VARARGS,
        "public : addSurfaceTarget"
    },
    {
        "add_box_surface", (PyCFunction)unigine_Mesh_add_box_surface, METH_VARARGS,
        "public : addBoxSurface"
    },
    {
        "add_plane_surface", (PyCFunction)unigine_Mesh_add_plane_surface, METH_VARARGS,
        "public : addPlaneSurface"
    },
    {
        "add_sphere_surface", (PyCFunction)unigine_Mesh_add_sphere_surface, METH_VARARGS,
        "public : addSphereSurface"
    },
    {
        "add_capsule_surface", (PyCFunction)unigine_Mesh_add_capsule_surface, METH_VARARGS,
        "public : addCapsuleSurface"
    },
    {
        "add_cylinder_surface", (PyCFunction)unigine_Mesh_add_cylinder_surface, METH_VARARGS,
        "public : addCylinderSurface"
    },
    {
        "add_prism_surface", (PyCFunction)unigine_Mesh_add_prism_surface, METH_VARARGS,
        "public : addPrismSurface"
    },
    {
        "add_icosahedron_surface", (PyCFunction)unigine_Mesh_add_icosahedron_surface, METH_VARARGS,
        "public : addIcosahedronSurface"
    },
    {
        "add_dodecahedron_surface", (PyCFunction)unigine_Mesh_add_dodecahedron_surface, METH_VARARGS,
        "public : addDodecahedronSurface"
    },
    {
        "get_num_c_vertex", (PyCFunction)unigine_Mesh_get_num_c_vertex, METH_VARARGS,
        "public : getNumCVertex"
    },
    {
        "get_num_t_vertex", (PyCFunction)unigine_Mesh_get_num_t_vertex, METH_VARARGS,
        "public : getNumTVertex"
    },
    {
        "remap_c_vertex", (PyCFunction)unigine_Mesh_remap_c_vertex, METH_VARARGS,
        "public : remapCVertex"
    },
    {
        "set_num_weights", (PyCFunction)unigine_Mesh_set_num_weights, METH_VARARGS,
        "public : setNumWeights"
    },
    {
        "get_num_weights", (PyCFunction)unigine_Mesh_get_num_weights, METH_VARARGS,
        "public : getNumWeights"
    },
    {
        "set_weight_count", (PyCFunction)unigine_Mesh_set_weight_count, METH_VARARGS,
        "public : setWeightCount"
    },
    {
        "get_weight_count", (PyCFunction)unigine_Mesh_get_weight_count, METH_VARARGS,
        "public : getWeightCount"
    },
    {
        "set_weight_bones", (PyCFunction)unigine_Mesh_set_weight_bones, METH_VARARGS,
        "public : setWeightBones"
    },
    {
        "get_weight_bones", (PyCFunction)unigine_Mesh_get_weight_bones, METH_VARARGS,
        "public : getWeightBones"
    },
    {
        "set_weight_weights", (PyCFunction)unigine_Mesh_set_weight_weights, METH_VARARGS,
        "public : setWeightWeights"
    },
    {
        "get_weight_weights", (PyCFunction)unigine_Mesh_get_weight_weights, METH_VARARGS,
        "public : getWeightWeights"
    },
    {
        "set_num_vertex", (PyCFunction)unigine_Mesh_set_num_vertex, METH_VARARGS,
        "public : setNumVertex"
    },
    {
        "get_num_vertex", (PyCFunction)unigine_Mesh_get_num_vertex, METH_VARARGS,
        "public : getNumVertex"
    },
    {
        "add_vertex", (PyCFunction)unigine_Mesh_add_vertex, METH_VARARGS,
        "public : addVertex"
    },
    {
        "add_vertex", (PyCFunction)unigine_Mesh_add_vertex, METH_VARARGS,
        "public : addVertex"
    },
    {
        "set_vertex", (PyCFunction)unigine_Mesh_set_vertex, METH_VARARGS,
        "public : setVertex"
    },
    {
        "get_vertex", (PyCFunction)unigine_Mesh_get_vertex, METH_VARARGS,
        "public : getVertex"
    },
    {
        "set_num_tex_coords0", (PyCFunction)unigine_Mesh_set_num_tex_coords0, METH_VARARGS,
        "public : setNumTexCoords0"
    },
    {
        "get_num_tex_coords0", (PyCFunction)unigine_Mesh_get_num_tex_coords0, METH_VARARGS,
        "public : getNumTexCoords0"
    },
    {
        "add_tex_coords0", (PyCFunction)unigine_Mesh_add_tex_coords0, METH_VARARGS,
        "public : addTexCoords0"
    },
    {
        "add_tex_coord0", (PyCFunction)unigine_Mesh_add_tex_coord0, METH_VARARGS,
        "public : addTexCoord0"
    },
    {
        "set_tex_coord0", (PyCFunction)unigine_Mesh_set_tex_coord0, METH_VARARGS,
        "public : setTexCoord0"
    },
    {
        "get_tex_coord0", (PyCFunction)unigine_Mesh_get_tex_coord0, METH_VARARGS,
        "public : getTexCoord0"
    },
    {
        "set_num_tex_coords1", (PyCFunction)unigine_Mesh_set_num_tex_coords1, METH_VARARGS,
        "public : setNumTexCoords1"
    },
    {
        "get_num_tex_coords1", (PyCFunction)unigine_Mesh_get_num_tex_coords1, METH_VARARGS,
        "public : getNumTexCoords1"
    },
    {
        "add_tex_coords1", (PyCFunction)unigine_Mesh_add_tex_coords1, METH_VARARGS,
        "public : addTexCoords1"
    },
    {
        "add_tex_coord1", (PyCFunction)unigine_Mesh_add_tex_coord1, METH_VARARGS,
        "public : addTexCoord1"
    },
    {
        "set_tex_coord1", (PyCFunction)unigine_Mesh_set_tex_coord1, METH_VARARGS,
        "public : setTexCoord1"
    },
    {
        "get_tex_coord1", (PyCFunction)unigine_Mesh_get_tex_coord1, METH_VARARGS,
        "public : getTexCoord1"
    },
    {
        "set_num_normals", (PyCFunction)unigine_Mesh_set_num_normals, METH_VARARGS,
        "public : setNumNormals"
    },
    {
        "get_num_normals", (PyCFunction)unigine_Mesh_get_num_normals, METH_VARARGS,
        "public : getNumNormals"
    },
    {
        "add_normals", (PyCFunction)unigine_Mesh_add_normals, METH_VARARGS,
        "public : addNormals"
    },
    {
        "add_normal", (PyCFunction)unigine_Mesh_add_normal, METH_VARARGS,
        "public : addNormal"
    },
    {
        "set_normal", (PyCFunction)unigine_Mesh_set_normal, METH_VARARGS,
        "public : setNormal"
    },
    {
        "get_normal", (PyCFunction)unigine_Mesh_get_normal, METH_VARARGS,
        "public : getNormal"
    },
    {
        "set_num_tangents", (PyCFunction)unigine_Mesh_set_num_tangents, METH_VARARGS,
        "public : setNumTangents"
    },
    {
        "get_num_tangents", (PyCFunction)unigine_Mesh_get_num_tangents, METH_VARARGS,
        "public : getNumTangents"
    },
    {
        "add_tangents", (PyCFunction)unigine_Mesh_add_tangents, METH_VARARGS,
        "public : addTangents"
    },
    {
        "add_tangent", (PyCFunction)unigine_Mesh_add_tangent, METH_VARARGS,
        "public : addTangent"
    },
    {
        "set_tangent", (PyCFunction)unigine_Mesh_set_tangent, METH_VARARGS,
        "public : setTangent"
    },
    {
        "get_tangent", (PyCFunction)unigine_Mesh_get_tangent, METH_VARARGS,
        "public : getTangent"
    },
    {
        "set_num_colors", (PyCFunction)unigine_Mesh_set_num_colors, METH_VARARGS,
        "public : setNumColors"
    },
    {
        "get_num_colors", (PyCFunction)unigine_Mesh_get_num_colors, METH_VARARGS,
        "public : getNumColors"
    },
    {
        "add_colors", (PyCFunction)unigine_Mesh_add_colors, METH_VARARGS,
        "public : addColors"
    },
    {
        "add_color", (PyCFunction)unigine_Mesh_add_color, METH_VARARGS,
        "public : addColor"
    },
    {
        "set_color", (PyCFunction)unigine_Mesh_set_color, METH_VARARGS,
        "public : setColor"
    },
    {
        "get_color", (PyCFunction)unigine_Mesh_get_color, METH_VARARGS,
        "public : getColor"
    },
    {
        "set_num_c_indices", (PyCFunction)unigine_Mesh_set_num_c_indices, METH_VARARGS,
        "public : setNumCIndices"
    },
    {
        "get_num_c_indices", (PyCFunction)unigine_Mesh_get_num_c_indices, METH_VARARGS,
        "public : getNumCIndices"
    },
    {
        "add_c_indices", (PyCFunction)unigine_Mesh_add_c_indices, METH_VARARGS,
        "public : addCIndices"
    },
    {
        "add_c_index", (PyCFunction)unigine_Mesh_add_c_index, METH_VARARGS,
        "public : addCIndex"
    },
    {
        "set_c_index", (PyCFunction)unigine_Mesh_set_c_index, METH_VARARGS,
        "public : setCIndex"
    },
    {
        "get_c_index", (PyCFunction)unigine_Mesh_get_c_index, METH_VARARGS,
        "public : getCIndex"
    },
    {
        "set_num_t_indices", (PyCFunction)unigine_Mesh_set_num_t_indices, METH_VARARGS,
        "public : setNumTIndices"
    },
    {
        "get_num_t_indices", (PyCFunction)unigine_Mesh_get_num_t_indices, METH_VARARGS,
        "public : getNumTIndices"
    },
    {
        "add_t_indices", (PyCFunction)unigine_Mesh_add_t_indices, METH_VARARGS,
        "public : addTIndices"
    },
    {
        "add_t_index", (PyCFunction)unigine_Mesh_add_t_index, METH_VARARGS,
        "public : addTIndex"
    },
    {
        "set_t_index", (PyCFunction)unigine_Mesh_set_t_index, METH_VARARGS,
        "public : setTIndex"
    },
    {
        "get_t_index", (PyCFunction)unigine_Mesh_get_t_index, METH_VARARGS,
        "public : getTIndex"
    },
    {
        "set_num_indices", (PyCFunction)unigine_Mesh_set_num_indices, METH_VARARGS,
        "public : setNumIndices"
    },
    {
        "get_num_indices", (PyCFunction)unigine_Mesh_get_num_indices, METH_VARARGS,
        "public : getNumIndices"
    },
    {
        "add_indices", (PyCFunction)unigine_Mesh_add_indices, METH_VARARGS,
        "public : addIndices"
    },
    {
        "add_index", (PyCFunction)unigine_Mesh_add_index, METH_VARARGS,
        "public : addIndex"
    },
    {
        "set_index", (PyCFunction)unigine_Mesh_set_index, METH_VARARGS,
        "public : setIndex"
    },
    {
        "get_index", (PyCFunction)unigine_Mesh_get_index, METH_VARARGS,
        "public : getIndex"
    },
    {
        "get_vertices", (PyCFunction)unigine_Mesh_get_vertices, METH_VARARGS,
        "public : getVertices"
    },
    {
        "get_normals", (PyCFunction)unigine_Mesh_get_normals, METH_VARARGS,
        "public : getNormals"
    },
    {
        "get_tangents", (PyCFunction)unigine_Mesh_get_tangents, METH_VARARGS,
        "public : getTangents"
    },
    {
        "get_tex_coords0", (PyCFunction)unigine_Mesh_get_tex_coords0, METH_VARARGS,
        "public : getTexCoords0"
    },
    {
        "get_tex_coords1", (PyCFunction)unigine_Mesh_get_tex_coords1, METH_VARARGS,
        "public : getTexCoords1"
    },
    {
        "get_colors", (PyCFunction)unigine_Mesh_get_colors, METH_VARARGS,
        "public : getColors"
    },
    {
        "get_c_indices", (PyCFunction)unigine_Mesh_get_c_indices, METH_VARARGS,
        "public : getCIndices"
    },
    {
        "get_t_indices", (PyCFunction)unigine_Mesh_get_t_indices, METH_VARARGS,
        "public : getTIndices"
    },
    {
        "get_bound_box", (PyCFunction)unigine_Mesh_get_bound_box, METH_NOARGS,
        "public : getBoundBox"
    },
    {
        "get_bound_box", (PyCFunction)unigine_Mesh_get_bound_box, METH_VARARGS,
        "public : getBoundBox"
    },
    {
        "get_bound_sphere", (PyCFunction)unigine_Mesh_get_bound_sphere, METH_NOARGS,
        "public : getBoundSphere"
    },
    {
        "get_bound_sphere", (PyCFunction)unigine_Mesh_get_bound_sphere, METH_VARARGS,
        "public : getBoundSphere"
    },
    {
        "set_bound_box", (PyCFunction)unigine_Mesh_set_bound_box, METH_VARARGS,
        "public : setBoundBox"
    },
    {
        "set_bound_box", (PyCFunction)unigine_Mesh_set_bound_box, METH_VARARGS,
        "public : setBoundBox"
    },
    {
        "set_bound_sphere", (PyCFunction)unigine_Mesh_set_bound_sphere, METH_VARARGS,
        "public : setBoundSphere"
    },
    {
        "set_bound_sphere", (PyCFunction)unigine_Mesh_set_bound_sphere, METH_VARARGS,
        "public : setBoundSphere"
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

    std::cout << "sizeof(unigine_Mesh) = " << sizeof(unigine_Mesh) << std::endl;

    unigine_Mesh *pInst = PyObject_New(unigine_Mesh, &unigine_MeshType);
    pInst->unigine_object_ptr = unigine_object_ptr;
    // Py_INCREF(pInst);
    return (PyObject *)pInst;
}

Unigine::Ptr<Unigine::Mesh> Mesh::Convert(PyObject *pObject) {
    if (Py_IS_TYPE(pObject, &unigine_MeshType) == 0) {
        // TODO error
    }
    unigine_Mesh *pInst = (unigine_Mesh *)pObject;
    return pInst->unigine_object_ptr;
}

}; // namespace PyUnigine

// this file automaticly generated from UnigineObjectMeshDynamic.h
#include "python3_unigine_objectmeshdynamic.h"

#include <string>
#include <UnigineObjects.h>
#include <UnigineLog.h>
#include <Python.h>
#include <structmember.h>

#include <iostream>

namespace PyUnigine {

// ------------------------------------------------------------------------------------------
// unigine_ObjectMeshDynamic

typedef struct {
    PyObject_HEAD
    // Type-specific fields go here.
    Unigine::ObjectMeshDynamic * unigine_object_ptr;
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
    self->unigine_object_ptr = new Unigine::ObjectMeshDynamic();
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

// public (static): convertible
static PyObject * unigine_ObjectMeshDynamic_convertible(unigine_ObjectMeshDynamic* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // Unigine::Node * node;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for Unigine::Node *


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = Unigine::ObjectMeshDynamic::convertible(node);
            };
            // args
            Unigine::Node * node;
            // return
            bool retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->node = node;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    bool retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyBool_FromLong(retOriginal);

    // end
    // return: bool
    return ret;
};

// public (static): create
static PyObject * unigine_ObjectMeshDynamic_create(unigine_ObjectMeshDynamic* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const Unigine::Ptr<Unigine::Mesh> & mesh;
    PyObject *pArg2; // int flags;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
TODO for const Unigine::Ptr<Unigine::Mesh> &


    // pArg2
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = Unigine::ObjectMeshDynamic::create(mesh, flags);
            };
            // args
            const Unigine::Ptr<Unigine::Mesh> & mesh;
            int flags;
            // return
            Unigine::Ptr<Unigine::ObjectMeshDynamic> retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->mesh = mesh;
    pRunner->flags = flags;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
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

// public (static): create
static PyObject * unigine_ObjectMeshDynamic_create(unigine_ObjectMeshDynamic* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const char * path;
    PyObject *pArg2; // int flags;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    if (!PyUnicode_Check(pArg1)) {
        // TODO - error
        std::cout << "ERROR: pArg1 No unicoode " << std::endl;
        Py_INCREF(Py_None);
        ret = Py_None;
        return ret;
    }
    const char * path = PyUnicode_AsUTF8(pArg1);


    // pArg2
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = Unigine::ObjectMeshDynamic::create(path, flags);
            };
            // args
            const char * path;
            int flags;
            // return
            Unigine::Ptr<Unigine::ObjectMeshDynamic> retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->path = path;
    pRunner->flags = flags;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
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

// public (static): create
static PyObject * unigine_ObjectMeshDynamic_create(unigine_ObjectMeshDynamic* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int flags;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for int


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
    while(!pRunner->mutexAsync.tryLock(5)) {
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

// public : loadMesh
static PyObject * unigine_ObjectMeshDynamic_load_mesh(unigine_ObjectMeshDynamic* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const char * path;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyUnicode_Check(pArg1)) {
        // TODO - error
        std::cout << "ERROR: pArg1 No unicoode " << std::endl;
        Py_INCREF(Py_None);
        ret = Py_None;
        return ret;
    }
    const char * path = PyUnicode_AsUTF8(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->loadMesh(path);
            };
            // args
            const char * path;
            // return
            bool retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->path = path;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    bool retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyBool_FromLong(retOriginal);

    // end
    // return: bool
    return ret;
};

// public : saveMesh
static PyObject * unigine_ObjectMeshDynamic_save_mesh(unigine_ObjectMeshDynamic* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const char * path;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyUnicode_Check(pArg1)) {
        // TODO - error
        std::cout << "ERROR: pArg1 No unicoode " << std::endl;
        Py_INCREF(Py_None);
        ret = Py_None;
        return ret;
    }
    const char * path = PyUnicode_AsUTF8(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->saveMesh(path);
            };
            // args
            const char * path;
            // return
            bool retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->path = path;
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
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
TODO for const Unigine::Ptr<Unigine::Mesh> &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->setMesh(mesh);
            };
            // args
            const Unigine::Ptr<Unigine::Mesh> & mesh;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->mesh = mesh;
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

// public : getMesh
static PyObject * unigine_ObjectMeshDynamic_get_mesh(unigine_ObjectMeshDynamic* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // Unigine::Ptr<Unigine::Mesh> & mesh;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for Unigine::Ptr<Unigine::Mesh> &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->getMesh(mesh);
            };
            // args
            Unigine::Ptr<Unigine::Mesh> & mesh;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->mesh = mesh;
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

// public : setMeshName
static PyObject * unigine_ObjectMeshDynamic_set_mesh_name(unigine_ObjectMeshDynamic* self, PyObject *args) {
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
                self->unigine_object_ptr->setMeshName(name);
            };
            // args
            const char * name;
    };
    auto *pRunner = new LocalRunner();
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

// public : getMeshName
static PyObject * unigine_ObjectMeshDynamic_get_mesh_name(unigine_ObjectMeshDynamic* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->getMeshName();
            };
            // args
            // return
            const char * retOriginal;
    };
    auto *pRunner = new LocalRunner();
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

// public : isUniqueMesh
static PyObject * unigine_ObjectMeshDynamic_is_unique_mesh(unigine_ObjectMeshDynamic* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->isUniqueMesh();
            };
            // args
            // return
            bool retOriginal;
    };
    auto *pRunner = new LocalRunner();
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    bool retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyBool_FromLong(retOriginal);

    // end
    // return: bool
    return ret;
};

// public : putUniqueMesh
static PyObject * unigine_ObjectMeshDynamic_put_unique_mesh(unigine_ObjectMeshDynamic* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->putUniqueMesh();
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

// public : setFPSVisibleCamera
static PyObject * unigine_ObjectMeshDynamic_set_fps_visible_camera(unigine_ObjectMeshDynamic* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int camera;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->setFPSVisibleCamera(camera);
            };
            // args
            int camera;
    };
    auto *pRunner = new LocalRunner();
    pRunner->camera = camera;
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

// public : getFPSVisibleCamera
static PyObject * unigine_ObjectMeshDynamic_get_fps_visible_camera(unigine_ObjectMeshDynamic* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->getFPSVisibleCamera();
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

// public : setFPSVisibleShadow
static PyObject * unigine_ObjectMeshDynamic_set_fps_visible_shadow(unigine_ObjectMeshDynamic* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int shadow;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->setFPSVisibleShadow(shadow);
            };
            // args
            int shadow;
    };
    auto *pRunner = new LocalRunner();
    pRunner->shadow = shadow;
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

// public : getFPSVisibleShadow
static PyObject * unigine_ObjectMeshDynamic_get_fps_visible_shadow(unigine_ObjectMeshDynamic* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->getFPSVisibleShadow();
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

// public : setFPSInvisible
static PyObject * unigine_ObjectMeshDynamic_set_fps_invisible(unigine_ObjectMeshDynamic* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int invisible;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->setFPSInvisible(invisible);
            };
            // args
            int invisible;
    };
    auto *pRunner = new LocalRunner();
    pRunner->invisible = invisible;
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

// public : getFPSInvisible
static PyObject * unigine_ObjectMeshDynamic_get_fps_invisible(unigine_ObjectMeshDynamic* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->getFPSInvisible();
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

// public : setUpdateDistanceLimit
static PyObject * unigine_ObjectMeshDynamic_set_update_distance_limit(unigine_ObjectMeshDynamic* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // float limit;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for float


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->setUpdateDistanceLimit(limit);
            };
            // args
            float limit;
    };
    auto *pRunner = new LocalRunner();
    pRunner->limit = limit;
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

// public : getUpdateDistanceLimit
static PyObject * unigine_ObjectMeshDynamic_get_update_distance_limit(unigine_ObjectMeshDynamic* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->getUpdateDistanceLimit();
            };
            // args
            // return
            float retOriginal;
    };
    auto *pRunner = new LocalRunner();
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    float retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = TODO: unknown type 'float'

    // end
    // return: float
    return ret;
};

// public : clearSurfaces
static PyObject * unigine_ObjectMeshDynamic_clear_surfaces(unigine_ObjectMeshDynamic* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->clearSurfaces();
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
static PyObject * unigine_ObjectMeshDynamic_add_surface(unigine_ObjectMeshDynamic* self, PyObject *args) {
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
                self->unigine_object_ptr->addSurface(name);
            };
            // args
            const char * name;
    };
    auto *pRunner = new LocalRunner();
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

// public : setSurfaceName
static PyObject * unigine_ObjectMeshDynamic_set_surface_name(unigine_ObjectMeshDynamic* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const char * name;
    PyObject *pArg2; // int surface;
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
                self->unigine_object_ptr->setSurfaceName(name, surface);
            };
            // args
            const char * name;
            int surface;
    };
    auto *pRunner = new LocalRunner();
    pRunner->name = name;
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

// public : removeSurface
static PyObject * unigine_ObjectMeshDynamic_remove_surface(unigine_ObjectMeshDynamic* self, PyObject *args) {
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
                self->unigine_object_ptr->removeSurface(surface);
            };
            // args
            int surface;
    };
    auto *pRunner = new LocalRunner();
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

// public : removeSurfaces
static PyObject * unigine_ObjectMeshDynamic_remove_surfaces(unigine_ObjectMeshDynamic* self, PyObject *args) {
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
                self->unigine_object_ptr->removeSurfaces(name);
            };
            // args
            const char * name;
    };
    auto *pRunner = new LocalRunner();
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

// public : updateSurfaceBegin
static PyObject * unigine_ObjectMeshDynamic_update_surface_begin(unigine_ObjectMeshDynamic* self, PyObject *args) {
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
                self->unigine_object_ptr->updateSurfaceBegin(surface);
            };
            // args
            int surface;
    };
    auto *pRunner = new LocalRunner();
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

// public : setSurfaceBegin
static PyObject * unigine_ObjectMeshDynamic_set_surface_begin(unigine_ObjectMeshDynamic* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int begin;
    PyObject *pArg2; // int surface;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
TODO for int


    // pArg2
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->setSurfaceBegin(begin, surface);
            };
            // args
            int begin;
            int surface;
    };
    auto *pRunner = new LocalRunner();
    pRunner->begin = begin;
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

// public : getSurfaceBegin
static PyObject * unigine_ObjectMeshDynamic_get_surface_begin(unigine_ObjectMeshDynamic* self, PyObject *args) {
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
                retOriginal = self->unigine_object_ptr->getSurfaceBegin(surface);
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

// public : updateSurfaceEnd
static PyObject * unigine_ObjectMeshDynamic_update_surface_end(unigine_ObjectMeshDynamic* self, PyObject *args) {
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
                self->unigine_object_ptr->updateSurfaceEnd(surface);
            };
            // args
            int surface;
    };
    auto *pRunner = new LocalRunner();
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

// public : setSurfaceEnd
static PyObject * unigine_ObjectMeshDynamic_set_surface_end(unigine_ObjectMeshDynamic* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int end;
    PyObject *pArg2; // int surface;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
TODO for int


    // pArg2
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->setSurfaceEnd(end, surface);
            };
            // args
            int end;
            int surface;
    };
    auto *pRunner = new LocalRunner();
    pRunner->end = end;
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

// public : getSurfaceEnd
static PyObject * unigine_ObjectMeshDynamic_get_surface_end(unigine_ObjectMeshDynamic* self, PyObject *args) {
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
                retOriginal = self->unigine_object_ptr->getSurfaceEnd(surface);
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

// public : clearVertex
static PyObject * unigine_ObjectMeshDynamic_clear_vertex(unigine_ObjectMeshDynamic* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->clearVertex();
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

// public : allocateVertex
static PyObject * unigine_ObjectMeshDynamic_allocate_vertex(unigine_ObjectMeshDynamic* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int num;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->allocateVertex(num);
            };
            // args
            int num;
    };
    auto *pRunner = new LocalRunner();
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

// public : removeVertex
static PyObject * unigine_ObjectMeshDynamic_remove_vertex(unigine_ObjectMeshDynamic* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int num;
    PyObject *pArg2; // int size;
    PyObject *pArg3; // int indices;
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
                self->unigine_object_ptr->removeVertex(num, size, indices);
            };
            // args
            int num;
            int size;
            int indices;
    };
    auto *pRunner = new LocalRunner();
    pRunner->num = num;
    pRunner->size = size;
    pRunner->indices = indices;
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

// public : setNumVertex
static PyObject * unigine_ObjectMeshDynamic_set_num_vertex(unigine_ObjectMeshDynamic* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int vertex;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->setNumVertex(vertex);
            };
            // args
            int vertex;
    };
    auto *pRunner = new LocalRunner();
    pRunner->vertex = vertex;
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
static PyObject * unigine_ObjectMeshDynamic_get_num_vertex(unigine_ObjectMeshDynamic* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->getNumVertex();
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

// public : addVertex
static PyObject * unigine_ObjectMeshDynamic_add_vertex(unigine_ObjectMeshDynamic* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const Unigine::Math::vec3 & xyz;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for const Unigine::Math::vec3 &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->addVertex(xyz);
            };
            // args
            const Unigine::Math::vec3 & xyz;
    };
    auto *pRunner = new LocalRunner();
    pRunner->xyz = xyz;
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
static PyObject * unigine_ObjectMeshDynamic_set_vertex(unigine_ObjectMeshDynamic* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int num;
    PyObject *pArg2; // const Unigine::Math::vec3 & xyz;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
TODO for int


    // pArg2
TODO for const Unigine::Math::vec3 &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->setVertex(num, xyz);
            };
            // args
            int num;
            const Unigine::Math::vec3 & xyz;
    };
    auto *pRunner = new LocalRunner();
    pRunner->num = num;
    pRunner->xyz = xyz;
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

// public : addVertexArray
static PyObject * unigine_ObjectMeshDynamic_add_vertex_array(unigine_ObjectMeshDynamic* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const * vertex;
    PyObject *pArg2; // int vertex_size;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
TODO for const *


    // pArg2
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->addVertexArray(vertex, vertex_size);
            };
            // args
            const * vertex;
            int vertex_size;
    };
    auto *pRunner = new LocalRunner();
    pRunner->vertex = vertex;
    pRunner->vertex_size = vertex_size;
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

// public : setVertexArray
static PyObject * unigine_ObjectMeshDynamic_set_vertex_array(unigine_ObjectMeshDynamic* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const * vertex;
    PyObject *pArg2; // int vertex_size;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
TODO for const *


    // pArg2
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->setVertexArray(vertex, vertex_size);
            };
            // args
            const * vertex;
            int vertex_size;
    };
    auto *pRunner = new LocalRunner();
    pRunner->vertex = vertex;
    pRunner->vertex_size = vertex_size;
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

// public : getVertexArray
static PyObject * unigine_ObjectMeshDynamic_get_vertex_array(unigine_ObjectMeshDynamic* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->getVertexArray();
            };
            // args
            // return
            const * retOriginal;
    };
    auto *pRunner = new LocalRunner();
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    const * retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = TODO: unknown type 'const *'

    // end
    // return: const *
    return ret;
};

// public : getVertex
static PyObject * unigine_ObjectMeshDynamic_get_vertex(unigine_ObjectMeshDynamic* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int num;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->getVertex(num);
            };
            // args
            int num;
            // return
            Unigine::Math::vec3 retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->num = num;
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

// public : addTexCoord
static PyObject * unigine_ObjectMeshDynamic_add_tex_coord(unigine_ObjectMeshDynamic* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const Unigine::Math::vec4 & texcoord;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for const Unigine::Math::vec4 &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->addTexCoord(texcoord);
            };
            // args
            const Unigine::Math::vec4 & texcoord;
    };
    auto *pRunner = new LocalRunner();
    pRunner->texcoord = texcoord;
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

// public : setTexCoord
static PyObject * unigine_ObjectMeshDynamic_set_tex_coord(unigine_ObjectMeshDynamic* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int num;
    PyObject *pArg2; // const Unigine::Math::vec4 & texcoord;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
TODO for int


    // pArg2
TODO for const Unigine::Math::vec4 &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->setTexCoord(num, texcoord);
            };
            // args
            int num;
            const Unigine::Math::vec4 & texcoord;
    };
    auto *pRunner = new LocalRunner();
    pRunner->num = num;
    pRunner->texcoord = texcoord;
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

// public : getTexCoord
static PyObject * unigine_ObjectMeshDynamic_get_tex_coord(unigine_ObjectMeshDynamic* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int num;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->getTexCoord(num);
            };
            // args
            int num;
            // return
            Unigine::Math::vec4 retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->num = num;
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

// public : addTangent
static PyObject * unigine_ObjectMeshDynamic_add_tangent(unigine_ObjectMeshDynamic* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const Unigine::Math::quat & tangent;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for const Unigine::Math::quat &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->addTangent(tangent);
            };
            // args
            const Unigine::Math::quat & tangent;
    };
    auto *pRunner = new LocalRunner();
    pRunner->tangent = tangent;
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
static PyObject * unigine_ObjectMeshDynamic_set_tangent(unigine_ObjectMeshDynamic* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int num;
    PyObject *pArg2; // const Unigine::Math::quat & tangent;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
TODO for int


    // pArg2
TODO for const Unigine::Math::quat &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->setTangent(num, tangent);
            };
            // args
            int num;
            const Unigine::Math::quat & tangent;
    };
    auto *pRunner = new LocalRunner();
    pRunner->num = num;
    pRunner->tangent = tangent;
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
static PyObject * unigine_ObjectMeshDynamic_get_tangent(unigine_ObjectMeshDynamic* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int num;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->getTangent(num);
            };
            // args
            int num;
            // return
            Unigine::Math::quat retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->num = num;
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

// public : getNormal
static PyObject * unigine_ObjectMeshDynamic_get_normal(unigine_ObjectMeshDynamic* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int num;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->getNormal(num);
            };
            // args
            int num;
            // return
            Unigine::Math::vec3 retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->num = num;
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

// public : addColor
static PyObject * unigine_ObjectMeshDynamic_add_color(unigine_ObjectMeshDynamic* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const Unigine::Math::vec4 & color;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for const Unigine::Math::vec4 &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->addColor(color);
            };
            // args
            const Unigine::Math::vec4 & color;
    };
    auto *pRunner = new LocalRunner();
    pRunner->color = color;
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
static PyObject * unigine_ObjectMeshDynamic_set_color(unigine_ObjectMeshDynamic* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int num;
    PyObject *pArg2; // const Unigine::Math::vec4 & color;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
TODO for int


    // pArg2
TODO for const Unigine::Math::vec4 &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->setColor(num, color);
            };
            // args
            int num;
            const Unigine::Math::vec4 & color;
    };
    auto *pRunner = new LocalRunner();
    pRunner->num = num;
    pRunner->color = color;
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
static PyObject * unigine_ObjectMeshDynamic_get_color(unigine_ObjectMeshDynamic* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int num;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->getColor(num);
            };
            // args
            int num;
            // return
            Unigine::Math::vec4 retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->num = num;
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

// public : clearIndices
static PyObject * unigine_ObjectMeshDynamic_clear_indices(unigine_ObjectMeshDynamic* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->clearIndices();
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

// public : allocateIndices
static PyObject * unigine_ObjectMeshDynamic_allocate_indices(unigine_ObjectMeshDynamic* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int num;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->allocateIndices(num);
            };
            // args
            int num;
    };
    auto *pRunner = new LocalRunner();
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

// public : removeIndices
static PyObject * unigine_ObjectMeshDynamic_remove_indices(unigine_ObjectMeshDynamic* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int num;
    PyObject *pArg2; // int size;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
TODO for int


    // pArg2
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->removeIndices(num, size);
            };
            // args
            int num;
            int size;
    };
    auto *pRunner = new LocalRunner();
    pRunner->num = num;
    pRunner->size = size;
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

// public : setNumIndices
static PyObject * unigine_ObjectMeshDynamic_set_num_indices(unigine_ObjectMeshDynamic* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int indices;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->setNumIndices(indices);
            };
            // args
            int indices;
    };
    auto *pRunner = new LocalRunner();
    pRunner->indices = indices;
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
static PyObject * unigine_ObjectMeshDynamic_get_num_indices(unigine_ObjectMeshDynamic* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->getNumIndices();
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

// public : addIndex
static PyObject * unigine_ObjectMeshDynamic_add_index(unigine_ObjectMeshDynamic* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int index;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->addIndex(index);
            };
            // args
            int index;
    };
    auto *pRunner = new LocalRunner();
    pRunner->index = index;
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
static PyObject * unigine_ObjectMeshDynamic_set_index(unigine_ObjectMeshDynamic* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int num;
    PyObject *pArg2; // int index;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
TODO for int


    // pArg2
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->setIndex(num, index);
            };
            // args
            int num;
            int index;
    };
    auto *pRunner = new LocalRunner();
    pRunner->num = num;
    pRunner->index = index;
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

// public : addIndicesArray
static PyObject * unigine_ObjectMeshDynamic_add_indices_array(unigine_ObjectMeshDynamic* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const int * indices;
    PyObject *pArg2; // int indices_size;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
TODO for const int *


    // pArg2
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->addIndicesArray(indices, indices_size);
            };
            // args
            const int * indices;
            int indices_size;
    };
    auto *pRunner = new LocalRunner();
    pRunner->indices = indices;
    pRunner->indices_size = indices_size;
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

// public : setIndicesArray
static PyObject * unigine_ObjectMeshDynamic_set_indices_array(unigine_ObjectMeshDynamic* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const int * indices;
    PyObject *pArg2; // int indices_size;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
TODO for const int *


    // pArg2
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->setIndicesArray(indices, indices_size);
            };
            // args
            const int * indices;
            int indices_size;
    };
    auto *pRunner = new LocalRunner();
    pRunner->indices = indices;
    pRunner->indices_size = indices_size;
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

// public : getIndicesArray
static PyObject * unigine_ObjectMeshDynamic_get_indices_array(unigine_ObjectMeshDynamic* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->getIndicesArray();
            };
            // args
            // return
            const int * retOriginal;
    };
    auto *pRunner = new LocalRunner();
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    const int * retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = TODO: unknown type 'const int *'

    // end
    // return: const int *
    return ret;
};

// public : getIndex
static PyObject * unigine_ObjectMeshDynamic_get_index(unigine_ObjectMeshDynamic* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int num;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->getIndex(num);
            };
            // args
            int num;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->num = num;
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

// public : addTriangles
static PyObject * unigine_ObjectMeshDynamic_add_triangles(unigine_ObjectMeshDynamic* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int num_triangles;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->addTriangles(num_triangles);
            };
            // args
            int num_triangles;
    };
    auto *pRunner = new LocalRunner();
    pRunner->num_triangles = num_triangles;
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

// public : addTriangleFan
static PyObject * unigine_ObjectMeshDynamic_add_triangle_fan(unigine_ObjectMeshDynamic* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int num_vertex;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->addTriangleFan(num_vertex);
            };
            // args
            int num_vertex;
    };
    auto *pRunner = new LocalRunner();
    pRunner->num_vertex = num_vertex;
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

// public : addTriangleStrip
static PyObject * unigine_ObjectMeshDynamic_add_triangle_strip(unigine_ObjectMeshDynamic* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int num_vertex;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->addTriangleStrip(num_vertex);
            };
            // args
            int num_vertex;
    };
    auto *pRunner = new LocalRunner();
    pRunner->num_vertex = num_vertex;
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

// public : addTriangleQuads
static PyObject * unigine_ObjectMeshDynamic_add_triangle_quads(unigine_ObjectMeshDynamic* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // int num_quads;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for int


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->addTriangleQuads(num_quads);
            };
            // args
            int num_quads;
    };
    auto *pRunner = new LocalRunner();
    pRunner->num_quads = num_quads;
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
static PyObject * unigine_ObjectMeshDynamic_set_bound_box(unigine_ObjectMeshDynamic* self, PyObject *args) {
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
static PyObject * unigine_ObjectMeshDynamic_set_bound_box(unigine_ObjectMeshDynamic* self, PyObject *args) {
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

// public : updateBounds
static PyObject * unigine_ObjectMeshDynamic_update_bounds(unigine_ObjectMeshDynamic* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->updateBounds();
            };
            // args
            // return
            bool retOriginal;
    };
    auto *pRunner = new LocalRunner();
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
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
                retOriginal = self->unigine_object_ptr->updateIndices();
            };
            // args
            // return
            bool retOriginal;
    };
    auto *pRunner = new LocalRunner();
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    bool retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyBool_FromLong(retOriginal);

    // end
    // return: bool
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
                retOriginal = self->unigine_object_ptr->updateTangents();
            };
            // args
            // return
            bool retOriginal;
    };
    auto *pRunner = new LocalRunner();
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
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
                self->unigine_object_ptr->flushVertex();
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

// public : flushIndices
static PyObject * unigine_ObjectMeshDynamic_flush_indices(unigine_ObjectMeshDynamic* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->flushIndices();
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

// public : isFlushed
static PyObject * unigine_ObjectMeshDynamic_is_flushed(unigine_ObjectMeshDynamic* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->isFlushed();
            };
            // args
            // return
            bool retOriginal;
    };
    auto *pRunner = new LocalRunner();
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    bool retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyBool_FromLong(retOriginal);

    // end
    // return: bool
    return ret;
};


static PyMethodDef unigine_ObjectMeshDynamic_methods[] = {
    {
        "type", (PyCFunction)unigine_ObjectMeshDynamic_type, METH_STATIC|METH_NOARGS,
        "public (static): type"
    },
    {
        "convertible", (PyCFunction)unigine_ObjectMeshDynamic_convertible, METH_STATIC|METH_VARARGS,
        "public (static): convertible"
    },
    {
        "create", (PyCFunction)unigine_ObjectMeshDynamic_create, METH_STATIC|METH_VARARGS,
        "public (static): create"
    },
    {
        "create", (PyCFunction)unigine_ObjectMeshDynamic_create, METH_STATIC|METH_VARARGS,
        "public (static): create"
    },
    {
        "create", (PyCFunction)unigine_ObjectMeshDynamic_create, METH_STATIC|METH_VARARGS,
        "public (static): create"
    },
    {
        "load_mesh", (PyCFunction)unigine_ObjectMeshDynamic_load_mesh, METH_VARARGS,
        "public : loadMesh"
    },
    {
        "save_mesh", (PyCFunction)unigine_ObjectMeshDynamic_save_mesh, METH_VARARGS,
        "public : saveMesh"
    },
    {
        "set_mesh", (PyCFunction)unigine_ObjectMeshDynamic_set_mesh, METH_VARARGS,
        "public : setMesh"
    },
    {
        "get_mesh", (PyCFunction)unigine_ObjectMeshDynamic_get_mesh, METH_VARARGS,
        "public : getMesh"
    },
    {
        "set_mesh_name", (PyCFunction)unigine_ObjectMeshDynamic_set_mesh_name, METH_VARARGS,
        "public : setMeshName"
    },
    {
        "get_mesh_name", (PyCFunction)unigine_ObjectMeshDynamic_get_mesh_name, METH_NOARGS,
        "public : getMeshName"
    },
    {
        "is_unique_mesh", (PyCFunction)unigine_ObjectMeshDynamic_is_unique_mesh, METH_NOARGS,
        "public : isUniqueMesh"
    },
    {
        "put_unique_mesh", (PyCFunction)unigine_ObjectMeshDynamic_put_unique_mesh, METH_NOARGS,
        "public : putUniqueMesh"
    },
    {
        "set_fps_visible_camera", (PyCFunction)unigine_ObjectMeshDynamic_set_fps_visible_camera, METH_VARARGS,
        "public : setFPSVisibleCamera"
    },
    {
        "get_fps_visible_camera", (PyCFunction)unigine_ObjectMeshDynamic_get_fps_visible_camera, METH_NOARGS,
        "public : getFPSVisibleCamera"
    },
    {
        "set_fps_visible_shadow", (PyCFunction)unigine_ObjectMeshDynamic_set_fps_visible_shadow, METH_VARARGS,
        "public : setFPSVisibleShadow"
    },
    {
        "get_fps_visible_shadow", (PyCFunction)unigine_ObjectMeshDynamic_get_fps_visible_shadow, METH_NOARGS,
        "public : getFPSVisibleShadow"
    },
    {
        "set_fps_invisible", (PyCFunction)unigine_ObjectMeshDynamic_set_fps_invisible, METH_VARARGS,
        "public : setFPSInvisible"
    },
    {
        "get_fps_invisible", (PyCFunction)unigine_ObjectMeshDynamic_get_fps_invisible, METH_NOARGS,
        "public : getFPSInvisible"
    },
    {
        "set_update_distance_limit", (PyCFunction)unigine_ObjectMeshDynamic_set_update_distance_limit, METH_VARARGS,
        "public : setUpdateDistanceLimit"
    },
    {
        "get_update_distance_limit", (PyCFunction)unigine_ObjectMeshDynamic_get_update_distance_limit, METH_NOARGS,
        "public : getUpdateDistanceLimit"
    },
    {
        "clear_surfaces", (PyCFunction)unigine_ObjectMeshDynamic_clear_surfaces, METH_NOARGS,
        "public : clearSurfaces"
    },
    {
        "add_surface", (PyCFunction)unigine_ObjectMeshDynamic_add_surface, METH_VARARGS,
        "public : addSurface"
    },
    {
        "set_surface_name", (PyCFunction)unigine_ObjectMeshDynamic_set_surface_name, METH_VARARGS,
        "public : setSurfaceName"
    },
    {
        "remove_surface", (PyCFunction)unigine_ObjectMeshDynamic_remove_surface, METH_VARARGS,
        "public : removeSurface"
    },
    {
        "remove_surfaces", (PyCFunction)unigine_ObjectMeshDynamic_remove_surfaces, METH_VARARGS,
        "public : removeSurfaces"
    },
    {
        "update_surface_begin", (PyCFunction)unigine_ObjectMeshDynamic_update_surface_begin, METH_VARARGS,
        "public : updateSurfaceBegin"
    },
    {
        "set_surface_begin", (PyCFunction)unigine_ObjectMeshDynamic_set_surface_begin, METH_VARARGS,
        "public : setSurfaceBegin"
    },
    {
        "get_surface_begin", (PyCFunction)unigine_ObjectMeshDynamic_get_surface_begin, METH_VARARGS,
        "public : getSurfaceBegin"
    },
    {
        "update_surface_end", (PyCFunction)unigine_ObjectMeshDynamic_update_surface_end, METH_VARARGS,
        "public : updateSurfaceEnd"
    },
    {
        "set_surface_end", (PyCFunction)unigine_ObjectMeshDynamic_set_surface_end, METH_VARARGS,
        "public : setSurfaceEnd"
    },
    {
        "get_surface_end", (PyCFunction)unigine_ObjectMeshDynamic_get_surface_end, METH_VARARGS,
        "public : getSurfaceEnd"
    },
    {
        "clear_vertex", (PyCFunction)unigine_ObjectMeshDynamic_clear_vertex, METH_NOARGS,
        "public : clearVertex"
    },
    {
        "allocate_vertex", (PyCFunction)unigine_ObjectMeshDynamic_allocate_vertex, METH_VARARGS,
        "public : allocateVertex"
    },
    {
        "remove_vertex", (PyCFunction)unigine_ObjectMeshDynamic_remove_vertex, METH_VARARGS,
        "public : removeVertex"
    },
    {
        "set_num_vertex", (PyCFunction)unigine_ObjectMeshDynamic_set_num_vertex, METH_VARARGS,
        "public : setNumVertex"
    },
    {
        "get_num_vertex", (PyCFunction)unigine_ObjectMeshDynamic_get_num_vertex, METH_NOARGS,
        "public : getNumVertex"
    },
    {
        "add_vertex", (PyCFunction)unigine_ObjectMeshDynamic_add_vertex, METH_VARARGS,
        "public : addVertex"
    },
    {
        "set_vertex", (PyCFunction)unigine_ObjectMeshDynamic_set_vertex, METH_VARARGS,
        "public : setVertex"
    },
    {
        "add_vertex_array", (PyCFunction)unigine_ObjectMeshDynamic_add_vertex_array, METH_VARARGS,
        "public : addVertexArray"
    },
    {
        "set_vertex_array", (PyCFunction)unigine_ObjectMeshDynamic_set_vertex_array, METH_VARARGS,
        "public : setVertexArray"
    },
    {
        "get_vertex_array", (PyCFunction)unigine_ObjectMeshDynamic_get_vertex_array, METH_NOARGS,
        "public : getVertexArray"
    },
    {
        "get_vertex", (PyCFunction)unigine_ObjectMeshDynamic_get_vertex, METH_VARARGS,
        "public : getVertex"
    },
    {
        "add_tex_coord", (PyCFunction)unigine_ObjectMeshDynamic_add_tex_coord, METH_VARARGS,
        "public : addTexCoord"
    },
    {
        "set_tex_coord", (PyCFunction)unigine_ObjectMeshDynamic_set_tex_coord, METH_VARARGS,
        "public : setTexCoord"
    },
    {
        "get_tex_coord", (PyCFunction)unigine_ObjectMeshDynamic_get_tex_coord, METH_VARARGS,
        "public : getTexCoord"
    },
    {
        "add_tangent", (PyCFunction)unigine_ObjectMeshDynamic_add_tangent, METH_VARARGS,
        "public : addTangent"
    },
    {
        "set_tangent", (PyCFunction)unigine_ObjectMeshDynamic_set_tangent, METH_VARARGS,
        "public : setTangent"
    },
    {
        "get_tangent", (PyCFunction)unigine_ObjectMeshDynamic_get_tangent, METH_VARARGS,
        "public : getTangent"
    },
    {
        "get_normal", (PyCFunction)unigine_ObjectMeshDynamic_get_normal, METH_VARARGS,
        "public : getNormal"
    },
    {
        "add_color", (PyCFunction)unigine_ObjectMeshDynamic_add_color, METH_VARARGS,
        "public : addColor"
    },
    {
        "set_color", (PyCFunction)unigine_ObjectMeshDynamic_set_color, METH_VARARGS,
        "public : setColor"
    },
    {
        "get_color", (PyCFunction)unigine_ObjectMeshDynamic_get_color, METH_VARARGS,
        "public : getColor"
    },
    {
        "clear_indices", (PyCFunction)unigine_ObjectMeshDynamic_clear_indices, METH_NOARGS,
        "public : clearIndices"
    },
    {
        "allocate_indices", (PyCFunction)unigine_ObjectMeshDynamic_allocate_indices, METH_VARARGS,
        "public : allocateIndices"
    },
    {
        "remove_indices", (PyCFunction)unigine_ObjectMeshDynamic_remove_indices, METH_VARARGS,
        "public : removeIndices"
    },
    {
        "set_num_indices", (PyCFunction)unigine_ObjectMeshDynamic_set_num_indices, METH_VARARGS,
        "public : setNumIndices"
    },
    {
        "get_num_indices", (PyCFunction)unigine_ObjectMeshDynamic_get_num_indices, METH_NOARGS,
        "public : getNumIndices"
    },
    {
        "add_index", (PyCFunction)unigine_ObjectMeshDynamic_add_index, METH_VARARGS,
        "public : addIndex"
    },
    {
        "set_index", (PyCFunction)unigine_ObjectMeshDynamic_set_index, METH_VARARGS,
        "public : setIndex"
    },
    {
        "add_indices_array", (PyCFunction)unigine_ObjectMeshDynamic_add_indices_array, METH_VARARGS,
        "public : addIndicesArray"
    },
    {
        "set_indices_array", (PyCFunction)unigine_ObjectMeshDynamic_set_indices_array, METH_VARARGS,
        "public : setIndicesArray"
    },
    {
        "get_indices_array", (PyCFunction)unigine_ObjectMeshDynamic_get_indices_array, METH_NOARGS,
        "public : getIndicesArray"
    },
    {
        "get_index", (PyCFunction)unigine_ObjectMeshDynamic_get_index, METH_VARARGS,
        "public : getIndex"
    },
    {
        "add_triangles", (PyCFunction)unigine_ObjectMeshDynamic_add_triangles, METH_VARARGS,
        "public : addTriangles"
    },
    {
        "add_triangle_fan", (PyCFunction)unigine_ObjectMeshDynamic_add_triangle_fan, METH_VARARGS,
        "public : addTriangleFan"
    },
    {
        "add_triangle_strip", (PyCFunction)unigine_ObjectMeshDynamic_add_triangle_strip, METH_VARARGS,
        "public : addTriangleStrip"
    },
    {
        "add_triangle_quads", (PyCFunction)unigine_ObjectMeshDynamic_add_triangle_quads, METH_VARARGS,
        "public : addTriangleQuads"
    },
    {
        "set_bound_box", (PyCFunction)unigine_ObjectMeshDynamic_set_bound_box, METH_VARARGS,
        "public : setBoundBox"
    },
    {
        "set_bound_box", (PyCFunction)unigine_ObjectMeshDynamic_set_bound_box, METH_VARARGS,
        "public : setBoundBox"
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

PyObject * ObjectMeshDynamic::NewObject(Unigine::ObjectMeshDynamic * unigine_object_ptr) {

    std::cout << "sizeof(unigine_ObjectMeshDynamic) = " << sizeof(unigine_ObjectMeshDynamic) << std::endl;

    unigine_ObjectMeshDynamic *pInst = PyObject_New(unigine_ObjectMeshDynamic, &unigine_ObjectMeshDynamicType);
    pInst->unigine_object_ptr = unigine_object_ptr;
    // Py_INCREF(pInst);
    return (PyObject *)pInst;
}

Unigine::ObjectMeshDynamic * ObjectMeshDynamic::Convert(PyObject *pObject) {
    if (Py_IS_TYPE(pObject, &unigine_ObjectMeshDynamicType) == 0) {
        // TODO error
    }
    unigine_ObjectMeshDynamic *pInst = (unigine_ObjectMeshDynamic *)pObject;
    return pInst->unigine_object_ptr;
}

}; // namespace PyUnigine
// this file automaticly generated from UnigineMaterial.h
#include "python3_unigine_material.h"

#include <string>
#include <UnigineMaterial.h>
#include <UnigineLog.h>
#include <Python.h>
#include <structmember.h>

#include <iostream>

namespace PyUnigine {

// ------------------------------------------------------------------------------------------
// unigine_Material

typedef struct {
    PyObject_HEAD
    // Type-specific fields go here.
    Unigine::Ptr<Unigine::Material> unigine_object_ptr;
} unigine_Material;

static void unigine_Material_dealloc(unigine_Material* self) {
    // Unigine::Log::message("unigine_Material_dealloc\n");
    Py_TYPE(self)->tp_free((PyObject*)self);
}

static PyObject *unigine_Material_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    // Unigine::Log::message("unigine_Material_new\n");
    unigine_Material *self;
    self = (unigine_Material *)type->tp_alloc(type, 0);
    self->unigine_object_ptr = nullptr;
    return (PyObject *)self;
}

static int unigine_Material_init(unigine_Material *self, PyObject *args, PyObject *kwds) {
    // nothing
    return 0;
}


// public (static): create
static PyObject * unigine_Material_create(unigine_Material* self_static_null) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = Unigine::Material::create();
            };
            // return
            Unigine::Ptr<Unigine::Material> retOriginal;
    };
    auto *pRunner = new LocalRunner();
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    Unigine::Ptr<Unigine::Material> retOriginal = pRunner->retOriginal;
    delete pRunner;
    if (retOriginal == nullptr) {
        Py_INCREF(Py_None);
        ret = Py_None;
    } else {
        ret = PyUnigine::Material::NewObject(retOriginal);
    }

    // end
    // return: Unigine::Ptr<Unigine::Material>
    return ret;
};

// public : setParent
static PyObject * unigine_Material_set_parent(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const Unigine::Ptr<Unigine::Material> & material;
    PyObject *pArg2 = NULL; // bool save_all_values;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
TODO for const Unigine::Ptr<Unigine::Material> &


    // pArg2
    if (!PyBool_Check(pArg2)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"save_all_values\" to %s must be a bool object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg2)->tp_name);
        return NULL;
    }
    bool save_all_values = pArg2 == Py_True;


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->setParent(material, save_all_values);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            const Unigine::Ptr<Unigine::Material> & material;
            bool save_all_values;
            // return
            bool retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->material = material;
    pRunner->save_all_values = save_all_values;
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

// public : getParent
static PyObject * unigine_Material_get_parent(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getParent();
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // return
            Unigine::Ptr<Unigine::Material> retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    Unigine::Ptr<Unigine::Material> retOriginal = pRunner->retOriginal;
    delete pRunner;
    if (retOriginal == nullptr) {
        Py_INCREF(Py_None);
        ret = Py_None;
    } else {
        ret = PyUnigine::Material::NewObject(retOriginal);
    }

    // end
    // return: Unigine::Ptr<Unigine::Material>
    return ret;
};

// public : isParent
static PyObject * unigine_Material_is_parent(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const Unigine::Ptr<Unigine::Material> & parent;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for const Unigine::Ptr<Unigine::Material> &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->isParent(parent);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            const Unigine::Ptr<Unigine::Material> & parent;
            // return
            bool retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->parent = parent;
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

// public : isParent
static PyObject * unigine_Material_is_parent(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const Unigine::UGUID & guid;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for const Unigine::UGUID &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->isParent(guid);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            const Unigine::UGUID & guid;
            // return
            bool retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->guid = guid;
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

// public : getBaseMaterial
static PyObject * unigine_Material_get_base_material(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getBaseMaterial();
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // return
            Unigine::Ptr<Unigine::Material> retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    Unigine::Ptr<Unigine::Material> retOriginal = pRunner->retOriginal;
    delete pRunner;
    if (retOriginal == nullptr) {
        Py_INCREF(Py_None);
        ret = Py_None;
    } else {
        ret = PyUnigine::Material::NewObject(retOriginal);
    }

    // end
    // return: Unigine::Ptr<Unigine::Material>
    return ret;
};

// public : getNumChildren
static PyObject * unigine_Material_get_num_children(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getNumChildren();
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
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

// public : getChild
static PyObject * unigine_Material_get_child(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int num;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"num\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int num = PyLong_AsLong(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getChild(num);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int num;
            // return
            Unigine::Ptr<Unigine::Material> retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->num = num;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    Unigine::Ptr<Unigine::Material> retOriginal = pRunner->retOriginal;
    delete pRunner;
    if (retOriginal == nullptr) {
        Py_INCREF(Py_None);
        ret = Py_None;
    } else {
        ret = PyUnigine::Material::NewObject(retOriginal);
    }

    // end
    // return: Unigine::Ptr<Unigine::Material>
    return ret;
};

// public : clone
static PyObject * unigine_Material_clone(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const Unigine::UGUID & guid;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for const Unigine::UGUID &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->clone(guid);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            const Unigine::UGUID & guid;
            // return
            Unigine::Ptr<Unigine::Material> retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->guid = guid;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    Unigine::Ptr<Unigine::Material> retOriginal = pRunner->retOriginal;
    delete pRunner;
    if (retOriginal == nullptr) {
        Py_INCREF(Py_None);
        ret = Py_None;
    } else {
        ret = PyUnigine::Material::NewObject(retOriginal);
    }

    // end
    // return: Unigine::Ptr<Unigine::Material>
    return ret;
};

// public : clone
static PyObject * unigine_Material_clone(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->clone();
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // return
            Unigine::Ptr<Unigine::Material> retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    Unigine::Ptr<Unigine::Material> retOriginal = pRunner->retOriginal;
    delete pRunner;
    if (retOriginal == nullptr) {
        Py_INCREF(Py_None);
        ret = Py_None;
    } else {
        ret = PyUnigine::Material::NewObject(retOriginal);
    }

    // end
    // return: Unigine::Ptr<Unigine::Material>
    return ret;
};

// public : inherit
static PyObject * unigine_Material_inherit(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const Unigine::UGUID & guid;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for const Unigine::UGUID &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->inherit(guid);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            const Unigine::UGUID & guid;
            // return
            Unigine::Ptr<Unigine::Material> retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->guid = guid;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    Unigine::Ptr<Unigine::Material> retOriginal = pRunner->retOriginal;
    delete pRunner;
    if (retOriginal == nullptr) {
        Py_INCREF(Py_None);
        ret = Py_None;
    } else {
        ret = PyUnigine::Material::NewObject(retOriginal);
    }

    // end
    // return: Unigine::Ptr<Unigine::Material>
    return ret;
};

// public : inherit
static PyObject * unigine_Material_inherit(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->inherit();
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // return
            Unigine::Ptr<Unigine::Material> retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    Unigine::Ptr<Unigine::Material> retOriginal = pRunner->retOriginal;
    delete pRunner;
    if (retOriginal == nullptr) {
        Py_INCREF(Py_None);
        ret = Py_None;
    } else {
        ret = PyUnigine::Material::NewObject(retOriginal);
    }

    // end
    // return: Unigine::Ptr<Unigine::Material>
    return ret;
};

// public : getNamespaceName
static PyObject * unigine_Material_get_namespace_name(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getNamespaceName();
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
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
    ret = TODO: unknown type 'const char *'

    // end
    // return: const char *
    return ret;
};

// public : getManualName
static PyObject * unigine_Material_get_manual_name(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getManualName();
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
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
    ret = TODO: unknown type 'const char *'

    // end
    // return: const char *
    return ret;
};

// public : getGUID
static PyObject * unigine_Material_get_guid(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getGUID();
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // return
            Unigine::UGUID retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    Unigine::UGUID retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: Unigine::UGUID
    return ret;
};

// public : getPath
static PyObject * unigine_Material_get_path(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getPath();
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
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
    ret = TODO: unknown type 'const char *'

    // end
    // return: const char *
    return ret;
};

// public : isNodeTypeSupported
static PyObject * unigine_Material_is_node_type_supported(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // Unigine::Node::TYPE type;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for Unigine::Node::TYPE


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->isNodeTypeSupported(type);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            Unigine::Node::TYPE type;
            // return
            bool retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->type = type;
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

// public : isNodeSupported
static PyObject * unigine_Material_is_node_supported(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const Unigine::Ptr<Unigine::Node> & node;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for const Unigine::Ptr<Unigine::Node> &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->isNodeSupported(node);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            const Unigine::Ptr<Unigine::Node> & node;
            // return
            bool retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->node = node;
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

// public : canRenderNode
static PyObject * unigine_Material_can_render_node(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->canRenderNode();
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
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

// public : getNumUIItems
static PyObject * unigine_Material_get_num_ui_items(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getNumUIItems();
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
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

// public : getUIItemDataType
static PyObject * unigine_Material_get_ui_item_data_type(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int item;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"item\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int item = PyLong_AsLong(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getUIItemDataType(item);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int item;
            // return
            Unigine::Material::DATA_TYPE retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->item = item;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    Unigine::Material::DATA_TYPE retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: Unigine::Material::DATA_TYPE
    return ret;
};

// public : getUIItemDataID
static PyObject * unigine_Material_get_ui_item_data_id(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int item;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"item\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int item = PyLong_AsLong(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getUIItemDataID(item);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int item;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->item = item;
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

// public : isUIItemHidden
static PyObject * unigine_Material_is_ui_item_hidden(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int item;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"item\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int item = PyLong_AsLong(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->isUIItemHidden(item);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int item;
            // return
            bool retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->item = item;
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

// public : getUIItemTitle
static PyObject * unigine_Material_get_ui_item_title(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int item;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"item\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int item = PyLong_AsLong(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getUIItemTitle(item);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int item;
            // return
            const char * retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->item = item;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    const char * retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = TODO: unknown type 'const char *'

    // end
    // return: const char *
    return ret;
};

// public : getUIItemTooltip
static PyObject * unigine_Material_get_ui_item_tooltip(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int item;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"item\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int item = PyLong_AsLong(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getUIItemTooltip(item);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int item;
            // return
            const char * retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->item = item;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    const char * retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = TODO: unknown type 'const char *'

    // end
    // return: const char *
    return ret;
};

// public : getUIItemWidget
static PyObject * unigine_Material_get_ui_item_widget(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int item;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"item\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int item = PyLong_AsLong(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getUIItemWidget(item);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int item;
            // return
            Unigine::Material::WIDGET retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->item = item;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    Unigine::Material::WIDGET retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: Unigine::Material::WIDGET
    return ret;
};

// public : getUIItemParent
static PyObject * unigine_Material_get_ui_item_parent(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int item;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"item\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int item = PyLong_AsLong(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getUIItemParent(item);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int item;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->item = item;
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

// public : getUIItemNumChildren
static PyObject * unigine_Material_get_ui_item_num_children(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int item;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"item\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int item = PyLong_AsLong(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getUIItemNumChildren(item);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int item;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->item = item;
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

// public : getUIItemChild
static PyObject * unigine_Material_get_ui_item_child(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int item;
    PyObject *pArg2 = NULL; // int num;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"item\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int item = PyLong_AsLong(pArg1);


    // pArg2
    if (!PyLong_Check(pArg2)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"num\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg2)->tp_name);
        return NULL;
    }
    int num = PyLong_AsLong(pArg2);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getUIItemChild(item, num);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int item;
            int num;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->item = item;
    pRunner->num = num;
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

// public : isUIItemSliderMinExpand
static PyObject * unigine_Material_is_ui_item_slider_min_expand(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int item;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"item\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int item = PyLong_AsLong(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->isUIItemSliderMinExpand(item);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int item;
            // return
            bool retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->item = item;
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

// public : isUIItemSliderMaxExpand
static PyObject * unigine_Material_is_ui_item_slider_max_expand(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int item;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"item\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int item = PyLong_AsLong(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->isUIItemSliderMaxExpand(item);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int item;
            // return
            bool retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->item = item;
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

// public : getUIItemSliderMinValue
static PyObject * unigine_Material_get_ui_item_slider_min_value(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int item;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"item\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int item = PyLong_AsLong(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getUIItemSliderMinValue(item);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int item;
            // return
            float retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->item = item;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    float retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = TODO: unknown type 'float'

    // end
    // return: float
    return ret;
};

// public : getUIItemSliderMaxValue
static PyObject * unigine_Material_get_ui_item_slider_max_value(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int item;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"item\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int item = PyLong_AsLong(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getUIItemSliderMaxValue(item);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int item;
            // return
            float retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->item = item;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    float retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = TODO: unknown type 'float'

    // end
    // return: float
    return ret;
};

// public : getUIItemGroupToggleStateID
static PyObject * unigine_Material_get_ui_item_group_toggle_state_id(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int item;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"item\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int item = PyLong_AsLong(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getUIItemGroupToggleStateID(item);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int item;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->item = item;
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

// public : isUIItemGroupCollapsed
static PyObject * unigine_Material_is_ui_item_group_collapsed(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int item;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"item\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int item = PyLong_AsLong(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->isUIItemGroupCollapsed(item);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int item;
            // return
            bool retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->item = item;
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

// public (static): widgetToString
static PyObject * unigine_Material_widget_to_string(unigine_Material* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // Unigine::Material::WIDGET widget;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for Unigine::Material::WIDGET


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = Unigine::Material::widgetToString(widget);
            };
            // args
            Unigine::Material::WIDGET widget;
            // return
            const char * retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->widget = widget;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    const char * retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = TODO: unknown type 'const char *'

    // end
    // return: const char *
    return ret;
};

// public (static): stringToWidget
static PyObject * unigine_Material_string_to_widget(unigine_Material* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const char * str;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyUnicode_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"str\" to %s must be a strint object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    const char * str = PyUnicode_AsUTF8(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = Unigine::Material::stringToWidget(str);
            };
            // args
            const char * str;
            // return
            Unigine::Material::WIDGET retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->str = str;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    Unigine::Material::WIDGET retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: Unigine::Material::WIDGET
    return ret;
};

// public : setOption
static PyObject * unigine_Material_set_option(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int num;
    PyObject *pArg2 = NULL; // int value;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"num\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int num = PyLong_AsLong(pArg1);


    // pArg2
    if (!PyLong_Check(pArg2)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"value\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg2)->tp_name);
        return NULL;
    }
    int value = PyLong_AsLong(pArg2);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->setOption(num, value);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int num;
            int value;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->num = num;
    pRunner->value = value;
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

// public : getOption
static PyObject * unigine_Material_get_option(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int num;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"num\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int num = PyLong_AsLong(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getOption(num);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int num;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->num = num;
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

// public : isOptionOverridden
static PyObject * unigine_Material_is_option_overridden(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int num;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"num\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int num = PyLong_AsLong(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->isOptionOverridden(num);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int num;
            // return
            bool retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->num = num;
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

// public : resetOption
static PyObject * unigine_Material_reset_option(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int num;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"num\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int num = PyLong_AsLong(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->resetOption(num);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int num;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->num = num;
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

// public : setTransparent
static PyObject * unigine_Material_set_transparent(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int transparent;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"transparent\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int transparent = PyLong_AsLong(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->setTransparent(transparent);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int transparent;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->transparent = transparent;
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

// public : getTransparent
static PyObject * unigine_Material_get_transparent(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getTransparent();
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
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

// public : isWater
static PyObject * unigine_Material_is_water(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->isWater();
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
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

// public : isDeferred
static PyObject * unigine_Material_is_deferred(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->isDeferred();
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
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

// public : isForward
static PyObject * unigine_Material_is_forward(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->isForward();
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
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

// public : isAlphaTest
static PyObject * unigine_Material_is_alpha_test(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->isAlphaTest();
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
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

// public : setBlendDestFunc
static PyObject * unigine_Material_set_blend_dest_func(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int func;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"func\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int func = PyLong_AsLong(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->setBlendDestFunc(func);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int func;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->func = func;
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

// public : getBlendDestFunc
static PyObject * unigine_Material_get_blend_dest_func(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getBlendDestFunc();
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
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

// public : setBlendSrcFunc
static PyObject * unigine_Material_set_blend_src_func(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int func;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"func\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int func = PyLong_AsLong(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->setBlendSrcFunc(func);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int func;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->func = func;
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

// public : getBlendSrcFunc
static PyObject * unigine_Material_get_blend_src_func(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getBlendSrcFunc();
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
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

// public : setShadowMask
static PyObject * unigine_Material_set_shadow_mask(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int mask;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"mask\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int mask = PyLong_AsLong(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->setShadowMask(mask);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int mask;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->mask = mask;
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

// public : getShadowMask
static PyObject * unigine_Material_get_shadow_mask(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getShadowMask();
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
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

// public : setViewportMask
static PyObject * unigine_Material_set_viewport_mask(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int mask;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"mask\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int mask = PyLong_AsLong(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->setViewportMask(mask);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int mask;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->mask = mask;
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

// public : getViewportMask
static PyObject * unigine_Material_get_viewport_mask(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getViewportMask();
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
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

// public : setDepthMask
static PyObject * unigine_Material_set_depth_mask(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int mask;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"mask\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int mask = PyLong_AsLong(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->setDepthMask(mask);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int mask;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->mask = mask;
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

// public : getDepthMask
static PyObject * unigine_Material_get_depth_mask(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getDepthMask();
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
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

// public : setOrder
static PyObject * unigine_Material_set_order(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int order;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"order\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int order = PyLong_AsLong(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->setOrder(order);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int order;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->order = order;
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

// public : getOrder
static PyObject * unigine_Material_get_order(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getOrder();
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
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

// public : setCastShadow
static PyObject * unigine_Material_set_cast_shadow(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // bool shadow;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyBool_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"shadow\" to %s must be a bool object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    bool shadow = pArg1 == Py_True;


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->setCastShadow(shadow);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            bool shadow;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->shadow = shadow;
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

// public : isCastShadow
static PyObject * unigine_Material_is_cast_shadow(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->isCastShadow();
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
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

// public : setCastWorldShadow
static PyObject * unigine_Material_set_cast_world_shadow(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // bool shadow;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyBool_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"shadow\" to %s must be a bool object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    bool shadow = pArg1 == Py_True;


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->setCastWorldShadow(shadow);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            bool shadow;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->shadow = shadow;
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

// public : isCastWorldShadow
static PyObject * unigine_Material_is_cast_world_shadow(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->isCastWorldShadow();
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
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

// public : setDepthTest
static PyObject * unigine_Material_set_depth_test(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // bool test;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyBool_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"test\" to %s must be a bool object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    bool test = pArg1 == Py_True;


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->setDepthTest(test);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            bool test;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->test = test;
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

// public : isDepthTest
static PyObject * unigine_Material_is_depth_test(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->isDepthTest();
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
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

// public : setTwoSided
static PyObject * unigine_Material_set_two_sided(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // bool sided;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyBool_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"sided\" to %s must be a bool object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    bool sided = pArg1 == Py_True;


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->setTwoSided(sided);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            bool sided;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->sided = sided;
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

// public : isTwoSided
static PyObject * unigine_Material_is_two_sided(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->isTwoSided();
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
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

// public : setOverlap
static PyObject * unigine_Material_set_overlap(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // bool overlap;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyBool_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"overlap\" to %s must be a bool object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    bool overlap = pArg1 == Py_True;


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->setOverlap(overlap);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            bool overlap;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->overlap = overlap;
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

// public : isOverlap
static PyObject * unigine_Material_is_overlap(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->isOverlap();
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
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

// public : checkShaderCache
static PyObject * unigine_Material_check_shader_cache(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->checkShaderCache();
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
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

// public : checkShaderCache
static PyObject * unigine_Material_check_shader_cache(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // Unigine::Render::PASS pass;
    PyObject *pArg2 = NULL; // Unigine::Node::TYPE node_type;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
TODO for Unigine::Render::PASS


    // pArg2
TODO for Unigine::Node::TYPE


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->checkShaderCache(pass, node_type);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            Unigine::Render::PASS pass;
            Unigine::Node::TYPE node_type;
            // return
            bool retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->pass = pass;
    pRunner->node_type = node_type;
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

// public : compileShader
static PyObject * unigine_Material_compile_shader(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // Unigine::Render::PASS pass;
    PyObject *pArg2 = NULL; // Unigine::Node::TYPE node_type;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
TODO for Unigine::Render::PASS


    // pArg2
TODO for Unigine::Node::TYPE


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->compileShader(pass, node_type);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            Unigine::Render::PASS pass;
            Unigine::Node::TYPE node_type;
            // return
            bool retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->pass = pass;
    pRunner->node_type = node_type;
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

// public : fetchShader
static PyObject * unigine_Material_fetch_shader(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // Unigine::Render::PASS pass;
    PyObject *pArg2 = NULL; // Unigine::Node::TYPE node_type;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
TODO for Unigine::Render::PASS


    // pArg2
TODO for Unigine::Node::TYPE


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->fetchShader(pass, node_type);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            Unigine::Render::PASS pass;
            Unigine::Node::TYPE node_type;
            // return
            Unigine::Ptr<Unigine::Shader> retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->pass = pass;
    pRunner->node_type = node_type;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    Unigine::Ptr<Unigine::Shader> retOriginal = pRunner->retOriginal;
    delete pRunner;
    if (retOriginal == nullptr) {
        Py_INCREF(Py_None);
        ret = Py_None;
    } else {
        ret = PyUnigine::Shader::NewObject(retOriginal);
    }

    // end
    // return: Unigine::Ptr<Unigine::Shader>
    return ret;
};

// public : fetchShader
static PyObject * unigine_Material_fetch_shader(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // Unigine::Render::PASS pass;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for Unigine::Render::PASS


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->fetchShader(pass);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            Unigine::Render::PASS pass;
            // return
            Unigine::Ptr<Unigine::Shader> retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->pass = pass;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    Unigine::Ptr<Unigine::Shader> retOriginal = pRunner->retOriginal;
    delete pRunner;
    if (retOriginal == nullptr) {
        Py_INCREF(Py_None);
        ret = Py_None;
    } else {
        ret = PyUnigine::Shader::NewObject(retOriginal);
    }

    // end
    // return: Unigine::Ptr<Unigine::Shader>
    return ret;
};

// public : fetchShader
static PyObject * unigine_Material_fetch_shader(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const char * pass_name;
    PyObject *pArg2 = NULL; // int node;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    if (!PyUnicode_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"pass_name\" to %s must be a strint object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    const char * pass_name = PyUnicode_AsUTF8(pArg1);


    // pArg2
    if (!PyLong_Check(pArg2)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"node\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg2)->tp_name);
        return NULL;
    }
    int node = PyLong_AsLong(pArg2);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->fetchShader(pass_name, node);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            const char * pass_name;
            int node;
            // return
            Unigine::Ptr<Unigine::Shader> retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->pass_name = pass_name;
    pRunner->node = node;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    Unigine::Ptr<Unigine::Shader> retOriginal = pRunner->retOriginal;
    delete pRunner;
    if (retOriginal == nullptr) {
        Py_INCREF(Py_None);
        ret = Py_None;
    } else {
        ret = PyUnigine::Shader::NewObject(retOriginal);
    }

    // end
    // return: Unigine::Ptr<Unigine::Shader>
    return ret;
};

// public : fetchShader
static PyObject * unigine_Material_fetch_shader(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const char * pass_name;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyUnicode_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"pass_name\" to %s must be a strint object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    const char * pass_name = PyUnicode_AsUTF8(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->fetchShader(pass_name);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            const char * pass_name;
            // return
            Unigine::Ptr<Unigine::Shader> retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->pass_name = pass_name;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    Unigine::Ptr<Unigine::Shader> retOriginal = pRunner->retOriginal;
    delete pRunner;
    if (retOriginal == nullptr) {
        Py_INCREF(Py_None);
        ret = Py_None;
    } else {
        ret = PyUnigine::Shader::NewObject(retOriginal);
    }

    // end
    // return: Unigine::Ptr<Unigine::Shader>
    return ret;
};

// public : createShaders
static PyObject * unigine_Material_create_shaders(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // bool recursive;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyBool_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"recursive\" to %s must be a bool object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    bool recursive = pArg1 == Py_True;


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->createShaders(recursive);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            bool recursive;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->recursive = recursive;
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

// public : destroyTextures
static PyObject * unigine_Material_destroy_textures(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->destroyTextures();
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
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

// public : getNumParameters
static PyObject * unigine_Material_get_num_parameters(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getNumParameters();
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
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

// public : findParameter
static PyObject * unigine_Material_find_parameter(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const char * name;
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
                retOriginal = unigine_object_ptr->findParameter(name);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
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

// public : resetParameter
static PyObject * unigine_Material_reset_parameter(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int num;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"num\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int num = PyLong_AsLong(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->resetParameter(num);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int num;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->num = num;
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

// public : checkParameterConditions
static PyObject * unigine_Material_check_parameter_conditions(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int num;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"num\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int num = PyLong_AsLong(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->checkParameterConditions(num);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int num;
            // return
            bool retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->num = num;
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

// public : getParameterType
static PyObject * unigine_Material_get_parameter_type(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int num;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"num\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int num = PyLong_AsLong(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getParameterType(num);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int num;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->num = num;
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

// public : isParameterInt
static PyObject * unigine_Material_is_parameter_int(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int num;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"num\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int num = PyLong_AsLong(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->isParameterInt(num);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int num;
            // return
            bool retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->num = num;
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

// public : isParameterFloat
static PyObject * unigine_Material_is_parameter_float(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int num;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"num\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int num = PyLong_AsLong(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->isParameterFloat(num);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int num;
            // return
            bool retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->num = num;
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

// public : isParameterOverridden
static PyObject * unigine_Material_is_parameter_overridden(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int num;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"num\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int num = PyLong_AsLong(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->isParameterOverridden(num);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int num;
            // return
            bool retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->num = num;
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

// public : getParameterName
static PyObject * unigine_Material_get_parameter_name(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int num;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"num\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int num = PyLong_AsLong(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getParameterName(num);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int num;
            // return
            const char * retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->num = num;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    const char * retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = TODO: unknown type 'const char *'

    // end
    // return: const char *
    return ret;
};

// public : isParameterExpressionEnabled
static PyObject * unigine_Material_is_parameter_expression_enabled(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int num;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"num\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int num = PyLong_AsLong(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->isParameterExpressionEnabled(num);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int num;
            // return
            bool retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->num = num;
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

// public : setParameterExpressionEnabled
static PyObject * unigine_Material_set_parameter_expression_enabled(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int num;
    PyObject *pArg2 = NULL; // bool enabled;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"num\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int num = PyLong_AsLong(pArg1);


    // pArg2
    if (!PyBool_Check(pArg2)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"enabled\" to %s must be a bool object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg2)->tp_name);
        return NULL;
    }
    bool enabled = pArg2 == Py_True;


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->setParameterExpressionEnabled(num, enabled);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int num;
            bool enabled;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->num = num;
    pRunner->enabled = enabled;
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

// public : getParameterExpression
static PyObject * unigine_Material_get_parameter_expression(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int num;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"num\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int num = PyLong_AsLong(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getParameterExpression(num);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int num;
            // return
            const char * retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->num = num;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    const char * retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = TODO: unknown type 'const char *'

    // end
    // return: const char *
    return ret;
};

// public : setParameterExpression
static PyObject * unigine_Material_set_parameter_expression(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int num;
    PyObject *pArg2 = NULL; // const char * expression;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"num\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int num = PyLong_AsLong(pArg1);


    // pArg2
    if (!PyUnicode_Check(pArg2)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"expression\" to %s must be a strint object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg2)->tp_name);
        return NULL;
    }
    const char * expression = PyUnicode_AsUTF8(pArg2);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->setParameterExpression(num, expression);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int num;
            const char * expression;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->num = num;
    pRunner->expression = expression;
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

// public : setParameterFloat
static PyObject * unigine_Material_set_parameter_float(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int num;
    PyObject *pArg2 = NULL; // float value;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"num\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int num = PyLong_AsLong(pArg1);


    // pArg2
    if (!PyFloat_Check(pArg2)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"value\" to %s must be a float object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg2)->tp_name);
        return NULL;
    }
    float value = PyFloat_AsDouble(pArg2);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->setParameterFloat(num, value);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int num;
            float value;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->num = num;
    pRunner->value = value;
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

// public : setParameterFloat
static PyObject * unigine_Material_set_parameter_float(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const char * name;
    PyObject *pArg2 = NULL; // float value;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    if (!PyUnicode_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"name\" to %s must be a strint object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    const char * name = PyUnicode_AsUTF8(pArg1);


    // pArg2
    if (!PyFloat_Check(pArg2)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"value\" to %s must be a float object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg2)->tp_name);
        return NULL;
    }
    float value = PyFloat_AsDouble(pArg2);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->setParameterFloat(name, value);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            const char * name;
            float value;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->name = name;
    pRunner->value = value;
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

// public : getParameterFloat
static PyObject * unigine_Material_get_parameter_float(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int num;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"num\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int num = PyLong_AsLong(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getParameterFloat(num);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int num;
            // return
            float retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->num = num;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    float retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = TODO: unknown type 'float'

    // end
    // return: float
    return ret;
};

// public : getParameterFloat
static PyObject * unigine_Material_get_parameter_float(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const char * name;
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
                retOriginal = unigine_object_ptr->getParameterFloat(name);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            const char * name;
            // return
            float retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->name = name;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    float retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = TODO: unknown type 'float'

    // end
    // return: float
    return ret;
};

// public : setParameterFloat2
static PyObject * unigine_Material_set_parameter_float2(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int num;
    PyObject *pArg2 = NULL; // const Unigine::Math::vec2 & value;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"num\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int num = PyLong_AsLong(pArg1);


    // pArg2
TODO for const Unigine::Math::vec2 &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->setParameterFloat2(num, value);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int num;
            const Unigine::Math::vec2 & value;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->num = num;
    pRunner->value = value;
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

// public : setParameterFloat2
static PyObject * unigine_Material_set_parameter_float2(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const char * name;
    PyObject *pArg2 = NULL; // const Unigine::Math::vec2 & value;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    if (!PyUnicode_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"name\" to %s must be a strint object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    const char * name = PyUnicode_AsUTF8(pArg1);


    // pArg2
TODO for const Unigine::Math::vec2 &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->setParameterFloat2(name, value);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            const char * name;
            const Unigine::Math::vec2 & value;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->name = name;
    pRunner->value = value;
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

// public : getParameterFloat2
static PyObject * unigine_Material_get_parameter_float2(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int num;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"num\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int num = PyLong_AsLong(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getParameterFloat2(num);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int num;
            // return
            Unigine::Math::vec2 retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->num = num;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    Unigine::Math::vec2 retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: Unigine::Math::vec2
    return ret;
};

// public : getParameterFloat2
static PyObject * unigine_Material_get_parameter_float2(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const char * name;
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
                retOriginal = unigine_object_ptr->getParameterFloat2(name);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            const char * name;
            // return
            Unigine::Math::vec2 retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->name = name;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    Unigine::Math::vec2 retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: Unigine::Math::vec2
    return ret;
};

// public : setParameterFloat3
static PyObject * unigine_Material_set_parameter_float3(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int num;
    PyObject *pArg2 = NULL; // const Unigine::Math::vec3 & value;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"num\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int num = PyLong_AsLong(pArg1);


    // pArg2
TODO for const Unigine::Math::vec3 &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->setParameterFloat3(num, value);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int num;
            const Unigine::Math::vec3 & value;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->num = num;
    pRunner->value = value;
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

// public : setParameterFloat3
static PyObject * unigine_Material_set_parameter_float3(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const char * name;
    PyObject *pArg2 = NULL; // const Unigine::Math::vec3 & value;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    if (!PyUnicode_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"name\" to %s must be a strint object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    const char * name = PyUnicode_AsUTF8(pArg1);


    // pArg2
TODO for const Unigine::Math::vec3 &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->setParameterFloat3(name, value);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            const char * name;
            const Unigine::Math::vec3 & value;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->name = name;
    pRunner->value = value;
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

// public : getParameterFloat3
static PyObject * unigine_Material_get_parameter_float3(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int num;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"num\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int num = PyLong_AsLong(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getParameterFloat3(num);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int num;
            // return
            Unigine::Math::vec3 retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->num = num;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    Unigine::Math::vec3 retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: Unigine::Math::vec3
    return ret;
};

// public : getParameterFloat3
static PyObject * unigine_Material_get_parameter_float3(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const char * name;
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
                retOriginal = unigine_object_ptr->getParameterFloat3(name);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            const char * name;
            // return
            Unigine::Math::vec3 retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->name = name;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    Unigine::Math::vec3 retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: Unigine::Math::vec3
    return ret;
};

// public : setParameterFloat4
static PyObject * unigine_Material_set_parameter_float4(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int num;
    PyObject *pArg2 = NULL; // const Unigine::Math::vec4 & value;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"num\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int num = PyLong_AsLong(pArg1);


    // pArg2
TODO for const Unigine::Math::vec4 &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->setParameterFloat4(num, value);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int num;
            const Unigine::Math::vec4 & value;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->num = num;
    pRunner->value = value;
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

// public : setParameterFloat4
static PyObject * unigine_Material_set_parameter_float4(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const char * name;
    PyObject *pArg2 = NULL; // const Unigine::Math::vec4 & value;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    if (!PyUnicode_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"name\" to %s must be a strint object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    const char * name = PyUnicode_AsUTF8(pArg1);


    // pArg2
TODO for const Unigine::Math::vec4 &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->setParameterFloat4(name, value);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            const char * name;
            const Unigine::Math::vec4 & value;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->name = name;
    pRunner->value = value;
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

// public : getParameterFloat4
static PyObject * unigine_Material_get_parameter_float4(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int num;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"num\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int num = PyLong_AsLong(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getParameterFloat4(num);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int num;
            // return
            Unigine::Math::vec4 retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->num = num;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    Unigine::Math::vec4 retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: Unigine::Math::vec4
    return ret;
};

// public : getParameterFloat4
static PyObject * unigine_Material_get_parameter_float4(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const char * name;
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
                retOriginal = unigine_object_ptr->getParameterFloat4(name);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            const char * name;
            // return
            Unigine::Math::vec4 retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->name = name;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    Unigine::Math::vec4 retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: Unigine::Math::vec4
    return ret;
};

// public : setParameterInt
static PyObject * unigine_Material_set_parameter_int(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int num;
    PyObject *pArg2 = NULL; // int value;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"num\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int num = PyLong_AsLong(pArg1);


    // pArg2
    if (!PyLong_Check(pArg2)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"value\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg2)->tp_name);
        return NULL;
    }
    int value = PyLong_AsLong(pArg2);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->setParameterInt(num, value);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int num;
            int value;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->num = num;
    pRunner->value = value;
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

// public : setParameterInt
static PyObject * unigine_Material_set_parameter_int(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const char * name;
    PyObject *pArg2 = NULL; // int value;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    if (!PyUnicode_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"name\" to %s must be a strint object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    const char * name = PyUnicode_AsUTF8(pArg1);


    // pArg2
    if (!PyLong_Check(pArg2)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"value\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg2)->tp_name);
        return NULL;
    }
    int value = PyLong_AsLong(pArg2);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->setParameterInt(name, value);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            const char * name;
            int value;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->name = name;
    pRunner->value = value;
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

// public : getParameterInt
static PyObject * unigine_Material_get_parameter_int(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int num;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"num\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int num = PyLong_AsLong(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getParameterInt(num);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int num;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->num = num;
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

// public : getParameterInt
static PyObject * unigine_Material_get_parameter_int(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const char * name;
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
                retOriginal = unigine_object_ptr->getParameterInt(name);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
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

// public : setParameterInt2
static PyObject * unigine_Material_set_parameter_int2(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int num;
    PyObject *pArg2 = NULL; // const Unigine::Math::ivec2 & value;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"num\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int num = PyLong_AsLong(pArg1);


    // pArg2
TODO for const Unigine::Math::ivec2 &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->setParameterInt2(num, value);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int num;
            const Unigine::Math::ivec2 & value;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->num = num;
    pRunner->value = value;
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

// public : setParameterInt2
static PyObject * unigine_Material_set_parameter_int2(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const char * name;
    PyObject *pArg2 = NULL; // const Unigine::Math::ivec2 & value;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    if (!PyUnicode_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"name\" to %s must be a strint object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    const char * name = PyUnicode_AsUTF8(pArg1);


    // pArg2
TODO for const Unigine::Math::ivec2 &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->setParameterInt2(name, value);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            const char * name;
            const Unigine::Math::ivec2 & value;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->name = name;
    pRunner->value = value;
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

// public : getParameterInt2
static PyObject * unigine_Material_get_parameter_int2(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int num;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"num\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int num = PyLong_AsLong(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getParameterInt2(num);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int num;
            // return
            Unigine::Math::ivec2 retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->num = num;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    Unigine::Math::ivec2 retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: Unigine::Math::ivec2
    return ret;
};

// public : getParameterInt2
static PyObject * unigine_Material_get_parameter_int2(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const char * name;
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
                retOriginal = unigine_object_ptr->getParameterInt2(name);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            const char * name;
            // return
            Unigine::Math::ivec2 retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->name = name;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    Unigine::Math::ivec2 retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: Unigine::Math::ivec2
    return ret;
};

// public : setParameterInt3
static PyObject * unigine_Material_set_parameter_int3(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int num;
    PyObject *pArg2 = NULL; // const Unigine::Math::ivec3 & value;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"num\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int num = PyLong_AsLong(pArg1);


    // pArg2
TODO for const Unigine::Math::ivec3 &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->setParameterInt3(num, value);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int num;
            const Unigine::Math::ivec3 & value;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->num = num;
    pRunner->value = value;
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

// public : setParameterInt3
static PyObject * unigine_Material_set_parameter_int3(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const char * name;
    PyObject *pArg2 = NULL; // const Unigine::Math::ivec3 & value;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    if (!PyUnicode_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"name\" to %s must be a strint object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    const char * name = PyUnicode_AsUTF8(pArg1);


    // pArg2
TODO for const Unigine::Math::ivec3 &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->setParameterInt3(name, value);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            const char * name;
            const Unigine::Math::ivec3 & value;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->name = name;
    pRunner->value = value;
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

// public : getParameterInt3
static PyObject * unigine_Material_get_parameter_int3(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int num;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"num\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int num = PyLong_AsLong(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getParameterInt3(num);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int num;
            // return
            Unigine::Math::ivec3 retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->num = num;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    Unigine::Math::ivec3 retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: Unigine::Math::ivec3
    return ret;
};

// public : getParameterInt3
static PyObject * unigine_Material_get_parameter_int3(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const char * name;
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
                retOriginal = unigine_object_ptr->getParameterInt3(name);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            const char * name;
            // return
            Unigine::Math::ivec3 retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->name = name;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    Unigine::Math::ivec3 retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: Unigine::Math::ivec3
    return ret;
};

// public : setParameterInt4
static PyObject * unigine_Material_set_parameter_int4(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int num;
    PyObject *pArg2 = NULL; // const Unigine::Math::ivec4 & value;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"num\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int num = PyLong_AsLong(pArg1);


    // pArg2
TODO for const Unigine::Math::ivec4 &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->setParameterInt4(num, value);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int num;
            const Unigine::Math::ivec4 & value;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->num = num;
    pRunner->value = value;
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

// public : setParameterInt4
static PyObject * unigine_Material_set_parameter_int4(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const char * name;
    PyObject *pArg2 = NULL; // const Unigine::Math::ivec4 & value;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    if (!PyUnicode_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"name\" to %s must be a strint object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    const char * name = PyUnicode_AsUTF8(pArg1);


    // pArg2
TODO for const Unigine::Math::ivec4 &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->setParameterInt4(name, value);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            const char * name;
            const Unigine::Math::ivec4 & value;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->name = name;
    pRunner->value = value;
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

// public : getParameterInt4
static PyObject * unigine_Material_get_parameter_int4(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int num;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"num\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int num = PyLong_AsLong(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getParameterInt4(num);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int num;
            // return
            Unigine::Math::ivec4 retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->num = num;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    Unigine::Math::ivec4 retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: Unigine::Math::ivec4
    return ret;
};

// public : getParameterInt4
static PyObject * unigine_Material_get_parameter_int4(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const char * name;
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
                retOriginal = unigine_object_ptr->getParameterInt4(name);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            const char * name;
            // return
            Unigine::Math::ivec4 retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->name = name;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    Unigine::Math::ivec4 retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: Unigine::Math::ivec4
    return ret;
};

// public : getParameterArraySize
static PyObject * unigine_Material_get_parameter_array_size(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int num;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"num\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int num = PyLong_AsLong(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getParameterArraySize(num);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int num;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->num = num;
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

// public : isParameterArray
static PyObject * unigine_Material_is_parameter_array(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int num;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"num\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int num = PyLong_AsLong(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->isParameterArray(num);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int num;
            // return
            bool retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->num = num;
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

// public : getParameterArray
static PyObject * unigine_Material_get_parameter_array(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int num;
    PyObject *pArg2 = NULL; // Unigine::Vector<float> & values;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"num\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int num = PyLong_AsLong(pArg1);


    // pArg2
TODO for Unigine::Vector<float> &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->getParameterArray(num, values);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int num;
            Unigine::Vector<float> & values;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->num = num;
    pRunner->values = values;
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

// public : setParameterArray
static PyObject * unigine_Material_set_parameter_array(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int num;
    PyObject *pArg2 = NULL; // const Unigine::Vector<float> & values;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"num\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int num = PyLong_AsLong(pArg1);


    // pArg2
TODO for const Unigine::Vector<float> &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->setParameterArray(num, values);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int num;
            const Unigine::Vector<float> & values;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->num = num;
    pRunner->values = values;
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

// public : getParameterArray
static PyObject * unigine_Material_get_parameter_array(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int num;
    PyObject *pArg2 = NULL; // Unigine::Vector<Unigine::Math::vec2> & values;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"num\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int num = PyLong_AsLong(pArg1);


    // pArg2
TODO for Unigine::Vector<Unigine::Math::vec2> &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->getParameterArray(num, values);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int num;
            Unigine::Vector<Unigine::Math::vec2> & values;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->num = num;
    pRunner->values = values;
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

// public : setParameterArray
static PyObject * unigine_Material_set_parameter_array(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int num;
    PyObject *pArg2 = NULL; // const Unigine::Vector<Unigine::Math::vec2> & values;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"num\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int num = PyLong_AsLong(pArg1);


    // pArg2
TODO for const Unigine::Vector<Unigine::Math::vec2> &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->setParameterArray(num, values);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int num;
            const Unigine::Vector<Unigine::Math::vec2> & values;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->num = num;
    pRunner->values = values;
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

// public : getParameterArray
static PyObject * unigine_Material_get_parameter_array(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int num;
    PyObject *pArg2 = NULL; // Unigine::Vector<Unigine::Math::vec4> & values;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"num\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int num = PyLong_AsLong(pArg1);


    // pArg2
TODO for Unigine::Vector<Unigine::Math::vec4> &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->getParameterArray(num, values);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int num;
            Unigine::Vector<Unigine::Math::vec4> & values;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->num = num;
    pRunner->values = values;
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

// public : setParameterArray
static PyObject * unigine_Material_set_parameter_array(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int num;
    PyObject *pArg2 = NULL; // const Unigine::Vector<Unigine::Math::vec4> & values;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"num\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int num = PyLong_AsLong(pArg1);


    // pArg2
TODO for const Unigine::Vector<Unigine::Math::vec4> &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->setParameterArray(num, values);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int num;
            const Unigine::Vector<Unigine::Math::vec4> & values;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->num = num;
    pRunner->values = values;
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

// public : getParameterArray
static PyObject * unigine_Material_get_parameter_array(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int num;
    PyObject *pArg2 = NULL; // Unigine::Vector<int> & values;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"num\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int num = PyLong_AsLong(pArg1);


    // pArg2
TODO for Unigine::Vector<int> &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->getParameterArray(num, values);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int num;
            Unigine::Vector<int> & values;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->num = num;
    pRunner->values = values;
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

// public : setParameterArray
static PyObject * unigine_Material_set_parameter_array(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int num;
    PyObject *pArg2 = NULL; // const Unigine::Vector<int> & values;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"num\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int num = PyLong_AsLong(pArg1);


    // pArg2
TODO for const Unigine::Vector<int> &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->setParameterArray(num, values);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int num;
            const Unigine::Vector<int> & values;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->num = num;
    pRunner->values = values;
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

// public : getParameterArray
static PyObject * unigine_Material_get_parameter_array(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int num;
    PyObject *pArg2 = NULL; // Unigine::Vector<Unigine::Math::ivec2> & values;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"num\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int num = PyLong_AsLong(pArg1);


    // pArg2
TODO for Unigine::Vector<Unigine::Math::ivec2> &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->getParameterArray(num, values);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int num;
            Unigine::Vector<Unigine::Math::ivec2> & values;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->num = num;
    pRunner->values = values;
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

// public : setParameterArray
static PyObject * unigine_Material_set_parameter_array(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int num;
    PyObject *pArg2 = NULL; // const Unigine::Vector<Unigine::Math::ivec2> & values;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"num\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int num = PyLong_AsLong(pArg1);


    // pArg2
TODO for const Unigine::Vector<Unigine::Math::ivec2> &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->setParameterArray(num, values);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int num;
            const Unigine::Vector<Unigine::Math::ivec2> & values;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->num = num;
    pRunner->values = values;
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

// public : getParameterArray
static PyObject * unigine_Material_get_parameter_array(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int num;
    PyObject *pArg2 = NULL; // Unigine::Vector<Unigine::Math::ivec4> & values;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"num\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int num = PyLong_AsLong(pArg1);


    // pArg2
TODO for Unigine::Vector<Unigine::Math::ivec4> &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->getParameterArray(num, values);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int num;
            Unigine::Vector<Unigine::Math::ivec4> & values;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->num = num;
    pRunner->values = values;
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

// public : setParameterArray
static PyObject * unigine_Material_set_parameter_array(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int num;
    PyObject *pArg2 = NULL; // const Unigine::Vector<Unigine::Math::ivec4> & values;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"num\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int num = PyLong_AsLong(pArg1);


    // pArg2
TODO for const Unigine::Vector<Unigine::Math::ivec4> &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->setParameterArray(num, values);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int num;
            const Unigine::Vector<Unigine::Math::ivec4> & values;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->num = num;
    pRunner->values = values;
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

// public : getNumStates
static PyObject * unigine_Material_get_num_states(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getNumStates();
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
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

// public : findState
static PyObject * unigine_Material_find_state(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const char * name;
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
                retOriginal = unigine_object_ptr->findState(name);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
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

// public : isStateOverridden
static PyObject * unigine_Material_is_state_overridden(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int num;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"num\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int num = PyLong_AsLong(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->isStateOverridden(num);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int num;
            // return
            bool retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->num = num;
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

// public : isStateInternal
static PyObject * unigine_Material_is_state_internal(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int num;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"num\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int num = PyLong_AsLong(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->isStateInternal(num);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int num;
            // return
            bool retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->num = num;
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

// public : resetState
static PyObject * unigine_Material_reset_state(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int num;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"num\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int num = PyLong_AsLong(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->resetState(num);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int num;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->num = num;
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

// public : checkStateConditions
static PyObject * unigine_Material_check_state_conditions(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int num;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"num\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int num = PyLong_AsLong(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->checkStateConditions(num);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int num;
            // return
            bool retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->num = num;
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

// public : getStateName
static PyObject * unigine_Material_get_state_name(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int num;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"num\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int num = PyLong_AsLong(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getStateName(num);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int num;
            // return
            const char * retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->num = num;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    const char * retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = TODO: unknown type 'const char *'

    // end
    // return: const char *
    return ret;
};

// public : getStateSwitchItem
static PyObject * unigine_Material_get_state_switch_item(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int num;
    PyObject *pArg2 = NULL; // int item;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"num\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int num = PyLong_AsLong(pArg1);


    // pArg2
    if (!PyLong_Check(pArg2)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"item\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg2)->tp_name);
        return NULL;
    }
    int item = PyLong_AsLong(pArg2);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getStateSwitchItem(num, item);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int num;
            int item;
            // return
            const char * retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->num = num;
    pRunner->item = item;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    const char * retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = TODO: unknown type 'const char *'

    // end
    // return: const char *
    return ret;
};

// public : getStateSwitchNumItems
static PyObject * unigine_Material_get_state_switch_num_items(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int num;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"num\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int num = PyLong_AsLong(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getStateSwitchNumItems(num);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int num;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->num = num;
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

// public : getStateType
static PyObject * unigine_Material_get_state_type(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int num;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"num\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int num = PyLong_AsLong(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getStateType(num);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int num;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->num = num;
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

// public : getState
static PyObject * unigine_Material_get_state(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int num;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"num\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int num = PyLong_AsLong(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getState(num);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int num;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->num = num;
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

// public : setState
static PyObject * unigine_Material_set_state(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int num;
    PyObject *pArg2 = NULL; // int value;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"num\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int num = PyLong_AsLong(pArg1);


    // pArg2
    if (!PyLong_Check(pArg2)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"value\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg2)->tp_name);
        return NULL;
    }
    int value = PyLong_AsLong(pArg2);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->setState(num, value);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int num;
            int value;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->num = num;
    pRunner->value = value;
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

// public : getState
static PyObject * unigine_Material_get_state(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const char * name;
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
                retOriginal = unigine_object_ptr->getState(name);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
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

// public : setState
static PyObject * unigine_Material_set_state(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const char * name;
    PyObject *pArg2 = NULL; // int value;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    if (!PyUnicode_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"name\" to %s must be a strint object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    const char * name = PyUnicode_AsUTF8(pArg1);


    // pArg2
    if (!PyLong_Check(pArg2)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"value\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg2)->tp_name);
        return NULL;
    }
    int value = PyLong_AsLong(pArg2);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->setState(name, value);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            const char * name;
            int value;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->name = name;
    pRunner->value = value;
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

// public : getNumTextures
static PyObject * unigine_Material_get_num_textures(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getNumTextures();
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
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

// public : findTexture
static PyObject * unigine_Material_find_texture(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const char * name;
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
                retOriginal = unigine_object_ptr->findTexture(name);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
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

// public : isTextureOverridden
static PyObject * unigine_Material_is_texture_overridden(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int num;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"num\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int num = PyLong_AsLong(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->isTextureOverridden(num);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int num;
            // return
            bool retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->num = num;
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

// public : isTextureLoaded
static PyObject * unigine_Material_is_texture_loaded(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int num;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"num\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int num = PyLong_AsLong(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->isTextureLoaded(num);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int num;
            // return
            bool retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->num = num;
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

// public : isTextureInternal
static PyObject * unigine_Material_is_texture_internal(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int num;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"num\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int num = PyLong_AsLong(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->isTextureInternal(num);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int num;
            // return
            bool retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->num = num;
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

// public : resetTexture
static PyObject * unigine_Material_reset_texture(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int num;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"num\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int num = PyLong_AsLong(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->resetTexture(num);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int num;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->num = num;
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

// public : checkTextureConditions
static PyObject * unigine_Material_check_texture_conditions(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int num;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"num\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int num = PyLong_AsLong(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->checkTextureConditions(num);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int num;
            // return
            bool retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->num = num;
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

// public : getTextureName
static PyObject * unigine_Material_get_texture_name(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int num;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"num\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int num = PyLong_AsLong(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getTextureName(num);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int num;
            // return
            const char * retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->num = num;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    const char * retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = TODO: unknown type 'const char *'

    // end
    // return: const char *
    return ret;
};

// public : getTextureUnit
static PyObject * unigine_Material_get_texture_unit(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int num;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"num\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int num = PyLong_AsLong(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getTextureUnit(num);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int num;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->num = num;
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

// public : isTextureEditable
static PyObject * unigine_Material_is_texture_editable(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int num;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"num\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int num = PyLong_AsLong(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->isTextureEditable(num);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int num;
            // return
            bool retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->num = num;
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

// public : getTextureSource
static PyObject * unigine_Material_get_texture_source(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int num;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"num\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int num = PyLong_AsLong(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getTextureSource(num);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int num;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->num = num;
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

// public : getTextureSamplerFlags
static PyObject * unigine_Material_get_texture_sampler_flags(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int num;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"num\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int num = PyLong_AsLong(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getTextureSamplerFlags(num);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int num;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->num = num;
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

// public : setTextureSamplerFlags
static PyObject * unigine_Material_set_texture_sampler_flags(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int num;
    PyObject *pArg2 = NULL; // int sampler_flags;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"num\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int num = PyLong_AsLong(pArg1);


    // pArg2
    if (!PyLong_Check(pArg2)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"sampler_flags\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg2)->tp_name);
        return NULL;
    }
    int sampler_flags = PyLong_AsLong(pArg2);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->setTextureSamplerFlags(num, sampler_flags);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int num;
            int sampler_flags;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->num = num;
    pRunner->sampler_flags = sampler_flags;
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

// public : getTextureFormatFlags
static PyObject * unigine_Material_get_texture_format_flags(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int num;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"num\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int num = PyLong_AsLong(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getTextureFormatFlags(num);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int num;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->num = num;
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

// public : getTextureImage
static PyObject * unigine_Material_get_texture_image(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int num;
    PyObject *pArg2 = NULL; // const Unigine::Ptr<Unigine::Image> & image;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"num\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int num = PyLong_AsLong(pArg1);


    // pArg2
TODO for const Unigine::Ptr<Unigine::Image> &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getTextureImage(num, image);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int num;
            const Unigine::Ptr<Unigine::Image> & image;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->num = num;
    pRunner->image = image;
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

// public : setTextureImage
static PyObject * unigine_Material_set_texture_image(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int num;
    PyObject *pArg2 = NULL; // const Unigine::Ptr<Unigine::Image> & image;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"num\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int num = PyLong_AsLong(pArg1);


    // pArg2
TODO for const Unigine::Ptr<Unigine::Image> &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->setTextureImage(num, image);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int num;
            const Unigine::Ptr<Unigine::Image> & image;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->num = num;
    pRunner->image = image;
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

// public : getTexture
static PyObject * unigine_Material_get_texture(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int num;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"num\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int num = PyLong_AsLong(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getTexture(num);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int num;
            // return
            Unigine::Ptr<Unigine::Texture> retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->num = num;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    Unigine::Ptr<Unigine::Texture> retOriginal = pRunner->retOriginal;
    delete pRunner;
    if (retOriginal == nullptr) {
        Py_INCREF(Py_None);
        ret = Py_None;
    } else {
        ret = PyUnigine::Texture::NewObject(retOriginal);
    }

    // end
    // return: Unigine::Ptr<Unigine::Texture>
    return ret;
};

// public : getTexture
static PyObject * unigine_Material_get_texture(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const char * name;
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
                retOriginal = unigine_object_ptr->getTexture(name);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            const char * name;
            // return
            Unigine::Ptr<Unigine::Texture> retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->name = name;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    Unigine::Ptr<Unigine::Texture> retOriginal = pRunner->retOriginal;
    delete pRunner;
    if (retOriginal == nullptr) {
        Py_INCREF(Py_None);
        ret = Py_None;
    } else {
        ret = PyUnigine::Texture::NewObject(retOriginal);
    }

    // end
    // return: Unigine::Ptr<Unigine::Texture>
    return ret;
};

// public : setTexture
static PyObject * unigine_Material_set_texture(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int num;
    PyObject *pArg2 = NULL; // const Unigine::Ptr<Unigine::Texture> & texture;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"num\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int num = PyLong_AsLong(pArg1);


    // pArg2
TODO for const Unigine::Ptr<Unigine::Texture> &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->setTexture(num, texture);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int num;
            const Unigine::Ptr<Unigine::Texture> & texture;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->num = num;
    pRunner->texture = texture;
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

// public : setTexture
static PyObject * unigine_Material_set_texture(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const char * name;
    PyObject *pArg2 = NULL; // const Unigine::Ptr<Unigine::Texture> & texture;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    if (!PyUnicode_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"name\" to %s must be a strint object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    const char * name = PyUnicode_AsUTF8(pArg1);


    // pArg2
TODO for const Unigine::Ptr<Unigine::Texture> &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->setTexture(name, texture);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            const char * name;
            const Unigine::Ptr<Unigine::Texture> & texture;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->name = name;
    pRunner->texture = texture;
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

// public : setTexturePath
static PyObject * unigine_Material_set_texture_path(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int num;
    PyObject *pArg2 = NULL; // const char * path;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"num\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int num = PyLong_AsLong(pArg1);


    // pArg2
    if (!PyUnicode_Check(pArg2)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"path\" to %s must be a strint object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg2)->tp_name);
        return NULL;
    }
    const char * path = PyUnicode_AsUTF8(pArg2);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->setTexturePath(num, path);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int num;
            const char * path;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->num = num;
    pRunner->path = path;
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

// public : getTexturePath
static PyObject * unigine_Material_get_texture_path(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int num;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"num\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int num = PyLong_AsLong(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getTexturePath(num);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int num;
            // return
            const char * retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->num = num;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    const char * retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = TODO: unknown type 'const char *'

    // end
    // return: const char *
    return ret;
};

// public : setTexturePath
static PyObject * unigine_Material_set_texture_path(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const char * name;
    PyObject *pArg2 = NULL; // const char * path;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    if (!PyUnicode_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"name\" to %s must be a strint object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    const char * name = PyUnicode_AsUTF8(pArg1);


    // pArg2
    if (!PyUnicode_Check(pArg2)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"path\" to %s must be a strint object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg2)->tp_name);
        return NULL;
    }
    const char * path = PyUnicode_AsUTF8(pArg2);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->setTexturePath(name, path);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            const char * name;
            const char * path;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->name = name;
    pRunner->path = path;
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

// public : getTexturePath
static PyObject * unigine_Material_get_texture_path(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const char * name;
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
                retOriginal = unigine_object_ptr->getTexturePath(name);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            const char * name;
            // return
            const char * retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->name = name;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    const char * retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = TODO: unknown type 'const char *'

    // end
    // return: const char *
    return ret;
};

// public : getTextureRamp
static PyObject * unigine_Material_get_texture_ramp(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int num;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"num\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int num = PyLong_AsLong(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getTextureRamp(num);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int num;
            // return
            Unigine::Ptr<Unigine::TextureRamp> retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->num = num;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    Unigine::Ptr<Unigine::TextureRamp> retOriginal = pRunner->retOriginal;
    delete pRunner;
    if (retOriginal == nullptr) {
        Py_INCREF(Py_None);
        ret = Py_None;
    } else {
        ret = PyUnigine::TextureRamp::NewObject(retOriginal);
    }

    // end
    // return: Unigine::Ptr<Unigine::TextureRamp>
    return ret;
};

// public : getTextureRampOverride
static PyObject * unigine_Material_get_texture_ramp_override(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int num;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"num\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int num = PyLong_AsLong(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getTextureRampOverride(num);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            int num;
            // return
            Unigine::Ptr<Unigine::TextureRamp> retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->num = num;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    Unigine::Ptr<Unigine::TextureRamp> retOriginal = pRunner->retOriginal;
    delete pRunner;
    if (retOriginal == nullptr) {
        Py_INCREF(Py_None);
        ret = Py_None;
    } else {
        ret = PyUnigine::TextureRamp::NewObject(retOriginal);
    }

    // end
    // return: Unigine::Ptr<Unigine::TextureRamp>
    return ret;
};

// public : isEditable
static PyObject * unigine_Material_is_editable(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->isEditable();
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
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

// public : isHidden
static PyObject * unigine_Material_is_hidden(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->isHidden();
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
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

// public : isBase
static PyObject * unigine_Material_is_base(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->isBase();
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
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

// public : isBrush
static PyObject * unigine_Material_is_brush(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->isBrush();
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
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

// public : isLegacy
static PyObject * unigine_Material_is_legacy(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->isLegacy();
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
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

// public : isPreviewHidden
static PyObject * unigine_Material_is_preview_hidden(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->isPreviewHidden();
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
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

// public : isReflection2D
static PyObject * unigine_Material_is_reflection2_d(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->isReflection2D();
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
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

// public : isInternal
static PyObject * unigine_Material_is_internal(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->isInternal();
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
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

// public : isManual
static PyObject * unigine_Material_is_manual(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->isManual();
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
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

// public : canSave
static PyObject * unigine_Material_can_save(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->canSave();
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
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

// public : isAutoSave
static PyObject * unigine_Material_is_auto_save(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->isAutoSave();
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
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

// public : isFileEngine
static PyObject * unigine_Material_is_file_engine(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->isFileEngine();
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
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

// public : isEmpty
static PyObject * unigine_Material_is_empty(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->isEmpty();
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
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

// public : hasOverrides
static PyObject * unigine_Material_has_overrides(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->hasOverrides();
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
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

// public : saveState
static PyObject * unigine_Material_save_state(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const Unigine::Ptr<Unigine::Stream> & stream;
    PyObject *pArg2 = NULL; // bool forced;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
TODO for const Unigine::Ptr<Unigine::Stream> &


    // pArg2
    if (!PyBool_Check(pArg2)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"forced\" to %s must be a bool object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg2)->tp_name);
        return NULL;
    }
    bool forced = pArg2 == Py_True;


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->saveState(stream, forced);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            const Unigine::Ptr<Unigine::Stream> & stream;
            bool forced;
            // return
            bool retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->stream = stream;
    pRunner->forced = forced;
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

// public : restoreState
static PyObject * unigine_Material_restore_state(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const Unigine::Ptr<Unigine::Stream> & stream;
    PyObject *pArg2 = NULL; // bool forced;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
TODO for const Unigine::Ptr<Unigine::Stream> &


    // pArg2
    if (!PyBool_Check(pArg2)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"forced\" to %s must be a bool object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg2)->tp_name);
        return NULL;
    }
    bool forced = pArg2 == Py_True;


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->restoreState(stream, forced);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            const Unigine::Ptr<Unigine::Stream> & stream;
            bool forced;
            // return
            bool retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->stream = stream;
    pRunner->forced = forced;
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

// public : loadXml
static PyObject * unigine_Material_load_xml(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const Unigine::Ptr<Unigine::Xml> & xml;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for const Unigine::Ptr<Unigine::Xml> &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->loadXml(xml);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            const Unigine::Ptr<Unigine::Xml> & xml;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->xml = xml;
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

// public : saveXml
static PyObject * unigine_Material_save_xml(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const Unigine::Ptr<Unigine::Xml> & xml;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for const Unigine::Ptr<Unigine::Xml> &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->saveXml(xml);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            const Unigine::Ptr<Unigine::Xml> & xml;
            // return
            bool retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->xml = xml;
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

// public : loadUlon
static PyObject * unigine_Material_load_ulon(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const Unigine::Ptr<Unigine::UlonNode> & ulon;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for const Unigine::Ptr<Unigine::UlonNode> &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->loadUlon(ulon);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            const Unigine::Ptr<Unigine::UlonNode> & ulon;
            // return
            bool retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->ulon = ulon;
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

// public : load
static PyObject * unigine_Material_load(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const char * path;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyUnicode_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"path\" to %s must be a strint object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    const char * path = PyUnicode_AsUTF8(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->load(path);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            const char * path;
            // return
            bool retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->path = path;
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

// public : save
static PyObject * unigine_Material_save(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->save();
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
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

// public : reload
static PyObject * unigine_Material_reload(unigine_Material* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->reload();
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
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

// public : createMaterialFile
static PyObject * unigine_Material_create_material_file(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const char * path;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyUnicode_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"path\" to %s must be a strint object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    const char * path = PyUnicode_AsUTF8(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->createMaterialFile(path);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            const char * path;
            // return
            bool retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->path = path;
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

// public : getRenderPass
static PyObject * unigine_Material_get_render_pass(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const char * pass_name;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyUnicode_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"pass_name\" to %s must be a strint object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    const char * pass_name = PyUnicode_AsUTF8(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getRenderPass(pass_name);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            const char * pass_name;
            // return
            Unigine::Render::PASS retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->pass_name = pass_name;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    Unigine::Render::PASS retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: Unigine::Render::PASS
    return ret;
};

// public : getRenderPassName
static PyObject * unigine_Material_get_render_pass_name(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // Unigine::Render::PASS type;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for Unigine::Render::PASS


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getRenderPassName(type);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            Unigine::Render::PASS type;
            // return
            const char * retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->type = type;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    const char * retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = TODO: unknown type 'const char *'

    // end
    // return: const char *
    return ret;
};

// public : runExpression
static PyObject * unigine_Material_run_expression(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const char * name;
    PyObject *pArg2 = NULL; // int w;
    PyObject *pArg3 = NULL; // int h;
    PyObject *pArg4 = NULL; // int d;
    PyArg_ParseTuple(args, "OOOO", &pArg1, &pArg2, &pArg3, &pArg4);

    // pArg1
    if (!PyUnicode_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"name\" to %s must be a strint object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    const char * name = PyUnicode_AsUTF8(pArg1);


    // pArg2
    if (!PyLong_Check(pArg2)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"w\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg2)->tp_name);
        return NULL;
    }
    int w = PyLong_AsLong(pArg2);


    // pArg3
    if (!PyLong_Check(pArg3)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"h\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg3)->tp_name);
        return NULL;
    }
    int h = PyLong_AsLong(pArg3);


    // pArg4
    if (!PyLong_Check(pArg4)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"d\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg4)->tp_name);
        return NULL;
    }
    int d = PyLong_AsLong(pArg4);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->runExpression(name, w, h, d);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            const char * name;
            int w;
            int h;
            int d;
            // return
            bool retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->name = name;
    pRunner->w = w;
    pRunner->h = h;
    pRunner->d = d;
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

// public : renderScreen
static PyObject * unigine_Material_render_screen(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const char * pass_name;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyUnicode_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"pass_name\" to %s must be a strint object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    const char * pass_name = PyUnicode_AsUTF8(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->renderScreen(pass_name);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            const char * pass_name;
            // return
            bool retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->pass_name = pass_name;
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

// public : renderScreen
static PyObject * unigine_Material_render_screen(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // Unigine::Render::PASS pass;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for Unigine::Render::PASS


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->renderScreen(pass);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            Unigine::Render::PASS pass;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->pass = pass;
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

// public : renderCompute
static PyObject * unigine_Material_render_compute(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const char * pass_name;
    PyObject *pArg2 = NULL; // int group_threads_x;
    PyObject *pArg3 = NULL; // int group_threads_y;
    PyObject *pArg4 = NULL; // int group_threads_z;
    PyArg_ParseTuple(args, "OOOO", &pArg1, &pArg2, &pArg3, &pArg4);

    // pArg1
    if (!PyUnicode_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"pass_name\" to %s must be a strint object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    const char * pass_name = PyUnicode_AsUTF8(pArg1);


    // pArg2
    if (!PyLong_Check(pArg2)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"group_threads_x\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg2)->tp_name);
        return NULL;
    }
    int group_threads_x = PyLong_AsLong(pArg2);


    // pArg3
    if (!PyLong_Check(pArg3)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"group_threads_y\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg3)->tp_name);
        return NULL;
    }
    int group_threads_y = PyLong_AsLong(pArg3);


    // pArg4
    if (!PyLong_Check(pArg4)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"group_threads_z\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg4)->tp_name);
        return NULL;
    }
    int group_threads_z = PyLong_AsLong(pArg4);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->renderCompute(pass_name, group_threads_x, group_threads_y, group_threads_z);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            const char * pass_name;
            int group_threads_x;
            int group_threads_y;
            int group_threads_z;
            // return
            bool retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->pass_name = pass_name;
    pRunner->group_threads_x = group_threads_x;
    pRunner->group_threads_y = group_threads_y;
    pRunner->group_threads_z = group_threads_z;
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

// public : renderCompute
static PyObject * unigine_Material_render_compute(unigine_Material* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // Unigine::Render::PASS pass;
    PyObject *pArg2 = NULL; // int group_threads_x;
    PyObject *pArg3 = NULL; // int group_threads_y;
    PyObject *pArg4 = NULL; // int group_threads_z;
    PyArg_ParseTuple(args, "OOOO", &pArg1, &pArg2, &pArg3, &pArg4);

    // pArg1
TODO for Unigine::Render::PASS


    // pArg2
    if (!PyLong_Check(pArg2)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"group_threads_x\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg2)->tp_name);
        return NULL;
    }
    int group_threads_x = PyLong_AsLong(pArg2);


    // pArg3
    if (!PyLong_Check(pArg3)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"group_threads_y\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg3)->tp_name);
        return NULL;
    }
    int group_threads_y = PyLong_AsLong(pArg3);


    // pArg4
    if (!PyLong_Check(pArg4)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"group_threads_z\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg4)->tp_name);
        return NULL;
    }
    int group_threads_z = PyLong_AsLong(pArg4);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->renderCompute(pass, group_threads_x, group_threads_y, group_threads_z);
            };
            Unigine::Ptr<Unigine::Material> unigine_object_ptr;
            // args
            Unigine::Render::PASS pass;
            int group_threads_x;
            int group_threads_y;
            int group_threads_z;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->pass = pass;
    pRunner->group_threads_x = group_threads_x;
    pRunner->group_threads_y = group_threads_y;
    pRunner->group_threads_z = group_threads_z;
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


static PyMethodDef unigine_Material_methods[] = {
    {
        "create", (PyCFunction)unigine_Material_create, METH_STATIC|METH_NOARGS,
        "public (static): create"
    },
    {
        "set_parent", (PyCFunction)unigine_Material_set_parent, METH_VARARGS,
        "public : setParent"
    },
    {
        "get_parent", (PyCFunction)unigine_Material_get_parent, METH_NOARGS,
        "public : getParent"
    },
    {
        "is_parent", (PyCFunction)unigine_Material_is_parent, METH_VARARGS,
        "public : isParent"
    },
    {
        "is_parent", (PyCFunction)unigine_Material_is_parent, METH_VARARGS,
        "public : isParent"
    },
    {
        "get_base_material", (PyCFunction)unigine_Material_get_base_material, METH_NOARGS,
        "public : getBaseMaterial"
    },
    {
        "get_num_children", (PyCFunction)unigine_Material_get_num_children, METH_NOARGS,
        "public : getNumChildren"
    },
    {
        "get_child", (PyCFunction)unigine_Material_get_child, METH_VARARGS,
        "public : getChild"
    },
    {
        "clone", (PyCFunction)unigine_Material_clone, METH_VARARGS,
        "public : clone"
    },
    {
        "clone", (PyCFunction)unigine_Material_clone, METH_NOARGS,
        "public : clone"
    },
    {
        "inherit", (PyCFunction)unigine_Material_inherit, METH_VARARGS,
        "public : inherit"
    },
    {
        "inherit", (PyCFunction)unigine_Material_inherit, METH_NOARGS,
        "public : inherit"
    },
    {
        "get_namespace_name", (PyCFunction)unigine_Material_get_namespace_name, METH_NOARGS,
        "public : getNamespaceName"
    },
    {
        "get_manual_name", (PyCFunction)unigine_Material_get_manual_name, METH_NOARGS,
        "public : getManualName"
    },
    {
        "get_guid", (PyCFunction)unigine_Material_get_guid, METH_NOARGS,
        "public : getGUID"
    },
    {
        "get_path", (PyCFunction)unigine_Material_get_path, METH_NOARGS,
        "public : getPath"
    },
    {
        "is_node_type_supported", (PyCFunction)unigine_Material_is_node_type_supported, METH_VARARGS,
        "public : isNodeTypeSupported"
    },
    {
        "is_node_supported", (PyCFunction)unigine_Material_is_node_supported, METH_VARARGS,
        "public : isNodeSupported"
    },
    {
        "can_render_node", (PyCFunction)unigine_Material_can_render_node, METH_NOARGS,
        "public : canRenderNode"
    },
    {
        "get_num_ui_items", (PyCFunction)unigine_Material_get_num_ui_items, METH_NOARGS,
        "public : getNumUIItems"
    },
    {
        "get_ui_item_data_type", (PyCFunction)unigine_Material_get_ui_item_data_type, METH_VARARGS,
        "public : getUIItemDataType"
    },
    {
        "get_ui_item_data_id", (PyCFunction)unigine_Material_get_ui_item_data_id, METH_VARARGS,
        "public : getUIItemDataID"
    },
    {
        "is_ui_item_hidden", (PyCFunction)unigine_Material_is_ui_item_hidden, METH_VARARGS,
        "public : isUIItemHidden"
    },
    {
        "get_ui_item_title", (PyCFunction)unigine_Material_get_ui_item_title, METH_VARARGS,
        "public : getUIItemTitle"
    },
    {
        "get_ui_item_tooltip", (PyCFunction)unigine_Material_get_ui_item_tooltip, METH_VARARGS,
        "public : getUIItemTooltip"
    },
    {
        "get_ui_item_widget", (PyCFunction)unigine_Material_get_ui_item_widget, METH_VARARGS,
        "public : getUIItemWidget"
    },
    {
        "get_ui_item_parent", (PyCFunction)unigine_Material_get_ui_item_parent, METH_VARARGS,
        "public : getUIItemParent"
    },
    {
        "get_ui_item_num_children", (PyCFunction)unigine_Material_get_ui_item_num_children, METH_VARARGS,
        "public : getUIItemNumChildren"
    },
    {
        "get_ui_item_child", (PyCFunction)unigine_Material_get_ui_item_child, METH_VARARGS,
        "public : getUIItemChild"
    },
    {
        "is_ui_item_slider_min_expand", (PyCFunction)unigine_Material_is_ui_item_slider_min_expand, METH_VARARGS,
        "public : isUIItemSliderMinExpand"
    },
    {
        "is_ui_item_slider_max_expand", (PyCFunction)unigine_Material_is_ui_item_slider_max_expand, METH_VARARGS,
        "public : isUIItemSliderMaxExpand"
    },
    {
        "get_ui_item_slider_min_value", (PyCFunction)unigine_Material_get_ui_item_slider_min_value, METH_VARARGS,
        "public : getUIItemSliderMinValue"
    },
    {
        "get_ui_item_slider_max_value", (PyCFunction)unigine_Material_get_ui_item_slider_max_value, METH_VARARGS,
        "public : getUIItemSliderMaxValue"
    },
    {
        "get_ui_item_group_toggle_state_id", (PyCFunction)unigine_Material_get_ui_item_group_toggle_state_id, METH_VARARGS,
        "public : getUIItemGroupToggleStateID"
    },
    {
        "is_ui_item_group_collapsed", (PyCFunction)unigine_Material_is_ui_item_group_collapsed, METH_VARARGS,
        "public : isUIItemGroupCollapsed"
    },
    {
        "widget_to_string", (PyCFunction)unigine_Material_widget_to_string, METH_STATIC|METH_VARARGS,
        "public (static): widgetToString"
    },
    {
        "string_to_widget", (PyCFunction)unigine_Material_string_to_widget, METH_STATIC|METH_VARARGS,
        "public (static): stringToWidget"
    },
    {
        "set_option", (PyCFunction)unigine_Material_set_option, METH_VARARGS,
        "public : setOption"
    },
    {
        "get_option", (PyCFunction)unigine_Material_get_option, METH_VARARGS,
        "public : getOption"
    },
    {
        "is_option_overridden", (PyCFunction)unigine_Material_is_option_overridden, METH_VARARGS,
        "public : isOptionOverridden"
    },
    {
        "reset_option", (PyCFunction)unigine_Material_reset_option, METH_VARARGS,
        "public : resetOption"
    },
    {
        "set_transparent", (PyCFunction)unigine_Material_set_transparent, METH_VARARGS,
        "public : setTransparent"
    },
    {
        "get_transparent", (PyCFunction)unigine_Material_get_transparent, METH_NOARGS,
        "public : getTransparent"
    },
    {
        "is_water", (PyCFunction)unigine_Material_is_water, METH_NOARGS,
        "public : isWater"
    },
    {
        "is_deferred", (PyCFunction)unigine_Material_is_deferred, METH_NOARGS,
        "public : isDeferred"
    },
    {
        "is_forward", (PyCFunction)unigine_Material_is_forward, METH_NOARGS,
        "public : isForward"
    },
    {
        "is_alpha_test", (PyCFunction)unigine_Material_is_alpha_test, METH_NOARGS,
        "public : isAlphaTest"
    },
    {
        "set_blend_dest_func", (PyCFunction)unigine_Material_set_blend_dest_func, METH_VARARGS,
        "public : setBlendDestFunc"
    },
    {
        "get_blend_dest_func", (PyCFunction)unigine_Material_get_blend_dest_func, METH_NOARGS,
        "public : getBlendDestFunc"
    },
    {
        "set_blend_src_func", (PyCFunction)unigine_Material_set_blend_src_func, METH_VARARGS,
        "public : setBlendSrcFunc"
    },
    {
        "get_blend_src_func", (PyCFunction)unigine_Material_get_blend_src_func, METH_NOARGS,
        "public : getBlendSrcFunc"
    },
    {
        "set_shadow_mask", (PyCFunction)unigine_Material_set_shadow_mask, METH_VARARGS,
        "public : setShadowMask"
    },
    {
        "get_shadow_mask", (PyCFunction)unigine_Material_get_shadow_mask, METH_NOARGS,
        "public : getShadowMask"
    },
    {
        "set_viewport_mask", (PyCFunction)unigine_Material_set_viewport_mask, METH_VARARGS,
        "public : setViewportMask"
    },
    {
        "get_viewport_mask", (PyCFunction)unigine_Material_get_viewport_mask, METH_NOARGS,
        "public : getViewportMask"
    },
    {
        "set_depth_mask", (PyCFunction)unigine_Material_set_depth_mask, METH_VARARGS,
        "public : setDepthMask"
    },
    {
        "get_depth_mask", (PyCFunction)unigine_Material_get_depth_mask, METH_NOARGS,
        "public : getDepthMask"
    },
    {
        "set_order", (PyCFunction)unigine_Material_set_order, METH_VARARGS,
        "public : setOrder"
    },
    {
        "get_order", (PyCFunction)unigine_Material_get_order, METH_NOARGS,
        "public : getOrder"
    },
    {
        "set_cast_shadow", (PyCFunction)unigine_Material_set_cast_shadow, METH_VARARGS,
        "public : setCastShadow"
    },
    {
        "is_cast_shadow", (PyCFunction)unigine_Material_is_cast_shadow, METH_NOARGS,
        "public : isCastShadow"
    },
    {
        "set_cast_world_shadow", (PyCFunction)unigine_Material_set_cast_world_shadow, METH_VARARGS,
        "public : setCastWorldShadow"
    },
    {
        "is_cast_world_shadow", (PyCFunction)unigine_Material_is_cast_world_shadow, METH_NOARGS,
        "public : isCastWorldShadow"
    },
    {
        "set_depth_test", (PyCFunction)unigine_Material_set_depth_test, METH_VARARGS,
        "public : setDepthTest"
    },
    {
        "is_depth_test", (PyCFunction)unigine_Material_is_depth_test, METH_NOARGS,
        "public : isDepthTest"
    },
    {
        "set_two_sided", (PyCFunction)unigine_Material_set_two_sided, METH_VARARGS,
        "public : setTwoSided"
    },
    {
        "is_two_sided", (PyCFunction)unigine_Material_is_two_sided, METH_NOARGS,
        "public : isTwoSided"
    },
    {
        "set_overlap", (PyCFunction)unigine_Material_set_overlap, METH_VARARGS,
        "public : setOverlap"
    },
    {
        "is_overlap", (PyCFunction)unigine_Material_is_overlap, METH_NOARGS,
        "public : isOverlap"
    },
    {
        "check_shader_cache", (PyCFunction)unigine_Material_check_shader_cache, METH_NOARGS,
        "public : checkShaderCache"
    },
    {
        "check_shader_cache", (PyCFunction)unigine_Material_check_shader_cache, METH_VARARGS,
        "public : checkShaderCache"
    },
    {
        "compile_shader", (PyCFunction)unigine_Material_compile_shader, METH_VARARGS,
        "public : compileShader"
    },
    {
        "fetch_shader", (PyCFunction)unigine_Material_fetch_shader, METH_VARARGS,
        "public : fetchShader"
    },
    {
        "fetch_shader", (PyCFunction)unigine_Material_fetch_shader, METH_VARARGS,
        "public : fetchShader"
    },
    {
        "fetch_shader", (PyCFunction)unigine_Material_fetch_shader, METH_VARARGS,
        "public : fetchShader"
    },
    {
        "fetch_shader", (PyCFunction)unigine_Material_fetch_shader, METH_VARARGS,
        "public : fetchShader"
    },
    {
        "create_shaders", (PyCFunction)unigine_Material_create_shaders, METH_VARARGS,
        "public : createShaders"
    },
    {
        "destroy_textures", (PyCFunction)unigine_Material_destroy_textures, METH_NOARGS,
        "public : destroyTextures"
    },
    {
        "get_num_parameters", (PyCFunction)unigine_Material_get_num_parameters, METH_NOARGS,
        "public : getNumParameters"
    },
    {
        "find_parameter", (PyCFunction)unigine_Material_find_parameter, METH_VARARGS,
        "public : findParameter"
    },
    {
        "reset_parameter", (PyCFunction)unigine_Material_reset_parameter, METH_VARARGS,
        "public : resetParameter"
    },
    {
        "check_parameter_conditions", (PyCFunction)unigine_Material_check_parameter_conditions, METH_VARARGS,
        "public : checkParameterConditions"
    },
    {
        "get_parameter_type", (PyCFunction)unigine_Material_get_parameter_type, METH_VARARGS,
        "public : getParameterType"
    },
    {
        "is_parameter_int", (PyCFunction)unigine_Material_is_parameter_int, METH_VARARGS,
        "public : isParameterInt"
    },
    {
        "is_parameter_float", (PyCFunction)unigine_Material_is_parameter_float, METH_VARARGS,
        "public : isParameterFloat"
    },
    {
        "is_parameter_overridden", (PyCFunction)unigine_Material_is_parameter_overridden, METH_VARARGS,
        "public : isParameterOverridden"
    },
    {
        "get_parameter_name", (PyCFunction)unigine_Material_get_parameter_name, METH_VARARGS,
        "public : getParameterName"
    },
    {
        "is_parameter_expression_enabled", (PyCFunction)unigine_Material_is_parameter_expression_enabled, METH_VARARGS,
        "public : isParameterExpressionEnabled"
    },
    {
        "set_parameter_expression_enabled", (PyCFunction)unigine_Material_set_parameter_expression_enabled, METH_VARARGS,
        "public : setParameterExpressionEnabled"
    },
    {
        "get_parameter_expression", (PyCFunction)unigine_Material_get_parameter_expression, METH_VARARGS,
        "public : getParameterExpression"
    },
    {
        "set_parameter_expression", (PyCFunction)unigine_Material_set_parameter_expression, METH_VARARGS,
        "public : setParameterExpression"
    },
    {
        "set_parameter_float", (PyCFunction)unigine_Material_set_parameter_float, METH_VARARGS,
        "public : setParameterFloat"
    },
    {
        "set_parameter_float", (PyCFunction)unigine_Material_set_parameter_float, METH_VARARGS,
        "public : setParameterFloat"
    },
    {
        "get_parameter_float", (PyCFunction)unigine_Material_get_parameter_float, METH_VARARGS,
        "public : getParameterFloat"
    },
    {
        "get_parameter_float", (PyCFunction)unigine_Material_get_parameter_float, METH_VARARGS,
        "public : getParameterFloat"
    },
    {
        "set_parameter_float2", (PyCFunction)unigine_Material_set_parameter_float2, METH_VARARGS,
        "public : setParameterFloat2"
    },
    {
        "set_parameter_float2", (PyCFunction)unigine_Material_set_parameter_float2, METH_VARARGS,
        "public : setParameterFloat2"
    },
    {
        "get_parameter_float2", (PyCFunction)unigine_Material_get_parameter_float2, METH_VARARGS,
        "public : getParameterFloat2"
    },
    {
        "get_parameter_float2", (PyCFunction)unigine_Material_get_parameter_float2, METH_VARARGS,
        "public : getParameterFloat2"
    },
    {
        "set_parameter_float3", (PyCFunction)unigine_Material_set_parameter_float3, METH_VARARGS,
        "public : setParameterFloat3"
    },
    {
        "set_parameter_float3", (PyCFunction)unigine_Material_set_parameter_float3, METH_VARARGS,
        "public : setParameterFloat3"
    },
    {
        "get_parameter_float3", (PyCFunction)unigine_Material_get_parameter_float3, METH_VARARGS,
        "public : getParameterFloat3"
    },
    {
        "get_parameter_float3", (PyCFunction)unigine_Material_get_parameter_float3, METH_VARARGS,
        "public : getParameterFloat3"
    },
    {
        "set_parameter_float4", (PyCFunction)unigine_Material_set_parameter_float4, METH_VARARGS,
        "public : setParameterFloat4"
    },
    {
        "set_parameter_float4", (PyCFunction)unigine_Material_set_parameter_float4, METH_VARARGS,
        "public : setParameterFloat4"
    },
    {
        "get_parameter_float4", (PyCFunction)unigine_Material_get_parameter_float4, METH_VARARGS,
        "public : getParameterFloat4"
    },
    {
        "get_parameter_float4", (PyCFunction)unigine_Material_get_parameter_float4, METH_VARARGS,
        "public : getParameterFloat4"
    },
    {
        "set_parameter_int", (PyCFunction)unigine_Material_set_parameter_int, METH_VARARGS,
        "public : setParameterInt"
    },
    {
        "set_parameter_int", (PyCFunction)unigine_Material_set_parameter_int, METH_VARARGS,
        "public : setParameterInt"
    },
    {
        "get_parameter_int", (PyCFunction)unigine_Material_get_parameter_int, METH_VARARGS,
        "public : getParameterInt"
    },
    {
        "get_parameter_int", (PyCFunction)unigine_Material_get_parameter_int, METH_VARARGS,
        "public : getParameterInt"
    },
    {
        "set_parameter_int2", (PyCFunction)unigine_Material_set_parameter_int2, METH_VARARGS,
        "public : setParameterInt2"
    },
    {
        "set_parameter_int2", (PyCFunction)unigine_Material_set_parameter_int2, METH_VARARGS,
        "public : setParameterInt2"
    },
    {
        "get_parameter_int2", (PyCFunction)unigine_Material_get_parameter_int2, METH_VARARGS,
        "public : getParameterInt2"
    },
    {
        "get_parameter_int2", (PyCFunction)unigine_Material_get_parameter_int2, METH_VARARGS,
        "public : getParameterInt2"
    },
    {
        "set_parameter_int3", (PyCFunction)unigine_Material_set_parameter_int3, METH_VARARGS,
        "public : setParameterInt3"
    },
    {
        "set_parameter_int3", (PyCFunction)unigine_Material_set_parameter_int3, METH_VARARGS,
        "public : setParameterInt3"
    },
    {
        "get_parameter_int3", (PyCFunction)unigine_Material_get_parameter_int3, METH_VARARGS,
        "public : getParameterInt3"
    },
    {
        "get_parameter_int3", (PyCFunction)unigine_Material_get_parameter_int3, METH_VARARGS,
        "public : getParameterInt3"
    },
    {
        "set_parameter_int4", (PyCFunction)unigine_Material_set_parameter_int4, METH_VARARGS,
        "public : setParameterInt4"
    },
    {
        "set_parameter_int4", (PyCFunction)unigine_Material_set_parameter_int4, METH_VARARGS,
        "public : setParameterInt4"
    },
    {
        "get_parameter_int4", (PyCFunction)unigine_Material_get_parameter_int4, METH_VARARGS,
        "public : getParameterInt4"
    },
    {
        "get_parameter_int4", (PyCFunction)unigine_Material_get_parameter_int4, METH_VARARGS,
        "public : getParameterInt4"
    },
    {
        "get_parameter_array_size", (PyCFunction)unigine_Material_get_parameter_array_size, METH_VARARGS,
        "public : getParameterArraySize"
    },
    {
        "is_parameter_array", (PyCFunction)unigine_Material_is_parameter_array, METH_VARARGS,
        "public : isParameterArray"
    },
    {
        "get_parameter_array", (PyCFunction)unigine_Material_get_parameter_array, METH_VARARGS,
        "public : getParameterArray"
    },
    {
        "set_parameter_array", (PyCFunction)unigine_Material_set_parameter_array, METH_VARARGS,
        "public : setParameterArray"
    },
    {
        "get_parameter_array", (PyCFunction)unigine_Material_get_parameter_array, METH_VARARGS,
        "public : getParameterArray"
    },
    {
        "set_parameter_array", (PyCFunction)unigine_Material_set_parameter_array, METH_VARARGS,
        "public : setParameterArray"
    },
    {
        "get_parameter_array", (PyCFunction)unigine_Material_get_parameter_array, METH_VARARGS,
        "public : getParameterArray"
    },
    {
        "set_parameter_array", (PyCFunction)unigine_Material_set_parameter_array, METH_VARARGS,
        "public : setParameterArray"
    },
    {
        "get_parameter_array", (PyCFunction)unigine_Material_get_parameter_array, METH_VARARGS,
        "public : getParameterArray"
    },
    {
        "set_parameter_array", (PyCFunction)unigine_Material_set_parameter_array, METH_VARARGS,
        "public : setParameterArray"
    },
    {
        "get_parameter_array", (PyCFunction)unigine_Material_get_parameter_array, METH_VARARGS,
        "public : getParameterArray"
    },
    {
        "set_parameter_array", (PyCFunction)unigine_Material_set_parameter_array, METH_VARARGS,
        "public : setParameterArray"
    },
    {
        "get_parameter_array", (PyCFunction)unigine_Material_get_parameter_array, METH_VARARGS,
        "public : getParameterArray"
    },
    {
        "set_parameter_array", (PyCFunction)unigine_Material_set_parameter_array, METH_VARARGS,
        "public : setParameterArray"
    },
    {
        "get_num_states", (PyCFunction)unigine_Material_get_num_states, METH_NOARGS,
        "public : getNumStates"
    },
    {
        "find_state", (PyCFunction)unigine_Material_find_state, METH_VARARGS,
        "public : findState"
    },
    {
        "is_state_overridden", (PyCFunction)unigine_Material_is_state_overridden, METH_VARARGS,
        "public : isStateOverridden"
    },
    {
        "is_state_internal", (PyCFunction)unigine_Material_is_state_internal, METH_VARARGS,
        "public : isStateInternal"
    },
    {
        "reset_state", (PyCFunction)unigine_Material_reset_state, METH_VARARGS,
        "public : resetState"
    },
    {
        "check_state_conditions", (PyCFunction)unigine_Material_check_state_conditions, METH_VARARGS,
        "public : checkStateConditions"
    },
    {
        "get_state_name", (PyCFunction)unigine_Material_get_state_name, METH_VARARGS,
        "public : getStateName"
    },
    {
        "get_state_switch_item", (PyCFunction)unigine_Material_get_state_switch_item, METH_VARARGS,
        "public : getStateSwitchItem"
    },
    {
        "get_state_switch_num_items", (PyCFunction)unigine_Material_get_state_switch_num_items, METH_VARARGS,
        "public : getStateSwitchNumItems"
    },
    {
        "get_state_type", (PyCFunction)unigine_Material_get_state_type, METH_VARARGS,
        "public : getStateType"
    },
    {
        "get_state", (PyCFunction)unigine_Material_get_state, METH_VARARGS,
        "public : getState"
    },
    {
        "set_state", (PyCFunction)unigine_Material_set_state, METH_VARARGS,
        "public : setState"
    },
    {
        "get_state", (PyCFunction)unigine_Material_get_state, METH_VARARGS,
        "public : getState"
    },
    {
        "set_state", (PyCFunction)unigine_Material_set_state, METH_VARARGS,
        "public : setState"
    },
    {
        "get_num_textures", (PyCFunction)unigine_Material_get_num_textures, METH_NOARGS,
        "public : getNumTextures"
    },
    {
        "find_texture", (PyCFunction)unigine_Material_find_texture, METH_VARARGS,
        "public : findTexture"
    },
    {
        "is_texture_overridden", (PyCFunction)unigine_Material_is_texture_overridden, METH_VARARGS,
        "public : isTextureOverridden"
    },
    {
        "is_texture_loaded", (PyCFunction)unigine_Material_is_texture_loaded, METH_VARARGS,
        "public : isTextureLoaded"
    },
    {
        "is_texture_internal", (PyCFunction)unigine_Material_is_texture_internal, METH_VARARGS,
        "public : isTextureInternal"
    },
    {
        "reset_texture", (PyCFunction)unigine_Material_reset_texture, METH_VARARGS,
        "public : resetTexture"
    },
    {
        "check_texture_conditions", (PyCFunction)unigine_Material_check_texture_conditions, METH_VARARGS,
        "public : checkTextureConditions"
    },
    {
        "get_texture_name", (PyCFunction)unigine_Material_get_texture_name, METH_VARARGS,
        "public : getTextureName"
    },
    {
        "get_texture_unit", (PyCFunction)unigine_Material_get_texture_unit, METH_VARARGS,
        "public : getTextureUnit"
    },
    {
        "is_texture_editable", (PyCFunction)unigine_Material_is_texture_editable, METH_VARARGS,
        "public : isTextureEditable"
    },
    {
        "get_texture_source", (PyCFunction)unigine_Material_get_texture_source, METH_VARARGS,
        "public : getTextureSource"
    },
    {
        "get_texture_sampler_flags", (PyCFunction)unigine_Material_get_texture_sampler_flags, METH_VARARGS,
        "public : getTextureSamplerFlags"
    },
    {
        "set_texture_sampler_flags", (PyCFunction)unigine_Material_set_texture_sampler_flags, METH_VARARGS,
        "public : setTextureSamplerFlags"
    },
    {
        "get_texture_format_flags", (PyCFunction)unigine_Material_get_texture_format_flags, METH_VARARGS,
        "public : getTextureFormatFlags"
    },
    {
        "get_texture_image", (PyCFunction)unigine_Material_get_texture_image, METH_VARARGS,
        "public : getTextureImage"
    },
    {
        "set_texture_image", (PyCFunction)unigine_Material_set_texture_image, METH_VARARGS,
        "public : setTextureImage"
    },
    {
        "get_texture", (PyCFunction)unigine_Material_get_texture, METH_VARARGS,
        "public : getTexture"
    },
    {
        "get_texture", (PyCFunction)unigine_Material_get_texture, METH_VARARGS,
        "public : getTexture"
    },
    {
        "set_texture", (PyCFunction)unigine_Material_set_texture, METH_VARARGS,
        "public : setTexture"
    },
    {
        "set_texture", (PyCFunction)unigine_Material_set_texture, METH_VARARGS,
        "public : setTexture"
    },
    {
        "set_texture_path", (PyCFunction)unigine_Material_set_texture_path, METH_VARARGS,
        "public : setTexturePath"
    },
    {
        "get_texture_path", (PyCFunction)unigine_Material_get_texture_path, METH_VARARGS,
        "public : getTexturePath"
    },
    {
        "set_texture_path", (PyCFunction)unigine_Material_set_texture_path, METH_VARARGS,
        "public : setTexturePath"
    },
    {
        "get_texture_path", (PyCFunction)unigine_Material_get_texture_path, METH_VARARGS,
        "public : getTexturePath"
    },
    {
        "get_texture_ramp", (PyCFunction)unigine_Material_get_texture_ramp, METH_VARARGS,
        "public : getTextureRamp"
    },
    {
        "get_texture_ramp_override", (PyCFunction)unigine_Material_get_texture_ramp_override, METH_VARARGS,
        "public : getTextureRampOverride"
    },
    {
        "is_editable", (PyCFunction)unigine_Material_is_editable, METH_NOARGS,
        "public : isEditable"
    },
    {
        "is_hidden", (PyCFunction)unigine_Material_is_hidden, METH_NOARGS,
        "public : isHidden"
    },
    {
        "is_base", (PyCFunction)unigine_Material_is_base, METH_NOARGS,
        "public : isBase"
    },
    {
        "is_brush", (PyCFunction)unigine_Material_is_brush, METH_NOARGS,
        "public : isBrush"
    },
    {
        "is_legacy", (PyCFunction)unigine_Material_is_legacy, METH_NOARGS,
        "public : isLegacy"
    },
    {
        "is_preview_hidden", (PyCFunction)unigine_Material_is_preview_hidden, METH_NOARGS,
        "public : isPreviewHidden"
    },
    {
        "is_reflection2_d", (PyCFunction)unigine_Material_is_reflection2_d, METH_NOARGS,
        "public : isReflection2D"
    },
    {
        "is_internal", (PyCFunction)unigine_Material_is_internal, METH_NOARGS,
        "public : isInternal"
    },
    {
        "is_manual", (PyCFunction)unigine_Material_is_manual, METH_NOARGS,
        "public : isManual"
    },
    {
        "can_save", (PyCFunction)unigine_Material_can_save, METH_NOARGS,
        "public : canSave"
    },
    {
        "is_auto_save", (PyCFunction)unigine_Material_is_auto_save, METH_NOARGS,
        "public : isAutoSave"
    },
    {
        "is_file_engine", (PyCFunction)unigine_Material_is_file_engine, METH_NOARGS,
        "public : isFileEngine"
    },
    {
        "is_empty", (PyCFunction)unigine_Material_is_empty, METH_NOARGS,
        "public : isEmpty"
    },
    {
        "has_overrides", (PyCFunction)unigine_Material_has_overrides, METH_NOARGS,
        "public : hasOverrides"
    },
    {
        "save_state", (PyCFunction)unigine_Material_save_state, METH_VARARGS,
        "public : saveState"
    },
    {
        "restore_state", (PyCFunction)unigine_Material_restore_state, METH_VARARGS,
        "public : restoreState"
    },
    {
        "load_xml", (PyCFunction)unigine_Material_load_xml, METH_VARARGS,
        "public : loadXml"
    },
    {
        "save_xml", (PyCFunction)unigine_Material_save_xml, METH_VARARGS,
        "public : saveXml"
    },
    {
        "load_ulon", (PyCFunction)unigine_Material_load_ulon, METH_VARARGS,
        "public : loadUlon"
    },
    {
        "load", (PyCFunction)unigine_Material_load, METH_VARARGS,
        "public : load"
    },
    {
        "save", (PyCFunction)unigine_Material_save, METH_NOARGS,
        "public : save"
    },
    {
        "reload", (PyCFunction)unigine_Material_reload, METH_NOARGS,
        "public : reload"
    },
    {
        "create_material_file", (PyCFunction)unigine_Material_create_material_file, METH_VARARGS,
        "public : createMaterialFile"
    },
    {
        "get_render_pass", (PyCFunction)unigine_Material_get_render_pass, METH_VARARGS,
        "public : getRenderPass"
    },
    {
        "get_render_pass_name", (PyCFunction)unigine_Material_get_render_pass_name, METH_VARARGS,
        "public : getRenderPassName"
    },
    {
        "run_expression", (PyCFunction)unigine_Material_run_expression, METH_VARARGS,
        "public : runExpression"
    },
    {
        "render_screen", (PyCFunction)unigine_Material_render_screen, METH_VARARGS,
        "public : renderScreen"
    },
    {
        "render_screen", (PyCFunction)unigine_Material_render_screen, METH_VARARGS,
        "public : renderScreen"
    },
    {
        "render_compute", (PyCFunction)unigine_Material_render_compute, METH_VARARGS,
        "public : renderCompute"
    },
    {
        "render_compute", (PyCFunction)unigine_Material_render_compute, METH_VARARGS,
        "public : renderCompute"
    },
    {NULL}  /* Sentinel */
};

static PyTypeObject unigine_MaterialType = {
    PyVarObject_HEAD_INIT(NULL, 0)
    "unigine.Material",             // tp_name
    sizeof(unigine_Material) + 256, // tp_basicsize  (TODO magic 256 bytes!!!)
    0,                         // tp_itemsize
    (destructor)unigine_Material_dealloc,   // tp_dealloc
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
    "Material Object",         // tp_doc
    0,                         // traverseproc tp_traverse
    0,                         // inquiry tp_clear
    0,                         // richcmpfunc tp_richcompare
    0,                         // Py_ssize_t tp_weaklistoffset
    0,                         // getiterfunc tp_iter
    0,                         // iternextfunc tp_iternext
    unigine_Material_methods, // tp_methods
    0, // tp_members
    0, // tp_getset
    0, // tp_base
    0, // tp_dict
    0, // tp_descr_get
    0, // tp_descr_set
    0, // tp_dictoffset
    (initproc)unigine_Material_init, // tp_init
    0, // tp_alloc
    unigine_Material_new, // tp_new
};


// UniginePyTypeObjectMaterial

bool Python3UnigineMaterial::isReady() {
    // Initialize tp_dict with empty dictionary
    if (!unigine_MaterialType.tp_dict) {
        unigine_MaterialType.tp_dict = PyDict_New();

        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "OPTION_TRANSPARENT",
            Py_BuildValue("i", Unigine::Material::OPTION_TRANSPARENT)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "OPTION_ORDER",
            Py_BuildValue("i", Unigine::Material::OPTION_ORDER)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "OPTION_SHADOW_MASK",
            Py_BuildValue("i", Unigine::Material::OPTION_SHADOW_MASK)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "OPTION_VIEWPORT_MASK",
            Py_BuildValue("i", Unigine::Material::OPTION_VIEWPORT_MASK)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "OPTION_BLEND_SRC",
            Py_BuildValue("i", Unigine::Material::OPTION_BLEND_SRC)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "OPTION_BLEND_DEST",
            Py_BuildValue("i", Unigine::Material::OPTION_BLEND_DEST)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "OPTION_DEPTH_MASK",
            Py_BuildValue("i", Unigine::Material::OPTION_DEPTH_MASK)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "OPTION_DEPTH_TEST",
            Py_BuildValue("i", Unigine::Material::OPTION_DEPTH_TEST)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "OPTION_TWO_SIDED",
            Py_BuildValue("i", Unigine::Material::OPTION_TWO_SIDED)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "OPTION_CAST_PROJ_OMNI_SHADOW",
            Py_BuildValue("i", Unigine::Material::OPTION_CAST_PROJ_OMNI_SHADOW)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "OPTION_CAST_WORLD_SHADOW",
            Py_BuildValue("i", Unigine::Material::OPTION_CAST_WORLD_SHADOW)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "OPTION_OVERLAP",
            Py_BuildValue("i", Unigine::Material::OPTION_OVERLAP)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TRANSPARENT_NONE",
            Py_BuildValue("i", Unigine::Material::TRANSPARENT_NONE)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TRANSPARENT_ALPHA_TEST",
            Py_BuildValue("i", Unigine::Material::TRANSPARENT_ALPHA_TEST)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TRANSPARENT_BLEND",
            Py_BuildValue("i", Unigine::Material::TRANSPARENT_BLEND)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TRANSPARENT_WATER",
            Py_BuildValue("i", Unigine::Material::TRANSPARENT_WATER)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "STATE_TOGGLE",
            Py_BuildValue("i", Unigine::Material::STATE_TOGGLE)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "STATE_SWITCH",
            Py_BuildValue("i", Unigine::Material::STATE_SWITCH)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "STATE_INT",
            Py_BuildValue("i", Unigine::Material::STATE_INT)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_ASSET",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_ASSET)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_RAMP",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_RAMP)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_PROCEDURAL",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_PROCEDURAL)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_SURFACE_CUSTOM_TEXTURE",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_SURFACE_CUSTOM_TEXTURE)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_GBUFFER_ALBEDO",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_GBUFFER_ALBEDO)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_GBUFFER_SHADING",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_GBUFFER_SHADING)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_GBUFFER_NORMAL",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_GBUFFER_NORMAL)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_GBUFFER_VELOCITY",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_GBUFFER_VELOCITY)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_GBUFFER_MATERIAL_MASK",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_GBUFFER_MATERIAL_MASK)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_GBUFFER_FEATURES",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_GBUFFER_FEATURES)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_AUXILIARY",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_AUXILIARY)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_REFRACTION",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_REFRACTION)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_REFRACTION_MASK",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_REFRACTION_MASK)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_TRANSPARENT_BLUR",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_TRANSPARENT_BLUR)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_LIGHTS",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_LIGHTS)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_BENT_NORMAL",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_BENT_NORMAL)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_SSAO",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_SSAO)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_SSGI",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_SSGI)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_SSR",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_SSR)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_CURVATURE",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_CURVATURE)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_SHADOW_SHAFTS",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_SHADOW_SHAFTS)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_DOF_MASK",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_DOF_MASK)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_AUTO_EXPOSURE",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_AUTO_EXPOSURE)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_AUTO_WHITE_BALANCE",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_AUTO_WHITE_BALANCE)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_SCREEN_COLOR",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_SCREEN_COLOR)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_SCREEN_COLOR_OPACITY",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_SCREEN_COLOR_OPACITY)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_SCREEN_COLOR_OLD",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_SCREEN_COLOR_OLD)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_SCREEN_COLOR_OLD_REPROJECTION",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_SCREEN_COLOR_OLD_REPROJECTION)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_NORMAL_UNPACK",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_NORMAL_UNPACK)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_CURRENT_DEPTH",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_CURRENT_DEPTH)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_OPACITY_DEPTH",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_OPACITY_DEPTH)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_LINEAR_DEPTH",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_LINEAR_DEPTH)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_LIGHT_IMAGE",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_LIGHT_IMAGE)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_LIGHT_SHADOW_DEPTH",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_LIGHT_SHADOW_DEPTH)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_LIGHT_SHADOW_COLOR",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_LIGHT_SHADOW_COLOR)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_HAZE_AMBIENT",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_HAZE_AMBIENT)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_TRANSPARENT_ENVIRONMENT",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_TRANSPARENT_ENVIRONMENT)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_REFLECTION_2D",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_REFLECTION_2D)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_REFLECTION_CUBE",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_REFLECTION_CUBE)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_SCATTERING_SKY_LUT",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_SCATTERING_SKY_LUT)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_WBUFFER_CONSTANT_ID",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_WBUFFER_CONSTANT_ID)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_WBUFFER_DIFFUSE",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_WBUFFER_DIFFUSE)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_WBUFFER_NORMAL",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_WBUFFER_NORMAL)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_WBUFFER_WATER",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_WBUFFER_WATER)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_WBUFFER_SS_ENVIRONMENT",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_WBUFFER_SS_ENVIRONMENT)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_WBUFFER_WU_MASK",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_WBUFFER_WU_MASK)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_WBUFFER_PLANAR_REFLECTION",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_WBUFFER_PLANAR_REFLECTION)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_WBUFFER_OPACITY_SCREEN",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_WBUFFER_OPACITY_SCREEN)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_CLOUDS_SCREEN",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_CLOUDS_SCREEN)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_CLOUDS_STATIC_COVERAGE",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_CLOUDS_STATIC_COVERAGE)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_CLOUDS_REGION_MASK",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_CLOUDS_REGION_MASK)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_CLOUDS_DYNAMIC_COVERAGE",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_CLOUDS_DYNAMIC_COVERAGE)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_TERRAIN_GLOBAL_DEPTH",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_TERRAIN_GLOBAL_DEPTH)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_TERRAIN_GLOBAL_FLAT_POSITION",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_TERRAIN_GLOBAL_FLAT_POSITION)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_FIELD_HEIGHT_ARRAY",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_FIELD_HEIGHT_ARRAY)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_FIELD_SHORELINE_ARRAY",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_FIELD_SHORELINE_ARRAY)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_DECAL_DEPTH",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_DECAL_DEPTH)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_DECAL_ALBEDO",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_DECAL_ALBEDO)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_DECAL_NORMAL",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_DECAL_NORMAL)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_DECAL_SHADING",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_DECAL_SHADING)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "TEXTURE_SOURCE_CUSTOM",
            Py_BuildValue("i", Unigine::Material::TEXTURE_SOURCE_CUSTOM)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "PARAMETER_FLOAT",
            Py_BuildValue("i", Unigine::Material::PARAMETER_FLOAT)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "PARAMETER_FLOAT2",
            Py_BuildValue("i", Unigine::Material::PARAMETER_FLOAT2)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "PARAMETER_FLOAT3",
            Py_BuildValue("i", Unigine::Material::PARAMETER_FLOAT3)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "PARAMETER_FLOAT4",
            Py_BuildValue("i", Unigine::Material::PARAMETER_FLOAT4)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "PARAMETER_INT",
            Py_BuildValue("i", Unigine::Material::PARAMETER_INT)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "PARAMETER_INT2",
            Py_BuildValue("i", Unigine::Material::PARAMETER_INT2)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "PARAMETER_INT3",
            Py_BuildValue("i", Unigine::Material::PARAMETER_INT3)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "PARAMETER_INT4",
            Py_BuildValue("i", Unigine::Material::PARAMETER_INT4)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "PARAMETER_ARRAY_FLOAT",
            Py_BuildValue("i", Unigine::Material::PARAMETER_ARRAY_FLOAT)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "PARAMETER_ARRAY_FLOAT2",
            Py_BuildValue("i", Unigine::Material::PARAMETER_ARRAY_FLOAT2)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "PARAMETER_ARRAY_FLOAT4",
            Py_BuildValue("i", Unigine::Material::PARAMETER_ARRAY_FLOAT4)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "PARAMETER_ARRAY_INT",
            Py_BuildValue("i", Unigine::Material::PARAMETER_ARRAY_INT)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "PARAMETER_ARRAY_INT2",
            Py_BuildValue("i", Unigine::Material::PARAMETER_ARRAY_INT2)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "PARAMETER_ARRAY_INT4",
            Py_BuildValue("i", Unigine::Material::PARAMETER_ARRAY_INT4)
        );
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "PARAMETER_COMBINER",
            Py_BuildValue("i", Unigine::Material::PARAMETER_COMBINER)
        );
        // enum_typename: DATA_TYPE
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "DATA_TYPE_OPTION",
            Py_BuildValue("i", Unigine::Material::DATA_TYPE_OPTION)
        );
        // enum_typename: DATA_TYPE
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "DATA_TYPE_STATE",
            Py_BuildValue("i", Unigine::Material::DATA_TYPE_STATE)
        );
        // enum_typename: DATA_TYPE
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "DATA_TYPE_PARAMETER",
            Py_BuildValue("i", Unigine::Material::DATA_TYPE_PARAMETER)
        );
        // enum_typename: DATA_TYPE
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "DATA_TYPE_TEXTURE",
            Py_BuildValue("i", Unigine::Material::DATA_TYPE_TEXTURE)
        );
        // enum_typename: DATA_TYPE
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "DATA_TYPE_GROUP",
            Py_BuildValue("i", Unigine::Material::DATA_TYPE_GROUP)
        );
        // enum_typename: WIDGET
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "WIDGET_EDIT_INT",
            Py_BuildValue("i", Unigine::Material::WIDGET_EDIT_INT)
        );
        // enum_typename: WIDGET
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "WIDGET_EDIT_INT2",
            Py_BuildValue("i", Unigine::Material::WIDGET_EDIT_INT2)
        );
        // enum_typename: WIDGET
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "WIDGET_EDIT_INT3",
            Py_BuildValue("i", Unigine::Material::WIDGET_EDIT_INT3)
        );
        // enum_typename: WIDGET
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "WIDGET_EDIT_INT4",
            Py_BuildValue("i", Unigine::Material::WIDGET_EDIT_INT4)
        );
        // enum_typename: WIDGET
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "WIDGET_EDIT_FLOAT",
            Py_BuildValue("i", Unigine::Material::WIDGET_EDIT_FLOAT)
        );
        // enum_typename: WIDGET
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "WIDGET_EDIT_FLOAT2",
            Py_BuildValue("i", Unigine::Material::WIDGET_EDIT_FLOAT2)
        );
        // enum_typename: WIDGET
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "WIDGET_EDIT_FLOAT3",
            Py_BuildValue("i", Unigine::Material::WIDGET_EDIT_FLOAT3)
        );
        // enum_typename: WIDGET
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "WIDGET_EDIT_FLOAT4",
            Py_BuildValue("i", Unigine::Material::WIDGET_EDIT_FLOAT4)
        );
        // enum_typename: WIDGET
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "WIDGET_TOGGLE",
            Py_BuildValue("i", Unigine::Material::WIDGET_TOGGLE)
        );
        // enum_typename: WIDGET
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "WIDGET_COMBOBOX",
            Py_BuildValue("i", Unigine::Material::WIDGET_COMBOBOX)
        );
        // enum_typename: WIDGET
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "WIDGET_TEXTURE_ASSET",
            Py_BuildValue("i", Unigine::Material::WIDGET_TEXTURE_ASSET)
        );
        // enum_typename: WIDGET
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "WIDGET_TEXTURE_RAMP",
            Py_BuildValue("i", Unigine::Material::WIDGET_TEXTURE_RAMP)
        );
        // enum_typename: WIDGET
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "WIDGET_ACCORDION",
            Py_BuildValue("i", Unigine::Material::WIDGET_ACCORDION)
        );
        // enum_typename: WIDGET
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "WIDGET_SLIDER",
            Py_BuildValue("i", Unigine::Material::WIDGET_SLIDER)
        );
        // enum_typename: WIDGET
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "WIDGET_COLOR",
            Py_BuildValue("i", Unigine::Material::WIDGET_COLOR)
        );
        // enum_typename: WIDGET
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "WIDGET_UV",
            Py_BuildValue("i", Unigine::Material::WIDGET_UV)
        );
        // enum_typename: WIDGET
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "WIDGET_MASK24",
            Py_BuildValue("i", Unigine::Material::WIDGET_MASK24)
        );
        // enum_typename: WIDGET
        PyDict_SetItemString(
            unigine_MaterialType.tp_dict, "WIDGET_MASK32",
            Py_BuildValue("i", Unigine::Material::WIDGET_MASK32)
        );
    }
    if (PyType_Ready(&unigine_MaterialType) < 0) {
        return false;
    }
    return true;
}

bool Python3UnigineMaterial::addClassDefinitionToModule(PyObject* pModule) {
    Py_INCREF(&unigine_MaterialType);
    if (PyModule_AddObject(pModule, "Material", (PyObject *)&unigine_MaterialType) < 0) {
        Py_DECREF(&unigine_MaterialType);
        return false;
    }
    return true;
}

PyObject * Material::NewObject(Unigine::Ptr<Unigine::Material> unigine_object_ptr) {
    // std::cout << "sizeof(unigine_Material) = " << sizeof(unigine_Material) << std::endl;
    unigine_Material *pInst = PyObject_New(unigine_Material, &unigine_MaterialType);
    pInst->unigine_object_ptr = unigine_object_ptr;
    // Py_INCREF(pInst);
    return (PyObject *)pInst;
}

Unigine::Ptr<Unigine::Material> Material::Convert(PyObject *pObject) {
    if (Py_IS_TYPE(pObject, &unigine_MaterialType) == 0) {
        Unigine::Log::error("Invalid type, expected 'Unigine::Ptr<Unigine::Material>', but got some another");
    }
    unigine_Material *pInst = (unigine_Material *)pObject;
    return pInst->unigine_object_ptr;
}

}; // namespace PyUnigine

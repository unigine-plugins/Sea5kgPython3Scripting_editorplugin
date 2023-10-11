// this file automaticly generated from UnigineSelectorNodes.h
#include "python3_unigine_selectornodes.h"

#include <string>
#include <editor/UnigineSelector.h>
#include <UnigineLog.h>
#include <Python.h>
#include <structmember.h>

#include <iostream>

namespace PyUnigine {

// ------------------------------------------------------------------------------------------
// unigine_SelectorNodes

typedef struct {
    PyObject_HEAD
    // Type-specific fields go here.
    UnigineEditor::SelectorNodes * unigine_object_ptr;
} unigine_SelectorNodes;

static void unigine_SelectorNodes_dealloc(unigine_SelectorNodes* self) {
    // Unigine::Log::message("unigine_SelectorNodes_dealloc\n");
    Py_TYPE(self)->tp_free((PyObject*)self);
}

static PyObject *unigine_SelectorNodes_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    // Unigine::Log::message("unigine_SelectorNodes_new\n");
    unigine_SelectorNodes *self;
    self = (unigine_SelectorNodes *)type->tp_alloc(type, 0);
    self->unigine_object_ptr = nullptr;
    return (PyObject *)self;
}

static int unigine_SelectorNodes_init(unigine_SelectorNodes *self, PyObject *args, PyObject *kwds) {
    self->unigine_object_ptr = new Unigine::SelectorNodes();
    return 0;
}


// public (static): createObjectsSelector
static PyObject * unigine_SelectorNodes_create_objects_selector(unigine_SelectorNodes* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const Unigine::Vector<Unigine::Ptr<Unigine::Node>> & nodes;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for const Unigine::Vector<Unigine::Ptr<Unigine::Node>> &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = UnigineEditor::SelectorNodes::createObjectsSelector(nodes);
            };
            // args
            const Unigine::Vector<Unigine::Ptr<Unigine::Node>> & nodes;
            // return
            UnigineEditor::SelectorNodes * retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->nodes = nodes;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    UnigineEditor::SelectorNodes * retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = TODO: unknown type 'UnigineEditor::SelectorNodes *'

    // end
    // return: UnigineEditor::SelectorNodes *
    return ret;
};

// public : type
static PyObject * unigine_SelectorNodes_type(unigine_SelectorNodes* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->type();
            };
            UnigineEditor::SelectorNodes * unigine_object_ptr;
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

// public : equal
static PyObject * unigine_SelectorNodes_equal(unigine_SelectorNodes* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const UnigineEditor::Selector * selector;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for const UnigineEditor::Selector *


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->equal(selector);
            };
            UnigineEditor::SelectorNodes * unigine_object_ptr;
            // args
            const UnigineEditor::Selector * selector;
            // return
            bool retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->selector = selector;
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

// public : clone
static PyObject * unigine_SelectorNodes_clone(unigine_SelectorNodes* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->clone();
            };
            UnigineEditor::SelectorNodes * unigine_object_ptr;
            // return
            UnigineEditor::SelectorNodes * retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    UnigineEditor::SelectorNodes * retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = TODO: unknown type 'UnigineEditor::SelectorNodes *'

    // end
    // return: UnigineEditor::SelectorNodes *
    return ret;
};

// public : getNodes
static PyObject * unigine_SelectorNodes_get_nodes(unigine_SelectorNodes* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getNodes();
            };
            UnigineEditor::SelectorNodes * unigine_object_ptr;
            // return
            Unigine::Vector<Unigine::Ptr<Unigine::Node>> retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    Unigine::Vector<Unigine::Ptr<Unigine::Node>> retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: Unigine::Vector<Unigine::Ptr<Unigine::Node>>
    return ret;
};

// public : size
static PyObject * unigine_SelectorNodes_size(unigine_SelectorNodes* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->size();
            };
            UnigineEditor::SelectorNodes * unigine_object_ptr;
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

// public : empty
static PyObject * unigine_SelectorNodes_empty(unigine_SelectorNodes* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->empty();
            };
            UnigineEditor::SelectorNodes * unigine_object_ptr;
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

// public : extend
static PyObject * unigine_SelectorNodes_extend(unigine_SelectorNodes* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const & node;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for const &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->extend(node);
            };
            UnigineEditor::SelectorNodes * unigine_object_ptr;
            // args
            const & node;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->node = node;
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

// public : extend
static PyObject * unigine_SelectorNodes_extend(unigine_SelectorNodes* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const Unigine::Vector<Unigine::Ptr<Unigine::Node>> & nodes;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for const Unigine::Vector<Unigine::Ptr<Unigine::Node>> &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->extend(nodes);
            };
            UnigineEditor::SelectorNodes * unigine_object_ptr;
            // args
            const Unigine::Vector<Unigine::Ptr<Unigine::Node>> & nodes;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->nodes = nodes;
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

// public : extend
static PyObject * unigine_SelectorNodes_extend(unigine_SelectorNodes* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const & node;
    PyObject *pArg2 = NULL; // * subs;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
TODO for const &


    // pArg2
TODO for *


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->extend(node, subs);
            };
            UnigineEditor::SelectorNodes * unigine_object_ptr;
            // args
            const & node;
            * subs;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->node = node;
    pRunner->subs = subs;
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

// public : exclude
static PyObject * unigine_SelectorNodes_exclude(unigine_SelectorNodes* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const & node;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for const &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->exclude(node);
            };
            UnigineEditor::SelectorNodes * unigine_object_ptr;
            // args
            const & node;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->node = node;
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

// public : exclude
static PyObject * unigine_SelectorNodes_exclude(unigine_SelectorNodes* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const Unigine::Vector<Unigine::Ptr<Unigine::Node>> & nodes;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for const Unigine::Vector<Unigine::Ptr<Unigine::Node>> &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->exclude(nodes);
            };
            UnigineEditor::SelectorNodes * unigine_object_ptr;
            // args
            const Unigine::Vector<Unigine::Ptr<Unigine::Node>> & nodes;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->nodes = nodes;
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

// public : exclude
static PyObject * unigine_SelectorNodes_exclude(unigine_SelectorNodes* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // SubObjectType stype;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for SubObjectType


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->exclude(stype);
            };
            UnigineEditor::SelectorNodes * unigine_object_ptr;
            // args
            SubObjectType stype;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->stype = stype;
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

// public : contains
static PyObject * unigine_SelectorNodes_contains(unigine_SelectorNodes* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const & node;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for const &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->contains(node);
            };
            UnigineEditor::SelectorNodes * unigine_object_ptr;
            // args
            const & node;
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

// public : getSubItemList
static PyObject * unigine_SelectorNodes_get_sub_item_list(unigine_SelectorNodes* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int node_id;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"node_id\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int node_id = PyLong_AsLong(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getSubItemList(node_id);
            };
            UnigineEditor::SelectorNodes * unigine_object_ptr;
            // args
            int node_id;
            // return
            * retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->node_id = node_id;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    * retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = TODO: unknown type '*'

    // end
    // return: *
    return ret;
};

// public : getSubItemList
static PyObject * unigine_SelectorNodes_get_sub_item_list(unigine_SelectorNodes* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const & node;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for const &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getSubItemList(node);
            };
            UnigineEditor::SelectorNodes * unigine_object_ptr;
            // args
            const & node;
            // return
            * retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->node = node;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    * retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = TODO: unknown type '*'

    // end
    // return: *
    return ret;
};

// public : getIndexList
static PyObject * unigine_SelectorNodes_get_index_list(unigine_SelectorNodes* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int node_id;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"node_id\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int node_id = PyLong_AsLong(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getIndexList(node_id);
            };
            UnigineEditor::SelectorNodes * unigine_object_ptr;
            // args
            int node_id;
            // return
            UnigineEditor::IndexList * retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->node_id = node_id;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    UnigineEditor::IndexList * retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = TODO: unknown type 'UnigineEditor::IndexList *'

    // end
    // return: UnigineEditor::IndexList *
    return ret;
};

// public : getIndexList
static PyObject * unigine_SelectorNodes_get_index_list(unigine_SelectorNodes* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const & node;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for const &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getIndexList(node);
            };
            UnigineEditor::SelectorNodes * unigine_object_ptr;
            // args
            const & node;
            // return
            UnigineEditor::IndexList * retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->node = node;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    UnigineEditor::IndexList * retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = TODO: unknown type 'UnigineEditor::IndexList *'

    // end
    // return: UnigineEditor::IndexList *
    return ret;
};

// public : getIntersectedIndexes
static PyObject * unigine_SelectorNodes_get_intersected_indexes(unigine_SelectorNodes* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // SubObjectType stype;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for SubObjectType


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getIntersectedIndexes(stype);
            };
            UnigineEditor::SelectorNodes * unigine_object_ptr;
            // args
            SubObjectType stype;
            // return
            Unigine::HashSet<int> retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->stype = stype;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    Unigine::HashSet<int> retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: Unigine::HashSet<int>
    return ret;
};

// public : resetCache
static PyObject * unigine_SelectorNodes_reset_cache(unigine_SelectorNodes* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->resetCache();
            };
            UnigineEditor::SelectorNodes * unigine_object_ptr;
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

// public : setUserData
static PyObject * unigine_SelectorNodes_set_user_data(unigine_SelectorNodes* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const char * name;
    PyObject *pArg2 = NULL; //  value;
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
TODO for 


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->setUserData(name, value);
            };
            UnigineEditor::SelectorNodes * unigine_object_ptr;
            // args
            const char * name;
             value;
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

// public : getUserData
static PyObject * unigine_SelectorNodes_get_user_data(unigine_SelectorNodes* self, PyObject *args) {
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
                retOriginal = unigine_object_ptr->getUserData(name);
            };
            UnigineEditor::SelectorNodes * unigine_object_ptr;
            // args
            const char * name;
            // return
             retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->name = name;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
     retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = TODO: unknown type ''

    // end
    // return: 
    return ret;
};


static PyMethodDef unigine_SelectorNodes_methods[] = {
    {
        "create_objects_selector", (PyCFunction)unigine_SelectorNodes_create_objects_selector, METH_STATIC|METH_VARARGS,
        "public (static): createObjectsSelector"
    },
    {
        "type", (PyCFunction)unigine_SelectorNodes_type, METH_NOARGS,
        "public : type"
    },
    {
        "equal", (PyCFunction)unigine_SelectorNodes_equal, METH_VARARGS,
        "public : equal"
    },
    {
        "clone", (PyCFunction)unigine_SelectorNodes_clone, METH_NOARGS,
        "public : clone"
    },
    {
        "get_nodes", (PyCFunction)unigine_SelectorNodes_get_nodes, METH_NOARGS,
        "public : getNodes"
    },
    {
        "size", (PyCFunction)unigine_SelectorNodes_size, METH_NOARGS,
        "public : size"
    },
    {
        "empty", (PyCFunction)unigine_SelectorNodes_empty, METH_NOARGS,
        "public : empty"
    },
    {
        "extend", (PyCFunction)unigine_SelectorNodes_extend, METH_VARARGS,
        "public : extend"
    },
    {
        "extend", (PyCFunction)unigine_SelectorNodes_extend, METH_VARARGS,
        "public : extend"
    },
    {
        "extend", (PyCFunction)unigine_SelectorNodes_extend, METH_VARARGS,
        "public : extend"
    },
    {
        "exclude", (PyCFunction)unigine_SelectorNodes_exclude, METH_VARARGS,
        "public : exclude"
    },
    {
        "exclude", (PyCFunction)unigine_SelectorNodes_exclude, METH_VARARGS,
        "public : exclude"
    },
    {
        "exclude", (PyCFunction)unigine_SelectorNodes_exclude, METH_VARARGS,
        "public : exclude"
    },
    {
        "contains", (PyCFunction)unigine_SelectorNodes_contains, METH_VARARGS,
        "public : contains"
    },
    {
        "get_sub_item_list", (PyCFunction)unigine_SelectorNodes_get_sub_item_list, METH_VARARGS,
        "public : getSubItemList"
    },
    {
        "get_sub_item_list", (PyCFunction)unigine_SelectorNodes_get_sub_item_list, METH_VARARGS,
        "public : getSubItemList"
    },
    {
        "get_index_list", (PyCFunction)unigine_SelectorNodes_get_index_list, METH_VARARGS,
        "public : getIndexList"
    },
    {
        "get_index_list", (PyCFunction)unigine_SelectorNodes_get_index_list, METH_VARARGS,
        "public : getIndexList"
    },
    {
        "get_intersected_indexes", (PyCFunction)unigine_SelectorNodes_get_intersected_indexes, METH_VARARGS,
        "public : getIntersectedIndexes"
    },
    {
        "reset_cache", (PyCFunction)unigine_SelectorNodes_reset_cache, METH_NOARGS,
        "public : resetCache"
    },
    {
        "set_user_data", (PyCFunction)unigine_SelectorNodes_set_user_data, METH_VARARGS,
        "public : setUserData"
    },
    {
        "get_user_data", (PyCFunction)unigine_SelectorNodes_get_user_data, METH_VARARGS,
        "public : getUserData"
    },
    {NULL}  /* Sentinel */
};

static PyTypeObject unigine_SelectorNodesType = {
    PyVarObject_HEAD_INIT(NULL, 0)
    "unigine.SelectorNodes",             // tp_name
    sizeof(unigine_SelectorNodes) + 256, // tp_basicsize  (TODO magic 256 bytes!!!)
    0,                         // tp_itemsize
    (destructor)unigine_SelectorNodes_dealloc,   // tp_dealloc
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
    "SelectorNodes Object",         // tp_doc
    0,                         // traverseproc tp_traverse
    0,                         // inquiry tp_clear
    0,                         // richcmpfunc tp_richcompare
    0,                         // Py_ssize_t tp_weaklistoffset
    0,                         // getiterfunc tp_iter
    0,                         // iternextfunc tp_iternext
    unigine_SelectorNodes_methods, // tp_methods
    0, // tp_members
    0, // tp_getset
    0, // tp_base
    0, // tp_dict
    0, // tp_descr_get
    0, // tp_descr_set
    0, // tp_dictoffset
    (initproc)unigine_SelectorNodes_init, // tp_init
    0, // tp_alloc
    unigine_SelectorNodes_new, // tp_new
};


// UniginePyTypeObjectSelectorNodes

bool Python3UnigineSelectorNodes::isReady() {
    // Initialize tp_dict with empty dictionary
    if (!unigine_SelectorNodesType.tp_dict) {
        unigine_SelectorNodesType.tp_dict = PyDict_New();

        // enum_typename: SubType
        PyDict_SetItemString(
            unigine_SelectorNodesType.tp_dict, "INDEXED",
            Py_BuildValue("i", UnigineEditor::SelectorNodes::INDEXED)
        );
        // enum_typename: SubType
        PyDict_SetItemString(
            unigine_SelectorNodesType.tp_dict, "USER",
            Py_BuildValue("i", UnigineEditor::SelectorNodes::USER)
        );
    }
    if (PyType_Ready(&unigine_SelectorNodesType) < 0) {
        return false;
    }
    return true;
}

bool Python3UnigineSelectorNodes::addClassDefinitionToModule(PyObject* pModule) {
    Py_INCREF(&unigine_SelectorNodesType);
    if (PyModule_AddObject(pModule, "SelectorNodes", (PyObject *)&unigine_SelectorNodesType) < 0) {
        Py_DECREF(&unigine_SelectorNodesType);
        return false;
    }
    return true;
}

PyObject * SelectorNodes::NewObject(UnigineEditor::SelectorNodes * unigine_object_ptr) {
    // std::cout << "sizeof(unigine_SelectorNodes) = " << sizeof(unigine_SelectorNodes) << std::endl;
    unigine_SelectorNodes *pInst = PyObject_New(unigine_SelectorNodes, &unigine_SelectorNodesType);
    pInst->unigine_object_ptr = unigine_object_ptr;
    // Py_INCREF(pInst);
    return (PyObject *)pInst;
}

UnigineEditor::SelectorNodes * SelectorNodes::Convert(PyObject *pObject) {
    if (Py_IS_TYPE(pObject, &unigine_SelectorNodesType) == 0) {
        Unigine::Log::error("Invalid type, expected 'UnigineEditor::SelectorNodes *', but got some another");
    }
    unigine_SelectorNodes *pInst = (unigine_SelectorNodes *)pObject;
    return pInst->unigine_object_ptr;
}

}; // namespace PyUnigine

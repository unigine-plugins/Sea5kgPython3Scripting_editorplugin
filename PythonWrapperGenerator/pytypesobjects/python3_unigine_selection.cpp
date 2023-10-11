// this file automaticly generated from UnigineSelection.h
#include "python3_unigine_selection.h"

#include <string>
#include <editor/UnigineSelection.h>
#include <UnigineLog.h>
#include <Python.h>
#include <structmember.h>

#include <iostream>

namespace PyUnigine {

// ------------------------------------------------------------------------------------------
// unigine_Selection

typedef struct {
    PyObject_HEAD
    // Type-specific fields go here.
    UnigineEditor::Selection * unigine_object_ptr;
} unigine_Selection;

static void unigine_Selection_dealloc(unigine_Selection* self) {
    // Unigine::Log::message("unigine_Selection_dealloc\n");
    Py_TYPE(self)->tp_free((PyObject*)self);
}

static PyObject *unigine_Selection_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    // Unigine::Log::message("unigine_Selection_new\n");
    unigine_Selection *self;
    self = (unigine_Selection *)type->tp_alloc(type, 0);
    self->unigine_object_ptr = nullptr;
    return (PyObject *)self;
}

static int unigine_Selection_init(unigine_Selection *self, PyObject *args, PyObject *kwds) {
    self->unigine_object_ptr = new Unigine::Selection();
    return 0;
}


// public : metaObject
static PyObject * unigine_Selection_meta_object(unigine_Selection* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->metaObject();
            };
            UnigineEditor::Selection * unigine_object_ptr;
            // return
            const * retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    const * retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = TODO: unknown type 'const *'

    // end
    // return: const *
    return ret;
};

// public : qt_metacast
static PyObject * unigine_Selection_qt_metacast(unigine_Selection* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const char * arg1;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyUnicode_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"arg1\" to %s must be a strint object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    const char * arg1 = PyUnicode_AsUTF8(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->qt_metacast(arg1);
            };
            UnigineEditor::Selection * unigine_object_ptr;
            // args
            const char * arg1;
            // return
            void * retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->arg1 = arg1;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    void * retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = TODO: unknown type 'void *'

    // end
    // return: void *
    return ret;
};

// public : qt_metacall
static PyObject * unigine_Selection_qt_metacall(unigine_Selection* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // Call arg1;
    PyObject *pArg2 = NULL; // int arg2;
    PyObject *pArg3 = NULL; // * void * arg3;
    PyArg_ParseTuple(args, "OOO", &pArg1, &pArg2, &pArg3);

    // pArg1
TODO for Call


    // pArg2
    if (!PyLong_Check(pArg2)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"arg2\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg2)->tp_name);
        return NULL;
    }
    int arg2 = PyLong_AsLong(pArg2);


    // pArg3
TODO for * void *


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->qt_metacall(arg1, arg2, arg3);
            };
            UnigineEditor::Selection * unigine_object_ptr;
            // args
            Call arg1;
            int arg2;
            * void * arg3;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->arg1 = arg1;
    pRunner->arg2 = arg2;
    pRunner->arg3 = arg3;
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

// public (static): tr
static PyObject * unigine_Selection_tr(unigine_Selection* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const char * s;
    PyObject *pArg2 = NULL; // const char * c;
    PyObject *pArg3 = NULL; // int n;
    PyArg_ParseTuple(args, "OOO", &pArg1, &pArg2, &pArg3);

    // pArg1
    if (!PyUnicode_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"s\" to %s must be a strint object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    const char * s = PyUnicode_AsUTF8(pArg1);


    // pArg2
    if (!PyUnicode_Check(pArg2)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"c\" to %s must be a strint object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg2)->tp_name);
        return NULL;
    }
    const char * c = PyUnicode_AsUTF8(pArg2);


    // pArg3
    if (!PyLong_Check(pArg3)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"n\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg3)->tp_name);
        return NULL;
    }
    int n = PyLong_AsLong(pArg3);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = UnigineEditor::Selection::tr(s, c, n);
            };
            // args
            const char * s;
            const char * c;
            int n;
            // return
             retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->s = s;
    pRunner->c = c;
    pRunner->n = n;
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

// public (static): trUtf8
static PyObject * unigine_Selection_tr_utf8(unigine_Selection* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const char * s;
    PyObject *pArg2 = NULL; // const char * c;
    PyObject *pArg3 = NULL; // int n;
    PyArg_ParseTuple(args, "OOO", &pArg1, &pArg2, &pArg3);

    // pArg1
    if (!PyUnicode_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"s\" to %s must be a strint object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    const char * s = PyUnicode_AsUTF8(pArg1);


    // pArg2
    if (!PyUnicode_Check(pArg2)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"c\" to %s must be a strint object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg2)->tp_name);
        return NULL;
    }
    const char * c = PyUnicode_AsUTF8(pArg2);


    // pArg3
    if (!PyLong_Check(pArg3)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"n\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg3)->tp_name);
        return NULL;
    }
    int n = PyLong_AsLong(pArg3);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = UnigineEditor::Selection::trUtf8(s, c, n);
            };
            // args
            const char * s;
            const char * c;
            int n;
            // return
             retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->s = s;
    pRunner->c = c;
    pRunner->n = n;
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

// public (static): instance
static PyObject * unigine_Selection_instance(unigine_Selection* self_static_null) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = UnigineEditor::Selection::instance();
            };
            // return
            UnigineEditor::Selection * retOriginal;
    };
    auto *pRunner = new LocalRunner();
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    UnigineEditor::Selection * retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = TODO: unknown type 'UnigineEditor::Selection *'

    // end
    // return: UnigineEditor::Selection *
    return ret;
};

// public (static): clear
static PyObject * unigine_Selection_clear(unigine_Selection* self_static_null) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                UnigineEditor::Selection::clear();
            };
    };
    auto *pRunner = new LocalRunner();
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

// public (static): getSelector
static PyObject * unigine_Selection_get_selector(unigine_Selection* self_static_null) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = UnigineEditor::Selection::getSelector();
            };
            // return
            const UnigineEditor::Selector * retOriginal;
    };
    auto *pRunner = new LocalRunner();
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    const UnigineEditor::Selector * retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = TODO: unknown type 'const UnigineEditor::Selector *'

    // end
    // return: const UnigineEditor::Selector *
    return ret;
};

// public (static): setSelector
static PyObject * unigine_Selection_set_selector(unigine_Selection* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // UnigineEditor::Selector * selector;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for UnigineEditor::Selector *


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                UnigineEditor::Selection::setSelector(selector);
            };
            // args
            UnigineEditor::Selector * selector;
    };
    auto *pRunner = new LocalRunner();
    pRunner->selector = selector;
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

// public (static): copySelector
static PyObject * unigine_Selection_copy_selector(unigine_Selection* self_static_null) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = UnigineEditor::Selection::copySelector();
            };
            // return
            UnigineEditor::Selector * retOriginal;
    };
    auto *pRunner = new LocalRunner();
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    UnigineEditor::Selector * retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = TODO: unknown type 'UnigineEditor::Selector *'

    // end
    // return: UnigineEditor::Selector *
    return ret;
};

// public (static): getSelectorNodes
static PyObject * unigine_Selection_get_selector_nodes(unigine_Selection* self_static_null) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = UnigineEditor::Selection::getSelectorNodes();
            };
            // return
            const UnigineEditor::SelectorNodes * retOriginal;
    };
    auto *pRunner = new LocalRunner();
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    const UnigineEditor::SelectorNodes * retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = TODO: unknown type 'const UnigineEditor::SelectorNodes *'

    // end
    // return: const UnigineEditor::SelectorNodes *
    return ret;
};

// public (static): getSelectorRuntimes
static PyObject * unigine_Selection_get_selector_runtimes(unigine_Selection* self_static_null) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = UnigineEditor::Selection::getSelectorRuntimes();
            };
            // return
            const UnigineEditor::SelectorGUIDs * retOriginal;
    };
    auto *pRunner = new LocalRunner();
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    const UnigineEditor::SelectorGUIDs * retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = TODO: unknown type 'const UnigineEditor::SelectorGUIDs *'

    // end
    // return: const UnigineEditor::SelectorGUIDs *
    return ret;
};

// public (static): getSelectorMaterials
static PyObject * unigine_Selection_get_selector_materials(unigine_Selection* self_static_null) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = UnigineEditor::Selection::getSelectorMaterials();
            };
            // return
            const UnigineEditor::SelectorGUIDs * retOriginal;
    };
    auto *pRunner = new LocalRunner();
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    const UnigineEditor::SelectorGUIDs * retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = TODO: unknown type 'const UnigineEditor::SelectorGUIDs *'

    // end
    // return: const UnigineEditor::SelectorGUIDs *
    return ret;
};

// public (static): getSelectorProperties
static PyObject * unigine_Selection_get_selector_properties(unigine_Selection* self_static_null) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = UnigineEditor::Selection::getSelectorProperties();
            };
            // return
            const UnigineEditor::SelectorGUIDs * retOriginal;
    };
    auto *pRunner = new LocalRunner();
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    const UnigineEditor::SelectorGUIDs * retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = TODO: unknown type 'const UnigineEditor::SelectorGUIDs *'

    // end
    // return: const UnigineEditor::SelectorGUIDs *
    return ret;
};

// public (static): copySelectorNodes
static PyObject * unigine_Selection_copy_selector_nodes(unigine_Selection* self_static_null) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = UnigineEditor::Selection::copySelectorNodes();
            };
            // return
            UnigineEditor::SelectorNodes * retOriginal;
    };
    auto *pRunner = new LocalRunner();
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

// public (static): copySelectorRuntimes
static PyObject * unigine_Selection_copy_selector_runtimes(unigine_Selection* self_static_null) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = UnigineEditor::Selection::copySelectorRuntimes();
            };
            // return
            UnigineEditor::SelectorGUIDs * retOriginal;
    };
    auto *pRunner = new LocalRunner();
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    UnigineEditor::SelectorGUIDs * retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = TODO: unknown type 'UnigineEditor::SelectorGUIDs *'

    // end
    // return: UnigineEditor::SelectorGUIDs *
    return ret;
};

// public (static): copySelectorMaterials
static PyObject * unigine_Selection_copy_selector_materials(unigine_Selection* self_static_null) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = UnigineEditor::Selection::copySelectorMaterials();
            };
            // return
            UnigineEditor::SelectorGUIDs * retOriginal;
    };
    auto *pRunner = new LocalRunner();
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    UnigineEditor::SelectorGUIDs * retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = TODO: unknown type 'UnigineEditor::SelectorGUIDs *'

    // end
    // return: UnigineEditor::SelectorGUIDs *
    return ret;
};

// public (static): copySelectorProperties
static PyObject * unigine_Selection_copy_selector_properties(unigine_Selection* self_static_null) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = UnigineEditor::Selection::copySelectorProperties();
            };
            // return
            UnigineEditor::SelectorGUIDs * retOriginal;
    };
    auto *pRunner = new LocalRunner();
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    UnigineEditor::SelectorGUIDs * retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = TODO: unknown type 'UnigineEditor::SelectorGUIDs *'

    // end
    // return: UnigineEditor::SelectorGUIDs *
    return ret;
};

// public : changed
static PyObject * unigine_Selection_changed(unigine_Selection* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->changed();
            };
            UnigineEditor::Selection * unigine_object_ptr;
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


static PyMethodDef unigine_Selection_methods[] = {
    {
        "meta_object", (PyCFunction)unigine_Selection_meta_object, METH_NOARGS,
        "public : metaObject"
    },
    {
        "qt_metacast", (PyCFunction)unigine_Selection_qt_metacast, METH_VARARGS,
        "public : qt_metacast"
    },
    {
        "qt_metacall", (PyCFunction)unigine_Selection_qt_metacall, METH_VARARGS,
        "public : qt_metacall"
    },
    {
        "tr", (PyCFunction)unigine_Selection_tr, METH_STATIC|METH_VARARGS,
        "public (static): tr"
    },
    {
        "tr_utf8", (PyCFunction)unigine_Selection_tr_utf8, METH_STATIC|METH_VARARGS,
        "public (static): trUtf8"
    },
    {
        "instance", (PyCFunction)unigine_Selection_instance, METH_STATIC|METH_NOARGS,
        "public (static): instance"
    },
    {
        "clear", (PyCFunction)unigine_Selection_clear, METH_STATIC|METH_NOARGS,
        "public (static): clear"
    },
    {
        "get_selector", (PyCFunction)unigine_Selection_get_selector, METH_STATIC|METH_NOARGS,
        "public (static): getSelector"
    },
    {
        "set_selector", (PyCFunction)unigine_Selection_set_selector, METH_STATIC|METH_VARARGS,
        "public (static): setSelector"
    },
    {
        "copy_selector", (PyCFunction)unigine_Selection_copy_selector, METH_STATIC|METH_NOARGS,
        "public (static): copySelector"
    },
    {
        "get_selector_nodes", (PyCFunction)unigine_Selection_get_selector_nodes, METH_STATIC|METH_NOARGS,
        "public (static): getSelectorNodes"
    },
    {
        "get_selector_runtimes", (PyCFunction)unigine_Selection_get_selector_runtimes, METH_STATIC|METH_NOARGS,
        "public (static): getSelectorRuntimes"
    },
    {
        "get_selector_materials", (PyCFunction)unigine_Selection_get_selector_materials, METH_STATIC|METH_NOARGS,
        "public (static): getSelectorMaterials"
    },
    {
        "get_selector_properties", (PyCFunction)unigine_Selection_get_selector_properties, METH_STATIC|METH_NOARGS,
        "public (static): getSelectorProperties"
    },
    {
        "copy_selector_nodes", (PyCFunction)unigine_Selection_copy_selector_nodes, METH_STATIC|METH_NOARGS,
        "public (static): copySelectorNodes"
    },
    {
        "copy_selector_runtimes", (PyCFunction)unigine_Selection_copy_selector_runtimes, METH_STATIC|METH_NOARGS,
        "public (static): copySelectorRuntimes"
    },
    {
        "copy_selector_materials", (PyCFunction)unigine_Selection_copy_selector_materials, METH_STATIC|METH_NOARGS,
        "public (static): copySelectorMaterials"
    },
    {
        "copy_selector_properties", (PyCFunction)unigine_Selection_copy_selector_properties, METH_STATIC|METH_NOARGS,
        "public (static): copySelectorProperties"
    },
    {
        "changed", (PyCFunction)unigine_Selection_changed, METH_NOARGS,
        "public : changed"
    },
    {NULL}  /* Sentinel */
};

static PyTypeObject unigine_SelectionType = {
    PyVarObject_HEAD_INIT(NULL, 0)
    "unigine.Selection",             // tp_name
    sizeof(unigine_Selection) + 256, // tp_basicsize  (TODO magic 256 bytes!!!)
    0,                         // tp_itemsize
    (destructor)unigine_Selection_dealloc,   // tp_dealloc
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
    "Selection Object",         // tp_doc
    0,                         // traverseproc tp_traverse
    0,                         // inquiry tp_clear
    0,                         // richcmpfunc tp_richcompare
    0,                         // Py_ssize_t tp_weaklistoffset
    0,                         // getiterfunc tp_iter
    0,                         // iternextfunc tp_iternext
    unigine_Selection_methods, // tp_methods
    0, // tp_members
    0, // tp_getset
    0, // tp_base
    0, // tp_dict
    0, // tp_descr_get
    0, // tp_descr_set
    0, // tp_dictoffset
    (initproc)unigine_Selection_init, // tp_init
    0, // tp_alloc
    unigine_Selection_new, // tp_new
};


// UniginePyTypeObjectSelection

bool Python3UnigineSelection::isReady() {
    // Initialize tp_dict with empty dictionary
    if (!unigine_SelectionType.tp_dict) {
        unigine_SelectionType.tp_dict = PyDict_New();

    }
    if (PyType_Ready(&unigine_SelectionType) < 0) {
        return false;
    }
    return true;
}

bool Python3UnigineSelection::addClassDefinitionToModule(PyObject* pModule) {
    Py_INCREF(&unigine_SelectionType);
    if (PyModule_AddObject(pModule, "Selection", (PyObject *)&unigine_SelectionType) < 0) {
        Py_DECREF(&unigine_SelectionType);
        return false;
    }
    return true;
}

PyObject * Selection::NewObject(UnigineEditor::Selection * unigine_object_ptr) {
    // std::cout << "sizeof(unigine_Selection) = " << sizeof(unigine_Selection) << std::endl;
    unigine_Selection *pInst = PyObject_New(unigine_Selection, &unigine_SelectionType);
    pInst->unigine_object_ptr = unigine_object_ptr;
    // Py_INCREF(pInst);
    return (PyObject *)pInst;
}

UnigineEditor::Selection * Selection::Convert(PyObject *pObject) {
    if (Py_IS_TYPE(pObject, &unigine_SelectionType) == 0) {
        Unigine::Log::error("Invalid type, expected 'UnigineEditor::Selection *', but got some another");
    }
    unigine_Selection *pInst = (unigine_Selection *)pObject;
    return pInst->unigine_object_ptr;
}

}; // namespace PyUnigine

// this file automaticly generated from UnigineViewportManager.h
#include "python3_unigine_viewportmanager.h"

#include <string>
#include <editor/UnigineViewportManager.h>
#include <UnigineLog.h>
#include <Python.h>
#include <structmember.h>

#include <iostream>

namespace PyUnigine {

// ------------------------------------------------------------------------------------------
// unigine_ViewportManager

typedef struct {
    PyObject_HEAD
    // Type-specific fields go here.
} unigine_ViewportManager;

static void unigine_ViewportManager_dealloc(unigine_ViewportManager* self) {
    // Unigine::Log::message("unigine_ViewportManager_dealloc\n");
    Py_TYPE(self)->tp_free((PyObject*)self);
}

static PyObject *unigine_ViewportManager_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    // Unigine::Log::message("unigine_ViewportManager_new\n");
    unigine_ViewportManager *self;
    self = (unigine_ViewportManager *)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static int unigine_ViewportManager_init(unigine_ViewportManager *self, PyObject *args, PyObject *kwds) {
    // nothing
    return 0;
}


// public (static): createViewportWindow
static PyObject * unigine_ViewportManager_create_viewport_window(unigine_ViewportManager* self_static_null, PyObject *args) {
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
                retOriginal = UnigineEditor::ViewportManager::createViewportWindow(name);
            };
            // args
            const char * name;
            // return
             retOriginal;
    };
    auto *pRunner = new LocalRunner();
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

// public (static): removeViewportWindow
static PyObject * unigine_ViewportManager_remove_viewport_window(unigine_ViewportManager* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; //  viewport_id;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for 


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = UnigineEditor::ViewportManager::removeViewportWindow(viewport_id);
            };
            // args
             viewport_id;
            // return
            bool retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->viewport_id = viewport_id;
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

// public (static): showViewportWindow
static PyObject * unigine_ViewportManager_show_viewport_window(unigine_ViewportManager* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; //  viewport_id;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for 


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = UnigineEditor::ViewportManager::showViewportWindow(viewport_id);
            };
            // args
             viewport_id;
            // return
            bool retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->viewport_id = viewport_id;
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

// public (static): hideViewportWindow
static PyObject * unigine_ViewportManager_hide_viewport_window(unigine_ViewportManager* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; //  viewport_id;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for 


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = UnigineEditor::ViewportManager::hideViewportWindow(viewport_id);
            };
            // args
             viewport_id;
            // return
            bool retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->viewport_id = viewport_id;
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

// public (static): getNumViewportWindows
static PyObject * unigine_ViewportManager_get_num_viewport_windows(unigine_ViewportManager* self_static_null) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = UnigineEditor::ViewportManager::getNumViewportWindows();
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

// public (static): getViewportWindowId
static PyObject * unigine_ViewportManager_get_viewport_window_id(unigine_ViewportManager* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int index;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"index\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int index = PyLong_AsLong(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = UnigineEditor::ViewportManager::getViewportWindowId(index);
            };
            // args
            int index;
            // return
             retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->index = index;
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

// public (static): getLastHoveredViewportWindow
static PyObject * unigine_ViewportManager_get_last_hovered_viewport_window(unigine_ViewportManager* self_static_null) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = UnigineEditor::ViewportManager::getLastHoveredViewportWindow();
            };
            // return
             retOriginal;
    };
    auto *pRunner = new LocalRunner();
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

// public (static): getActiveViewportWindow
static PyObject * unigine_ViewportManager_get_active_viewport_window(unigine_ViewportManager* self_static_null) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = UnigineEditor::ViewportManager::getActiveViewportWindow();
            };
            // return
             retOriginal;
    };
    auto *pRunner = new LocalRunner();
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

// public (static): getViewportWindowName
static PyObject * unigine_ViewportManager_get_viewport_window_name(unigine_ViewportManager* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; //  viewport_id;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for 


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = UnigineEditor::ViewportManager::getViewportWindowName(viewport_id);
            };
            // args
             viewport_id;
            // return
            const char * retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->viewport_id = viewport_id;
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

// public (static): getViewportWindowId
static PyObject * unigine_ViewportManager_get_viewport_window_id(unigine_ViewportManager* self_static_null, PyObject *args) {
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
                retOriginal = UnigineEditor::ViewportManager::getViewportWindowId(name);
            };
            // args
            const char * name;
            // return
             retOriginal;
    };
    auto *pRunner = new LocalRunner();
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

// public (static): getViewportWindowPlayer
static PyObject * unigine_ViewportManager_get_viewport_window_player(unigine_ViewportManager* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; //  viewport_id;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for 


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = UnigineEditor::ViewportManager::getViewportWindowPlayer(viewport_id);
            };
            // args
             viewport_id;
            // return
             retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->viewport_id = viewport_id;
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

// public (static): setViewportWindowPlayer
static PyObject * unigine_ViewportManager_set_viewport_window_player(unigine_ViewportManager* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; //  viewport_id;
    PyObject *pArg2 = NULL; // const & player;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
TODO for 


    // pArg2
TODO for const &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                UnigineEditor::ViewportManager::setViewportWindowPlayer(viewport_id, player);
            };
            // args
             viewport_id;
            const & player;
    };
    auto *pRunner = new LocalRunner();
    pRunner->viewport_id = viewport_id;
    pRunner->player = player;
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

// public (static): getViewportWindowViewport
static PyObject * unigine_ViewportManager_get_viewport_window_viewport(unigine_ViewportManager* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; //  viewport_id;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for 


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = UnigineEditor::ViewportManager::getViewportWindowViewport(viewport_id);
            };
            // args
             viewport_id;
            // return
             retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->viewport_id = viewport_id;
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

// public (static): getViewportWindowGui
static PyObject * unigine_ViewportManager_get_viewport_window_gui(unigine_ViewportManager* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; //  viewport_id;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for 


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = UnigineEditor::ViewportManager::getViewportWindowGui(viewport_id);
            };
            // args
             viewport_id;
            // return
             retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->viewport_id = viewport_id;
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

// public (static): getViewportWindowMouseX
static PyObject * unigine_ViewportManager_get_viewport_window_mouse_x(unigine_ViewportManager* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; //  viewport_id;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for 


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = UnigineEditor::ViewportManager::getViewportWindowMouseX(viewport_id);
            };
            // args
             viewport_id;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->viewport_id = viewport_id;
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

// public (static): getViewportWindowMouseY
static PyObject * unigine_ViewportManager_get_viewport_window_mouse_y(unigine_ViewportManager* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; //  viewport_id;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for 


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = UnigineEditor::ViewportManager::getViewportWindowMouseY(viewport_id);
            };
            // args
             viewport_id;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->viewport_id = viewport_id;
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

// public (static): getViewportWindowMousePos
static PyObject * unigine_ViewportManager_get_viewport_window_mouse_pos(unigine_ViewportManager* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; //  viewport_id;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for 


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = UnigineEditor::ViewportManager::getViewportWindowMousePos(viewport_id);
            };
            // args
             viewport_id;
            // return
            Unigine::Math::ivec2 retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->viewport_id = viewport_id;
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

// public (static): getViewportWindowWidth
static PyObject * unigine_ViewportManager_get_viewport_window_width(unigine_ViewportManager* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; //  viewport_id;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for 


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = UnigineEditor::ViewportManager::getViewportWindowWidth(viewport_id);
            };
            // args
             viewport_id;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->viewport_id = viewport_id;
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

// public (static): getViewportWindowHeight
static PyObject * unigine_ViewportManager_get_viewport_window_height(unigine_ViewportManager* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; //  viewport_id;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for 


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = UnigineEditor::ViewportManager::getViewportWindowHeight(viewport_id);
            };
            // args
             viewport_id;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->viewport_id = viewport_id;
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

// public (static): getViewportWindowSize
static PyObject * unigine_ViewportManager_get_viewport_window_size(unigine_ViewportManager* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; //  viewport_id;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for 


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = UnigineEditor::ViewportManager::getViewportWindowSize(viewport_id);
            };
            // args
             viewport_id;
            // return
            Unigine::Math::ivec2 retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->viewport_id = viewport_id;
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

// public (static): setEnabledRectangleSelection
static PyObject * unigine_ViewportManager_set_enabled_rectangle_selection(unigine_ViewportManager* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // bool enable;
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
                UnigineEditor::ViewportManager::setEnabledRectangleSelection(enable);
            };
            // args
            bool enable;
    };
    auto *pRunner = new LocalRunner();
    pRunner->enable = enable;
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

// public (static): isEnabledRectangleSelection
static PyObject * unigine_ViewportManager_is_enabled_rectangle_selection(unigine_ViewportManager* self_static_null) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = UnigineEditor::ViewportManager::isEnabledRectangleSelection();
            };
            // return
            bool retOriginal;
    };
    auto *pRunner = new LocalRunner();
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

// public (static): focusOnNode
static PyObject * unigine_ViewportManager_focus_on_node(unigine_ViewportManager* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; //  viewport_id;
    PyObject *pArg2 = NULL; // const & node;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
TODO for 


    // pArg2
TODO for const &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                UnigineEditor::ViewportManager::focusOnNode(viewport_id, node);
            };
            // args
             viewport_id;
            const & node;
    };
    auto *pRunner = new LocalRunner();
    pRunner->viewport_id = viewport_id;
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

// public (static): focusOnNodeList
static PyObject * unigine_ViewportManager_focus_on_node_list(unigine_ViewportManager* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; //  viewport_id;
    PyObject *pArg2 = NULL; // const Unigine::Vector<Unigine::Ptr<Unigine::Node>> & nodes;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
TODO for 


    // pArg2
TODO for const Unigine::Vector<Unigine::Ptr<Unigine::Node>> &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                UnigineEditor::ViewportManager::focusOnNodeList(viewport_id, nodes);
            };
            // args
             viewport_id;
            const Unigine::Vector<Unigine::Ptr<Unigine::Node>> & nodes;
    };
    auto *pRunner = new LocalRunner();
    pRunner->viewport_id = viewport_id;
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

// public (static): focusOnNodeBoundBased
static PyObject * unigine_ViewportManager_focus_on_node_bound_based(unigine_ViewportManager* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; //  viewport_id;
    PyObject *pArg2 = NULL; // const & node;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
TODO for 


    // pArg2
TODO for const &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                UnigineEditor::ViewportManager::focusOnNodeBoundBased(viewport_id, node);
            };
            // args
             viewport_id;
            const & node;
    };
    auto *pRunner = new LocalRunner();
    pRunner->viewport_id = viewport_id;
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

// public (static): focusOnNodeListBoundBased
static PyObject * unigine_ViewportManager_focus_on_node_list_bound_based(unigine_ViewportManager* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; //  viewport_id;
    PyObject *pArg2 = NULL; // const Unigine::Vector<Unigine::Ptr<Unigine::Node>> & nodes;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
TODO for 


    // pArg2
TODO for const Unigine::Vector<Unigine::Ptr<Unigine::Node>> &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                UnigineEditor::ViewportManager::focusOnNodeListBoundBased(viewport_id, nodes);
            };
            // args
             viewport_id;
            const Unigine::Vector<Unigine::Ptr<Unigine::Node>> & nodes;
    };
    auto *pRunner = new LocalRunner();
    pRunner->viewport_id = viewport_id;
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

// public (static): focusOnSurface
static PyObject * unigine_ViewportManager_focus_on_surface(unigine_ViewportManager* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; //  viewport_id;
    PyObject *pArg2 = NULL; // const & object;
    PyObject *pArg3 = NULL; // int surface;
    PyArg_ParseTuple(args, "OOO", &pArg1, &pArg2, &pArg3);

    // pArg1
TODO for 


    // pArg2
TODO for const &


    // pArg3
    if (!PyLong_Check(pArg3)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"surface\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg3)->tp_name);
        return NULL;
    }
    int surface = PyLong_AsLong(pArg3);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                UnigineEditor::ViewportManager::focusOnSurface(viewport_id, object, surface);
            };
            // args
             viewport_id;
            const & object;
            int surface;
    };
    auto *pRunner = new LocalRunner();
    pRunner->viewport_id = viewport_id;
    pRunner->object = object;
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

// public (static): focusOnSurfaceList
static PyObject * unigine_ViewportManager_focus_on_surface_list(unigine_ViewportManager* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; //  viewport_id;
    PyObject *pArg2 = NULL; // const & object;
    PyObject *pArg3 = NULL; // const Unigine::Vector<int> & surfaces;
    PyArg_ParseTuple(args, "OOO", &pArg1, &pArg2, &pArg3);

    // pArg1
TODO for 


    // pArg2
TODO for const &


    // pArg3
TODO for const Unigine::Vector<int> &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                UnigineEditor::ViewportManager::focusOnSurfaceList(viewport_id, object, surfaces);
            };
            // args
             viewport_id;
            const & object;
            const Unigine::Vector<int> & surfaces;
    };
    auto *pRunner = new LocalRunner();
    pRunner->viewport_id = viewport_id;
    pRunner->object = object;
    pRunner->surfaces = surfaces;
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

// public (static): focusOnCenter
static PyObject * unigine_ViewportManager_focus_on_center(unigine_ViewportManager* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; //  viewport_id;
    PyObject *pArg2 = NULL; // const & center;
    PyObject *pArg3 = NULL; // float radius;
    PyArg_ParseTuple(args, "OOO", &pArg1, &pArg2, &pArg3);

    // pArg1
TODO for 


    // pArg2
TODO for const &


    // pArg3
    if (!PyFloat_Check(pArg3)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"radius\" to %s must be a float object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg3)->tp_name);
        return NULL;
    }
    float radius = PyFloat_AsDouble(pArg3);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                UnigineEditor::ViewportManager::focusOnCenter(viewport_id, center, radius);
            };
            // args
             viewport_id;
            const & center;
            float radius;
    };
    auto *pRunner = new LocalRunner();
    pRunner->viewport_id = viewport_id;
    pRunner->center = center;
    pRunner->radius = radius;
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

// public (static): forceWireframeWarming
static PyObject * unigine_ViewportManager_force_wireframe_warming(unigine_ViewportManager* self_static_null) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                UnigineEditor::ViewportManager::forceWireframeWarming();
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

// public (static): placeNode
static PyObject * unigine_ViewportManager_place_node(unigine_ViewportManager* self_static_null, PyObject *args) {
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
                UnigineEditor::ViewportManager::placeNode(node);
            };
            // args
            const & node;
    };
    auto *pRunner = new LocalRunner();
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

// public (static): placeNodeList
static PyObject * unigine_ViewportManager_place_node_list(unigine_ViewportManager* self_static_null, PyObject *args) {
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
                UnigineEditor::ViewportManager::placeNodeList(nodes);
            };
            // args
            const Unigine::Vector<Unigine::Ptr<Unigine::Node>> & nodes;
    };
    auto *pRunner = new LocalRunner();
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


static PyMethodDef unigine_ViewportManager_methods[] = {
    {
        "create_viewport_window", (PyCFunction)unigine_ViewportManager_create_viewport_window, METH_STATIC|METH_VARARGS,
        "public (static): createViewportWindow"
    },
    {
        "remove_viewport_window", (PyCFunction)unigine_ViewportManager_remove_viewport_window, METH_STATIC|METH_VARARGS,
        "public (static): removeViewportWindow"
    },
    {
        "show_viewport_window", (PyCFunction)unigine_ViewportManager_show_viewport_window, METH_STATIC|METH_VARARGS,
        "public (static): showViewportWindow"
    },
    {
        "hide_viewport_window", (PyCFunction)unigine_ViewportManager_hide_viewport_window, METH_STATIC|METH_VARARGS,
        "public (static): hideViewportWindow"
    },
    {
        "get_num_viewport_windows", (PyCFunction)unigine_ViewportManager_get_num_viewport_windows, METH_STATIC|METH_NOARGS,
        "public (static): getNumViewportWindows"
    },
    {
        "get_viewport_window_id", (PyCFunction)unigine_ViewportManager_get_viewport_window_id, METH_STATIC|METH_VARARGS,
        "public (static): getViewportWindowId"
    },
    {
        "get_last_hovered_viewport_window", (PyCFunction)unigine_ViewportManager_get_last_hovered_viewport_window, METH_STATIC|METH_NOARGS,
        "public (static): getLastHoveredViewportWindow"
    },
    {
        "get_active_viewport_window", (PyCFunction)unigine_ViewportManager_get_active_viewport_window, METH_STATIC|METH_NOARGS,
        "public (static): getActiveViewportWindow"
    },
    {
        "get_viewport_window_name", (PyCFunction)unigine_ViewportManager_get_viewport_window_name, METH_STATIC|METH_VARARGS,
        "public (static): getViewportWindowName"
    },
    {
        "get_viewport_window_id", (PyCFunction)unigine_ViewportManager_get_viewport_window_id, METH_STATIC|METH_VARARGS,
        "public (static): getViewportWindowId"
    },
    {
        "get_viewport_window_player", (PyCFunction)unigine_ViewportManager_get_viewport_window_player, METH_STATIC|METH_VARARGS,
        "public (static): getViewportWindowPlayer"
    },
    {
        "set_viewport_window_player", (PyCFunction)unigine_ViewportManager_set_viewport_window_player, METH_STATIC|METH_VARARGS,
        "public (static): setViewportWindowPlayer"
    },
    {
        "get_viewport_window_viewport", (PyCFunction)unigine_ViewportManager_get_viewport_window_viewport, METH_STATIC|METH_VARARGS,
        "public (static): getViewportWindowViewport"
    },
    {
        "get_viewport_window_gui", (PyCFunction)unigine_ViewportManager_get_viewport_window_gui, METH_STATIC|METH_VARARGS,
        "public (static): getViewportWindowGui"
    },
    {
        "get_viewport_window_mouse_x", (PyCFunction)unigine_ViewportManager_get_viewport_window_mouse_x, METH_STATIC|METH_VARARGS,
        "public (static): getViewportWindowMouseX"
    },
    {
        "get_viewport_window_mouse_y", (PyCFunction)unigine_ViewportManager_get_viewport_window_mouse_y, METH_STATIC|METH_VARARGS,
        "public (static): getViewportWindowMouseY"
    },
    {
        "get_viewport_window_mouse_pos", (PyCFunction)unigine_ViewportManager_get_viewport_window_mouse_pos, METH_STATIC|METH_VARARGS,
        "public (static): getViewportWindowMousePos"
    },
    {
        "get_viewport_window_width", (PyCFunction)unigine_ViewportManager_get_viewport_window_width, METH_STATIC|METH_VARARGS,
        "public (static): getViewportWindowWidth"
    },
    {
        "get_viewport_window_height", (PyCFunction)unigine_ViewportManager_get_viewport_window_height, METH_STATIC|METH_VARARGS,
        "public (static): getViewportWindowHeight"
    },
    {
        "get_viewport_window_size", (PyCFunction)unigine_ViewportManager_get_viewport_window_size, METH_STATIC|METH_VARARGS,
        "public (static): getViewportWindowSize"
    },
    {
        "set_enabled_rectangle_selection", (PyCFunction)unigine_ViewportManager_set_enabled_rectangle_selection, METH_STATIC|METH_VARARGS,
        "public (static): setEnabledRectangleSelection"
    },
    {
        "is_enabled_rectangle_selection", (PyCFunction)unigine_ViewportManager_is_enabled_rectangle_selection, METH_STATIC|METH_NOARGS,
        "public (static): isEnabledRectangleSelection"
    },
    {
        "focus_on_node", (PyCFunction)unigine_ViewportManager_focus_on_node, METH_STATIC|METH_VARARGS,
        "public (static): focusOnNode"
    },
    {
        "focus_on_node_list", (PyCFunction)unigine_ViewportManager_focus_on_node_list, METH_STATIC|METH_VARARGS,
        "public (static): focusOnNodeList"
    },
    {
        "focus_on_node_bound_based", (PyCFunction)unigine_ViewportManager_focus_on_node_bound_based, METH_STATIC|METH_VARARGS,
        "public (static): focusOnNodeBoundBased"
    },
    {
        "focus_on_node_list_bound_based", (PyCFunction)unigine_ViewportManager_focus_on_node_list_bound_based, METH_STATIC|METH_VARARGS,
        "public (static): focusOnNodeListBoundBased"
    },
    {
        "focus_on_surface", (PyCFunction)unigine_ViewportManager_focus_on_surface, METH_STATIC|METH_VARARGS,
        "public (static): focusOnSurface"
    },
    {
        "focus_on_surface_list", (PyCFunction)unigine_ViewportManager_focus_on_surface_list, METH_STATIC|METH_VARARGS,
        "public (static): focusOnSurfaceList"
    },
    {
        "focus_on_center", (PyCFunction)unigine_ViewportManager_focus_on_center, METH_STATIC|METH_VARARGS,
        "public (static): focusOnCenter"
    },
    {
        "force_wireframe_warming", (PyCFunction)unigine_ViewportManager_force_wireframe_warming, METH_STATIC|METH_NOARGS,
        "public (static): forceWireframeWarming"
    },
    {
        "place_node", (PyCFunction)unigine_ViewportManager_place_node, METH_STATIC|METH_VARARGS,
        "public (static): placeNode"
    },
    {
        "place_node_list", (PyCFunction)unigine_ViewportManager_place_node_list, METH_STATIC|METH_VARARGS,
        "public (static): placeNodeList"
    },
    {NULL}  /* Sentinel */
};

static PyTypeObject unigine_ViewportManagerType = {
    PyVarObject_HEAD_INIT(NULL, 0)
    "unigine.ViewportManager",             // tp_name
    sizeof(unigine_ViewportManager) + 256, // tp_basicsize  (TODO magic 256 bytes!!!)
    0,                         // tp_itemsize
    (destructor)unigine_ViewportManager_dealloc,   // tp_dealloc
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
    "ViewportManager Object",         // tp_doc
    0,                         // traverseproc tp_traverse
    0,                         // inquiry tp_clear
    0,                         // richcmpfunc tp_richcompare
    0,                         // Py_ssize_t tp_weaklistoffset
    0,                         // getiterfunc tp_iter
    0,                         // iternextfunc tp_iternext
    unigine_ViewportManager_methods, // tp_methods
    0, // tp_members
    0, // tp_getset
    0, // tp_base
    0, // tp_dict
    0, // tp_descr_get
    0, // tp_descr_set
    0, // tp_dictoffset
    (initproc)unigine_ViewportManager_init, // tp_init
    0, // tp_alloc
    unigine_ViewportManager_new, // tp_new
};


// UniginePyTypeObjectViewportManager

bool Python3UnigineViewportManager::isReady() {
    // Initialize tp_dict with empty dictionary
    if (!unigine_ViewportManagerType.tp_dict) {
        unigine_ViewportManagerType.tp_dict = PyDict_New();

    }
    if (PyType_Ready(&unigine_ViewportManagerType) < 0) {
        return false;
    }
    return true;
}

bool Python3UnigineViewportManager::addClassDefinitionToModule(PyObject* pModule) {
    Py_INCREF(&unigine_ViewportManagerType);
    if (PyModule_AddObject(pModule, "ViewportManager", (PyObject *)&unigine_ViewportManagerType) < 0) {
        Py_DECREF(&unigine_ViewportManagerType);
        return false;
    }
    return true;
}

PyObject * ViewportManager::NewObject() {
    // std::cout << "sizeof(unigine_ViewportManager) = " << sizeof(unigine_ViewportManager) << std::endl;
    unigine_ViewportManager *pInst = PyObject_New(unigine_ViewportManager, &unigine_ViewportManagerType);
    // Py_INCREF(pInst);
    return (PyObject *)pInst;
}

}; // namespace PyUnigine

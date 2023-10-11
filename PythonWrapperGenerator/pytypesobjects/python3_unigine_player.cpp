// this file automaticly generated from UniginePlayer.h
#include "python3_unigine_player.h"

#include <string>
#include <UniginePlayers.h>
#include <UnigineLog.h>
#include <Python.h>
#include <structmember.h>

#include <iostream>

namespace PyUnigine {

// ------------------------------------------------------------------------------------------
// unigine_Player

typedef struct {
    PyObject_HEAD
    // Type-specific fields go here.
    Unigine::Player * unigine_object_ptr;
} unigine_Player;

static void unigine_Player_dealloc(unigine_Player* self) {
    // Unigine::Log::message("unigine_Player_dealloc\n");
    Py_TYPE(self)->tp_free((PyObject*)self);
}

static PyObject *unigine_Player_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    // Unigine::Log::message("unigine_Player_new\n");
    unigine_Player *self;
    self = (unigine_Player *)type->tp_alloc(type, 0);
    self->unigine_object_ptr = nullptr;
    return (PyObject *)self;
}

static int unigine_Player_init(unigine_Player *self, PyObject *args, PyObject *kwds) {
    self->unigine_object_ptr = new Unigine::Player();
    return 0;
}


// public (static): convertible
static PyObject * unigine_Player_convertible(unigine_Player* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // Unigine::Node * node;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for Unigine::Node *


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = Unigine::Player::convertible(node);
            };
            // args
            Unigine::Node * node;
            // return
            bool retOriginal;
    };
    auto *pRunner = new LocalRunner();
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

// public : setProjection
static PyObject * unigine_Player_set_projection(unigine_Player* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const Unigine::Math::mat4 & projection;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for const Unigine::Math::mat4 &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->setProjection(projection);
            };
            Unigine::Player * unigine_object_ptr;
            // args
            const Unigine::Math::mat4 & projection;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->projection = projection;
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

// public : getProjection
static PyObject * unigine_Player_get_projection(unigine_Player* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getProjection();
            };
            Unigine::Player * unigine_object_ptr;
            // return
            Unigine::Math::mat4 retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    Unigine::Math::mat4 retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: Unigine::Math::mat4
    return ret;
};

// public : getAspectCorrectedProjection
static PyObject * unigine_Player_get_aspect_corrected_projection(unigine_Player* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int width;
    PyObject *pArg2 = NULL; // int height;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"width\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int width = PyLong_AsLong(pArg1);


    // pArg2
    if (!PyLong_Check(pArg2)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"height\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg2)->tp_name);
        return NULL;
    }
    int height = PyLong_AsLong(pArg2);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getAspectCorrectedProjection(width, height);
            };
            Unigine::Player * unigine_object_ptr;
            // args
            int width;
            int height;
            // return
            Unigine::Math::mat4 retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->width = width;
    pRunner->height = height;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    Unigine::Math::mat4 retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: Unigine::Math::mat4
    return ret;
};

// public : setProjectionMode
static PyObject * unigine_Player_set_projection_mode(unigine_Player* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // Unigine::Camera::PROJECTION_MODE mode;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for Unigine::Camera::PROJECTION_MODE


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->setProjectionMode(mode);
            };
            Unigine::Player * unigine_object_ptr;
            // args
            Unigine::Camera::PROJECTION_MODE mode;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->mode = mode;
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

// public : getProjectionMode
static PyObject * unigine_Player_get_projection_mode(unigine_Player* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getProjectionMode();
            };
            Unigine::Player * unigine_object_ptr;
            // return
            Unigine::Camera::PROJECTION_MODE retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    Unigine::Camera::PROJECTION_MODE retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: Unigine::Camera::PROJECTION_MODE
    return ret;
};

// public : setFovMode
static PyObject * unigine_Player_set_fov_mode(unigine_Player* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // Unigine::Camera::FOV_MODE mode;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for Unigine::Camera::FOV_MODE


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->setFovMode(mode);
            };
            Unigine::Player * unigine_object_ptr;
            // args
            Unigine::Camera::FOV_MODE mode;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->mode = mode;
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

// public : getFovMode
static PyObject * unigine_Player_get_fov_mode(unigine_Player* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getFovMode();
            };
            Unigine::Player * unigine_object_ptr;
            // return
            Unigine::Camera::FOV_MODE retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    Unigine::Camera::FOV_MODE retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: Unigine::Camera::FOV_MODE
    return ret;
};

// public : getFovFixed
static PyObject * unigine_Player_get_fov_fixed(unigine_Player* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getFovFixed();
            };
            Unigine::Player * unigine_object_ptr;
            // return
            Unigine::Camera::FOV_FIXED retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    Unigine::Camera::FOV_FIXED retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: Unigine::Camera::FOV_FIXED
    return ret;
};

// public : setFov
static PyObject * unigine_Player_set_fov(unigine_Player* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // float fov;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyFloat_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"fov\" to %s must be a float object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    float fov = PyFloat_AsDouble(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->setFov(fov);
            };
            Unigine::Player * unigine_object_ptr;
            // args
            float fov;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->fov = fov;
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

// public : getFov
static PyObject * unigine_Player_get_fov(unigine_Player* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getFov();
            };
            Unigine::Player * unigine_object_ptr;
            // return
            float retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
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

// public : setFilmGate
static PyObject * unigine_Player_set_film_gate(unigine_Player* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // float gate;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyFloat_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"gate\" to %s must be a float object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    float gate = PyFloat_AsDouble(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->setFilmGate(gate);
            };
            Unigine::Player * unigine_object_ptr;
            // args
            float gate;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->gate = gate;
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

// public : getFilmGate
static PyObject * unigine_Player_get_film_gate(unigine_Player* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getFilmGate();
            };
            Unigine::Player * unigine_object_ptr;
            // return
            float retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
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

// public : setFocalLength
static PyObject * unigine_Player_set_focal_length(unigine_Player* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // float length;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyFloat_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"length\" to %s must be a float object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    float length = PyFloat_AsDouble(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->setFocalLength(length);
            };
            Unigine::Player * unigine_object_ptr;
            // args
            float length;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->length = length;
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

// public : getFocalLength
static PyObject * unigine_Player_get_focal_length(unigine_Player* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getFocalLength();
            };
            Unigine::Player * unigine_object_ptr;
            // return
            float retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
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

// public : setZNear
static PyObject * unigine_Player_set_z_near(unigine_Player* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // float znear;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyFloat_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"znear\" to %s must be a float object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    float znear = PyFloat_AsDouble(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->setZNear(znear);
            };
            Unigine::Player * unigine_object_ptr;
            // args
            float znear;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->znear = znear;
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

// public : getZNear
static PyObject * unigine_Player_get_z_near(unigine_Player* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getZNear();
            };
            Unigine::Player * unigine_object_ptr;
            // return
            float retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
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

// public : setZFar
static PyObject * unigine_Player_set_z_far(unigine_Player* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // float zfar;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyFloat_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"zfar\" to %s must be a float object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    float zfar = PyFloat_AsDouble(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->setZFar(zfar);
            };
            Unigine::Player * unigine_object_ptr;
            // args
            float zfar;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->zfar = zfar;
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

// public : getZFar
static PyObject * unigine_Player_get_z_far(unigine_Player* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getZFar();
            };
            Unigine::Player * unigine_object_ptr;
            // return
            float retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
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

// public : setOrthoHeight
static PyObject * unigine_Player_set_ortho_height(unigine_Player* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // float height;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyFloat_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"height\" to %s must be a float object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    float height = PyFloat_AsDouble(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->setOrthoHeight(height);
            };
            Unigine::Player * unigine_object_ptr;
            // args
            float height;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->height = height;
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

// public : getOrthoHeight
static PyObject * unigine_Player_get_ortho_height(unigine_Player* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getOrthoHeight();
            };
            Unigine::Player * unigine_object_ptr;
            // return
            float retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
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

// public : setUp
static PyObject * unigine_Player_set_up(unigine_Player* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const Unigine::Math::vec3 & up;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for const Unigine::Math::vec3 &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->setUp(up);
            };
            Unigine::Player * unigine_object_ptr;
            // args
            const Unigine::Math::vec3 & up;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->up = up;
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

// public : getUp
static PyObject * unigine_Player_get_up(unigine_Player* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getUp();
            };
            Unigine::Player * unigine_object_ptr;
            // return
            Unigine::Math::vec3 retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
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

// public : setObliqueFrustumPlane
static PyObject * unigine_Player_set_oblique_frustum_plane(unigine_Player* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const & plane;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for const &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->setObliqueFrustumPlane(plane);
            };
            Unigine::Player * unigine_object_ptr;
            // args
            const & plane;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->plane = plane;
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

// public : getObliqueFrustumPlane
static PyObject * unigine_Player_get_oblique_frustum_plane(unigine_Player* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getObliqueFrustumPlane();
            };
            Unigine::Player * unigine_object_ptr;
            // return
             retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
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

// public : setObliqueFrustum
static PyObject * unigine_Player_set_oblique_frustum(unigine_Player* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // bool frustum;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyBool_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"frustum\" to %s must be a bool object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    bool frustum = pArg1 == Py_True;


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->setObliqueFrustum(frustum);
            };
            Unigine::Player * unigine_object_ptr;
            // args
            bool frustum;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->frustum = frustum;
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

// public : isObliqueFrustum
static PyObject * unigine_Player_is_oblique_frustum(unigine_Player* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->isObliqueFrustum();
            };
            Unigine::Player * unigine_object_ptr;
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

// public : setViewportMask
static PyObject * unigine_Player_set_viewport_mask(unigine_Player* self, PyObject *args) {
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
            Unigine::Player * unigine_object_ptr;
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
static PyObject * unigine_Player_get_viewport_mask(unigine_Player* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getViewportMask();
            };
            Unigine::Player * unigine_object_ptr;
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

// public : setReflectionViewportMask
static PyObject * unigine_Player_set_reflection_viewport_mask(unigine_Player* self, PyObject *args) {
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
                unigine_object_ptr->setReflectionViewportMask(mask);
            };
            Unigine::Player * unigine_object_ptr;
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

// public : getReflectionViewportMask
static PyObject * unigine_Player_get_reflection_viewport_mask(unigine_Player* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getReflectionViewportMask();
            };
            Unigine::Player * unigine_object_ptr;
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

// public : setSourceMask
static PyObject * unigine_Player_set_source_mask(unigine_Player* self, PyObject *args) {
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
                unigine_object_ptr->setSourceMask(mask);
            };
            Unigine::Player * unigine_object_ptr;
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

// public : getSourceMask
static PyObject * unigine_Player_get_source_mask(unigine_Player* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getSourceMask();
            };
            Unigine::Player * unigine_object_ptr;
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

// public : setReverbMask
static PyObject * unigine_Player_set_reverb_mask(unigine_Player* self, PyObject *args) {
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
                unigine_object_ptr->setReverbMask(mask);
            };
            Unigine::Player * unigine_object_ptr;
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

// public : getReverbMask
static PyObject * unigine_Player_get_reverb_mask(unigine_Player* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getReverbMask();
            };
            Unigine::Player * unigine_object_ptr;
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

// public : setViewDirection
static PyObject * unigine_Player_set_view_direction(unigine_Player* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const Unigine::Math::vec3 & direction;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for const Unigine::Math::vec3 &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->setViewDirection(direction);
            };
            Unigine::Player * unigine_object_ptr;
            // args
            const Unigine::Math::vec3 & direction;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->direction = direction;
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

// public : getViewDirection
static PyObject * unigine_Player_get_view_direction(unigine_Player* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getViewDirection();
            };
            Unigine::Player * unigine_object_ptr;
            // return
            Unigine::Math::vec3 retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
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

// public : setVelocity
static PyObject * unigine_Player_set_velocity(unigine_Player* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const Unigine::Math::vec3 & velocity;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for const Unigine::Math::vec3 &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->setVelocity(velocity);
            };
            Unigine::Player * unigine_object_ptr;
            // args
            const Unigine::Math::vec3 & velocity;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->velocity = velocity;
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

// public : getVelocity
static PyObject * unigine_Player_get_velocity(unigine_Player* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getVelocity();
            };
            Unigine::Player * unigine_object_ptr;
            // return
            Unigine::Math::vec3 retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
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

// public : setControlled
static PyObject * unigine_Player_set_controlled(unigine_Player* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // bool controlled;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyBool_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"controlled\" to %s must be a bool object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    bool controlled = pArg1 == Py_True;


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->setControlled(controlled);
            };
            Unigine::Player * unigine_object_ptr;
            // args
            bool controlled;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->controlled = controlled;
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

// public : isControlled
static PyObject * unigine_Player_is_controlled(unigine_Player* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->isControlled();
            };
            Unigine::Player * unigine_object_ptr;
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

// public : setControls
static PyObject * unigine_Player_set_controls(unigine_Player* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const Unigine::Ptr<Unigine::Controls> & controls;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for const Unigine::Ptr<Unigine::Controls> &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->setControls(controls);
            };
            Unigine::Player * unigine_object_ptr;
            // args
            const Unigine::Ptr<Unigine::Controls> & controls;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->controls = controls;
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

// public : getControls
static PyObject * unigine_Player_get_controls(unigine_Player* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getControls();
            };
            Unigine::Player * unigine_object_ptr;
            // return
            Unigine::Ptr<Unigine::Controls> retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    Unigine::Ptr<Unigine::Controls> retOriginal = pRunner->retOriginal;
    delete pRunner;
    if (retOriginal == nullptr) {
        Py_INCREF(Py_None);
        ret = Py_None;
    } else {
        ret = PyUnigine::Controls::NewObject(retOriginal);
    }

    // end
    // return: Unigine::Ptr<Unigine::Controls>
    return ret;
};

// public : setMainPlayer
static PyObject * unigine_Player_set_main_player(unigine_Player* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // bool player;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyBool_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"player\" to %s must be a bool object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    bool player = pArg1 == Py_True;


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->setMainPlayer(player);
            };
            Unigine::Player * unigine_object_ptr;
            // args
            bool player;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
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

// public : isMainPlayer
static PyObject * unigine_Player_is_main_player(unigine_Player* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->isMainPlayer();
            };
            Unigine::Player * unigine_object_ptr;
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

// public : setListener
static PyObject * unigine_Player_set_listener(unigine_Player* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // bool listener;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyBool_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"listener\" to %s must be a bool object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    bool listener = pArg1 == Py_True;


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->setListener(listener);
            };
            Unigine::Player * unigine_object_ptr;
            // args
            bool listener;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->listener = listener;
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

// public : isListener
static PyObject * unigine_Player_is_listener(unigine_Player* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->isListener();
            };
            Unigine::Player * unigine_object_ptr;
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

// public : clearScriptableMaterials
static PyObject * unigine_Player_clear_scriptable_materials(unigine_Player* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->clearScriptableMaterials();
            };
            Unigine::Player * unigine_object_ptr;
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

// public : getNumScriptableMaterials
static PyObject * unigine_Player_get_num_scriptable_materials(unigine_Player* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getNumScriptableMaterials();
            };
            Unigine::Player * unigine_object_ptr;
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

// public : getScriptableMaterial
static PyObject * unigine_Player_get_scriptable_material(unigine_Player* self, PyObject *args) {
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
                retOriginal = unigine_object_ptr->getScriptableMaterial(num);
            };
            Unigine::Player * unigine_object_ptr;
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

// public : setScriptableMaterial
static PyObject * unigine_Player_set_scriptable_material(unigine_Player* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int num;
    PyObject *pArg2 = NULL; // const Unigine::Ptr<Unigine::Material> & material;
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
TODO for const Unigine::Ptr<Unigine::Material> &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->setScriptableMaterial(num, material);
            };
            Unigine::Player * unigine_object_ptr;
            // args
            int num;
            const Unigine::Ptr<Unigine::Material> & material;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->num = num;
    pRunner->material = material;
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

// public : insertScriptableMaterial
static PyObject * unigine_Player_insert_scriptable_material(unigine_Player* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int num;
    PyObject *pArg2 = NULL; // const Unigine::Ptr<Unigine::Material> & material;
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
TODO for const Unigine::Ptr<Unigine::Material> &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->insertScriptableMaterial(num, material);
            };
            Unigine::Player * unigine_object_ptr;
            // args
            int num;
            const Unigine::Ptr<Unigine::Material> & material;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->num = num;
    pRunner->material = material;
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

// public : findScriptableMaterial
static PyObject * unigine_Player_find_scriptable_material(unigine_Player* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const Unigine::Ptr<Unigine::Material> & material;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for const Unigine::Ptr<Unigine::Material> &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->findScriptableMaterial(material);
            };
            Unigine::Player * unigine_object_ptr;
            // args
            const Unigine::Ptr<Unigine::Material> & material;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->material = material;
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

// public : addScriptableMaterial
static PyObject * unigine_Player_add_scriptable_material(unigine_Player* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const Unigine::Ptr<Unigine::Material> & material;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for const Unigine::Ptr<Unigine::Material> &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->addScriptableMaterial(material);
            };
            Unigine::Player * unigine_object_ptr;
            // args
            const Unigine::Ptr<Unigine::Material> & material;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->material = material;
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

// public : removeScriptableMaterial
static PyObject * unigine_Player_remove_scriptable_material(unigine_Player* self, PyObject *args) {
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
                unigine_object_ptr->removeScriptableMaterial(num);
            };
            Unigine::Player * unigine_object_ptr;
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

// public : swapScriptableMaterials
static PyObject * unigine_Player_swap_scriptable_materials(unigine_Player* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int num_0;
    PyObject *pArg2 = NULL; // int num_1;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"num_0\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int num_0 = PyLong_AsLong(pArg1);


    // pArg2
    if (!PyLong_Check(pArg2)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"num_1\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg2)->tp_name);
        return NULL;
    }
    int num_1 = PyLong_AsLong(pArg2);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->swapScriptableMaterials(num_0, num_1);
            };
            Unigine::Player * unigine_object_ptr;
            // args
            int num_0;
            int num_1;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->num_0 = num_0;
    pRunner->num_1 = num_1;
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

// public : setScriptableMaterialEnabled
static PyObject * unigine_Player_set_scriptable_material_enabled(unigine_Player* self, PyObject *args) {
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
                unigine_object_ptr->setScriptableMaterialEnabled(num, enabled);
            };
            Unigine::Player * unigine_object_ptr;
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

// public : getScriptableMaterialEnabled
static PyObject * unigine_Player_get_scriptable_material_enabled(unigine_Player* self, PyObject *args) {
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
                retOriginal = unigine_object_ptr->getScriptableMaterialEnabled(num);
            };
            Unigine::Player * unigine_object_ptr;
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

// public : setCamera
static PyObject * unigine_Player_set_camera(unigine_Player* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const Unigine::Ptr<Unigine::Camera> & camera;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for const Unigine::Ptr<Unigine::Camera> &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->setCamera(camera);
            };
            Unigine::Player * unigine_object_ptr;
            // args
            const Unigine::Ptr<Unigine::Camera> & camera;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->camera = camera;
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

// public : getCamera
static PyObject * unigine_Player_get_camera(unigine_Player* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getCamera();
            };
            Unigine::Player * unigine_object_ptr;
            // return
            Unigine::Ptr<Unigine::Camera> retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    Unigine::Ptr<Unigine::Camera> retOriginal = pRunner->retOriginal;
    delete pRunner;
    if (retOriginal == nullptr) {
        Py_INCREF(Py_None);
        ret = Py_None;
    } else {
        ret = PyUnigine::Camera::NewObject(retOriginal);
    }

    // end
    // return: Unigine::Ptr<Unigine::Camera>
    return ret;
};

// public : updateControls
static PyObject * unigine_Player_update_controls(unigine_Player* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // float ifps;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyFloat_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"ifps\" to %s must be a float object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    float ifps = PyFloat_AsDouble(pArg1);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->updateControls(ifps);
            };
            Unigine::Player * unigine_object_ptr;
            // args
            float ifps;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->ifps = ifps;
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

// public : flushTransform
static PyObject * unigine_Player_flush_transform(unigine_Player* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->flushTransform();
            };
            Unigine::Player * unigine_object_ptr;
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

// public : getDirectionFromMainWindow
static PyObject * unigine_Player_get_direction_from_main_window(unigine_Player* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // & p0;
    PyObject *pArg2 = NULL; // & p1;
    PyObject *pArg3 = NULL; // int mouse_x;
    PyObject *pArg4 = NULL; // int mouse_y;
    PyArg_ParseTuple(args, "OOOO", &pArg1, &pArg2, &pArg3, &pArg4);

    // pArg1
TODO for &


    // pArg2
TODO for &


    // pArg3
    if (!PyLong_Check(pArg3)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"mouse_x\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg3)->tp_name);
        return NULL;
    }
    int mouse_x = PyLong_AsLong(pArg3);


    // pArg4
    if (!PyLong_Check(pArg4)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"mouse_y\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg4)->tp_name);
        return NULL;
    }
    int mouse_y = PyLong_AsLong(pArg4);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->getDirectionFromMainWindow(p0, p1, mouse_x, mouse_y);
            };
            Unigine::Player * unigine_object_ptr;
            // args
            & p0;
            & p1;
            int mouse_x;
            int mouse_y;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->p0 = p0;
    pRunner->p1 = p1;
    pRunner->mouse_x = mouse_x;
    pRunner->mouse_y = mouse_y;
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

// public : getDirectionFromMainWindow
static PyObject * unigine_Player_get_direction_from_main_window(unigine_Player* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int mouse_x;
    PyObject *pArg2 = NULL; // int mouse_y;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"mouse_x\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int mouse_x = PyLong_AsLong(pArg1);


    // pArg2
    if (!PyLong_Check(pArg2)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"mouse_y\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg2)->tp_name);
        return NULL;
    }
    int mouse_y = PyLong_AsLong(pArg2);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getDirectionFromMainWindow(mouse_x, mouse_y);
            };
            Unigine::Player * unigine_object_ptr;
            // args
            int mouse_x;
            int mouse_y;
            // return
            Unigine::Math::vec3 retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->mouse_x = mouse_x;
    pRunner->mouse_y = mouse_y;
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

// public : getDirectionFromWindow
static PyObject * unigine_Player_get_direction_from_window(unigine_Player* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // & p0;
    PyObject *pArg2 = NULL; // & p1;
    PyObject *pArg3 = NULL; // int mouse_x;
    PyObject *pArg4 = NULL; // int mouse_y;
    PyObject *pArg5 = NULL; // const Unigine::Ptr<Unigine::EngineWindowViewport> & window;
    PyArg_ParseTuple(args, "OOOOO", &pArg1, &pArg2, &pArg3, &pArg4, &pArg5);

    // pArg1
TODO for &


    // pArg2
TODO for &


    // pArg3
    if (!PyLong_Check(pArg3)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"mouse_x\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg3)->tp_name);
        return NULL;
    }
    int mouse_x = PyLong_AsLong(pArg3);


    // pArg4
    if (!PyLong_Check(pArg4)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"mouse_y\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg4)->tp_name);
        return NULL;
    }
    int mouse_y = PyLong_AsLong(pArg4);


    // pArg5
TODO for const Unigine::Ptr<Unigine::EngineWindowViewport> &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->getDirectionFromWindow(p0, p1, mouse_x, mouse_y, window);
            };
            Unigine::Player * unigine_object_ptr;
            // args
            & p0;
            & p1;
            int mouse_x;
            int mouse_y;
            const Unigine::Ptr<Unigine::EngineWindowViewport> & window;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->p0 = p0;
    pRunner->p1 = p1;
    pRunner->mouse_x = mouse_x;
    pRunner->mouse_y = mouse_y;
    pRunner->window = window;
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

// public : getDirectionFromWindow
static PyObject * unigine_Player_get_direction_from_window(unigine_Player* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int mouse_x;
    PyObject *pArg2 = NULL; // int mouse_y;
    PyObject *pArg3 = NULL; // const Unigine::Ptr<Unigine::EngineWindowViewport> & window;
    PyArg_ParseTuple(args, "OOO", &pArg1, &pArg2, &pArg3);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"mouse_x\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int mouse_x = PyLong_AsLong(pArg1);


    // pArg2
    if (!PyLong_Check(pArg2)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"mouse_y\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg2)->tp_name);
        return NULL;
    }
    int mouse_y = PyLong_AsLong(pArg2);


    // pArg3
TODO for const Unigine::Ptr<Unigine::EngineWindowViewport> &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getDirectionFromWindow(mouse_x, mouse_y, window);
            };
            Unigine::Player * unigine_object_ptr;
            // args
            int mouse_x;
            int mouse_y;
            const Unigine::Ptr<Unigine::EngineWindowViewport> & window;
            // return
            Unigine::Math::vec3 retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->mouse_x = mouse_x;
    pRunner->mouse_y = mouse_y;
    pRunner->window = window;
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

// public : getDirectionFromScreen
static PyObject * unigine_Player_get_direction_from_screen(unigine_Player* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // & p0;
    PyObject *pArg2 = NULL; // & p1;
    PyObject *pArg3 = NULL; // int mouse_x;
    PyObject *pArg4 = NULL; // int mouse_y;
    PyObject *pArg5 = NULL; // int screen_x;
    PyObject *pArg6 = NULL; // int screen_y;
    PyObject *pArg7 = NULL; // int screen_width;
    PyObject *pArg8 = NULL; // int screen_height;
    PyArg_ParseTuple(args, "OOOOOOOO", &pArg1, &pArg2, &pArg3, &pArg4, &pArg5, &pArg6, &pArg7, &pArg8);

    // pArg1
TODO for &


    // pArg2
TODO for &


    // pArg3
    if (!PyLong_Check(pArg3)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"mouse_x\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg3)->tp_name);
        return NULL;
    }
    int mouse_x = PyLong_AsLong(pArg3);


    // pArg4
    if (!PyLong_Check(pArg4)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"mouse_y\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg4)->tp_name);
        return NULL;
    }
    int mouse_y = PyLong_AsLong(pArg4);


    // pArg5
    if (!PyLong_Check(pArg5)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"screen_x\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg5)->tp_name);
        return NULL;
    }
    int screen_x = PyLong_AsLong(pArg5);


    // pArg6
    if (!PyLong_Check(pArg6)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"screen_y\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg6)->tp_name);
        return NULL;
    }
    int screen_y = PyLong_AsLong(pArg6);


    // pArg7
    if (!PyLong_Check(pArg7)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"screen_width\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg7)->tp_name);
        return NULL;
    }
    int screen_width = PyLong_AsLong(pArg7);


    // pArg8
    if (!PyLong_Check(pArg8)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"screen_height\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg8)->tp_name);
        return NULL;
    }
    int screen_height = PyLong_AsLong(pArg8);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                unigine_object_ptr->getDirectionFromScreen(p0, p1, mouse_x, mouse_y, screen_x, screen_y, screen_width, screen_height);
            };
            Unigine::Player * unigine_object_ptr;
            // args
            & p0;
            & p1;
            int mouse_x;
            int mouse_y;
            int screen_x;
            int screen_y;
            int screen_width;
            int screen_height;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->p0 = p0;
    pRunner->p1 = p1;
    pRunner->mouse_x = mouse_x;
    pRunner->mouse_y = mouse_y;
    pRunner->screen_x = screen_x;
    pRunner->screen_y = screen_y;
    pRunner->screen_width = screen_width;
    pRunner->screen_height = screen_height;
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

// public : getDirectionFromScreen
static PyObject * unigine_Player_get_direction_from_screen(unigine_Player* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int mouse_x;
    PyObject *pArg2 = NULL; // int mouse_y;
    PyObject *pArg3 = NULL; // int screen_x;
    PyObject *pArg4 = NULL; // int screen_y;
    PyObject *pArg5 = NULL; // int screen_width;
    PyObject *pArg6 = NULL; // int screen_height;
    PyArg_ParseTuple(args, "OOOOOO", &pArg1, &pArg2, &pArg3, &pArg4, &pArg5, &pArg6);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"mouse_x\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int mouse_x = PyLong_AsLong(pArg1);


    // pArg2
    if (!PyLong_Check(pArg2)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"mouse_y\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg2)->tp_name);
        return NULL;
    }
    int mouse_y = PyLong_AsLong(pArg2);


    // pArg3
    if (!PyLong_Check(pArg3)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"screen_x\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg3)->tp_name);
        return NULL;
    }
    int screen_x = PyLong_AsLong(pArg3);


    // pArg4
    if (!PyLong_Check(pArg4)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"screen_y\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg4)->tp_name);
        return NULL;
    }
    int screen_y = PyLong_AsLong(pArg4);


    // pArg5
    if (!PyLong_Check(pArg5)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"screen_width\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg5)->tp_name);
        return NULL;
    }
    int screen_width = PyLong_AsLong(pArg5);


    // pArg6
    if (!PyLong_Check(pArg6)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"screen_height\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg6)->tp_name);
        return NULL;
    }
    int screen_height = PyLong_AsLong(pArg6);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getDirectionFromScreen(mouse_x, mouse_y, screen_x, screen_y, screen_width, screen_height);
            };
            Unigine::Player * unigine_object_ptr;
            // args
            int mouse_x;
            int mouse_y;
            int screen_x;
            int screen_y;
            int screen_width;
            int screen_height;
            // return
            Unigine::Math::vec3 retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->mouse_x = mouse_x;
    pRunner->mouse_y = mouse_y;
    pRunner->screen_x = screen_x;
    pRunner->screen_y = screen_y;
    pRunner->screen_width = screen_width;
    pRunner->screen_height = screen_height;
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

// public : getProjectionFromMainWindow
static PyObject * unigine_Player_get_projection_from_main_window(unigine_Player* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int x0;
    PyObject *pArg2 = NULL; // int y0;
    PyObject *pArg3 = NULL; // int x1;
    PyObject *pArg4 = NULL; // int y1;
    PyArg_ParseTuple(args, "OOOO", &pArg1, &pArg2, &pArg3, &pArg4);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"x0\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int x0 = PyLong_AsLong(pArg1);


    // pArg2
    if (!PyLong_Check(pArg2)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"y0\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg2)->tp_name);
        return NULL;
    }
    int y0 = PyLong_AsLong(pArg2);


    // pArg3
    if (!PyLong_Check(pArg3)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"x1\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg3)->tp_name);
        return NULL;
    }
    int x1 = PyLong_AsLong(pArg3);


    // pArg4
    if (!PyLong_Check(pArg4)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"y1\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg4)->tp_name);
        return NULL;
    }
    int y1 = PyLong_AsLong(pArg4);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getProjectionFromMainWindow(x0, y0, x1, y1);
            };
            Unigine::Player * unigine_object_ptr;
            // args
            int x0;
            int y0;
            int x1;
            int y1;
            // return
            Unigine::Math::mat4 retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->x0 = x0;
    pRunner->y0 = y0;
    pRunner->x1 = x1;
    pRunner->y1 = y1;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    Unigine::Math::mat4 retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: Unigine::Math::mat4
    return ret;
};

// public : getProjectionFromWindow
static PyObject * unigine_Player_get_projection_from_window(unigine_Player* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int x0;
    PyObject *pArg2 = NULL; // int y0;
    PyObject *pArg3 = NULL; // int x1;
    PyObject *pArg4 = NULL; // int y1;
    PyObject *pArg5 = NULL; // const Unigine::Ptr<Unigine::EngineWindowViewport> & window;
    PyArg_ParseTuple(args, "OOOOO", &pArg1, &pArg2, &pArg3, &pArg4, &pArg5);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"x0\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int x0 = PyLong_AsLong(pArg1);


    // pArg2
    if (!PyLong_Check(pArg2)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"y0\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg2)->tp_name);
        return NULL;
    }
    int y0 = PyLong_AsLong(pArg2);


    // pArg3
    if (!PyLong_Check(pArg3)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"x1\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg3)->tp_name);
        return NULL;
    }
    int x1 = PyLong_AsLong(pArg3);


    // pArg4
    if (!PyLong_Check(pArg4)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"y1\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg4)->tp_name);
        return NULL;
    }
    int y1 = PyLong_AsLong(pArg4);


    // pArg5
TODO for const Unigine::Ptr<Unigine::EngineWindowViewport> &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getProjectionFromWindow(x0, y0, x1, y1, window);
            };
            Unigine::Player * unigine_object_ptr;
            // args
            int x0;
            int y0;
            int x1;
            int y1;
            const Unigine::Ptr<Unigine::EngineWindowViewport> & window;
            // return
            Unigine::Math::mat4 retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->x0 = x0;
    pRunner->y0 = y0;
    pRunner->x1 = x1;
    pRunner->y1 = y1;
    pRunner->window = window;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    Unigine::Math::mat4 retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: Unigine::Math::mat4
    return ret;
};

// public : getProjectionFromScreen
static PyObject * unigine_Player_get_projection_from_screen(unigine_Player* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int x0;
    PyObject *pArg2 = NULL; // int y0;
    PyObject *pArg3 = NULL; // int x1;
    PyObject *pArg4 = NULL; // int y1;
    PyObject *pArg5 = NULL; // int screen_width;
    PyObject *pArg6 = NULL; // int screen_height;
    PyArg_ParseTuple(args, "OOOOOO", &pArg1, &pArg2, &pArg3, &pArg4, &pArg5, &pArg6);

    // pArg1
    if (!PyLong_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"x0\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    int x0 = PyLong_AsLong(pArg1);


    // pArg2
    if (!PyLong_Check(pArg2)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"y0\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg2)->tp_name);
        return NULL;
    }
    int y0 = PyLong_AsLong(pArg2);


    // pArg3
    if (!PyLong_Check(pArg3)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"x1\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg3)->tp_name);
        return NULL;
    }
    int x1 = PyLong_AsLong(pArg3);


    // pArg4
    if (!PyLong_Check(pArg4)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"y1\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg4)->tp_name);
        return NULL;
    }
    int y1 = PyLong_AsLong(pArg4);


    // pArg5
    if (!PyLong_Check(pArg5)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"screen_width\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg5)->tp_name);
        return NULL;
    }
    int screen_width = PyLong_AsLong(pArg5);


    // pArg6
    if (!PyLong_Check(pArg6)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"screen_height\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg6)->tp_name);
        return NULL;
    }
    int screen_height = PyLong_AsLong(pArg6);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getProjectionFromScreen(x0, y0, x1, y1, screen_width, screen_height);
            };
            Unigine::Player * unigine_object_ptr;
            // args
            int x0;
            int y0;
            int x1;
            int y1;
            int screen_width;
            int screen_height;
            // return
            Unigine::Math::mat4 retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->x0 = x0;
    pRunner->y0 = y0;
    pRunner->x1 = x1;
    pRunner->y1 = y1;
    pRunner->screen_width = screen_width;
    pRunner->screen_height = screen_height;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    Unigine::Math::mat4 retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: Unigine::Math::mat4
    return ret;
};

// public : getMainWindowPosition
static PyObject * unigine_Player_get_main_window_position(unigine_Player* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int & x;
    PyObject *pArg2 = NULL; // int & y;
    PyObject *pArg3 = NULL; // const & point;
    PyArg_ParseTuple(args, "OOO", &pArg1, &pArg2, &pArg3);

    // pArg1
TODO for int &


    // pArg2
TODO for int &


    // pArg3
TODO for const &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getMainWindowPosition(x, y, point);
            };
            Unigine::Player * unigine_object_ptr;
            // args
            int & x;
            int & y;
            const & point;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->x = x;
    pRunner->y = y;
    pRunner->point = point;
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

// public : getWindowPosition
static PyObject * unigine_Player_get_window_position(unigine_Player* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int & x;
    PyObject *pArg2 = NULL; // int & y;
    PyObject *pArg3 = NULL; // const & point;
    PyObject *pArg4 = NULL; // const Unigine::Ptr<Unigine::EngineWindowViewport> & window;
    PyArg_ParseTuple(args, "OOOO", &pArg1, &pArg2, &pArg3, &pArg4);

    // pArg1
TODO for int &


    // pArg2
TODO for int &


    // pArg3
TODO for const &


    // pArg4
TODO for const Unigine::Ptr<Unigine::EngineWindowViewport> &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getWindowPosition(x, y, point, window);
            };
            Unigine::Player * unigine_object_ptr;
            // args
            int & x;
            int & y;
            const & point;
            const Unigine::Ptr<Unigine::EngineWindowViewport> & window;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->x = x;
    pRunner->y = y;
    pRunner->point = point;
    pRunner->window = window;
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

// public : getScreenPosition
static PyObject * unigine_Player_get_screen_position(unigine_Player* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // int & x;
    PyObject *pArg2 = NULL; // int & y;
    PyObject *pArg3 = NULL; // const & point;
    PyObject *pArg4 = NULL; // int screen_width;
    PyObject *pArg5 = NULL; // int screen_height;
    PyArg_ParseTuple(args, "OOOOO", &pArg1, &pArg2, &pArg3, &pArg4, &pArg5);

    // pArg1
TODO for int &


    // pArg2
TODO for int &


    // pArg3
TODO for const &


    // pArg4
    if (!PyLong_Check(pArg4)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"screen_width\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg4)->tp_name);
        return NULL;
    }
    int screen_width = PyLong_AsLong(pArg4);


    // pArg5
    if (!PyLong_Check(pArg5)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"screen_height\" to %s must be a int object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg5)->tp_name);
        return NULL;
    }
    int screen_height = PyLong_AsLong(pArg5);


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getScreenPosition(x, y, point, screen_width, screen_height);
            };
            Unigine::Player * unigine_object_ptr;
            // args
            int & x;
            int & y;
            const & point;
            int screen_width;
            int screen_height;
            // return
            int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    pRunner->x = x;
    pRunner->y = y;
    pRunner->point = point;
    pRunner->screen_width = screen_width;
    pRunner->screen_height = screen_height;
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


static PyMethodDef unigine_Player_methods[] = {
    {
        "convertible", (PyCFunction)unigine_Player_convertible, METH_STATIC|METH_VARARGS,
        "public (static): convertible"
    },
    {
        "set_projection", (PyCFunction)unigine_Player_set_projection, METH_VARARGS,
        "public : setProjection"
    },
    {
        "get_projection", (PyCFunction)unigine_Player_get_projection, METH_NOARGS,
        "public : getProjection"
    },
    {
        "get_aspect_corrected_projection", (PyCFunction)unigine_Player_get_aspect_corrected_projection, METH_VARARGS,
        "public : getAspectCorrectedProjection"
    },
    {
        "set_projection_mode", (PyCFunction)unigine_Player_set_projection_mode, METH_VARARGS,
        "public : setProjectionMode"
    },
    {
        "get_projection_mode", (PyCFunction)unigine_Player_get_projection_mode, METH_NOARGS,
        "public : getProjectionMode"
    },
    {
        "set_fov_mode", (PyCFunction)unigine_Player_set_fov_mode, METH_VARARGS,
        "public : setFovMode"
    },
    {
        "get_fov_mode", (PyCFunction)unigine_Player_get_fov_mode, METH_NOARGS,
        "public : getFovMode"
    },
    {
        "get_fov_fixed", (PyCFunction)unigine_Player_get_fov_fixed, METH_NOARGS,
        "public : getFovFixed"
    },
    {
        "set_fov", (PyCFunction)unigine_Player_set_fov, METH_VARARGS,
        "public : setFov"
    },
    {
        "get_fov", (PyCFunction)unigine_Player_get_fov, METH_NOARGS,
        "public : getFov"
    },
    {
        "set_film_gate", (PyCFunction)unigine_Player_set_film_gate, METH_VARARGS,
        "public : setFilmGate"
    },
    {
        "get_film_gate", (PyCFunction)unigine_Player_get_film_gate, METH_NOARGS,
        "public : getFilmGate"
    },
    {
        "set_focal_length", (PyCFunction)unigine_Player_set_focal_length, METH_VARARGS,
        "public : setFocalLength"
    },
    {
        "get_focal_length", (PyCFunction)unigine_Player_get_focal_length, METH_NOARGS,
        "public : getFocalLength"
    },
    {
        "set_z_near", (PyCFunction)unigine_Player_set_z_near, METH_VARARGS,
        "public : setZNear"
    },
    {
        "get_z_near", (PyCFunction)unigine_Player_get_z_near, METH_NOARGS,
        "public : getZNear"
    },
    {
        "set_z_far", (PyCFunction)unigine_Player_set_z_far, METH_VARARGS,
        "public : setZFar"
    },
    {
        "get_z_far", (PyCFunction)unigine_Player_get_z_far, METH_NOARGS,
        "public : getZFar"
    },
    {
        "set_ortho_height", (PyCFunction)unigine_Player_set_ortho_height, METH_VARARGS,
        "public : setOrthoHeight"
    },
    {
        "get_ortho_height", (PyCFunction)unigine_Player_get_ortho_height, METH_NOARGS,
        "public : getOrthoHeight"
    },
    {
        "set_up", (PyCFunction)unigine_Player_set_up, METH_VARARGS,
        "public : setUp"
    },
    {
        "get_up", (PyCFunction)unigine_Player_get_up, METH_NOARGS,
        "public : getUp"
    },
    {
        "set_oblique_frustum_plane", (PyCFunction)unigine_Player_set_oblique_frustum_plane, METH_VARARGS,
        "public : setObliqueFrustumPlane"
    },
    {
        "get_oblique_frustum_plane", (PyCFunction)unigine_Player_get_oblique_frustum_plane, METH_NOARGS,
        "public : getObliqueFrustumPlane"
    },
    {
        "set_oblique_frustum", (PyCFunction)unigine_Player_set_oblique_frustum, METH_VARARGS,
        "public : setObliqueFrustum"
    },
    {
        "is_oblique_frustum", (PyCFunction)unigine_Player_is_oblique_frustum, METH_NOARGS,
        "public : isObliqueFrustum"
    },
    {
        "set_viewport_mask", (PyCFunction)unigine_Player_set_viewport_mask, METH_VARARGS,
        "public : setViewportMask"
    },
    {
        "get_viewport_mask", (PyCFunction)unigine_Player_get_viewport_mask, METH_NOARGS,
        "public : getViewportMask"
    },
    {
        "set_reflection_viewport_mask", (PyCFunction)unigine_Player_set_reflection_viewport_mask, METH_VARARGS,
        "public : setReflectionViewportMask"
    },
    {
        "get_reflection_viewport_mask", (PyCFunction)unigine_Player_get_reflection_viewport_mask, METH_NOARGS,
        "public : getReflectionViewportMask"
    },
    {
        "set_source_mask", (PyCFunction)unigine_Player_set_source_mask, METH_VARARGS,
        "public : setSourceMask"
    },
    {
        "get_source_mask", (PyCFunction)unigine_Player_get_source_mask, METH_NOARGS,
        "public : getSourceMask"
    },
    {
        "set_reverb_mask", (PyCFunction)unigine_Player_set_reverb_mask, METH_VARARGS,
        "public : setReverbMask"
    },
    {
        "get_reverb_mask", (PyCFunction)unigine_Player_get_reverb_mask, METH_NOARGS,
        "public : getReverbMask"
    },
    {
        "set_view_direction", (PyCFunction)unigine_Player_set_view_direction, METH_VARARGS,
        "public : setViewDirection"
    },
    {
        "get_view_direction", (PyCFunction)unigine_Player_get_view_direction, METH_NOARGS,
        "public : getViewDirection"
    },
    {
        "set_velocity", (PyCFunction)unigine_Player_set_velocity, METH_VARARGS,
        "public : setVelocity"
    },
    {
        "get_velocity", (PyCFunction)unigine_Player_get_velocity, METH_NOARGS,
        "public : getVelocity"
    },
    {
        "set_controlled", (PyCFunction)unigine_Player_set_controlled, METH_VARARGS,
        "public : setControlled"
    },
    {
        "is_controlled", (PyCFunction)unigine_Player_is_controlled, METH_NOARGS,
        "public : isControlled"
    },
    {
        "set_controls", (PyCFunction)unigine_Player_set_controls, METH_VARARGS,
        "public : setControls"
    },
    {
        "get_controls", (PyCFunction)unigine_Player_get_controls, METH_NOARGS,
        "public : getControls"
    },
    {
        "set_main_player", (PyCFunction)unigine_Player_set_main_player, METH_VARARGS,
        "public : setMainPlayer"
    },
    {
        "is_main_player", (PyCFunction)unigine_Player_is_main_player, METH_NOARGS,
        "public : isMainPlayer"
    },
    {
        "set_listener", (PyCFunction)unigine_Player_set_listener, METH_VARARGS,
        "public : setListener"
    },
    {
        "is_listener", (PyCFunction)unigine_Player_is_listener, METH_NOARGS,
        "public : isListener"
    },
    {
        "clear_scriptable_materials", (PyCFunction)unigine_Player_clear_scriptable_materials, METH_NOARGS,
        "public : clearScriptableMaterials"
    },
    {
        "get_num_scriptable_materials", (PyCFunction)unigine_Player_get_num_scriptable_materials, METH_NOARGS,
        "public : getNumScriptableMaterials"
    },
    {
        "get_scriptable_material", (PyCFunction)unigine_Player_get_scriptable_material, METH_VARARGS,
        "public : getScriptableMaterial"
    },
    {
        "set_scriptable_material", (PyCFunction)unigine_Player_set_scriptable_material, METH_VARARGS,
        "public : setScriptableMaterial"
    },
    {
        "insert_scriptable_material", (PyCFunction)unigine_Player_insert_scriptable_material, METH_VARARGS,
        "public : insertScriptableMaterial"
    },
    {
        "find_scriptable_material", (PyCFunction)unigine_Player_find_scriptable_material, METH_VARARGS,
        "public : findScriptableMaterial"
    },
    {
        "add_scriptable_material", (PyCFunction)unigine_Player_add_scriptable_material, METH_VARARGS,
        "public : addScriptableMaterial"
    },
    {
        "remove_scriptable_material", (PyCFunction)unigine_Player_remove_scriptable_material, METH_VARARGS,
        "public : removeScriptableMaterial"
    },
    {
        "swap_scriptable_materials", (PyCFunction)unigine_Player_swap_scriptable_materials, METH_VARARGS,
        "public : swapScriptableMaterials"
    },
    {
        "set_scriptable_material_enabled", (PyCFunction)unigine_Player_set_scriptable_material_enabled, METH_VARARGS,
        "public : setScriptableMaterialEnabled"
    },
    {
        "get_scriptable_material_enabled", (PyCFunction)unigine_Player_get_scriptable_material_enabled, METH_VARARGS,
        "public : getScriptableMaterialEnabled"
    },
    {
        "set_camera", (PyCFunction)unigine_Player_set_camera, METH_VARARGS,
        "public : setCamera"
    },
    {
        "get_camera", (PyCFunction)unigine_Player_get_camera, METH_NOARGS,
        "public : getCamera"
    },
    {
        "update_controls", (PyCFunction)unigine_Player_update_controls, METH_VARARGS,
        "public : updateControls"
    },
    {
        "flush_transform", (PyCFunction)unigine_Player_flush_transform, METH_NOARGS,
        "public : flushTransform"
    },
    {
        "get_direction_from_main_window", (PyCFunction)unigine_Player_get_direction_from_main_window, METH_VARARGS,
        "public : getDirectionFromMainWindow"
    },
    {
        "get_direction_from_main_window", (PyCFunction)unigine_Player_get_direction_from_main_window, METH_VARARGS,
        "public : getDirectionFromMainWindow"
    },
    {
        "get_direction_from_window", (PyCFunction)unigine_Player_get_direction_from_window, METH_VARARGS,
        "public : getDirectionFromWindow"
    },
    {
        "get_direction_from_window", (PyCFunction)unigine_Player_get_direction_from_window, METH_VARARGS,
        "public : getDirectionFromWindow"
    },
    {
        "get_direction_from_screen", (PyCFunction)unigine_Player_get_direction_from_screen, METH_VARARGS,
        "public : getDirectionFromScreen"
    },
    {
        "get_direction_from_screen", (PyCFunction)unigine_Player_get_direction_from_screen, METH_VARARGS,
        "public : getDirectionFromScreen"
    },
    {
        "get_projection_from_main_window", (PyCFunction)unigine_Player_get_projection_from_main_window, METH_VARARGS,
        "public : getProjectionFromMainWindow"
    },
    {
        "get_projection_from_window", (PyCFunction)unigine_Player_get_projection_from_window, METH_VARARGS,
        "public : getProjectionFromWindow"
    },
    {
        "get_projection_from_screen", (PyCFunction)unigine_Player_get_projection_from_screen, METH_VARARGS,
        "public : getProjectionFromScreen"
    },
    {
        "get_main_window_position", (PyCFunction)unigine_Player_get_main_window_position, METH_VARARGS,
        "public : getMainWindowPosition"
    },
    {
        "get_window_position", (PyCFunction)unigine_Player_get_window_position, METH_VARARGS,
        "public : getWindowPosition"
    },
    {
        "get_screen_position", (PyCFunction)unigine_Player_get_screen_position, METH_VARARGS,
        "public : getScreenPosition"
    },
    {NULL}  /* Sentinel */
};

static PyTypeObject unigine_PlayerType = {
    PyVarObject_HEAD_INIT(NULL, 0)
    "unigine.Player",             // tp_name
    sizeof(unigine_Player) + 256, // tp_basicsize  (TODO magic 256 bytes!!!)
    0,                         // tp_itemsize
    (destructor)unigine_Player_dealloc,   // tp_dealloc
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
    "Player Object",         // tp_doc
    0,                         // traverseproc tp_traverse
    0,                         // inquiry tp_clear
    0,                         // richcmpfunc tp_richcompare
    0,                         // Py_ssize_t tp_weaklistoffset
    0,                         // getiterfunc tp_iter
    0,                         // iternextfunc tp_iternext
    unigine_Player_methods, // tp_methods
    0, // tp_members
    0, // tp_getset
    0, // tp_base
    0, // tp_dict
    0, // tp_descr_get
    0, // tp_descr_set
    0, // tp_dictoffset
    (initproc)unigine_Player_init, // tp_init
    0, // tp_alloc
    unigine_Player_new, // tp_new
};


// UniginePyTypeObjectPlayer

bool Python3UniginePlayer::isReady() {
    // Initialize tp_dict with empty dictionary
    if (!unigine_PlayerType.tp_dict) {
        unigine_PlayerType.tp_dict = PyDict_New();

    }
    if (PyType_Ready(&unigine_PlayerType) < 0) {
        return false;
    }
    return true;
}

bool Python3UniginePlayer::addClassDefinitionToModule(PyObject* pModule) {
    Py_INCREF(&unigine_PlayerType);
    if (PyModule_AddObject(pModule, "Player", (PyObject *)&unigine_PlayerType) < 0) {
        Py_DECREF(&unigine_PlayerType);
        return false;
    }
    return true;
}

PyObject * Player::NewObject(Unigine::Player * unigine_object_ptr) {
    // std::cout << "sizeof(unigine_Player) = " << sizeof(unigine_Player) << std::endl;
    unigine_Player *pInst = PyObject_New(unigine_Player, &unigine_PlayerType);
    pInst->unigine_object_ptr = unigine_object_ptr;
    // Py_INCREF(pInst);
    return (PyObject *)pInst;
}

Unigine::Player * Player::Convert(PyObject *pObject) {
    if (Py_IS_TYPE(pObject, &unigine_PlayerType) == 0) {
        Unigine::Log::error("Invalid type, expected 'Unigine::Player *', but got some another");
    }
    unigine_Player *pInst = (unigine_Player *)pObject;
    return pInst->unigine_object_ptr;
}

}; // namespace PyUnigine

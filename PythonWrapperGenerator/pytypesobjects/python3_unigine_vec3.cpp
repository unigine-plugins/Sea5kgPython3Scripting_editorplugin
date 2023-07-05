// this file automaticly generated from Uniginevec3.h
#include "python3_unigine_vec3.h"

#include <string>
#include <UnigineMathLibVec3.h>
#include <UnigineLog.h>
#include <Python.h>
#include <structmember.h>

#include <iostream>

namespace PyUnigine {

// ------------------------------------------------------------------------------------------
// unigine_vec3

typedef struct {
    PyObject_HEAD
    // Type-specific fields go here.
    Unigine::vec3 * unigine_object_ptr;
} unigine_vec3;

static void unigine_vec3_dealloc(unigine_vec3* self) {
    // Unigine::Log::message("unigine_vec3_dealloc\n");
    Py_TYPE(self)->tp_free((PyObject*)self);
}

static PyObject *unigine_vec3_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    // Unigine::Log::message("unigine_vec3_new\n");
    unigine_vec3 *self;
    self = (unigine_vec3 *)type->tp_alloc(type, 0);
    self->unigine_object_ptr = nullptr;
    return (PyObject *)self;
}

static int unigine_vec3_init(unigine_vec3 *self, PyObject *args, PyObject *kwds) {
    self->unigine_object_ptr = new Unigine::vec3();
    return 0;
}


// public : set
static PyObject * unigine_vec3_set(unigine_vec3* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // float val;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for float


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->set(val);
            };
            // args
            float val;
    };
    auto *pRunner = new LocalRunner();
    pRunner->val = val;
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

// public : set
static PyObject * unigine_vec3_set(unigine_vec3* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // float x_;
    PyObject *pArg2; // float y_;
    PyObject *pArg3; // float z_;
    PyArg_ParseTuple(args, "OOO", &pArg1, &pArg2, &pArg3);

    // pArg1
TODO for float


    // pArg2
TODO for float


    // pArg3
TODO for float


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->set(x_, y_, z_);
            };
            // args
            float x_;
            float y_;
            float z_;
    };
    auto *pRunner = new LocalRunner();
    pRunner->x_ = x_;
    pRunner->y_ = y_;
    pRunner->z_ = z_;
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

// public : set
static PyObject * unigine_vec3_set(unigine_vec3* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const Unigine::Math::vec2 & val;
    PyObject *pArg2; // float z_;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
TODO for const Unigine::Math::vec2 &


    // pArg2
TODO for float


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->set(val, z_);
            };
            // args
            const Unigine::Math::vec2 & val;
            float z_;
    };
    auto *pRunner = new LocalRunner();
    pRunner->val = val;
    pRunner->z_ = z_;
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

// public : set
static PyObject * unigine_vec3_set(unigine_vec3* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const Unigine::Math::vec3 & val;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for const Unigine::Math::vec3 &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->set(val);
            };
            // args
            const Unigine::Math::vec3 & val;
    };
    auto *pRunner = new LocalRunner();
    pRunner->val = val;
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

// public : set
static PyObject * unigine_vec3_set(unigine_vec3* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const float * val;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for const float *


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->set(val);
            };
            // args
            const float * val;
    };
    auto *pRunner = new LocalRunner();
    pRunner->val = val;
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

// public : set
static PyObject * unigine_vec3_set(unigine_vec3* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const Unigine::Math::vec4 & v;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for const Unigine::Math::vec4 &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->set(v);
            };
            // args
            const Unigine::Math::vec4 & v;
    };
    auto *pRunner = new LocalRunner();
    pRunner->v = v;
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

// public : get
static PyObject * unigine_vec3_get(unigine_vec3* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // float * val;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for float *


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->get(val);
            };
            // args
            float * val;
    };
    auto *pRunner = new LocalRunner();
    pRunner->val = val;
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

// public : get
static PyObject * unigine_vec3_get(unigine_vec3* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->get();
            };
            // args
            // return
            float * retOriginal;
    };
    auto *pRunner = new LocalRunner();
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    float * retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = TODO: unknown type 'float *'

    // end
    // return: float *
    return ret;
};

// public : get
static PyObject * unigine_vec3_get(unigine_vec3* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->get();
            };
            // args
            // return
            const float * retOriginal;
    };
    auto *pRunner = new LocalRunner();
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    const float * retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = TODO: unknown type 'const float *'

    // end
    // return: const float *
    return ret;
};

// public : mul
static PyObject * unigine_vec3_mul(unigine_vec3* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // float v;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for float


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->mul(v);
            };
            // args
            float v;
    };
    auto *pRunner = new LocalRunner();
    pRunner->v = v;
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

// public : mul
static PyObject * unigine_vec3_mul(unigine_vec3* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const Unigine::Math::vec3 & v;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for const Unigine::Math::vec3 &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->mul(v);
            };
            // args
            const Unigine::Math::vec3 & v;
    };
    auto *pRunner = new LocalRunner();
    pRunner->v = v;
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

// public : div
static PyObject * unigine_vec3_div(unigine_vec3* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // float v;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for float


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->div(v);
            };
            // args
            float v;
    };
    auto *pRunner = new LocalRunner();
    pRunner->v = v;
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

// public : div
static PyObject * unigine_vec3_div(unigine_vec3* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const Unigine::Math::vec3 & v;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for const Unigine::Math::vec3 &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->div(v);
            };
            // args
            const Unigine::Math::vec3 & v;
    };
    auto *pRunner = new LocalRunner();
    pRunner->v = v;
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

// public : sum
static PyObject * unigine_vec3_sum(unigine_vec3* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->sum();
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

// public : add
static PyObject * unigine_vec3_add(unigine_vec3* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // float v;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for float


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->add(v);
            };
            // args
            float v;
    };
    auto *pRunner = new LocalRunner();
    pRunner->v = v;
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

// public : add
static PyObject * unigine_vec3_add(unigine_vec3* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const Unigine::Math::vec3 & v;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for const Unigine::Math::vec3 &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->add(v);
            };
            // args
            const Unigine::Math::vec3 & v;
    };
    auto *pRunner = new LocalRunner();
    pRunner->v = v;
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

// public : sub
static PyObject * unigine_vec3_sub(unigine_vec3* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // float v;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for float


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->sub(v);
            };
            // args
            float v;
    };
    auto *pRunner = new LocalRunner();
    pRunner->v = v;
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

// public : sub
static PyObject * unigine_vec3_sub(unigine_vec3* self, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1; // const Unigine::Math::vec3 & v;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for const Unigine::Math::vec3 &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                self->unigine_object_ptr->sub(v);
            };
            // args
            const Unigine::Math::vec3 & v;
    };
    auto *pRunner = new LocalRunner();
    pRunner->v = v;
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

// public : length2
static PyObject * unigine_vec3_length2(unigine_vec3* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->length2();
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

// public : length
static PyObject * unigine_vec3_length(unigine_vec3* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->length();
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

// public : lengthFast
static PyObject * unigine_vec3_length_fast(unigine_vec3* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->lengthFast();
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

// public : iLength
static PyObject * unigine_vec3_i_length(unigine_vec3* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->iLength();
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

// public : iLengthFast
static PyObject * unigine_vec3_i_length_fast(unigine_vec3* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->iLengthFast();
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

// public : normalize
static PyObject * unigine_vec3_normalize(unigine_vec3* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->normalize();
            };
            // args
            // return
            Unigine::Math::vec3 & retOriginal;
    };
    auto *pRunner = new LocalRunner();
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    Unigine::Math::vec3 & retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: Unigine::Math::vec3 &
    return ret;
};

// public : normalizeValid
static PyObject * unigine_vec3_normalize_valid(unigine_vec3* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->normalizeValid();
            };
            // args
            // return
            Unigine::Math::vec3 & retOriginal;
    };
    auto *pRunner = new LocalRunner();
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    Unigine::Math::vec3 & retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: Unigine::Math::vec3 &
    return ret;
};

// public : normalizeFast
static PyObject * unigine_vec3_normalize_fast(unigine_vec3* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->normalizeFast();
            };
            // args
            // return
            Unigine::Math::vec3 & retOriginal;
    };
    auto *pRunner = new LocalRunner();
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    Unigine::Math::vec3 & retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: Unigine::Math::vec3 &
    return ret;
};

// public : normalizeValidFast
static PyObject * unigine_vec3_normalize_valid_fast(unigine_vec3* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->normalizeValidFast();
            };
            // args
            // return
            Unigine::Math::vec3 & retOriginal;
    };
    auto *pRunner = new LocalRunner();
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    Unigine::Math::vec3 & retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: Unigine::Math::vec3 &
    return ret;
};

// public : maxXY
static PyObject * unigine_vec3_max_xy(unigine_vec3* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->maxXY();
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

// public : max
static PyObject * unigine_vec3_max(unigine_vec3* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->max();
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

// public : minXY
static PyObject * unigine_vec3_min_xy(unigine_vec3* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->minXY();
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

// public : min
static PyObject * unigine_vec3_min(unigine_vec3* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->min();
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

// public : hash
static PyObject * unigine_vec3_hash(unigine_vec3* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->hash();
            };
            // args
            // return
            unsigned int retOriginal;
    };
    auto *pRunner = new LocalRunner();
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    unsigned int retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = TODO: unknown type 'unsigned int'

    // end
    // return: unsigned int
    return ret;
};

// public : abs
static PyObject * unigine_vec3_abs(unigine_vec3* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->abs();
            };
            // args
            // return
            Unigine::Math::vec3 & retOriginal;
    };
    auto *pRunner = new LocalRunner();
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
    }
    pRunner->mutexAsync.unlock();
    Unigine::Math::vec3 & retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: Unigine::Math::vec3 &
    return ret;
};

// public : sign
static PyObject * unigine_vec3_sign(unigine_vec3* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = self->unigine_object_ptr->sign();
            };
            // args
            // return
            Unigine::Math::vec3 retOriginal;
    };
    auto *pRunner = new LocalRunner();
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


static PyMethodDef unigine_vec3_methods[] = {
    {
        "set", (PyCFunction)unigine_vec3_set, METH_VARARGS,
        "public : set"
    },
    {
        "set", (PyCFunction)unigine_vec3_set, METH_VARARGS,
        "public : set"
    },
    {
        "set", (PyCFunction)unigine_vec3_set, METH_VARARGS,
        "public : set"
    },
    {
        "set", (PyCFunction)unigine_vec3_set, METH_VARARGS,
        "public : set"
    },
    {
        "set", (PyCFunction)unigine_vec3_set, METH_VARARGS,
        "public : set"
    },
    {
        "set", (PyCFunction)unigine_vec3_set, METH_VARARGS,
        "public : set"
    },
    {
        "get", (PyCFunction)unigine_vec3_get, METH_VARARGS,
        "public : get"
    },
    {
        "get", (PyCFunction)unigine_vec3_get, METH_NOARGS,
        "public : get"
    },
    {
        "get", (PyCFunction)unigine_vec3_get, METH_NOARGS,
        "public : get"
    },
    {
        "mul", (PyCFunction)unigine_vec3_mul, METH_VARARGS,
        "public : mul"
    },
    {
        "mul", (PyCFunction)unigine_vec3_mul, METH_VARARGS,
        "public : mul"
    },
    {
        "div", (PyCFunction)unigine_vec3_div, METH_VARARGS,
        "public : div"
    },
    {
        "div", (PyCFunction)unigine_vec3_div, METH_VARARGS,
        "public : div"
    },
    {
        "sum", (PyCFunction)unigine_vec3_sum, METH_NOARGS,
        "public : sum"
    },
    {
        "add", (PyCFunction)unigine_vec3_add, METH_VARARGS,
        "public : add"
    },
    {
        "add", (PyCFunction)unigine_vec3_add, METH_VARARGS,
        "public : add"
    },
    {
        "sub", (PyCFunction)unigine_vec3_sub, METH_VARARGS,
        "public : sub"
    },
    {
        "sub", (PyCFunction)unigine_vec3_sub, METH_VARARGS,
        "public : sub"
    },
    {
        "length2", (PyCFunction)unigine_vec3_length2, METH_NOARGS,
        "public : length2"
    },
    {
        "length", (PyCFunction)unigine_vec3_length, METH_NOARGS,
        "public : length"
    },
    {
        "length_fast", (PyCFunction)unigine_vec3_length_fast, METH_NOARGS,
        "public : lengthFast"
    },
    {
        "i_length", (PyCFunction)unigine_vec3_i_length, METH_NOARGS,
        "public : iLength"
    },
    {
        "i_length_fast", (PyCFunction)unigine_vec3_i_length_fast, METH_NOARGS,
        "public : iLengthFast"
    },
    {
        "normalize", (PyCFunction)unigine_vec3_normalize, METH_NOARGS,
        "public : normalize"
    },
    {
        "normalize_valid", (PyCFunction)unigine_vec3_normalize_valid, METH_NOARGS,
        "public : normalizeValid"
    },
    {
        "normalize_fast", (PyCFunction)unigine_vec3_normalize_fast, METH_NOARGS,
        "public : normalizeFast"
    },
    {
        "normalize_valid_fast", (PyCFunction)unigine_vec3_normalize_valid_fast, METH_NOARGS,
        "public : normalizeValidFast"
    },
    {
        "max_xy", (PyCFunction)unigine_vec3_max_xy, METH_NOARGS,
        "public : maxXY"
    },
    {
        "max", (PyCFunction)unigine_vec3_max, METH_NOARGS,
        "public : max"
    },
    {
        "min_xy", (PyCFunction)unigine_vec3_min_xy, METH_NOARGS,
        "public : minXY"
    },
    {
        "min", (PyCFunction)unigine_vec3_min, METH_NOARGS,
        "public : min"
    },
    {
        "hash", (PyCFunction)unigine_vec3_hash, METH_NOARGS,
        "public : hash"
    },
    {
        "abs", (PyCFunction)unigine_vec3_abs, METH_NOARGS,
        "public : abs"
    },
    {
        "sign", (PyCFunction)unigine_vec3_sign, METH_NOARGS,
        "public : sign"
    },
    {NULL}  /* Sentinel */
};

static PyTypeObject unigine_vec3Type = {


    PyVarObject_HEAD_INIT(NULL, 0)
    "unigine.vec3",             // tp_name
    sizeof(unigine_vec3) + 256, // tp_basicsize  (TODO magic 256 bytes!!!)
    0,                         // tp_itemsize
    (destructor)unigine_vec3_dealloc,   // tp_dealloc
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
    "vec3 Object",         // tp_doc
    0,                         // traverseproc tp_traverse
    0,                         // inquiry tp_clear
    0,                         // richcmpfunc tp_richcompare
    0,                         // Py_ssize_t tp_weaklistoffset
    0,                         // getiterfunc tp_iter
    0,                         // iternextfunc tp_iternext
    unigine_vec3_methods, // tp_methods
    0, // tp_members
    0, // tp_getset
    0, // tp_base
    0, // tp_dict
    0, // tp_descr_get
    0, // tp_descr_set
    0, // tp_dictoffset
    (initproc)unigine_vec3_init, // tp_init
    0, // tp_alloc
    unigine_vec3_new, // tp_new
};


// UniginePyTypeObjectvec3

bool Python3Uniginevec3::isReady() {
    // Initialize tp_dict with empty dictionary
    if (!unigine_vec3Type.tp_dict) {
        unigine_vec3Type.tp_dict = PyDict_New();

    }
    if (PyType_Ready(&unigine_vec3Type) < 0) {
        return false;
    }
    return true;
}

bool Python3Uniginevec3::addClassDefinitionToModule(PyObject* pModule) {
    Py_INCREF(&unigine_vec3Type);
    if (PyModule_AddObject(pModule, "vec3", (PyObject *)&unigine_vec3Type) < 0) {
        Py_DECREF(&unigine_vec3Type);
        return false;
    }
    return true;
}

PyObject * vec3::NewObject(Unigine::vec3 * unigine_object_ptr) {

    std::cout << "sizeof(unigine_vec3) = " << sizeof(unigine_vec3) << std::endl;

    unigine_vec3 *pInst = PyObject_New(unigine_vec3, &unigine_vec3Type);
    pInst->unigine_object_ptr = unigine_object_ptr;
    // Py_INCREF(pInst);
    return (PyObject *)pInst;
}

Unigine::vec3 * vec3::Convert(PyObject *pObject) {
    if (Py_IS_TYPE(pObject, &unigine_vec3Type) == 0) {
        // TODO error
    }
    unigine_vec3 *pInst = (unigine_vec3 *)pObject;
    return pInst->unigine_object_ptr;
}

}; // namespace PyUnigine

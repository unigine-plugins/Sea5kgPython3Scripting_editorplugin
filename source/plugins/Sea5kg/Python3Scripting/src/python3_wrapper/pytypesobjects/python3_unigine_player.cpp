// this file automaticly generated from UniginePlayer.h
#include "python3_unigine_player.h"

#include <string>
#include <UniginePlayers.h>
#include <UnigineLog.h>
#include <Python.h>
#include <structmember.h>

#include <iostream>

#include "python3_unigine_vec3.h"

namespace PyUnigine {

// ------------------------------------------------------------------------------------------
// unigine_Player

typedef struct {
    PyObject_HEAD
    // Type-specific fields go here.
    Unigine::Ptr<Unigine::Player> unigine_object_ptr;
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
    return 0;
}

// public (inherit from Node): getWorldPosition
static PyObject * unigine_Player_get_world_position(unigine_Player* self) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = unigine_object_ptr->getWorldPosition();
            };
            Unigine::Ptr<Unigine::Player> unigine_object_ptr;
            // return
            Unigine::Math::Vec3 retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->unigine_object_ptr = self->unigine_object_ptr;
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    Unigine::Math::Vec3 retOriginal = pRunner->retOriginal;
    delete pRunner;
    Unigine::Math::vec3 *retOriginal2 = new Unigine::Math::vec3(retOriginal);
    ret = PyUnigine::vec3::NewObject(retOriginal2);

    // end
    // return: Unigine::Math::Vec3
    return ret;
};

static PyMethodDef unigine_Player_methods[] = {
    {
        "get_world_position", (PyCFunction)unigine_Player_get_world_position, METH_NOARGS,
        "public : getWorldPosition"
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

PyObject * Player::NewObject(Unigine::Ptr<Unigine::Player> unigine_object_ptr) {
    // std::cout << "sizeof(unigine_Player) = " << sizeof(unigine_Player) << std::endl;
    unigine_Player *pInst = PyObject_New(unigine_Player, &unigine_PlayerType);
    pInst->unigine_object_ptr = unigine_object_ptr;
    // Py_INCREF(pInst);
    return (PyObject *)pInst;
}

Unigine::Ptr<Unigine::Player> Player::Convert(PyObject *pObject) {
    if (Py_IS_TYPE(pObject, &unigine_PlayerType) == 0) {
        Unigine::Log::error("Invalid type, expected 'Unigine::Ptr<Unigine::Player>', but got some another");
    }
    unigine_Player *pInst = (unigine_Player *)pObject;
    return pInst->unigine_object_ptr;
}

}; // namespace PyUnigine

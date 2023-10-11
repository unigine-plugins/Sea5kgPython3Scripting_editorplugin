// this file automaticly generated from UnigineMaterials.h
#include "python3_unigine_materials.h"

#include <string>
#include <UnigineMaterials.h>
#include <UnigineLog.h>
#include <Python.h>
#include <structmember.h>

#include <iostream>

namespace PyUnigine {

// ------------------------------------------------------------------------------------------
// unigine_Materials

typedef struct {
    PyObject_HEAD
    // Type-specific fields go here.
} unigine_Materials;

static void unigine_Materials_dealloc(unigine_Materials* self) {
    // Unigine::Log::message("unigine_Materials_dealloc\n");
    Py_TYPE(self)->tp_free((PyObject*)self);
}

static PyObject *unigine_Materials_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    // Unigine::Log::message("unigine_Materials_new\n");
    unigine_Materials *self;
    self = (unigine_Materials *)type->tp_alloc(type, 0);
    return (PyObject *)self;
}

static int unigine_Materials_init(unigine_Materials *self, PyObject *args, PyObject *kwds) {
    // nothing
    return 0;
}


// public (static): isInitialized
static PyObject * unigine_Materials_is_initialized(unigine_Materials* self_static_null) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = Unigine::Materials::isInitialized();
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

// public (static): setLoadingMode
static PyObject * unigine_Materials_set_loading_mode(unigine_Materials* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // Unigine::Materials::LOADING_MODE mode;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for Unigine::Materials::LOADING_MODE


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                Unigine::Materials::setLoadingMode(mode);
            };
            // args
            Unigine::Materials::LOADING_MODE mode;
    };
    auto *pRunner = new LocalRunner();
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

// public (static): getLoadingMode
static PyObject * unigine_Materials_get_loading_mode(unigine_Materials* self_static_null) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = Unigine::Materials::getLoadingMode();
            };
            // return
            Unigine::Materials::LOADING_MODE retOriginal;
    };
    auto *pRunner = new LocalRunner();
    Python3Runner::runInMainThread(pRunner);
    while (!pRunner->mutexAsync.tryLock(5)) {  // milliseconds
    }
    pRunner->mutexAsync.unlock();
    Unigine::Materials::LOADING_MODE retOriginal = pRunner->retOriginal;
    delete pRunner;
    ret = PyLong_FromLong(retOriginal);

    // end
    // return: Unigine::Materials::LOADING_MODE
    return ret;
};

// public (static): loadMaterial
static PyObject * unigine_Materials_load_material(unigine_Materials* self_static_null, PyObject *args) {
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
                retOriginal = Unigine::Materials::loadMaterial(path);
            };
            // args
            const char * path;
            // return
            Unigine::Ptr<Unigine::Material> retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->path = path;
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

// public (static): isMaterialGUID
static PyObject * unigine_Materials_is_material_guid(unigine_Materials* self_static_null, PyObject *args) {
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
                retOriginal = Unigine::Materials::isMaterialGUID(guid);
            };
            // args
            const Unigine::UGUID & guid;
            // return
            bool retOriginal;
    };
    auto *pRunner = new LocalRunner();
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

// public (static): getNumMaterials
static PyObject * unigine_Materials_get_num_materials(unigine_Materials* self_static_null) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = Unigine::Materials::getNumMaterials();
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

// public (static): getMaterial
static PyObject * unigine_Materials_get_material(unigine_Materials* self_static_null, PyObject *args) {
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
                retOriginal = Unigine::Materials::getMaterial(num);
            };
            // args
            int num;
            // return
            Unigine::Ptr<Unigine::Material> retOriginal;
    };
    auto *pRunner = new LocalRunner();
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

// public (static): findManualMaterial
static PyObject * unigine_Materials_find_manual_material(unigine_Materials* self_static_null, PyObject *args) {
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
                retOriginal = Unigine::Materials::findManualMaterial(name);
            };
            // args
            const char * name;
            // return
            Unigine::Ptr<Unigine::Material> retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->name = name;
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

// public (static): findMaterialByGUID
static PyObject * unigine_Materials_find_material_by_guid(unigine_Materials* self_static_null, PyObject *args) {
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
                retOriginal = Unigine::Materials::findMaterialByGUID(guid);
            };
            // args
            const Unigine::UGUID & guid;
            // return
            Unigine::Ptr<Unigine::Material> retOriginal;
    };
    auto *pRunner = new LocalRunner();
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

// public (static): findMaterialByFileGUID
static PyObject * unigine_Materials_find_material_by_file_guid(unigine_Materials* self_static_null, PyObject *args) {
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
                retOriginal = Unigine::Materials::findMaterialByFileGUID(guid);
            };
            // args
            const Unigine::UGUID & guid;
            // return
            Unigine::Ptr<Unigine::Material> retOriginal;
    };
    auto *pRunner = new LocalRunner();
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

// public (static): findMaterialByPath
static PyObject * unigine_Materials_find_material_by_path(unigine_Materials* self_static_null, PyObject *args) {
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
                retOriginal = Unigine::Materials::findMaterialByPath(path);
            };
            // args
            const char * path;
            // return
            Unigine::Ptr<Unigine::Material> retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->path = path;
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

// public (static): setCachedMaterial
static PyObject * unigine_Materials_set_cached_material(unigine_Materials* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const Unigine::Ptr<Unigine::Material> & mat;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for const Unigine::Ptr<Unigine::Material> &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                Unigine::Materials::setCachedMaterial(mat);
            };
            // args
            const Unigine::Ptr<Unigine::Material> & mat;
    };
    auto *pRunner = new LocalRunner();
    pRunner->mat = mat;
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

// public (static): getCachedMaterial
static PyObject * unigine_Materials_get_cached_material(unigine_Materials* self_static_null) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = Unigine::Materials::getCachedMaterial();
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

// public (static): setCachedState
static PyObject * unigine_Materials_set_cached_state(unigine_Materials* self_static_null, PyObject *args) {
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
                Unigine::Materials::setCachedState(name, value);
            };
            // args
            const char * name;
            int value;
    };
    auto *pRunner = new LocalRunner();
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

// public (static): removeMaterial
static PyObject * unigine_Materials_remove_material(unigine_Materials* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const Unigine::UGUID & guid;
    PyObject *pArg2 = NULL; // bool remove_file;
    PyObject *pArg3 = NULL; // bool remove_children;
    PyArg_ParseTuple(args, "OOO", &pArg1, &pArg2, &pArg3);

    // pArg1
TODO for const Unigine::UGUID &


    // pArg2
    if (!PyBool_Check(pArg2)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"remove_file\" to %s must be a bool object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg2)->tp_name);
        return NULL;
    }
    bool remove_file = pArg2 == Py_True;


    // pArg3
    if (!PyBool_Check(pArg3)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"remove_children\" to %s must be a bool object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg3)->tp_name);
        return NULL;
    }
    bool remove_children = pArg3 == Py_True;


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = Unigine::Materials::removeMaterial(guid, remove_file, remove_children);
            };
            // args
            const Unigine::UGUID & guid;
            bool remove_file;
            bool remove_children;
            // return
            bool retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->guid = guid;
    pRunner->remove_file = remove_file;
    pRunner->remove_children = remove_children;
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

// public (static): replaceMaterial
static PyObject * unigine_Materials_replace_material(unigine_Materials* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const Unigine::Ptr<Unigine::Material> & material;
    PyObject *pArg2 = NULL; // const Unigine::Ptr<Unigine::Material> & new_material;
    PyArg_ParseTuple(args, "OO", &pArg1, &pArg2);

    // pArg1
TODO for const Unigine::Ptr<Unigine::Material> &


    // pArg2
TODO for const Unigine::Ptr<Unigine::Material> &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = Unigine::Materials::replaceMaterial(material, new_material);
            };
            // args
            const Unigine::Ptr<Unigine::Material> & material;
            const Unigine::Ptr<Unigine::Material> & new_material;
            // return
            bool retOriginal;
    };
    auto *pRunner = new LocalRunner();
    pRunner->material = material;
    pRunner->new_material = new_material;
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

// public (static): saveMaterials
static PyObject * unigine_Materials_save_materials(unigine_Materials* self_static_null) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = Unigine::Materials::saveMaterials();
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

// public (static): compileShaders
static PyObject * unigine_Materials_compile_shaders(unigine_Materials* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // const Unigine::Vector<Unigine::Ptr<Unigine::Material>> & materials;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
TODO for const Unigine::Vector<Unigine::Ptr<Unigine::Material>> &


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                Unigine::Materials::compileShaders(materials);
            };
            // args
            const Unigine::Vector<Unigine::Ptr<Unigine::Material>> & materials;
    };
    auto *pRunner = new LocalRunner();
    pRunner->materials = materials;
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

// public (static): compileShaders
static PyObject * unigine_Materials_compile_shaders(unigine_Materials* self_static_null) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                Unigine::Materials::compileShaders();
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

// public (static): setPrecompileAllShaders
static PyObject * unigine_Materials_set_precompile_all_shaders(unigine_Materials* self_static_null, PyObject *args) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:
    PyObject *pArg1 = NULL; // bool shaders;
    PyArg_ParseTuple(args, "O", &pArg1);

    // pArg1
    if (!PyBool_Check(pArg1)) {
        PyErr_Format(PyExc_TypeError,
            "Argument \"shaders\" to %s must be a bool object not a \"%s\"",
            __FUNCTION__, Py_TYPE(pArg1)->tp_name);
        return NULL;
    }
    bool shaders = pArg1 == Py_True;


    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                Unigine::Materials::setPrecompileAllShaders(shaders);
            };
            // args
            bool shaders;
    };
    auto *pRunner = new LocalRunner();
    pRunner->shaders = shaders;
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

// public (static): isPrecompileAllShaders
static PyObject * unigine_Materials_is_precompile_all_shaders(unigine_Materials* self_static_null) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                retOriginal = Unigine::Materials::isPrecompileAllShaders();
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

// public (static): reloadMaterials
static PyObject * unigine_Materials_reload_materials(unigine_Materials* self_static_null) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                Unigine::Materials::reloadMaterials();
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

// public (static): destroyShaders
static PyObject * unigine_Materials_destroy_shaders(unigine_Materials* self_static_null) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                Unigine::Materials::destroyShaders();
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

// public (static): destroyTextures
static PyObject * unigine_Materials_destroy_textures(unigine_Materials* self_static_null) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                Unigine::Materials::destroyTextures();
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

// public (static): createShaders
static PyObject * unigine_Materials_create_shaders(unigine_Materials* self_static_null) {
    PyErr_Clear();
    PyObject *ret = NULL;
    // parse args:

    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                Unigine::Materials::createShaders();
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


static PyMethodDef unigine_Materials_methods[] = {
    {
        "is_initialized", (PyCFunction)unigine_Materials_is_initialized, METH_STATIC|METH_NOARGS,
        "public (static): isInitialized"
    },
    {
        "set_loading_mode", (PyCFunction)unigine_Materials_set_loading_mode, METH_STATIC|METH_VARARGS,
        "public (static): setLoadingMode"
    },
    {
        "get_loading_mode", (PyCFunction)unigine_Materials_get_loading_mode, METH_STATIC|METH_NOARGS,
        "public (static): getLoadingMode"
    },
    {
        "load_material", (PyCFunction)unigine_Materials_load_material, METH_STATIC|METH_VARARGS,
        "public (static): loadMaterial"
    },
    {
        "is_material_guid", (PyCFunction)unigine_Materials_is_material_guid, METH_STATIC|METH_VARARGS,
        "public (static): isMaterialGUID"
    },
    {
        "get_num_materials", (PyCFunction)unigine_Materials_get_num_materials, METH_STATIC|METH_NOARGS,
        "public (static): getNumMaterials"
    },
    {
        "get_material", (PyCFunction)unigine_Materials_get_material, METH_STATIC|METH_VARARGS,
        "public (static): getMaterial"
    },
    {
        "find_manual_material", (PyCFunction)unigine_Materials_find_manual_material, METH_STATIC|METH_VARARGS,
        "public (static): findManualMaterial"
    },
    {
        "find_material_by_guid", (PyCFunction)unigine_Materials_find_material_by_guid, METH_STATIC|METH_VARARGS,
        "public (static): findMaterialByGUID"
    },
    {
        "find_material_by_file_guid", (PyCFunction)unigine_Materials_find_material_by_file_guid, METH_STATIC|METH_VARARGS,
        "public (static): findMaterialByFileGUID"
    },
    {
        "find_material_by_path", (PyCFunction)unigine_Materials_find_material_by_path, METH_STATIC|METH_VARARGS,
        "public (static): findMaterialByPath"
    },
    {
        "set_cached_material", (PyCFunction)unigine_Materials_set_cached_material, METH_STATIC|METH_VARARGS,
        "public (static): setCachedMaterial"
    },
    {
        "get_cached_material", (PyCFunction)unigine_Materials_get_cached_material, METH_STATIC|METH_NOARGS,
        "public (static): getCachedMaterial"
    },
    {
        "set_cached_state", (PyCFunction)unigine_Materials_set_cached_state, METH_STATIC|METH_VARARGS,
        "public (static): setCachedState"
    },
    {
        "remove_material", (PyCFunction)unigine_Materials_remove_material, METH_STATIC|METH_VARARGS,
        "public (static): removeMaterial"
    },
    {
        "replace_material", (PyCFunction)unigine_Materials_replace_material, METH_STATIC|METH_VARARGS,
        "public (static): replaceMaterial"
    },
    {
        "save_materials", (PyCFunction)unigine_Materials_save_materials, METH_STATIC|METH_NOARGS,
        "public (static): saveMaterials"
    },
    {
        "compile_shaders", (PyCFunction)unigine_Materials_compile_shaders, METH_STATIC|METH_VARARGS,
        "public (static): compileShaders"
    },
    {
        "compile_shaders", (PyCFunction)unigine_Materials_compile_shaders, METH_STATIC|METH_NOARGS,
        "public (static): compileShaders"
    },
    {
        "set_precompile_all_shaders", (PyCFunction)unigine_Materials_set_precompile_all_shaders, METH_STATIC|METH_VARARGS,
        "public (static): setPrecompileAllShaders"
    },
    {
        "is_precompile_all_shaders", (PyCFunction)unigine_Materials_is_precompile_all_shaders, METH_STATIC|METH_NOARGS,
        "public (static): isPrecompileAllShaders"
    },
    {
        "reload_materials", (PyCFunction)unigine_Materials_reload_materials, METH_STATIC|METH_NOARGS,
        "public (static): reloadMaterials"
    },
    {
        "destroy_shaders", (PyCFunction)unigine_Materials_destroy_shaders, METH_STATIC|METH_NOARGS,
        "public (static): destroyShaders"
    },
    {
        "destroy_textures", (PyCFunction)unigine_Materials_destroy_textures, METH_STATIC|METH_NOARGS,
        "public (static): destroyTextures"
    },
    {
        "create_shaders", (PyCFunction)unigine_Materials_create_shaders, METH_STATIC|METH_NOARGS,
        "public (static): createShaders"
    },
    {NULL}  /* Sentinel */
};

static PyTypeObject unigine_MaterialsType = {
    PyVarObject_HEAD_INIT(NULL, 0)
    "unigine.Materials",             // tp_name
    sizeof(unigine_Materials) + 256, // tp_basicsize  (TODO magic 256 bytes!!!)
    0,                         // tp_itemsize
    (destructor)unigine_Materials_dealloc,   // tp_dealloc
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
    "Materials Object",         // tp_doc
    0,                         // traverseproc tp_traverse
    0,                         // inquiry tp_clear
    0,                         // richcmpfunc tp_richcompare
    0,                         // Py_ssize_t tp_weaklistoffset
    0,                         // getiterfunc tp_iter
    0,                         // iternextfunc tp_iternext
    unigine_Materials_methods, // tp_methods
    0, // tp_members
    0, // tp_getset
    0, // tp_base
    0, // tp_dict
    0, // tp_descr_get
    0, // tp_descr_set
    0, // tp_dictoffset
    (initproc)unigine_Materials_init, // tp_init
    0, // tp_alloc
    unigine_Materials_new, // tp_new
};


// UniginePyTypeObjectMaterials

bool Python3UnigineMaterials::isReady() {
    // Initialize tp_dict with empty dictionary
    if (!unigine_MaterialsType.tp_dict) {
        unigine_MaterialsType.tp_dict = PyDict_New();

        // enum_typename: LOADING_MODE
        PyDict_SetItemString(
            unigine_MaterialsType.tp_dict, "LOADING_MODE_FAST",
            Py_BuildValue("i", Unigine::Materials::LOADING_MODE_FAST)
        );
        // enum_typename: LOADING_MODE
        PyDict_SetItemString(
            unigine_MaterialsType.tp_dict, "LOADING_MODE_FULL_MATERIALS",
            Py_BuildValue("i", Unigine::Materials::LOADING_MODE_FULL_MATERIALS)
        );
        // enum_typename: LOADING_MODE
        PyDict_SetItemString(
            unigine_MaterialsType.tp_dict, "LOADING_MODE_FULL_MATERIALS_SHADERS",
            Py_BuildValue("i", Unigine::Materials::LOADING_MODE_FULL_MATERIALS_SHADERS)
        );
    }
    if (PyType_Ready(&unigine_MaterialsType) < 0) {
        return false;
    }
    return true;
}

bool Python3UnigineMaterials::addClassDefinitionToModule(PyObject* pModule) {
    Py_INCREF(&unigine_MaterialsType);
    if (PyModule_AddObject(pModule, "Materials", (PyObject *)&unigine_MaterialsType) < 0) {
        Py_DECREF(&unigine_MaterialsType);
        return false;
    }
    return true;
}

PyObject * Materials::NewObject() {
    // std::cout << "sizeof(unigine_Materials) = " << sizeof(unigine_Materials) << std::endl;
    unigine_Materials *pInst = PyObject_New(unigine_Materials, &unigine_MaterialsType);
    // Py_INCREF(pInst);
    return (PyObject *)pInst;
}

}; // namespace PyUnigine


#include "unigine_python_unigine_lib.h"

// std
#include <string>

// python headers
#include <Python.h>
#include <structmember.h>

// unigine headers
#include <UnigineLog.h>
#include "unigine_python_material.h"

static PyObject* unigine_log_info(PyObject* self, PyObject* args) {
    const char *message;
    int sts;

    if (!PyArg_ParseTuple(args, "s", &message)) {
        Unigine::Log::message("\n");
        return Py_None;
    }
    std::string sLogMessage(message);
    sLogMessage = "FromPython " + sLogMessage + "\n";
    Unigine::Log::message(sLogMessage.c_str());
    return Py_None;
}

static PyObject* unigine_log_error(PyObject* self, PyObject* args) {
	const char *message;
    int sts;

    if (!PyArg_ParseTuple(args, "s", &message)) {
        Unigine::Log::message("\n");
        return Py_None;
    }
    std::string sLogMessage(message);
    sLogMessage = "FromPython " + sLogMessage + "\n";
    Unigine::Log::error(sLogMessage.c_str());
    return Py_None;
}

static struct PyMethodDef methods[] = {
	{ "log_info", unigine_log_info, METH_VARARGS, "print to log info"},
	{ "log_error", unigine_log_error, METH_VARARGS, "print to log error" },
	{ NULL, NULL, 0, NULL }
};

static struct PyModuleDef modDefUnigine = {
	PyModuleDef_HEAD_INIT, "unigine", NULL, -1, methods, 
	NULL, NULL, NULL, NULL
};


// ------------------------------------------------------------------------------------------
// unigine_Material
typedef struct {
    PyObject_HEAD
    /* Type-specific fields go here. */
    Unigine::Ptr<Unigine::Material> material;
    PyObject *first; /* first name */
    PyObject *last;  /* last name */
    int number;
} unigine_Material;

static void
unigine_Material_dealloc(unigine_Material* self)
{
    // Unigine::Log::message("unigine_Material_dealloc\n");
    Py_XDECREF(self->first);
    Py_XDECREF(self->last);
    Py_TYPE(self)->tp_free((PyObject*)self);
}

static PyObject *
unigine_Material_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    // Unigine::Log::message("unigine_Material_new\n");
    unigine_Material *self;

    self = (unigine_Material *)type->tp_alloc(type, 0);
    if (self != NULL) {
        self->first = PyUnicode_FromString("");
        if (self->first == NULL) {
            Py_DECREF(self);
            return NULL;
        }

        self->last = PyUnicode_FromString("");
        if (self->last == NULL) {
            Py_DECREF(self);
            return NULL;
        }

        self->number = 0;
    }

    return (PyObject *)self;
}

static int
unigine_Material_init(unigine_Material *self, PyObject *args, PyObject *kwds)
{
    // Unigine::Log::message("unigine_Material_init\n");

    PyObject *first=NULL, *last=NULL, *tmp;

    static char *kwlist[] = {
        "first",
        "last",
        "number",
        NULL
    };

    if (! PyArg_ParseTupleAndKeywords(
            args, kwds, "|OOi", kwlist,
            &first, &last,
            &self->number)
        ) {
        return -1;
    }
    

    if (first) {
        tmp = self->first;
        Py_INCREF(first);
        self->first = first;
        Py_XDECREF(tmp);
    }

    if (last) {
        tmp = self->last;
        Py_INCREF(last);
        self->last = last;
        Py_XDECREF(tmp);
    }

    return 0;
}

static PyMemberDef unigine_Material_members[] = {
    {"first", T_OBJECT_EX, offsetof(unigine_Material, first), 0,
     "first name"},
    {"last", T_OBJECT_EX, offsetof(unigine_Material, last), 0,
     "last name"},
    {"number", T_INT, offsetof(unigine_Material, number), 0,
     "unigine_Material number"},
    {NULL}  /* Sentinel */
};

static PyObject *
unigine_Material_name(unigine_Material* self)
{
    if (self->first == NULL) {
        PyErr_SetString(PyExc_AttributeError, "first");
        return NULL;
    }

    if (self->last == NULL) {
        PyErr_SetString(PyExc_AttributeError, "last");
        return NULL;
    }

    return PyUnicode_FromFormat("%S %S", self->first, self->last);
}

static PyObject *
unigine_Material_get_name(unigine_Material* self)
{
    PyErr_Clear();
    PyObject *pName = Py_BuildValue("s", self->material->getName());
    return PyUnicode_FromFormat("%S", pName);
}

static PyObject *
unigine_Material_set_shadow_mask(unigine_Material* self, PyObject *arg)
{
    PyErr_Clear();
    PyObject *ret = NULL;
    assert(arg);

    //
    // int val;
    // PyArg_ParseTuple(args, "i", &val);

    // int n = PyInt_AsInt(arg);
    uint32_t nVal = PyLong_AsLong(arg);
    self->material->setShadowMask(nVal);
    
    Py_INCREF(Py_None);
    ret = Py_None;
    assert(! PyErr_Occurred());
    assert(ret);
    goto finally;
except:
    Py_XDECREF(ret);
    ret = NULL;
finally:
    /* If we were to treat arg as a borrowed reference and had Py_INCREF'd above we
     * should do this. See below. */
    // Py_DECREF(arg);
    return ret;
}

static PyMethodDef unigine_Material_methods[] = {
    {"name", (PyCFunction)unigine_Material_name, METH_NOARGS,
     "Return the name, combining the first and last name"
    },
    {"get_name", (PyCFunction)unigine_Material_get_name, METH_NOARGS,
     "Return the name of material"
    },
    {"set_shadow_mask", (PyCFunction)unigine_Material_set_shadow_mask, METH_O,
     "Return the name of material"
    },
    
    {NULL}  /* Sentinel */
};

static PyTypeObject unigine_MaterialType = {
    PyVarObject_HEAD_INIT(&PyType_Type, 0)
    // PyVarObject_HEAD_INIT(NULL, 0)
    .tp_name = "unigine.Material",
    .tp_basicsize = sizeof(unigine_Material),
    .tp_dealloc = (destructor)unigine_Material_dealloc,
    .tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,
    .tp_doc = "Material objects",
    .tp_methods = unigine_Material_methods,
    .tp_members = unigine_Material_members,
    .tp_init = (initproc)unigine_Material_init,
    .tp_new = unigine_Material_new,
};


PyObject * PyUnigine::Material_New(Unigine::Ptr<Unigine::Material> material) {
    unigine_Material *pInst = PyObject_New(unigine_Material, &unigine_MaterialType);
    pInst->material = material;
    return (PyObject *)pInst;
}

// _PyInit_unigine_lib

PyObject* _PyInit_unigine_lib(void) {

    PyObject* m;

    // unigine_MaterialType.tp_new = PyType_GenericNew;
    // if (PyType_Ready(&unigine_MaterialType) < 0)
    //     return NULL;

    if (PyType_Ready(&unigine_MaterialType) < 0)
        return NULL;


    m = PyModule_Create(&modDefUnigine);
    if (m == NULL)
        return NULL;

    Py_INCREF(&unigine_MaterialType);
    if (PyModule_AddObject(m, "Material", (PyObject *)&unigine_MaterialType) < 0) {
        Py_DECREF(&unigine_MaterialType);
        Py_DECREF(m);
        return NULL;
    }
    return m;
}

// ------------------------------------------------------------------------------------------
// UniginePythonUnigineLib

UniginePythonUnigineLib::UniginePythonUnigineLib(const std::string &sExtensionId) {
    m_sExtensionId = sExtensionId;
}

void UniginePythonUnigineLib::Call_PyImport_AppendInittab() {
    PyImport_AppendInittab("unigine", &_PyInit_unigine_lib);
}

void UniginePythonUnigineLib::Call_PyImport_ImportModule() {
    // must be imported by user
}

void UniginePythonUnigineLib::Call_Before_Py_Finalize() {
    // nothing
}

void UniginePythonUnigineLib::Call_After_Py_Finalize() {
    // nothing
}


#pragma once

#include <Python.h>
#include <UnigineMaterials.h>

class UniginePyTypeObjectMaterial {
    public:
        static bool isReady();
        static bool addClassDefinitionToModule(PyObject* pModule);
};


class PyUnigineMaterial {
    public:
        static PyObject * NewObject(Unigine::Ptr<Unigine::Material> material);
        // Unigine::Ptr<Unigine::Material> material
};

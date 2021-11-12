#pragma once

#include "unigine_python_wrapper_base.h"
#include <UnigineMaterials.h>
#include <Python.h>

class PyMaterialObject : public PyObject {
    public:
        PyMaterialObject(Unigine::Ptr<Unigine::Material> &material);

    private:
        Unigine::Ptr<Unigine::Material> m_material;
};


class UniginePythonMaterial {
    public:
        UniginePythonMaterial(Unigine::Ptr<Unigine::Material> material);

    private:
        Unigine::Ptr<Unigine::Material> m_material;
};

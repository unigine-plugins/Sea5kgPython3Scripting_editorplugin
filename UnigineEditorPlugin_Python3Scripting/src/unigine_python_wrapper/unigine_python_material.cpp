
#include "unigine_python_material.h"
#include <UnigineLog.h>
#include <string>


PyMaterialObject::PyMaterialObject(Unigine::Ptr<Unigine::Material> &material) : PyObject() {
    m_material = material;
}

UniginePythonMaterial::UniginePythonMaterial(Unigine::Ptr<Unigine::Material> material) {
    m_material = material;
}

#include "python3_pytypeobjects.h"
#include "python3_unigine_material.h"

Python3PyTypeObjectAll::Python3PyTypeObjectAll() {
    m_vPyTypesObjects.push_back(new Python3UnigineMaterial());
}

bool Python3PyTypeObjectAll::isReady() {
    bool bReady = true;
    for (int i = 0; i < m_vPyTypesObjects.size(); i++) {
        if (!m_vPyTypesObjects[i]->isReady()) {
            bReady = false;
        }
    }
    return bReady;
}

bool Python3PyTypeObjectAll::addClassDefinitionToModule(PyObject* pModule) {
    bool bAdded = true;
    for (int i = 0; i < m_vPyTypesObjects.size(); i++) {
        if (!m_vPyTypesObjects[i]->addClassDefinitionToModule(pModule)) {
            bAdded = false;
        }
    }
    return bAdded;
}

    

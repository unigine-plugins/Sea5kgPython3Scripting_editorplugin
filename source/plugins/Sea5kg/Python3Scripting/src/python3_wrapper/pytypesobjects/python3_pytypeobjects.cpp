
#include "python3_pytypeobjects.h"
#include "python3_unigine_assetmanager.h"
#include "python3_unigine_materials.h"
#include "python3_unigine_material.h"
#include "python3_unigine_mesh.h"
#include "python3_unigine_node.h"
#include "python3_unigine_objectmeshdynamic.h"
#include "python3_unigine_uguid.h"
#include "python3_unigine_vec3.h"
#include "python3_unigine_vec2.h"
#include "python3_unigine_viewportmanager.h"
#include "python3_unigine_player.h"
#include "python3_unigine_viewportwindow.h"

Python3PyTypeObjectAll::Python3PyTypeObjectAll() {
    m_vPyTypesObjects.push_back(new PyUnigine::Python3UnigineUGUID());
    m_vPyTypesObjects.push_back(new PyUnigine::Python3Uniginevec3());
    m_vPyTypesObjects.push_back(new PyUnigine::Python3Uniginevec2());
    m_vPyTypesObjects.push_back(new PyUnigine::Python3UnigineMaterials());
    m_vPyTypesObjects.push_back(new PyUnigine::Python3UnigineMaterial());
    m_vPyTypesObjects.push_back(new PyUnigine::Python3UnigineNode());
    m_vPyTypesObjects.push_back(new PyUnigine::Python3UnigineAssetManager());
    m_vPyTypesObjects.push_back(new PyUnigine::Python3UnigineObjectMeshDynamic());
    m_vPyTypesObjects.push_back(new PyUnigine::Python3UnigineMesh());
    m_vPyTypesObjects.push_back(new PyUnigine::Python3UnigineViewportManager());
    m_vPyTypesObjects.push_back(new PyUnigine::Python3UniginePlayer());
    m_vPyTypesObjects.push_back(new PyUnigine::Python3UnigineViewportWindow());
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

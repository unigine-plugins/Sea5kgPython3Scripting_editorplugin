
#include "ModelExtension.h"

ModelExtension::ModelExtension() {
}

ModelExtension::~ModelExtension() {
    
}

bool ModelExtension::loadFromJsonObject(const QJsonObject &jsonExtension) {
    if (
        !jsonExtension.contains("id")
        || !jsonExtension.contains("name")
        || !jsonExtension.contains("for")
        || !jsonExtension.contains("enabled")
    ) {
        return false;
    }
    m_sExtensionId = jsonExtension["id"].toString();
    m_sExtensionName = jsonExtension["name"].toString();
    m_sExtensionFor = jsonExtension["for"].toString();
    m_bEnabled = jsonExtension["enabled"].toBool();
    return true;
}

QJsonObject ModelExtension::toJsonObject() {
    QJsonObject obj;
    obj["id"] = m_sExtensionId;
    obj["name"] = m_sExtensionName;
    obj["for"] = m_sExtensionFor;
    obj["enabled"] = m_bEnabled;
    return obj;
}

void ModelExtension::setId(const QString &sId) {
    m_sExtensionId = sId;
}

void ModelExtension::setName(const QString &sName) {
    m_sExtensionName = sName;
}

void ModelExtension::setFor(const QString &sFor) {
    m_sExtensionFor = sFor;
}

void ModelExtension::setEnabled(bool bEnabled) {
    m_bEnabled = bEnabled;
}

QString ModelExtension::getId() {
    return m_sExtensionId;
}

QString ModelExtension::getName() {
    return m_sExtensionName;
}

QString ModelExtension::getFor() {
    return m_sExtensionFor;
}


bool ModelExtension::isEnabled() {
    return m_bEnabled;
}

#include "Python3ScriptInfo.h"

#include <QFile>
#include <QJsonDocument>
#include <iostream>

Python3ScriptInfo::Python3ScriptInfo(const QString &sScriptDir) {
    m_sScriptDir = sScriptDir;
    m_bInMainThread = false;
}

Python3ScriptInfo::~Python3ScriptInfo() {

}

bool Python3ScriptInfo::loadFromJsonObject(const QJsonObject &jsonExtension) {
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
    if (jsonExtension.contains("in_main_tread")) {
        m_bInMainThread = jsonExtension["in_main_tread"].toBool();
    }
    return true;
}

bool Python3ScriptInfo::loadFromDirectory() {
    QString sPython3ScriptJsonFilePath = getScriptDir() + "/python3script.json";

    std::cout << "Try opening... " << sPython3ScriptJsonFilePath.toStdString() << std::endl;
    QFile fileExtensionJson(sPython3ScriptJsonFilePath);
    if (!fileExtensionJson.open(QIODevice::ReadOnly)) {
        // log_error(sPython3ScriptJsonFilePath + " - couldn't open file to read.");
        return false;
    }
    QByteArray saveData = fileExtensionJson.readAll();
    QJsonParseError error;
    QJsonDocument jsonDoc = QJsonDocument::fromJson(saveData, &error);
    if (jsonDoc.isNull()) {
        // log_error(sPython3ScriptJsonFilePath + " - (Broken json), error info " + error.errorString());
        return false;
    }
    if (!jsonDoc.isObject()) {
        // log_error(sPython3ScriptJsonFilePath + " - expected object");
        return false;
    }

    m_jsonOriginalScriptInfo = jsonDoc.object();
    if (!loadFromJsonObject(m_jsonOriginalScriptInfo)) {
        // log_error(sPython3ScriptJsonFilePath + " - could not load some extension by index");
        return false;
    }
    return true;
}

bool Python3ScriptInfo::saveJson() {
    QString sPython3ScriptJsonFilePath = getScriptDir() + "/python3script.json";
    QFile fileExtensionJson(sPython3ScriptJsonFilePath);

    QJsonDocument document(this->toJsonObject());
    fileExtensionJson.open(QFile::WriteOnly);
    fileExtensionJson.write(document.toJson(QJsonDocument::Indented));
    fileExtensionJson.close();
    return true;
}

QJsonObject Python3ScriptInfo::toJsonObject() {
    QJsonObject obj;
    obj["id"] = m_sExtensionId;
    obj["name"] = m_sExtensionName;
    obj["for"] = m_sExtensionFor;
    obj["enabled"] = m_bEnabled;
    obj["in_main_tread"] = m_bInMainThread;
    return obj;
}

void Python3ScriptInfo::setId(const QString &sId) {
    m_sExtensionId = sId;
}

void Python3ScriptInfo::setName(const QString &sName) {
    m_sExtensionName = sName;
}

void Python3ScriptInfo::setFor(const QString &sFor) {
    m_sExtensionFor = sFor;
}

void Python3ScriptInfo::setEnabled(bool bEnabled) {
    m_bEnabled = bEnabled;
}

QString Python3ScriptInfo::getId() {
    return m_sExtensionId;
}

QString Python3ScriptInfo::getName() {
    return m_sExtensionName;
}

QString Python3ScriptInfo::getFor() {
    return m_sExtensionFor;
}

bool Python3ScriptInfo::isEnabled() {
    return m_bEnabled;
}

bool Python3ScriptInfo::isInMainThread() {
    return m_bInMainThread;
}

QString Python3ScriptInfo::getMainPyPath() {
    return getScriptDir() + "/main.py";
}

QString Python3ScriptInfo::getScriptDir() {
    return m_sScriptDir;
}
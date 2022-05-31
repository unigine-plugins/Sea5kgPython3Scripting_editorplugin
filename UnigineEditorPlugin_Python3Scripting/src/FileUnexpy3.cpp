
#include "FileUnexpy3.h"

#include <QFile>
#include <QJsonDocument>
#include <iostream>

FileUnexpy3::FileUnexpy3(const QString &sScriptDir) {
    m_sScriptDir = sScriptDir;
}

FileUnexpy3::~FileUnexpy3() {
    
}

bool FileUnexpy3::loadFromJsonObject(const QJsonObject &jsonExtension) {
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

bool FileUnexpy3::loadFromDirectory() {
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

bool FileUnexpy3::saveJson() {
    QString sPython3ScriptJsonFilePath = getScriptDir() + "/python3script.json";
	QFile fileExtensionJson(sPython3ScriptJsonFilePath);

    QJsonDocument document(this->toJsonObject());
	fileExtensionJson.open(QFile::WriteOnly);
	fileExtensionJson.write(document.toJson(QJsonDocument::Indented));
	fileExtensionJson.close();
    return true;
}

QJsonObject FileUnexpy3::toJsonObject() {
    QJsonObject obj;
    obj["id"] = m_sExtensionId;
    obj["name"] = m_sExtensionName;
    obj["for"] = m_sExtensionFor;
    obj["enabled"] = m_bEnabled;
    return obj;
}

void FileUnexpy3::setId(const QString &sId) {
    m_sExtensionId = sId;
}

void FileUnexpy3::setName(const QString &sName) {
    m_sExtensionName = sName;
}

void FileUnexpy3::setFor(const QString &sFor) {
    m_sExtensionFor = sFor;
}

void FileUnexpy3::setEnabled(bool bEnabled) {
    m_bEnabled = bEnabled;
}

QString FileUnexpy3::getId() {
    return m_sExtensionId;
}

QString FileUnexpy3::getName() {
    return m_sExtensionName;
}

QString FileUnexpy3::getFor() {
    return m_sExtensionFor;
}

bool FileUnexpy3::isEnabled() {
    return m_bEnabled;
}

QString FileUnexpy3::getMainPyPath() {
    return getScriptDir() + "/main.py";
}

QString FileUnexpy3::getScriptDir() {
    return m_sScriptDir;
}
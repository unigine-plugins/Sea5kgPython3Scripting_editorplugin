
#include "FileUnexpy3.h"

#include <QFile>
#include <QJsonDocument>
#include <iostream>

FileUnexpy3::FileUnexpy3(const QString &sScriptDir) {
    m_sScriptDir = sScriptDir;
    m_nFormatVersion = 1;
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

int FileUnexpy3::getFormatVersion() {
    return m_nFormatVersion;
}

QString FileUnexpy3::getUuid() {
    return m_sUuid;
}

QString FileUnexpy3::getVersionOfUnigineEditor() {
    return m_sVersionOfUnigineEditor;
}

QString FileUnexpy3::getTitle() {
    return m_sTitle;
}

QString FileUnexpy3::getDescription() {
    return m_sDescription;
}

QString FileUnexpy3::getVersion() {
    return m_sVersion;
}

QVector<QString> FileUnexpy3::getTags() {
    return m_vTags;
}

QVector<QString> FileUnexpy3::getAuthors() {
    return m_vAuthors;
}

QString FileUnexpy3::getIcon() {
    return m_sIcon;
}

QVector<QString> FileUnexpy3::getScreenshots() {
    return m_vScreenshots;
}

QString FileUnexpy3::getUrl() {
    return m_sUrl;
}

QVector<QString> FileUnexpy3::getListOfFiles() {
    return m_vListOfFiles;
}


// void FileUnexpy3::setId(const QString &sId) {
//     m_sExtensionId = sId;
// }

// void FileUnexpy3::setName(const QString &sName) {
//     m_sExtensionName = sName;
// }

// void FileUnexpy3::setFor(const QString &sFor) {
//     m_sExtensionFor = sFor;
// }

// void FileUnexpy3::setEnabled(bool bEnabled) {
//     m_bEnabled = bEnabled;
// }

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
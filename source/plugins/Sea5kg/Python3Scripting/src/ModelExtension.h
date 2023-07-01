#pragma once

#include <QMainWindow>
#include <QMenuBar>
#include <QJsonObject>

class ModelExtension {


public:
    ModelExtension(const QString &sScriptDir);
    ~ModelExtension();
    bool loadFromJsonObject(const QJsonObject &jsonExt);
    bool loadFromDirectory();
    bool saveJson();
    QJsonObject toJsonObject();

    void setId(const QString &sId);
    void setName(const QString &sName);
    void setFor(const QString &sFor);
    void setEnabled(bool bEnabled);

    QString getId();
    QString getName();
    QString getFor();
    bool isEnabled();

    QString getMainPyPath();
    QString getScriptDir();

private:
    QString m_sScriptDir;
    QString m_sExtensionId;
    QString m_sExtensionName;
    QString m_sExtensionFor;
    bool m_bEnabled;
    QJsonObject m_jsonOriginalScriptInfo;
};
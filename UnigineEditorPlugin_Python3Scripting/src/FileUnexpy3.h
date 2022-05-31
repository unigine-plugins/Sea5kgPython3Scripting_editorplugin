#pragma once

#include <QJsonObject>

class FileUnexpy3 {
    public:
        FileUnexpy3(const QString &sScriptDir);
        ~FileUnexpy3();
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
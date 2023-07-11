#pragma once

#include <QJsonObject>
#include <QVector>
#include <QString>

class FileUnexpy3 {
    public:
        FileUnexpy3(const QString &sScriptDir);
        ~FileUnexpy3();
        bool loadFromJsonObject(const QJsonObject &jsonExt);
        bool loadFromDirectory();
        bool saveJson();
        QJsonObject toJsonObject();

        int getFormatVersion();
        QString getUuid();
        QString getVersionOfUnigineEditor();
        QString getTitle();
        QString getDescription();
        QString getVersion();
        QVector<QString> getTags();
        QVector<QString> getAuthors();
        QString getIcon();
        QVector<QString> getScreenshots();
        QString getUrl();
        QVector<QString> getListOfFiles();

        // QVector<QString> getDependencies();

        QString getId();
        QString getName();
        QString getFor();
        bool isEnabled();

        QString getMainPyPath();
        QString getScriptDir();

    private:
        int m_nFormatVersion;
        QString m_sUuid;
        QString m_sVersionOfUnigineEditor;
        QString m_sTitle;
        QString m_sDescription;
        QString m_sVersion;
        QVector<QString> m_vTags;
        QVector<QString> m_vAuthors;
        QString m_sIcon;
        QVector<QString> m_vScreenshots;
        QString m_sUrl;
        QVector<QString> m_vListOfFiles;


        QString m_sScriptDir;
        QString m_sExtensionId;
        QString m_sExtensionName;
        QString m_sExtensionFor;
        bool m_bEnabled;
        QJsonObject m_jsonOriginalScriptInfo;
};
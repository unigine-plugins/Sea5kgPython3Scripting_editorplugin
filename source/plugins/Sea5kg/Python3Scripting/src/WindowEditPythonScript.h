#pragma once

#include <QDialog>
#include <QPushButton>
#include <QCheckBox>
#include <QLabel>
#include <QLineEdit>
#include <QVBoxLayout>
#include <QListView>
#include <QStringList>
#include <QComboBox>
#include <QSyntaxStyle>
#include <QCodeEditor>
#include <QCloseEvent>
#include "ModelExtension.h"
#include "interfaces/IRunPythonScript.h"
#include "interfaces/IManagePythonScripts.h"

class WindowEditPythonScript : public QDialog
{
    Q_OBJECT
public:
    WindowEditPythonScript(QWidget *parent, IRunPythonScript *pRunPythonScript, IManagePythonScripts *pManagePythonScripts);

    void setModelExtension(ModelExtension *pModelExtension);

signals:
    void findNext(const QString &str, Qt::CaseSensitivity cs);
    void findPrevious(const QString &str, Qt::CaseSensitivity cs);

private slots:
    void saveClicked();
    void runClicked();
    void onCodeChanged();
    void closeEvent(QCloseEvent *event);


private:
    QSyntaxStyle *loadStyle(QString path);
    QString m_sFilePath;
    ModelExtension *m_pModel;
    IRunPythonScript *m_pRunPythonScript;
    IManagePythonScripts *m_pManagePythonScripts;

    QLabel *m_pLabelName;
    QLabel *m_pLabelFor;
    QLabel *m_pLabelCode;
    QCodeEditor *m_pCodeEditor;
    QSyntaxStyle *m_pStyle;
    QPushButton *m_pSaveButton;
    QPushButton *m_pRunButton;
    QPushButton *m_pCancelButton;

    QString m_sExtensionName;
    QString m_sExtensionFor;
    QString m_sCodeInFile;
};


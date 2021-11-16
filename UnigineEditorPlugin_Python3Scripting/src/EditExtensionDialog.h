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
#include "ModelExtension.h"

class EditExtensionDialog : public QDialog
{
    Q_OBJECT
public:
    EditExtensionDialog(QWidget *parent);
    
    void setModelExtension(ModelExtension *pModelExtension);

signals:
    void findNext(const QString &str, Qt::CaseSensitivity cs);
    void findPrevious(const QString &str, Qt::CaseSensitivity cs);

private slots:
    void saveClicked();
    // void saveClicked();
    void onCodeChanged();

private:
    QSyntaxStyle *loadStyle(QString path);
    QString m_sFilePath;

    QLabel *m_pLabelName;
    QLabel *m_pLabelFor;
    QLabel *m_pLabelCode;
    QCodeEditor *m_pCodeEditor;
    QSyntaxStyle *m_pStyle;
    QPushButton *m_pSaveButton;
    QPushButton *m_pCloseButton;

    QString m_sExtensionName;
    QString m_sExtensionFor;
    QString m_sCodeInFile;
};


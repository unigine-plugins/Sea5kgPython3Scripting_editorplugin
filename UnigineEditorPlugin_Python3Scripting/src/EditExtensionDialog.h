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

class EditExtensionDialog : public QDialog
{
    Q_OBJECT
public:
    EditExtensionDialog(
        QWidget *parent,
        const QString &sFilePath,
        const QString &sExtensionName,
        const QString &sExtensionFor
    );
    

signals:
    void findNext(const QString &str, Qt::CaseSensitivity cs);
    void findPrevious(const QString &str, Qt::CaseSensitivity cs);

private slots:
    void saveAndRunClicked();

private:
    QSyntaxStyle *loadStyle(QString path);
    QString m_sFilePath;

    QLabel *m_pLabelName;
    QLabel *m_pLabelFor;
    QLabel *m_pLabelCode;
    QCodeEditor *m_pCodeEditor;
    QSyntaxStyle *m_pStyle;
    QPushButton *m_pSaveAndRunButton;
    QPushButton *m_pCloseButton;

    QString m_sExtensionName;
    QString m_sExtensionFor;
};


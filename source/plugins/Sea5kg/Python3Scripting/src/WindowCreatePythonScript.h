#pragma once

#include <QDialog>
#include <QPushButton>
#include <QCheckBox>
#include <QLabel>
#include <QLineEdit>
#include <QVBoxLayout>
#include <QListView>
#include <QStringList>
#include <QStandardItemModel>
#include <QAbstractItemView>
#include <QComboBox>

class WindowCreatePythonScript : public QDialog
{
    Q_OBJECT
public:
    WindowCreatePythonScript(QWidget *parent, const QString &strPath);
    QString getExtensionName();
    QString getExtensionFor();

signals:
    void findNext(const QString &str, Qt::CaseSensitivity cs);
    void findPrevious(const QString &str, Qt::CaseSensitivity cs);

private slots:
    void nextClicked();

private:
    QLabel *m_pLabelSetName;
    QLineEdit *m_pLineEditExtensionName;
    QLabel *m_pLabelSelectExtensionFor;
    QComboBox *m_pComboBoxExtensionFor;
    QPushButton *m_pNextButton;
    QPushButton *m_pCloseButton;

    QString m_sExtensionName;
    QString m_sExtensionFor;
};


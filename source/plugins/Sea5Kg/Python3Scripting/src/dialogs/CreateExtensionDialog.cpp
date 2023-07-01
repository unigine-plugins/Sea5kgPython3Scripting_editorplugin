#include <QtGui>
#include <iostream>
#include <QCodeEditor>

#include "CreateExtensionDialog.h"

CreateExtensionDialog::CreateExtensionDialog(QWidget *parent, const QString &strPaths) : QDialog(parent){
    m_pLabelSetName = new QLabel(tr("Set name extension:"));
    m_pLineEditExtensionName = new QLineEdit();
    m_pLabelSelectExtensionFor = new QLabel(tr("Extension for:"));

    m_pComboBoxExtensionFor = new QComboBox();
    m_pComboBoxExtensionFor->addItem(tr("Materials"), QVariant("materials"));
    m_pComboBoxExtensionFor->addItem(tr("Nodes"), QVariant("nodes"));
    m_pComboBoxExtensionFor->addItem(tr("Properties"), QVariant("properties"));
    m_pComboBoxExtensionFor->addItem(tr("Runtimes"), QVariant("runtimes"));
    m_pComboBoxExtensionFor->addItem(tr("Tools"), QVariant("tools"));

    m_pNextButton = new QPushButton(tr("Next"));
    m_pNextButton->setDefault(true);

    m_pCloseButton = new QPushButton(tr("Close"));

    connect(m_pNextButton, SIGNAL(clicked()),this, SLOT(nextClicked()));
    connect(m_pCloseButton, SIGNAL(clicked()),this, SLOT(close()));

    QVBoxLayout *leftLayout = new QVBoxLayout;
    leftLayout->addWidget(m_pLabelSetName);
    leftLayout->addWidget(m_pLineEditExtensionName);
    leftLayout->addWidget(m_pLabelSelectExtensionFor);
    leftLayout->addWidget(m_pComboBoxExtensionFor);
    leftLayout->addWidget(m_pNextButton);
    leftLayout->addWidget(m_pCloseButton);

    // leftLayout->addStretch();

    QHBoxLayout *mainLayout = new QHBoxLayout;
    mainLayout->addLayout(leftLayout);
    // mainLayout->addLayout(rightLayout);
    setLayout(mainLayout);
    // setLayout(leftLayout);
    setWindowTitle(tr("Python3Scripting: Create Extension"));
    setFixedHeight(sizeHint().height());
}

QString CreateExtensionDialog::getExtensionName() {
    return m_sExtensionName;
}

QString CreateExtensionDialog::getExtensionFor() {
    return m_sExtensionFor;
}

void CreateExtensionDialog::nextClicked() {
    m_sExtensionName = m_pLineEditExtensionName->text();
    m_sExtensionFor = m_pComboBoxExtensionFor->currentData().toString();
    done(QDialog::Accepted);
}

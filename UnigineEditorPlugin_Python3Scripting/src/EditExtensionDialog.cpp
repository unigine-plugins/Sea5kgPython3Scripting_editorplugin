#include <QtGui>
#include <iostream>
#include <QGLSLCompleter>
#include <QLuaCompleter>
#include <QPythonCompleter>
#include <QCXXHighlighter>
#include <QGLSLHighlighter>
#include <QXMLHighlighter>
#include <QJSONHighlighter>
#include <QLuaHighlighter>
#include <QPythonHighlighter>

#include "EditExtensionDialog.h"

EditExtensionDialog::EditExtensionDialog(QWidget *parent) : QDialog(parent) {
	m_pLabelName = new QLabel(tr("Name: ") + "?");
	m_pLabelFor = new QLabel(tr("For: ") + "?");
	m_pLabelCode = new QLabel(tr("Code of extension:"));

    m_pSaveButton = new QPushButton(tr("Save script"));
	// m_pSaveAndRunButton->setDefault(true);
	m_pCloseButton = new QPushButton(tr("Close"));
	
	connect(m_pSaveButton, SIGNAL(clicked()),this, SLOT(saveClicked()));
	connect(m_pCloseButton, SIGNAL(clicked()),this, SLOT(close()));
	

	QHBoxLayout *topLayout = new QHBoxLayout;
	topLayout->addWidget(m_pSaveButton);
	topLayout->addWidget(m_pCloseButton);

	QVBoxLayout *leftLayout = new QVBoxLayout;
	leftLayout->addLayout(topLayout);
	
	leftLayout->addWidget(m_pLabelName);
	leftLayout->addWidget(m_pLabelFor);
	leftLayout->addWidget(m_pLabelCode);

	m_pCodeEditor = new QCodeEditor(this);
	m_pStyle = loadStyle(":/styles/drakula.xml");
	m_pCodeEditor->setSyntaxStyle(m_pStyle);
	m_pCodeEditor->setHighlighter(new QPythonHighlighter());
	m_pCodeEditor->setCompleter(new QPythonCompleter(this));
	connect(m_pCodeEditor, SIGNAL(textChanged()), this, SLOT(onCodeChanged()));

    leftLayout->addWidget(m_pCodeEditor);

	QHBoxLayout *mainLayout = new QHBoxLayout;
	mainLayout->addLayout(leftLayout);
	// mainLayout->addLayout(rightLayout);
	setLayout(mainLayout);
	// setLayout(leftLayout);
	setWindowTitle(tr("Python3Scripting: Edit Extension"));
	setFixedWidth(800);
	setFixedHeight(sizeHint().height());
}

void EditExtensionDialog::setModelExtension(ModelExtension *pModel) {
	m_pLabelName->setText(tr("Name: ") + pModel->getName());
	m_pLabelFor->setText(tr("For: ") + pModel->getFor());
	m_sFilePath = pModel->getMainPyPath();
	QFile fl(m_sFilePath);
    if (fl.open(QIODevice::ReadOnly)) {
		m_sCodeInFile = fl.readAll();
		m_pCodeEditor->setPlainText(m_sCodeInFile);
		// m_sCodeInFile = m_pCodeEditor->toPlainText().toUtf8();
    }
}

QSyntaxStyle *EditExtensionDialog::loadStyle(QString path) {
    QFile fl(path);

    if (!fl.open(QIODevice::ReadOnly)) {
        return nullptr;
    }

    auto style = new QSyntaxStyle(this);

    if (!style->load(fl.readAll()))
    {
        delete style;
        return nullptr;
    }

	return style;
}

void EditExtensionDialog::saveClicked() {
	QFile fileMainPy(m_sFilePath);
	fileMainPy.open(QFile::WriteOnly);
	fileMainPy.write(m_pCodeEditor->toPlainText().toUtf8());
	m_sCodeInFile = m_pCodeEditor->toPlainText().toUtf8();
	fileMainPy.close();
}

void EditExtensionDialog::onCodeChanged() {
	m_pSaveButton->setEnabled(m_sCodeInFile != m_pCodeEditor->toPlainText().toUtf8());
}
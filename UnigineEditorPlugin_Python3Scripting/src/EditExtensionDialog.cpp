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

EditExtensionDialog::EditExtensionDialog(
	QWidget *parent,
	const QString &sFilePath,
	const QString &sExtensionName,
	const QString &sExtensionFor
) : QDialog(parent) {
	m_sFilePath = sFilePath;
	m_pLabelName = new QLabel(tr("Name: ") + sExtensionName);
	m_pLabelFor = new QLabel(tr("For: ") + sExtensionFor);
	m_pLabelCode = new QLabel(tr("Code of extension:"));

    m_pSaveAndRunButton = new QPushButton(tr("Save"));
	m_pSaveAndRunButton->setDefault(true);
	m_pCloseButton = new QPushButton(tr("Close"));
	
	connect(m_pSaveAndRunButton, SIGNAL(clicked()),this, SLOT(saveAndRunClicked()));
	connect(m_pCloseButton, SIGNAL(clicked()),this, SLOT(close()));

	QVBoxLayout *leftLayout = new QVBoxLayout;
	
	leftLayout->addWidget(m_pLabelName);
	leftLayout->addWidget(m_pLabelFor);
	leftLayout->addWidget(m_pLabelCode);

	m_pCodeEditor = new QCodeEditor(this);
	m_pStyle = loadStyle(":/styles/drakula.xml");
	m_pCodeEditor->setSyntaxStyle(m_pStyle);

	QFile fl(m_sFilePath);
    if (fl.open(QIODevice::ReadOnly)) {
		m_pCodeEditor->setPlainText(fl.readAll());
    }
	m_pCodeEditor->setHighlighter(new QPythonHighlighter());
	m_pCodeEditor->setCompleter(new QPythonCompleter(this));

    leftLayout->addWidget(m_pCodeEditor);

	leftLayout->addWidget(m_pSaveAndRunButton);
	leftLayout->addWidget(m_pCloseButton);

	QHBoxLayout *mainLayout = new QHBoxLayout;
	mainLayout->addLayout(leftLayout);
	// mainLayout->addLayout(rightLayout);
	setLayout(mainLayout);
	// setLayout(leftLayout);
	setWindowTitle(tr("Python3Scripting: Edit Extension"));
	setFixedWidth(800);
	setFixedHeight(sizeHint().height());
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

void EditExtensionDialog::saveAndRunClicked() {
	QFile fileMainPy(m_sFilePath);
	fileMainPy.open(QFile::WriteOnly);
	fileMainPy.write(m_pCodeEditor->toPlainText().toUtf8());
	fileMainPy.close();

	done(QDialog::Accepted);
}

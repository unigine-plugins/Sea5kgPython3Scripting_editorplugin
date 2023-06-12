#include <QtGui>
#include <iostream>
#include <QCodeEditor>

#include "ManageScriptsDialog.h"

ManageScriptsDialog::ManageScriptsDialog(
	QWidget *parent,
	QVector<ModelExtension *> *vScripts
) : QDialog(parent) {
	m_vScripts = vScripts;
	m_pLineEditSearch = new QLineEdit();
	m_pLineEditSearch->setPlaceholderText(tr("Search..."));
    m_pRemoveButton = new QPushButton(tr("Remove"));
	m_pRemoveButton->setDefault(true);

	m_pCloseButton = new QPushButton(tr("Close"));
	
	connect(m_pRemoveButton, SIGNAL(clicked()),this, SLOT(removeClicked()));
	connect(m_pCloseButton, SIGNAL(clicked()),this, SLOT(close()));

	QVBoxLayout *leftLayout = new QVBoxLayout;

	// leftLayout->addWidget(m_pLineEditSearch);
	// leftLayout->addStretch();
	createListWidget();
	leftLayout->addWidget(m_pListWidget);

	QHBoxLayout *buttonsLayout = new QHBoxLayout;
	// buttonsLayout->addWidget(m_pRemoveButton);
	buttonsLayout->addWidget(new QWidget);
	buttonsLayout->addWidget(m_pCloseButton);
	buttonsLayout->addStretch();
	leftLayout->addLayout(buttonsLayout);

	QHBoxLayout *mainLayout = new QHBoxLayout;
	mainLayout->addLayout(leftLayout);
	// mainLayout->addLayout(rightLayout);
	setLayout(mainLayout);
	// setLayout(leftLayout);
	setWindowTitle(tr("Python3Scripting: Manage Scripts"));
	setFixedWidth(800);
	setFixedHeight(sizeHint().height());

    // createOtherWidgets();
    // createLayout();
    // createConnections();
}


void ManageScriptsDialog::createListWidget(){
    m_pListWidget = new QListWidget;
	
	QStringList strList;
	for (int i = 0; i < m_vScripts->size(); i++) {
		 ModelExtension *pModel = m_vScripts->at(i);
		 QString sItem = pModel->getFor() + ": " + pModel->getName();
		 strList << sItem;
	}
    m_pListWidget->addItems(strList);

    QListWidgetItem* item = 0;
    for(int i = 0; i < m_pListWidget->count(); ++i){
        item = m_pListWidget->item(i);
        item->setFlags(item->flags() | Qt::ItemIsUserCheckable);
        item->setCheckState(Qt::Unchecked);
    }
}

// void ManageScriptsDialog::createConnections(){
    // QObject::connect(widget, SIGNAL(itemChanged(QListWidgetItem*)),
    //                  this, SLOT(highlightChecked(QListWidgetItem*)));
    // QObject::connect(saveButton, SIGNAL(clicked()), this, SLOT(save()));
    // QObject::connect(closeButton, SIGNAL(clicked()), this, SLOT(close()));
// }

// void ManageScriptsDialog::highlightChecked(QListWidgetItem *item){
//     if(item->checkState() == Qt::Checked)
//         item->setBackgroundColor(QColor("#ffffb2"));
//     else
//         item->setBackgroundColor(QColor("#ffffff"));
// }

void ManageScriptsDialog::removeClicked() {
	// m_sExtensionName = m_pLineEditExtensionName->text();
	// done(QDialog::Accepted);
}

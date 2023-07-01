#include <QtGui>
#include <iostream>
#include <QCodeEditor>

#include "dialogs/CreateExtensionDialog.h"
#include "ManageScriptsDialog.h"

ManageScriptsDialog::ManageScriptsDialog(
    QWidget *parent,
    QVector<ModelExtension *> *vScripts,
    IManageScripts *pManageScripts
) : QDialog(parent) {
    m_pParent = parent;
    m_vScripts = vScripts;
    m_pManageScripts = pManageScripts;
    m_pLineEditSearch = new QLineEdit();
    m_pLineEditSearch->setPlaceholderText(tr("Search..."));

    m_pRemoveButton = new QPushButton(tr("Remove"));
    m_pRemoveButton->setDefault(true);
    m_pCreateButton = new QPushButton(tr("Create"));
    m_pCloseButton = new QPushButton(tr("Close"));

    connect(m_pCreateButton, SIGNAL(clicked()),this, SLOT(createClicked()));
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
    buttonsLayout->addWidget(m_pCreateButton);
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

void ManageScriptsDialog::createClicked() {
    // QString strPaths = listRemove.join("\n");
    // QWidget *pWin = QApplication::activeWindow();
    QString strPaths = "";
    CreateExtensionDialog sd(m_pParent, strPaths);
    sd.setModal(true);
    if (sd.exec() == QDialog::Accepted){
        QString sName = sd.getExtensionName();
        QString sFor = sd.getExtensionFor();
        // log_info("createNewExtension. Next with " + sFor + ": " + sName);

        // normalize extension id
        QString sExtensionId = sFor + "_";
        for (int i = 0; i < sName.length(); i++) {
            if (sName[i].isNumber()
                || (sName[i] >= 'a' && sName[i] <= 'z')
                || (sName[i] >= 'A' && sName[i] <= 'Z')
            ) {
                sExtensionId += sName[i].toLower();
            } else {
                sExtensionId += '_';
            }
        }
        // log_info("createNewExtension. Next sExtensionId == " + sExtensionId);

        // preapre extension folder
        QDir newExtDir(m_pManageScripts->getPython3ScriptingDirPath() + "/" + sExtensionId);
        int num = 0;
        while (newExtDir.exists()) {
            newExtDir = QDir(m_pManageScripts->getPython3ScriptingDirPath() + "/" + sExtensionId + "_" + QString::number(num));
        }
        sExtensionId = newExtDir.dirName();
        QDir(m_pManageScripts->getPython3ScriptingDirPath()).mkdir(sExtensionId);

        QString sPython3ScriptingMainPyPath = newExtDir.absolutePath() + "/main.py";
        QFile fileMainPy(sPython3ScriptingMainPyPath);
        // TODO!!!
        if (!fileMainPy.exists()) {
            fileMainPy.open(QFile::WriteOnly);
            fileMainPy.write(
                "import unigine\r\n"
                "print('￼Disable shadows')\r\n"
                "for mat in LIST_MATERIALS:\r\n"
                "    print(mat.get_name())\r\n"
                "    mat.set_shadow_mask(￼0x00000000)\r\n"
            );
            fileMainPy.close();
        }
        auto pModel = new ModelExtension(newExtDir.absolutePath());
        pModel->setId(sExtensionId);
        pModel->setName(sName);
        pModel->setFor(sFor);
        pModel->setEnabled(true);
        m_pManageScripts->addModelExtension(pModel);

        // auto *pEdit = getEditDialog();
        // pEdit->setModelExtension(pModel);
        // pEdit->show();
    }
}
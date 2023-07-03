#include <QtGui>
#include <iostream>
#include <QCodeEditor>
#include <QMessageBox>

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
    m_pRemoveButton->setEnabled(false);
    m_pEnableButton = new QPushButton(tr("Enable"));
    m_pEnableButton->setEnabled(false);
    m_pCreateButton = new QPushButton(tr("Create"));
    m_pCloseButton = new QPushButton(tr("Close"));

    connect(m_pCreateButton, SIGNAL(clicked()),this, SLOT(createClicked()));
    connect(m_pEnableButton, SIGNAL(clicked()),this, SLOT(enableOrDisableClicked()));
    connect(m_pRemoveButton, SIGNAL(clicked()),this, SLOT(removeClicked()));
    connect(m_pCloseButton, SIGNAL(clicked()),this, SLOT(close()));

    QVBoxLayout *leftLayout = new QVBoxLayout;

    // leftLayout->addWidget(m_pLineEditSearch);
    // leftLayout->addStretch();
    createListWidget();
    leftLayout->addWidget(m_pListWidget);

    QHBoxLayout *buttonsLayout = new QHBoxLayout;
    buttonsLayout->addWidget(m_pCreateButton);
    buttonsLayout->addWidget(m_pEnableButton);
    buttonsLayout->addWidget(m_pRemoveButton);
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
}

QString ManageScriptsDialog::makeName(ModelExtension *pModel) {
    QString sName = pModel->getFor() + ": " + pModel->getName();
    if (pModel->isEnabled()) {
        sName += " (enabled)";
    } else {
        sName += " (disabled)";
    }
    return sName;
}

void ManageScriptsDialog::reloadList() {
    m_pListWidget->clear();

    for (int i = 0; i < m_vScripts->size(); i++) {
        QListWidgetItem *pItem = new QListWidgetItem(m_pListWidget);
        ModelExtension *pModel = m_vScripts->at(i);
        pItem->setData(Qt::UserRole, QVariant(pModel->getId()));
        pItem->setText(makeName(pModel));
        m_pListWidget->addItem(pItem);
    }

    selectionChanged();
}

void ManageScriptsDialog::selectedItem(ModelExtension *pModel) {
    QString sName = makeName(pModel);
    QListWidgetItem* item = 0;
    for (int i = 0; i < m_pListWidget->count(); ++i) {
        item = m_pListWidget->item(i);
        if (item->text() == sName) {
            item->setSelected(true);
        }
    }
}

void ManageScriptsDialog::createListWidget() {
    m_pListWidget = new QListWidget;
    m_pListWidget->setSortingEnabled(true);
    QObject::connect(m_pListWidget, SIGNAL(itemSelectionChanged()), this, SLOT(selectionChanged()));
    reloadList();
}

void ManageScriptsDialog::removeClicked() {
    QList<QListWidgetItem *> vItems = m_pListWidget->selectedItems();
    QString sScriptId = "";
    QString sName = "";
    for (int i = 0; i < vItems.count(); ++i) {
        sName = vItems[i]->text();
        sScriptId = vItems[i]->data(Qt::UserRole).toString();
    }

    if (sScriptId == "") {
        return;
    }

    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(
        this,
        "Remove script",
        "Are you sure to remove '" + sName + "'?",
        QMessageBox::Yes | QMessageBox::No
    );

    if (reply == QMessageBox::Yes) {
        m_pManageScripts->removeModelScriptById(sScriptId);
        reloadList();
    }
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

        // prepare extension folder
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

        reloadList();
        selectedItem(pModel);

        // auto *pEdit = getEditDialog();
        // pEdit->setModelExtension(pModel);
        // pEdit->show();

    }
}

void ManageScriptsDialog::enableOrDisableClicked() {
    QList<QListWidgetItem *> vItems = m_pListWidget->selectedItems();
    QString sScriptId = "";
    for (int i = 0; i < vItems.count(); ++i) {
        sScriptId = vItems[i]->data(Qt::UserRole).toString();
    }
    for (int i = 0; i < m_vScripts->size(); ++i) {
        ModelExtension *pModel = m_vScripts->at(i);
        if (pModel->getId() == sScriptId) {
            if (pModel->isEnabled()) {
                m_pManageScripts->disableModelScriptById(sScriptId);
            } else {
                m_pManageScripts->enableModelScriptById(sScriptId);
            }
            reloadList();
            selectedItem(pModel);
        }
    }
}

void ManageScriptsDialog::selectionChanged() {
    QList<QListWidgetItem *> vItems = m_pListWidget->selectedItems();
    m_pRemoveButton->setEnabled(vItems.count() > 0);

    m_pEnableButton->setEnabled(vItems.count() > 0);
    QString sScriptId = "";
    for (int i = 0; i < vItems.count(); ++i) {
        sScriptId = vItems[i]->data(Qt::UserRole).toString();
    }
    for (int i = 0; i < m_vScripts->size(); ++i) {
        ModelExtension *pModel = m_vScripts->at(i);
        if (pModel->getId() == sScriptId) {
            if (pModel->isEnabled()) {
                m_pEnableButton->setText(tr("Disable"));
            } else {
                m_pEnableButton->setText(tr("Enable"));
            }
        }
    }
}

#include "Sea5kgPython3Scripting_editorplugin.h"
#include "PythonExecutor.h"
// #include "WindowCreatePythonScript.h"

#include <UnigineLog.h>
#include <UnigineEditor.h>
#include <QCoreApplication>
#include <UnigineMaterials.h>

#include <QMessageBox>
#include <QDir>
#include <QJsonDocument>
#include <QJsonArray>
#include <QMessageBox>
#include <iostream>
#include <QGuiApplication>
#include <QScreen>

// ------------------------------------------------------------------------------------------
// Sea5kgPython3Scripting_editorplugin

Sea5kgPython3Scripting_editorplugin::Sea5kgPython3Scripting_editorplugin()  = default;
Sea5kgPython3Scripting_editorplugin::~Sea5kgPython3Scripting_editorplugin() = default;

std::string log_prepare_message(QString message) {
    message = QString(" >>>>>> Sea5kgPython3Scripting_editorplugin::" + message + "\r\n");
    return message.toStdString();
}

void log_info(QString message) {
    Unigine::Log::message("%s", log_prepare_message(message).c_str());
}

void log_error(QString message) {
    std::string sMessage = log_prepare_message(message);
    const char * pMessage = sMessage.c_str();
    Unigine::Log::error("%s", pMessage);
}

bool Sea5kgPython3Scripting_editorplugin::init() {
    log_info(" Initializing...");
    m_pEditScriptWindow = nullptr;
    m_pWindowManagePythonScripts = nullptr;
    m_pScriptThread = nullptr;
    m_pMenuPython3Extensions = nullptr;
    m_pMainWindow = nullptr;
    m_nLatestMenu = MenuSelectedType::MST_NONE;
    m_mapCollectorMenuSelected[MenuSelectedType::MST_MATERIALS] = new CollectorMenuSelected(this, "Materials");
    m_mapCollectorMenuSelected[MenuSelectedType::MST_NODES] = new CollectorMenuSelected(this, "Nodes");
    m_mapCollectorMenuSelected[MenuSelectedType::MST_PROPERTIES] = new CollectorMenuSelected(this, "Properties");
    m_mapCollectorMenuSelected[MenuSelectedType::MST_RUNTIMES] = new CollectorMenuSelected(this, "Runtimes");
    m_mapCollectorMenuSelected[MenuSelectedType::MST_NONE] = new CollectorMenuSelected(this, "Tools");

    m_sRootPath = QCoreApplication::applicationDirPath(); // must be in bin

    if (!loadExtensions()) {
        return false;
    }

    connect(UnigineEditor::Selection::instance(), &UnigineEditor::Selection::changed, this, &Sea5kgPython3Scripting_editorplugin::globalSelectionChanged);
    connect(
        this, &Sea5kgPython3Scripting_editorplugin::signal_executeRunner,
        this, &Sea5kgPython3Scripting_editorplugin::slot_executeRunner
    );
    g_pPython3RunnerMain = this;

    log_info("Initialiazed");

    return true;
}

void Sea5kgPython3Scripting_editorplugin::shutdown() {
    log_info("shutdown");
    if (m_pEditScriptWindow != nullptr) {
        delete m_pEditScriptWindow;
    }
}



// IManagePythonScripts
void Sea5kgPython3Scripting_editorplugin::addModelExtension(ModelExtension *pModel) {
    m_vScripts.push_back(pModel);
    saveAndReloadExtensions();
}

void Sea5kgPython3Scripting_editorplugin::removeModelScriptById(QString sScriptId) {
    log_info("removeExtension. sExtensionId == " + sScriptId);
    ModelExtension *pExt = nullptr;
    for (int i = 0; i < m_vScripts.size(); i++) {
        if (m_vScripts[i]->getId() == sScriptId) {
            pExt = m_vScripts[i];
            m_vScripts.removeAt(i);
            break;
        }
    }

    // remove all files for extension
    // TODO ask sure?
    if (pExt != nullptr) {
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(
            m_pMainWindow,
            "Test",
            "Are you sure that wanna delete extension?\nDirectory: " + pExt->getScriptDir(),
            QMessageBox::Yes|QMessageBox::No
        );
        if (reply == QMessageBox::Yes) {
            QDir dir(pExt->getScriptDir());
            dir.removeRecursively();
        }
    }
    saveAndReloadExtensions(); // here will be removed
}

void Sea5kgPython3Scripting_editorplugin::enableModelScriptById(QString sScriptId) {
    for (int i = 0; i < m_vScripts.size(); i++) {
        if (m_vScripts[i]->getId() == sScriptId) {
            m_vScripts[i]->setEnabled(true);
        }
    }
    saveAndReloadExtensions();
}

void Sea5kgPython3Scripting_editorplugin::disableModelScriptById(QString sScriptId) {
    for (int i = 0; i < m_vScripts.size(); i++) {
        if (m_vScripts[i]->getId() == sScriptId) {
            m_vScripts[i]->setEnabled(false);
        }
    }
    saveAndReloadExtensions();
}

void Sea5kgPython3Scripting_editorplugin::openWindowEditPythonScriptById(QString sScriptId) {
    ModelExtension *pModel = nullptr;
    for (int i = 0; i < m_vScripts.size(); i++) {
        if (m_vScripts[i]->getId() == sScriptId) {
            pModel = m_vScripts[i];
        }
    }
    if (pModel == nullptr) {
        Unigine::Log::error("Not found sctipt %s\n", sScriptId.toStdString().c_str());
        return;
    }
     if (m_pEditScriptWindow == nullptr) {
        m_pEditScriptWindow = new WindowEditPythonScript(m_pMainWindow, this, this);
        Qt::WindowFlags flags = m_pEditScriptWindow->windowFlags();
        m_pEditScriptWindow->setWindowFlags(flags | Qt::Tool);
    }

    m_pEditScriptWindow->setModelExtension(pModel);
    m_pEditScriptWindow->show();
    if (m_pWindowManagePythonScripts != nullptr) {
        m_pWindowManagePythonScripts->hide();
    }
}

void Sea5kgPython3Scripting_editorplugin::showWindowManagePythonScripts(QString sScriptId) {
    if (m_pWindowManagePythonScripts == nullptr) {
        m_pWindowManagePythonScripts = new WindowManagePythonScripts(m_pMainWindow, &m_vScripts, this);
    }

    Qt::WindowFlags flags = m_pWindowManagePythonScripts->windowFlags();
    m_pWindowManagePythonScripts->setWindowFlags(flags | Qt::Tool);
    m_pWindowManagePythonScripts->show();

    ModelExtension *pModel = nullptr;
    for (int i = 0; i < m_vScripts.size(); i++) {
        if (m_vScripts[i]->getId() == sScriptId) {
            pModel = m_vScripts[i];
        }
    }
    if (pModel != nullptr) {
        m_pWindowManagePythonScripts->selectedItem(pModel);
    }
}

QString Sea5kgPython3Scripting_editorplugin::getPython3ScriptingDirPath() {
    return m_sPython3ScriptingDirPath;
}

// IPython3RunnerMain
void Sea5kgPython3Scripting_editorplugin::executeRunner(Python3Runner *p) {
    p->mutexAsync.lock();
    emit signal_executeRunner(p);
}

void Sea5kgPython3Scripting_editorplugin::slot_executeRunner(Python3Runner *pRunner) {
    if (QThread::currentThread() != QCoreApplication::instance()->thread()) {
        log_error("Sea5kgPython3Scripting_editorplugin::slot_executeRunner Not main thread!!!");
    }
    pRunner->run();
    pRunner->mutexAsync.unlock();
}

void Sea5kgPython3Scripting_editorplugin::manageScripts() {
    showWindowManagePythonScripts("");
}

void Sea5kgPython3Scripting_editorplugin::menuClickAbout() {
    QMessageBox msgBox;
    msgBox.setStyleSheet("QLabel{min-width: 700px;}");
    msgBox.setModal( true );
    msgBox.setWindowTitle("About Python3 Extensions Plugin");
    msgBox.setTextFormat(Qt::RichText);
    msgBox.setText(
        "<h2>Python3Extensions</h2> <br>"
        "Version: " + QString(PYTHON3SCRIPTING_VERSION) + " <br>"
        "Source-code: <a href='https://github.com/unigine-plugins/unigine-editor-python3scripting'>https://github.com/unigine-plugins/unigine-editor-python3scripting</a> <br>"
        "<hr/>"
        "Components and author(s):<ul>"
        "  <li>Build-in Python-3.10.1 (Python Software Foundation): <a href='https://github.com/python/cpython/tree/v3.10.1'>https://github.com/python/cpython/tree/v3.10.1</a></li>"
        "  <li>Build-in QCodeEditor (MIT License): <a href='https://github.com/Megaxela/QCodeEditor'>https://github.com/Megaxela/QCodeEditor</a> </li>"
        "  <li>Evgenii Sopov (mrseakg@gmail.com) </li>"
        "</ul><hr>"
        // + sFileLicenseContent
    );
    msgBox.exec();
}

void Sea5kgPython3Scripting_editorplugin::processSelectedMaterials() {
    ModelExtension *pModel = findModelExtensionByAction(sender());
    if (pModel == nullptr) {
        log_error("processSelectedMaterials Could not find model for this action");
        return;
    }
    // TODO q mutex lock ?
    runPythonScript(pModel);
}

void Sea5kgPython3Scripting_editorplugin::processSelectedNodes() {
    ModelExtension *pModel = findModelExtensionByAction(sender());
    if (pModel == nullptr) {
        log_error("processSelectedNodes Could not find model for this action");
        return;
    }
    runPythonScript(pModel);
}

void Sea5kgPython3Scripting_editorplugin::processSelectedProperties() {
    ModelExtension *pModel = findModelExtensionByAction(sender());
    if (pModel == nullptr) {
        log_error("processSelectedProperties Could not find model for this action");
        return;
    }
    runPythonScript(pModel);
}

void Sea5kgPython3Scripting_editorplugin::processSelectedRuntimes() {
    ModelExtension *pModel = findModelExtensionByAction(sender());
    if (pModel == nullptr) {
        log_error("processSelectedRuntimes Could not find model for this action");
        return;
    }
    runPythonScript(pModel);
}

void Sea5kgPython3Scripting_editorplugin::processSelectedTools() {
    ModelExtension *pModel = findModelExtensionByAction(sender());
    if (pModel == nullptr) {
        log_error("processSelectedTools Could not find model for this action");
        return;
    }
    runPythonScript(pModel);
}

void Sea5kgPython3Scripting_editorplugin::globalSelectionChanged() {
    // using namespace std;
    m_vSelectedGuids.clear();
    m_vSelectedNodes.clear();
    if (const UnigineEditor::SelectorGUIDs* selector = UnigineEditor::Selection::getSelectorMaterials()) {
        log_info("Selected materials");
        switchMenuTo(MenuSelectedType::MST_MATERIALS);
        Unigine::Vector<Unigine::UGUID> vGuids = selector->guids();
        for(int i = 0; i < vGuids.size(); i++) {
            m_vSelectedGuids.append(vGuids[i]);
        }
    } else if (auto selector = UnigineEditor::Selection::getSelectorRuntimes()) {
        log_info("Selected runtimes");
        switchMenuTo(MenuSelectedType::MST_RUNTIMES);
        Unigine::Vector<Unigine::UGUID> vGuids = selector->guids();
        for(int i = 0; i < vGuids.size(); i++) {
            m_vSelectedGuids.append(vGuids[i]);
        }
    } else if (auto selector = UnigineEditor::Selection::getSelectorProperties()) {
        log_info("Selected properties");
        switchMenuTo(MenuSelectedType::MST_PROPERTIES);
        Unigine::Vector<Unigine::UGUID> vGuids = selector->guids();
        for(int i = 0; i < vGuids.size(); i++) {
            m_vSelectedGuids.append(vGuids[i]);
        }
        // m_vSelectedGuids.append(selector->guids());
    } else if (auto selector = UnigineEditor::Selection::getSelectorNodes()) {
        log_info("Selected nodes");
        switchMenuTo(MenuSelectedType::MST_NODES);
        Unigine::Vector<Unigine::NodePtr> vNodes = selector->getNodes();
        for(int i = 0; i < vNodes.size(); i++) {
            m_vSelectedNodes.append(vNodes[i]);
        }
    } else {
        log_info("Something else");
        switchMenuTo(MenuSelectedType::MST_NONE);
    }
}

void Sea5kgPython3Scripting_editorplugin::runPythonScript(ModelExtension *pModel, QString sAlternativeCode) {
    log_info("Start run python script...");
    if (m_pScriptThread != nullptr && !m_pScriptThread->isFinished()) {
        log_info("Another script working...");
        return;
    }

    if (m_pScriptThread != nullptr) {
        delete m_pScriptThread;
    }

    QString sPythonHome = QCoreApplication::applicationDirPath() + "/plugins/Sea5kg/Python3Scripting/Python3Home/";
    log_info("PYTHONHOME=" + sPythonHome);
    qputenv("PYTHONHOME", sPythonHome.toLatin1());
    log_info("PYTHONUNBUFFERED=1");
    qputenv("PYTHONUNBUFFERED", "1");

    // QProcessEnvironment proc

    disconnect(UnigineEditor::Selection::instance(), &UnigineEditor::Selection::changed, this, &Sea5kgPython3Scripting_editorplugin::globalSelectionChanged);

    if (sAlternativeCode == "") {
        QFile fl(pModel->getMainPyPath());
        if (fl.open(QIODevice::ReadOnly)) {
            sAlternativeCode = fl.readAll();
        }
    }

    log_info("Run script in thread");
    m_pScriptThread = new RunScriptInThread(
        pModel->getId(),
        m_sPython3ScriptingDirPath
    );
    log_info("Prepare environment for python script...");
    if (m_nLatestMenu == MenuSelectedType::MST_MATERIALS) {
        m_pScriptThread->executor()->addMaterials(m_vSelectedGuids);
    } else if(m_nLatestMenu == MenuSelectedType::MST_RUNTIMES) {
        m_pScriptThread->executor()->addRuntimes(m_vSelectedGuids);
    } else if(m_nLatestMenu == MenuSelectedType::MST_PROPERTIES) {
        m_pScriptThread->executor()->addRuntimes(m_vSelectedGuids);
    } else if(m_nLatestMenu == MenuSelectedType::MST_NODES) {
        m_pScriptThread->executor()->addNodes(m_vSelectedNodes);
    }
    log_info("Add code to execution...");
    m_pScriptThread->setExecCode(sAlternativeCode);
    log_info("Start...");
    m_pScriptThread->start();
    log_info("Done...");

    connect(UnigineEditor::Selection::instance(), &UnigineEditor::Selection::changed, this, &Sea5kgPython3Scripting_editorplugin::globalSelectionChanged);

    // TODO
    // if (m_pScriptThread != nullptr) {
    //     delete m_pScriptThread;
    //     m_pScriptThread = nullptr;
    // }
}

void Sea5kgPython3Scripting_editorplugin::switchMenuTo(MenuSelectedType nType) {

    QMap<MenuSelectedType, CollectorMenuSelected *>::iterator i;
     for (i = m_mapCollectorMenuSelected.begin(); i != m_mapCollectorMenuSelected.end(); ++i) {
        i.value()->setEnabled(false);
    }
    if (m_mapCollectorMenuSelected.contains(nType)) {
        m_mapCollectorMenuSelected[nType]->setEnabled(true);
    }
    m_nLatestMenu = nType;
}

bool Sea5kgPython3Scripting_editorplugin::prepareDirectoryWithExtensions() {
    // Prepare directory
    m_sPython3ScriptingDirPath = m_sRootPath + "/plugins/Sea5kg/Python3Scripting/Scripts";
    QDir dirPython3Scripting(m_sPython3ScriptingDirPath);
    if (!dirPython3Scripting.exists()) {
        QDir(m_sRootPath).mkdir("Python3Scripting");
    }
    if (!dirPython3Scripting.exists()) {
        log_error(" Could not create directory " + m_sPython3ScriptingDirPath);
        return false;
    }
    return true;
}

/*
bool Sea5kgPython3Scripting_editorplugin::prepareExtensionsJson() {
    QFile fileExtensionsJson(m_sPython3ScriptingJsonFilePath);
    // example
    if (!fileExtensionsJson.exists()) {
        QJsonArray exts;
        QJsonObject obj;
        obj["id"] = "materials_shadows_disable";
        obj["name"] = "Test1";
        obj["for"] = "materials";
        obj["enabled"] = true;
        exts.append(obj);
        m_jsonExtensions["py3extensions"] = exts;
        QDir(m_sRootPath).mkdir("Python3Scripting/materials_shadows_disable");

        QString sPython3ScriptingMainPyPath = m_sPython3ScriptingDirPath + "/materials_shadows_disable/main.py";
        QFile fileMainPy(sPython3ScriptingMainPyPath);
        if (!fileMainPy.exists()) {
            fileMainPy.open(QFile::WriteOnly);
            fileMainPy.write(
                "import unigine\r\n"
                "print('Hello1')\r\n"
                "unigine.log_info('Hello2')\r\n"
            );
            fileMainPy.close();
        }

        QJsonObject jsonExtensions;
        QJsonDocument document(m_jsonExtensions);
        fileExtensionsJson.open(QFile::WriteOnly);
        fileExtensionsJson.write(document.toJson(QJsonDocument::Indented));
        fileExtensionsJson.close();
    }
    return true;
}
*/

bool Sea5kgPython3Scripting_editorplugin::rewriteExtensionsJson() {
    for (int i = 0; i < m_vScripts.size(); i++) {
        ModelExtension *pModel = m_vScripts[i];
        pModel->saveJson();
    }
    return true;
}

bool Sea5kgPython3Scripting_editorplugin::safeCreateMenuPython3Scripting() {
    QString sMenuName = UnigineEditor::Constants::MM_TOOLS;
    QMenu *pMenu = UnigineEditor::WindowManager::findMenu(sMenuName.toStdString().c_str());
    if (pMenu == nullptr) {
        log_error(" Not found menu: " + sMenuName);
        return false;
    }
    // log_info(" Found menu " + sMenuName);
    // get main menu
    if (m_pMenuPython3Extensions == nullptr) {
        QWidget* pMenuTools = dynamic_cast<QWidget*>(pMenu);
        m_pMainWindow = pMenuTools->parentWidget()->parentWidget();
        // QMenuBar* pMenuBar = dynamic_cast<QMenuBar*>(pMenuTools->parentWidget());
        // m_pMenuPython3Extensions = pMenuBar->addMenu(tr("Python3Scripting"));

        m_pMenuPython3Extensions = pMenu->addMenu(tr("Python3Scripting"));

        QString sClassname  = m_pMainWindow->metaObject()->className();
        log_info(" Found  " + sClassname);
    }
    return true;
}

bool Sea5kgPython3Scripting_editorplugin::reloadMenuForSelected() {

    QMap<MenuSelectedType, CollectorMenuSelected *>::iterator i;
     for (i = m_mapCollectorMenuSelected.begin(); i != m_mapCollectorMenuSelected.end(); ++i) {
        i.value()->initMenuSafe(m_pMenuPython3Extensions);
    }
    switchMenuTo(m_nLatestMenu);

     for (i = m_mapCollectorMenuSelected.begin(); i != m_mapCollectorMenuSelected.end(); ++i) {
        i.value()->clear();
    }

    for (int i = 0; i < m_vScripts.size(); i++) {
        ModelExtension *pModel = m_vScripts[i];
        if (!pModel->isEnabled()) {
            continue;
        }

        QAction *pAction = new QAction(pModel->getName(), this);
        pAction->setData(QVariant(pModel->getId()));

        if (pModel->getFor() == "materials") {
            connect(pAction, &QAction::triggered, this, &Sea5kgPython3Scripting_editorplugin::processSelectedMaterials);
            m_mapCollectorMenuSelected[MenuSelectedType::MST_MATERIALS]->addAction(pAction);
        } else if (pModel->getFor() == "nodes") {
            connect(pAction, &QAction::triggered, this, &Sea5kgPython3Scripting_editorplugin::processSelectedNodes);
            m_mapCollectorMenuSelected[MenuSelectedType::MST_NODES]->addAction(pAction);
        } else if (pModel->getFor() == "properties") {
            connect(pAction, &QAction::triggered, this, &Sea5kgPython3Scripting_editorplugin::processSelectedProperties);
            m_mapCollectorMenuSelected[MenuSelectedType::MST_PROPERTIES]->addAction(pAction);
        } else if (pModel->getFor() == "runtimes") {
            connect(pAction, &QAction::triggered, this, &Sea5kgPython3Scripting_editorplugin::processSelectedRuntimes);
            m_mapCollectorMenuSelected[MenuSelectedType::MST_RUNTIMES]->addAction(pAction);
        } else if (pModel->getFor() == "tools") {
            connect(pAction, &QAction::triggered, this, &Sea5kgPython3Scripting_editorplugin::processSelectedRuntimes);
            m_mapCollectorMenuSelected[MenuSelectedType::MST_NONE]->addAction(pAction);
        } else {
            log_error("skipped extension with id " + pModel->getId());
        }
    }
    return true;
}

bool Sea5kgPython3Scripting_editorplugin::initMenuForManageScripts() {
    m_pActionManageScripts = new QAction(tr("Manage scripts"), this);
    connect(m_pActionManageScripts, &QAction::triggered, this, &Sea5kgPython3Scripting_editorplugin::manageScripts);
    m_pMenuPython3Extensions->addAction(m_pActionManageScripts);
    return true;
}

bool Sea5kgPython3Scripting_editorplugin::initMenuForAbout() {
    m_pActionAbout = new QAction(tr("About Plugin"), this);
    connect(m_pActionAbout, &QAction::triggered, this, &Sea5kgPython3Scripting_editorplugin::menuClickAbout);
    m_pMenuPython3Extensions->addAction(m_pActionAbout);
    return true;
}

bool Sea5kgPython3Scripting_editorplugin::loadExtensions() {
    if (!prepareDirectoryWithExtensions()) {
        return false;
    }

    // remove all previous
    for (int i = 0; i < m_vScripts.size(); i++) {
        delete m_vScripts[i];
    }
    m_vScripts.clear();

    QDir mainDir(m_sPython3ScriptingDirPath);
    QStringList allDirs = mainDir.entryList(QDir::NoDotAndDotDot | QDir::Dirs);
    for(int i = 0; i < allDirs.size(); i++) {
        QString sPython3ScriptJsonFilePath = m_sPython3ScriptingDirPath + "/" + allDirs[i];
        ModelExtension *pModel = new ModelExtension(sPython3ScriptJsonFilePath);
        if (pModel->loadFromDirectory()) {
            m_vScripts.push_back(pModel);
        } else {
            log_error(sPython3ScriptJsonFilePath + " - could not load some extension by index");
            delete pModel;
            continue;
        }
    }

    // TODO
    m_sPython3ScriptingJsonFilePath = m_sPython3ScriptingDirPath + "/extensions.json";
    // prepareExtensionsJson();
    if (!safeCreateMenuPython3Scripting()) {
        return false;
    }
    if (!reloadMenuForSelected()) {
        return false;
    }
    initMenuForManageScripts();
    initMenuForAbout();
    return true;
}

void Sea5kgPython3Scripting_editorplugin::saveAndReloadExtensions() {
    this->rewriteExtensionsJson();
    this->reloadMenuForSelected();
}

ModelExtension *Sea5kgPython3Scripting_editorplugin::findModelExtensionByAction(QObject *pObject) {
    QAction *pAction = dynamic_cast<QAction *>(pObject);
    if (pAction == nullptr) {
        log_error("findModelExtensionByAction. Could not cast to QAction");
        return nullptr;
    }
    QVariant userData = pAction->data();
    QString sExtensionId = userData.toString();
    log_info("processSelectedActions. sExtensionId == " + sExtensionId);
    ModelExtension *pExt = nullptr;
    for (int i = 0; i < m_vScripts.size(); i++) {
        if (m_vScripts[i]->getId() == sExtensionId) {
            return m_vScripts[i];
        }
    }
    return nullptr;
}

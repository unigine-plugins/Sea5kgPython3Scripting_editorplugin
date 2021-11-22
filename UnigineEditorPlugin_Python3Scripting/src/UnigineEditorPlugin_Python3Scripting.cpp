#include "UnigineEditorPlugin_Python3Scripting.h"
#include "PythonExecutor.h"
#include "dialogs/CreateExtensionDialog.h"
#include "dialogs/EditExtensionDialog.h"

#include <UnigineLog.h>
#include <UnigineEditor.h>
#include <QCoreApplication>
#include <UnigineMaterials.h>

#include <QMessageBox>
#include <QDir>
#include <QJsonDocument>
#include <QJsonArray>
#include "run_python_in_thread.h"
#include <iostream>

// ------------------------------------------------------------------------------------------
// UnigineEditorPlugin_Python3Scripting

UnigineEditorPlugin_Python3Scripting::UnigineEditorPlugin_Python3Scripting()  = default;
UnigineEditorPlugin_Python3Scripting::~UnigineEditorPlugin_Python3Scripting() = default;

std::string log_prepare_message(QString message) {
	message = QString(" >>>>>> UnigineEditorPlugin_Python3Scripting::" + message + "\r\n");
	return message.toStdString();
}

void log_info(QString message) {
	Unigine::Log::message(log_prepare_message(message).c_str());
}

void log_error(QString message) {
	std::string sMessage = log_prepare_message(message);
	const char * pMessage = sMessage.c_str();
	Unigine::Log::error(pMessage);
}

bool UnigineEditorPlugin_Python3Scripting::init() {
	log_info(" Initializing...");
	m_pMenuExtensions = nullptr;
	m_pEditScriptWindow = nullptr;
	m_pScriptThread = nullptr;
	m_nLatestMenu = MenuSelectedType::MST_NONE;
	m_mapCollectorMenuSelected[MenuSelectedType::MST_MATERIALS] = new CollectorMenuSelected(this, "Materials");
	m_mapCollectorMenuSelected[MenuSelectedType::MST_NODES] = new CollectorMenuSelected(this, "Nodes");
	m_mapCollectorMenuSelected[MenuSelectedType::MST_PROPERTIES] = new CollectorMenuSelected(this, "Properties");
	m_mapCollectorMenuSelected[MenuSelectedType::MST_RUNTIMES] = new CollectorMenuSelected(this, "Runtimes");

	m_sRootPath = QCoreApplication::applicationDirPath(); // must be in bin

	if (!loadExtensions()) {
		return false;
	}

	connect(Editor::Selection::instance(), &Editor::Selection::changed, this, &UnigineEditorPlugin_Python3Scripting::globalSelectionChanged);
	connect(this, &UnigineEditorPlugin_Python3Scripting::signal_executeRunner, this, &UnigineEditorPlugin_Python3Scripting::slot_executeRunner);

	g_pPython3RunnerMain = this;
	log_info("Initialiazed");
	return true;
}

void UnigineEditorPlugin_Python3Scripting::shutdown() {
	log_info("shutdown");
	if (m_pEditScriptWindow != nullptr) {
		delete m_pEditScriptWindow;
	}
}

void UnigineEditorPlugin_Python3Scripting::executeRunner(Python3Runner *p) {
	p->mutexAsync.lock();
	emit signal_executeRunner(p);
}

void UnigineEditorPlugin_Python3Scripting::slot_executeRunner(Python3Runner *pRunner) {
	// std::cout << "slot_executeRunner, QThread::currentThreadId(): " << QThread::currentThread() << std::endl;
	// std::cout << "slot_executeRunner, QCoreApplication::instance()->thread(): " << QCoreApplication::instance()->thread() << std::endl;
	if (QThread::currentThread() != QCoreApplication::instance()->thread()) {
		log_error("UnigineEditorPlugin_Python3Scripting::slot_executeRunner Not main thread!!!");
	}
	pRunner->run();
	pRunner->mutexAsync.unlock();
}

void UnigineEditorPlugin_Python3Scripting::editExtension() {
	QObject* obj = sender();
	QAction *pAction = dynamic_cast<QAction *>(obj);
	if (pAction == nullptr) {
		log_error("editExtension. Could not cast to QAction");
		return;
	}
	QVariant userData = pAction->data();
	QString sExtensionId = userData.toString();
	log_info("editExtension. sExtensionId == " + sExtensionId);

	ModelExtension *pModel = nullptr;
	for (int i = 0; i < m_vExtensions.size(); i++) {
		if (m_vExtensions[i]->getId() == sExtensionId) {
			pModel = m_vExtensions[i];
			break;
		}
	}

	QString sPython3ScriptingMainPyPath = m_sPython3ScriptingDirPath + "/" + sExtensionId + "/main.py";
	auto *pEdit = getEditDialog();
	pEdit->setModelExtension(pModel);
	pEdit->show();
    // sd.setModal(true);
    /*if (sd.exec() == QDialog::Accepted) {

    }*/
}

void UnigineEditorPlugin_Python3Scripting::disableExtension() {
	QObject* obj = sender();
	QAction *pAction = dynamic_cast<QAction *>(obj);
	if (pAction == nullptr) {
		log_error("disableExtension. Could not cast to QAction");
		return;
	}
	QVariant userData = pAction->data();
	QString sExtensionId = userData.toString();
	log_info("disableExtension. sExtensionId == " + sExtensionId);

	for (int i = 0; i < m_vExtensions.size(); i++) {
		if (m_vExtensions[i]->getId() == sExtensionId) {
			m_vExtensions[i]->setEnabled(false);
		}
	}
	saveAndReloadExtensions();
}

void UnigineEditorPlugin_Python3Scripting::enableExtension() {
	QObject* obj = sender();
	QAction *pAction = dynamic_cast<QAction *>(obj);
	if (pAction == nullptr) {
		log_error("enableExtension. Could not cast to QAction");
		return;
	}
	QVariant userData = pAction->data();
	QString sExtensionId = userData.toString();
	log_info("enableExtension. sExtensionId == " + sExtensionId);

	for (int i = 0; i < m_vExtensions.size(); i++) {
		if (m_vExtensions[i]->getId() == sExtensionId) {
			m_vExtensions[i]->setEnabled(true);
		}
	}
	saveAndReloadExtensions();
}

void UnigineEditorPlugin_Python3Scripting::removeExtension() {
	QObject* obj = sender();
	QAction *pAction = dynamic_cast<QAction *>(obj);
	if (pAction == nullptr) {
		log_error("removeExtension. Could not cast to QAction");
		return;
	}
	QVariant userData = pAction->data();
	QString sExtensionId = userData.toString();
	log_info("removeExtension. sExtensionId == " + sExtensionId);

	for (int i = 0; i < m_vExtensions.size(); i++) {
		if (m_vExtensions[i]->getId() == sExtensionId) {
			m_vExtensions.removeAt(i);
			break;
		}
	}
	
	// remove all files for extension
	QDir dir(m_sPython3ScriptingDirPath + "/" + sExtensionId);
	dir.removeRecursively();
	saveAndReloadExtensions();
}

void UnigineEditorPlugin_Python3Scripting::createNewExtension() {
	// QString strPaths = listRemove.join("\n");
	// QWidget *pWin = QApplication::activeWindow();
	QString strPaths = "";
    CreateExtensionDialog sd(m_pMainWindow, strPaths);
    sd.setModal(true);
    if (sd.exec() == QDialog::Accepted){
		QString sName = sd.getExtensionName();
		QString sFor = sd.getExtensionFor();
		log_info("createNewExtension. Next with " + sFor + ": " + sName);

		// notrmalize extension id
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
		log_info("createNewExtension. Next sExtensionId == " + sExtensionId);

		// preapre extension folder
		QDir(m_sPython3ScriptingDirPath).mkdir(sExtensionId);
		QString sPython3ScriptingMainPyPath = m_sPython3ScriptingDirPath + "/" + sExtensionId + "/main.py";
		QFile fileMainPy(sPython3ScriptingMainPyPath);
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
		auto pModel = new ModelExtension(m_sPython3ScriptingDirPath);
		pModel->setId(sExtensionId);
		pModel->setName(sName);
		pModel->setFor(sFor);
		pModel->setEnabled(true);
		m_vExtensions.push_back(pModel);
		saveAndReloadExtensions();

		auto *pEdit = getEditDialog();
		pEdit->setModelExtension(pModel);
		pEdit->show();
    }
}

void UnigineEditorPlugin_Python3Scripting::about() {
	QMessageBox msgBox;
    msgBox.setStyleSheet("QLabel{min-width: 700px;}");
    msgBox.setModal( true );
    msgBox.setWindowTitle("Python3Scripting: About");
    msgBox.setTextFormat(Qt::RichText);
    msgBox.setText(
        "<h2>Python3Scripting</h2> <br>"
        "Version: " + QString(PYTHON3SCRIPTING_VERSION) + " <br>"
        "Source-code: <a href='https://github.com/opensource-unigine-plugins/unigine-2.14-editor-plugin-python3scripting'>https://github.com/opensource-unigine-plugins/unigine-2.14-editor-plugin-python3scripting</a> <br>"
        "<hr/>"
        "Author(s):<ul>"
        "  <li>Evgenii Sopov (mrseakg@gmail.com) </li>"
        "</ul><hr>"
        // + sFileLicenseContent
    );
    msgBox.exec();
}

void UnigineEditorPlugin_Python3Scripting::processSelectedMaterials() {
	ModelExtension *pModel = findModelExtensionByAction(sender());
	if (pModel == nullptr) {
		log_error("processSelectedMaterials Could not find model for this action");
		return;
	}
	// TODO q mutex lock ?
	runPythonScript(pModel);
}

void UnigineEditorPlugin_Python3Scripting::processSelectedNodes() {
	ModelExtension *pModel = findModelExtensionByAction(sender());
	if (pModel == nullptr) {
		log_error("processSelectedNodes Could not find model for this action");
		return;
	}
	runPythonScript(pModel);
}

void UnigineEditorPlugin_Python3Scripting::processSelectedProperties() {
	ModelExtension *pModel = findModelExtensionByAction(sender());
	if (pModel == nullptr) {
		log_error("processSelectedProperties Could not find model for this action");
		return;
	}
	runPythonScript(pModel);
}

void UnigineEditorPlugin_Python3Scripting::processSelectedRuntimes() {
	ModelExtension *pModel = findModelExtensionByAction(sender());
	if (pModel == nullptr) {
		log_error("processSelectedRuntimes Could not find model for this action");
		return;
	}
	runPythonScript(pModel);
}

void UnigineEditorPlugin_Python3Scripting::globalSelectionChanged() {
	// using namespace std;
	m_vSelectedGuids.clear();
	m_vSelectedNodes.clear();
	if (Editor::SelectorGUIDs* selector = Editor::Selection::getSelectorMaterials()) {
		log_info("Selected materials");
		switchMenuTo(MenuSelectedType::MST_MATERIALS);
		m_vSelectedGuids.append(selector->guids());
	} else if (auto selector = Editor::Selection::getSelectorRuntimes()) {
		log_info("Selected runtimes");
		switchMenuTo(MenuSelectedType::MST_RUNTIMES);
		m_vSelectedGuids.append(selector->guids());
	} else if (auto selector = Editor::Selection::getSelectorProperties()) {
		log_info("Selected properties");
		switchMenuTo(MenuSelectedType::MST_PROPERTIES);
		m_vSelectedGuids.append(selector->guids());
	} else if (auto selector = Editor::Selection::getSelectorNodes()) {
		log_info("Selected nodes");
		switchMenuTo(MenuSelectedType::MST_NODES);
		m_vSelectedNodes.append(selector->getNodes());
	} else {
		log_info("Something else");
		switchMenuTo(MenuSelectedType::MST_NONE);
	}
}

void UnigineEditorPlugin_Python3Scripting::runPythonScript(ModelExtension *pModel, QString sAlternativeCode) {
	
	if (m_pScriptThread != nullptr && !m_pScriptThread->isFinished()) {
		log_info("Another script working...");
		return;
	}

	if (m_pScriptThread != nullptr) {
		delete m_pScriptThread;
	}

	disconnect(Editor::Selection::instance(), &Editor::Selection::changed, this, &UnigineEditorPlugin_Python3Scripting::globalSelectionChanged);

	if (sAlternativeCode == "") {
		QFile fl(pModel->getMainPyPath());
		if (fl.open(QIODevice::ReadOnly)) {
			sAlternativeCode = fl.readAll();
		}
	}

	m_pScriptThread = new RunScriptInThread(
		pModel->getId(),
		m_sPython3ScriptingDirPath
	);

	if (m_nLatestMenu == MenuSelectedType::MST_MATERIALS) {
		m_pScriptThread->executor()->addMaterials(m_vSelectedGuids);
	} else if(m_nLatestMenu == MenuSelectedType::MST_RUNTIMES) {
		m_pScriptThread->executor()->addRuntimes(m_vSelectedGuids);
	} else if(m_nLatestMenu == MenuSelectedType::MST_PROPERTIES) {
		m_pScriptThread->executor()->addRuntimes(m_vSelectedGuids);
	} else if(m_nLatestMenu == MenuSelectedType::MST_NODES) {
		m_pScriptThread->executor()->addNodes(m_vSelectedNodes);
	}

	m_pScriptThread->setExecCode(sAlternativeCode);
	m_pScriptThread->start();

	connect(Editor::Selection::instance(), &Editor::Selection::changed, this, &UnigineEditorPlugin_Python3Scripting::globalSelectionChanged);

	// TODO after finish trhed remove it
	// delete pThread;
}

void UnigineEditorPlugin_Python3Scripting::switchMenuTo(MenuSelectedType nType) {

	QMap<MenuSelectedType, CollectorMenuSelected *>::iterator i;
 	for (i = m_mapCollectorMenuSelected.begin(); i != m_mapCollectorMenuSelected.end(); ++i) {
    	i.value()->setEnabled(false);
	}
	if (m_mapCollectorMenuSelected.contains(nType)) {
		m_mapCollectorMenuSelected[nType]->setEnabled(true);
	}
	m_nLatestMenu = nType;
}

bool UnigineEditorPlugin_Python3Scripting::prepareDirectoryWithExtensions() {
	// Prepare directory
	m_sPython3ScriptingDirPath = m_sRootPath + "/Python3Scripting";
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

bool UnigineEditorPlugin_Python3Scripting::prepareExtensionsJson() {
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

bool UnigineEditorPlugin_Python3Scripting::parseExtensionsJson() {
	QFile fileExtensionsJson(m_sPython3ScriptingJsonFilePath);
    if (!fileExtensionsJson.open(QIODevice::ReadOnly)) {
        log_error(m_sPython3ScriptingJsonFilePath + " - couldn't open file to read.");
        return false;
    }
    QByteArray saveData = fileExtensionsJson.readAll();
    QJsonParseError error;
    QJsonDocument jsonDoc = QJsonDocument::fromJson(saveData, &error);
    if (jsonDoc.isNull()) {
        log_error(m_sPython3ScriptingJsonFilePath + " - (Broken json), error info " + error.errorString());
        return false;
    }
    if (!jsonDoc.isObject()) {
        log_error(m_sPython3ScriptingJsonFilePath + " - expected object");
        return false;
    }
    m_jsonExtensions = jsonDoc.object();

	// remove all previous
	for (int i = 0; i < m_vExtensions.size(); i++) {
		delete m_vExtensions[i];
	}
	m_vExtensions.clear();

	QJsonArray jsonListExts = m_jsonExtensions["py3extensions"].toArray();
	QJsonObject jsonExtension;
	for (int i = 0; i < jsonListExts.size(); i++) {
		QJsonObject jsonExt = jsonListExts[i].toObject();
		auto pModel = new ModelExtension(m_sPython3ScriptingDirPath);
		if (pModel->loadFromJsonObject(jsonExt)) {
			m_vExtensions.push_back(pModel);
		} else {
			log_error(m_sPython3ScriptingJsonFilePath + " - could not load some extension by index " + QString::number(i));
			delete pModel;
		}
	}
	return true;
}

bool UnigineEditorPlugin_Python3Scripting::rewriteExtensionsJson() {
	QFile fileExtensionsJson(m_sPython3ScriptingJsonFilePath);
	QJsonObject jsonExtensions;
	QJsonArray exts;
	for (int i = 0; i < m_vExtensions.size(); i++) {
		ModelExtension *pModel = m_vExtensions[i];
		exts.append(pModel->toJsonObject());
	}
	m_jsonExtensions["py3extensions"] = exts;

	QJsonDocument document(m_jsonExtensions);
	fileExtensionsJson.open(QFile::WriteOnly);
	fileExtensionsJson.write(document.toJson(QJsonDocument::Indented));
	fileExtensionsJson.close();
	return true;
}

bool UnigineEditorPlugin_Python3Scripting::findMenuPython3Scripting() {
	QString sMenuName = Constants::MM_TOOLS;
	QMenu *pMenu = Editor::WindowManager::findMenu(sMenuName);
	if (pMenu == nullptr) {
		log_error(" Not found menu: " + sMenuName);
		return false;
		
	}
	// log_info(" Found menu " + sMenuName);
	// get main menu
	QWidget* pMenuTools = dynamic_cast<QWidget*>(pMenu);
	QMenuBar* pMenuBar = dynamic_cast<QMenuBar*>(pMenuTools->parentWidget());
	m_pMenuPython3Scripting = pMenuBar->addMenu(tr("Python3Scripting"));
	m_pMainWindow = pMenuTools->parentWidget()->parentWidget();
	QString sClassname  = m_pMainWindow->metaObject()->className();
	log_info(" Found  " + sClassname);
	return true;
}

bool UnigineEditorPlugin_Python3Scripting::reloadMenuForSelected() {

	QMap<MenuSelectedType, CollectorMenuSelected *>::iterator i;
 	for (i = m_mapCollectorMenuSelected.begin(); i != m_mapCollectorMenuSelected.end(); ++i) {
    	i.value()->initMenuSafe(m_pMenuPython3Scripting);
	}
	switchMenuTo(m_nLatestMenu);

 	for (i = m_mapCollectorMenuSelected.begin(); i != m_mapCollectorMenuSelected.end(); ++i) {
    	i.value()->clear();
	}

	for (int i = 0; i < m_vExtensions.size(); i++) {
		ModelExtension *pModel = m_vExtensions[i];
		if (!pModel->isEnabled()) {
			continue;
		}

		QAction *pAction = new QAction(pModel->getName(), this);
		pAction->setData(QVariant(pModel->getId()));

		if (pModel->getFor() == "materials") {
			connect(pAction, &QAction::triggered, this, &UnigineEditorPlugin_Python3Scripting::processSelectedMaterials);
			m_mapCollectorMenuSelected[MenuSelectedType::MST_MATERIALS]->addAction(pAction);
		} else if (pModel->getFor() == "nodes") {
			connect(pAction, &QAction::triggered, this, &UnigineEditorPlugin_Python3Scripting::processSelectedNodes);
			m_mapCollectorMenuSelected[MenuSelectedType::MST_NODES]->addAction(pAction);
		} else if (pModel->getFor() == "properties") {
			connect(pAction, &QAction::triggered, this, &UnigineEditorPlugin_Python3Scripting::processSelectedProperties);
			m_mapCollectorMenuSelected[MenuSelectedType::MST_PROPERTIES]->addAction(pAction);
		} else if (pModel->getFor() == "runtimes") {
			connect(pAction, &QAction::triggered, this, &UnigineEditorPlugin_Python3Scripting::processSelectedRuntimes);
			m_mapCollectorMenuSelected[MenuSelectedType::MST_RUNTIMES]->addAction(pAction);
		} else {
			log_error("skipped extension with id " + pModel->getId());
		}
	}
	return true;
}

bool UnigineEditorPlugin_Python3Scripting::reloadMenuForExtensions() {
	if (m_pMenuExtensions == nullptr) {
		m_pMenuExtensions = m_pMenuPython3Scripting->addMenu(tr("Extensions"));
	}
	// remove previous submenus
	for (int i = 0; i < m_vSubMenusExtensions.size(); i++) {
		m_pMenuExtensions->removeAction(m_vSubMenusExtensions[i]->menuAction());
	}

	for (int i = 0; i < m_vExtensions.size(); i++) {
		ModelExtension *pModel = m_vExtensions[i];

		QMenu *pExtension = m_pMenuExtensions->addMenu(pModel->getFor() + ": " + pModel->getName());
		m_vSubMenusExtensions.push_back(pExtension);

		QAction *pActionEdit = new QAction(tr("Edit"), this);
		pActionEdit->setData(QVariant(pModel->getId()));
		connect(pActionEdit, &QAction::triggered, this, &UnigineEditorPlugin_Python3Scripting::editExtension);

		QAction *pActionDisable = new QAction(tr("Disable"), this);
		pActionDisable->setData(QVariant(pModel->getId()));
		connect(pActionDisable, &QAction::triggered, this, &UnigineEditorPlugin_Python3Scripting::disableExtension);
		pActionDisable->setEnabled(pModel->isEnabled());
		
		QAction *pActionEnable = new QAction(tr("Enable"), this);
		pActionEnable->setData(QVariant(pModel->getId()));
		connect(pActionEnable, &QAction::triggered, this, &UnigineEditorPlugin_Python3Scripting::enableExtension);
		pActionEnable->setEnabled(!pModel->isEnabled());
		
		QAction *pActionRemove = new QAction(tr("Remove"), this);
		pActionRemove->setData(QVariant(pModel->getId()));
		connect(pActionRemove, &QAction::triggered, this, &UnigineEditorPlugin_Python3Scripting::removeExtension);

		pExtension->addAction(pActionEdit);
		pExtension->addAction(pActionDisable);
		pExtension->addAction(pActionEnable);
		pExtension->addAction(pActionRemove);
	}
	return true;
}

bool UnigineEditorPlugin_Python3Scripting::initMenuForCreateExtension() {
	m_pActionCreateNewExtension = new QAction(tr("Create new extension"), this);
	connect(m_pActionCreateNewExtension, &QAction::triggered, this, &UnigineEditorPlugin_Python3Scripting::createNewExtension);
	m_pMenuPython3Scripting->addAction(m_pActionCreateNewExtension);
	return true;
}

bool UnigineEditorPlugin_Python3Scripting::initMenuForAbout() {
	m_pActionAbout = new QAction(tr("About Python3Scripting Plugin"), this);
	connect(m_pActionAbout, &QAction::triggered, this, &UnigineEditorPlugin_Python3Scripting::about);
	m_pMenuPython3Scripting->addAction(m_pActionAbout);
	return true;
}

bool UnigineEditorPlugin_Python3Scripting::loadExtensions() {
	if (!prepareDirectoryWithExtensions()) {
		return false;
	}
	m_sPython3ScriptingJsonFilePath = m_sPython3ScriptingDirPath + "/extensions.json";
	prepareExtensionsJson();
	if (!parseExtensionsJson()) {
		return false;
	}
	if (!findMenuPython3Scripting()) {
		return false;
	}
	if (!reloadMenuForSelected()) {
		return false;
	}
	if (!reloadMenuForExtensions()) {
		return false;
	}
	initMenuForCreateExtension();
	initMenuForAbout();
	return true;
}

void UnigineEditorPlugin_Python3Scripting::saveAndReloadExtensions() {
	this->rewriteExtensionsJson();
	this->reloadMenuForSelected();
	this->reloadMenuForExtensions();
}

EditExtensionDialog *UnigineEditorPlugin_Python3Scripting::getEditDialog() {
	if (m_pEditScriptWindow == nullptr) {
		m_pEditScriptWindow = new EditExtensionDialog(m_pMainWindow, this);
		Qt::WindowFlags flags = m_pEditScriptWindow->windowFlags();
		m_pEditScriptWindow->setWindowFlags(flags | Qt::Tool);
	}
	return m_pEditScriptWindow;
}

ModelExtension *UnigineEditorPlugin_Python3Scripting::findModelExtensionByAction(QObject *pObject) {
	QAction *pAction = dynamic_cast<QAction *>(pObject);
	if (pAction == nullptr) {
		log_error("findModelExtensionByAction. Could not cast to QAction");
		return nullptr;
	}
	QVariant userData = pAction->data();
	QString sExtensionId = userData.toString();
	log_info("processSelectedActions. sExtensionId == " + sExtensionId);
	ModelExtension *pExt = nullptr;
	for (int i = 0; i < m_vExtensions.size(); i++) {
		if (m_vExtensions[i]->getId() == sExtensionId) {
			return m_vExtensions[i];
		}
	}
	return nullptr;
}

	
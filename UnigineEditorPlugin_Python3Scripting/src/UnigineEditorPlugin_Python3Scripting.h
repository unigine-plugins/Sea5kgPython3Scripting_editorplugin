#pragma once


#include <editor/Plugin.h>
#include <UnigineGUID.h>
#include <UnigineNode.h>

#include <QObject>
#include <QMainWindow>
#include <QMenuBar>
#include <QJsonObject>
#include <QThread>

#include "CollectorMenuSelected.h"
#include "ModelExtension.h"
#include "dialogs/EditExtensionDialog.h"
#include "dialogs/IRunPythonScript.h"
#include "run_python_in_thread.h"

class UnigineEditorPlugin_Python3Scripting
	:
		public QObject,
		public ::Editor::Plugin,
		public IRunPythonScript,
		public IPython3RunnerMain
{
	Q_OBJECT
	Q_PLUGIN_METADATA(IID "com.unigine.EditorPlugin" FILE "Plugin.json")
	Q_INTERFACES(Editor::Plugin)
public:
	UnigineEditorPlugin_Python3Scripting();
	~UnigineEditorPlugin_Python3Scripting() override;

	bool init() override;
	void shutdown() override;

	// Python3Runner
	void executeRunner(Python3Runner *p);

Q_SIGNALS:
    void signal_executeRunner(Python3Runner *pRunner);

private slots:
	void processSelectedMaterials();
	void processSelectedNodes();
	void processSelectedProperties();
	void processSelectedRuntimes();
	void createNewExtension();
	void manageScripts();
	void editExtension();
	void disableExtension();
	void enableExtension();
	void removeExtension();
	void menuClickAbout();

	void globalSelectionChanged();

	void slot_executeRunner(Python3Runner *pRunner);

private:
	// IRunPythonScript
	virtual void runPythonScript(ModelExtension *pModel, QString sAlternativeCode = "") override;

	void switchMenuTo(MenuSelectedType nType);
	bool prepareDirectoryWithExtensions();
	bool rewriteExtensionsJson();
	bool safeCreateMenuPython3Scripting();
	bool reloadMenuForSelected();
	bool reloadMenuForExtensions();
	bool initMenuForCreateExtension();
	bool initMenuForManageScripts();
	bool initMenuForAbout();
	bool loadExtensions();

	void saveAndReloadExtensions();
	EditExtensionDialog *getEditDialog();
	ModelExtension *findModelExtensionByAction(QObject* pObject);

	MenuSelectedType m_nLatestMenu;
	QString m_sRootPath;
	QString m_sPython3ScriptingDirPath;
	QString m_sPython3ScriptingJsonFilePath;
	QWidget *m_pMainWindow;
	QMenu *m_pMenuPython3Extensions;
	QMap<MenuSelectedType, CollectorMenuSelected *> m_mapCollectorMenuSelected;

	QVector<ModelExtension *> m_vScripts;

	QMenu *m_pMenuExtensions;
	QVector<QMenu *> m_vSubMenusExtensions;

	QAction *m_pActionCreateNewExtension;
	QAction *m_pActionManageScripts;
	QAction *m_pActionAbout;

	QVector<Unigine::UGUID> m_vSelectedGuids;
	QVector<Unigine::NodePtr> m_vSelectedNodes;

	EditExtensionDialog *m_pEditScriptWindow;
	RunScriptInThread *m_pScriptThread;
};

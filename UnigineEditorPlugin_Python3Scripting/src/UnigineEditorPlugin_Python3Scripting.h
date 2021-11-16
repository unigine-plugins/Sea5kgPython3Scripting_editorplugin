#pragma once


#include <editor/Plugin.h>
#include <UnigineGUID.h>
#include <UnigineNode.h>

#include <QObject>
#include <QMainWindow>
#include <QMenuBar>
#include <QJsonObject>

#include "CollectorMenuSelected.h"
#include "ModelExtension.h"
#include "dialogs/EditExtensionDialog.h"
#include "dialogs/IRunPythonScript.h"

class UnigineEditorPlugin_Python3Scripting : public QObject, public ::Editor::Plugin, public IRunPythonScript
{
	Q_OBJECT
	Q_PLUGIN_METADATA(IID "com.unigine.EditorPlugin" FILE "Plugin.json")
	Q_INTERFACES(Editor::Plugin)
public:
	UnigineEditorPlugin_Python3Scripting();
	~UnigineEditorPlugin_Python3Scripting() override;

	bool init() override;
	void shutdown() override;

private slots:
	void processSelectedMaterials();
	void processSelectedNodes();
	void processSelectedProperties();
	void processSelectedRuntimes();
	void createNewExtension();
	void editExtension();
	void disableExtension();
	void enableExtension();
	void removeExtension();
	void about();

	void globalSelectionChanged();

	// IRunPythonScript
	virtual void runPythonScript(ModelExtension *pModel, QString sAlternativeCode = "") override;

private:
	void switchMenuTo(MenuSelectedType nType);
	bool prepareDirectoryWithExtensions();
	bool prepareExtensionsJson();
	bool parseExtensionsJson();
	bool rewriteExtensionsJson();
	bool findMenuPython3Scripting();
	bool reloadMenuForSelected();
	bool reloadMenuForExtensions();
	bool initMenuForCreateExtension();
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
	QMenu *m_pMenuPython3Scripting;
	QMap<MenuSelectedType, CollectorMenuSelected *> m_mapCollectorMenuSelected;

	QVector<ModelExtension *> m_vExtensions;

	QMenu *m_pMenuExtensions;
	QVector<QMenu *> m_vSubMenusExtensions;

	QJsonObject m_jsonExtensions;

	QAction *m_pActionCreateNewExtension;
	QAction *m_pActionAbout;

	QVector<Unigine::UGUID> m_vSelectedGuids;
	QVector<Unigine::NodePtr> m_vSelectedNodes;

	EditExtensionDialog *m_pEditScriptWindow;
};

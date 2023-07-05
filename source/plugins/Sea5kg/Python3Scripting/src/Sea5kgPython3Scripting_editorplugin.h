#pragma once


#include <editor/UniginePlugin.h>
#include <editor/UnigineSelector.h>
#include <editor/UnigineSelection.h>
#include <editor/UnigineWindowManager.h>
#include <UnigineGUID.h>
#include <UnigineNode.h>

#include <QObject>
#include <QMainWindow>
#include <QMenuBar>
#include <QJsonObject>
#include <QThread>

#include "CollectorMenuSelected.h"
#include "ModelExtension.h"
#include "WindowEditPythonScript.h"
#include "WindowManagePythonScripts.h"
#include "interfaces/IRunPythonScript.h"
#include "interfaces/IManagePythonScripts.h"
#include "RunPythonInThread.h"

class Sea5kgPython3Scripting_editorplugin
    :
        public QObject,
        public UnigineEditor::Plugin,
        public IRunPythonScript,
        public IPython3RunnerMain,
        public IManagePythonScripts
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID UNIGINE_EDITOR_PLUGIN_IID FILE "Sea5kgPython3Scripting_editorplugin.json")
    Q_INTERFACES(UnigineEditor::Plugin)
public:
    Sea5kgPython3Scripting_editorplugin();
    ~Sea5kgPython3Scripting_editorplugin() override;

    bool init() override;
    void shutdown() override;

    // IManagePythonScripts
    virtual void addModelExtension(ModelExtension *pModel) override;
    virtual void removeModelScriptById(QString sScriptId) override;
    virtual void enableModelScriptById(QString sScriptId) override;
    virtual void disableModelScriptById(QString sScriptId) override;
    virtual void openWindowEditPythonScriptById(QString sScriptId) override;
    virtual void showWindowManagePythonScripts(QString sScriptId) override;
    virtual QString getPython3ScriptingDirPath() override;

    // IPython3RunnerMain
    void executeRunner(Python3Runner *p);

Q_SIGNALS:
    void signal_executeRunner(Python3Runner *pRunner);

private slots:
    void slot_executeRunner(Python3Runner *pRunner);

    void processSelectedMaterials();
    void processSelectedNodes();
    void processSelectedProperties();
    void processSelectedRuntimes();
    void processSelectedTools();
    void createNewExtension();
    void manageScripts();
    void menuClickAbout();

    void globalSelectionChanged();

private:
    // IRunPythonScript
    virtual void runPythonScript(ModelExtension *pModel, QString sAlternativeCode = "") override;

    void switchMenuTo(MenuSelectedType nType);
    bool prepareDirectoryWithExtensions();
    bool rewriteExtensionsJson();
    bool safeCreateMenuPython3Scripting();
    bool reloadMenuForSelected();
    bool initMenuForManageScripts();
    bool initMenuForAbout();
    bool loadExtensions();

    void saveAndReloadExtensions();
    WindowEditPythonScript *getEditDialog();
    ModelExtension *findModelExtensionByAction(QObject* pObject);

    MenuSelectedType m_nLatestMenu;
    QString m_sRootPath;
    QString m_sPython3ScriptingDirPath;
    QString m_sPython3ScriptingJsonFilePath;
    QWidget *m_pMainWindow;
    QMenu *m_pMenuPython3Extensions;
    QMap<MenuSelectedType, CollectorMenuSelected *> m_mapCollectorMenuSelected;

    QVector<ModelExtension *> m_vScripts;

    QAction *m_pActionManageScripts;
    QAction *m_pActionAbout;

    QVector<Unigine::UGUID> m_vSelectedGuids;
    QVector<Unigine::NodePtr> m_vSelectedNodes;

    WindowEditPythonScript *m_pEditScriptWindow;
    WindowManagePythonScripts *m_pWindowManagePythonScripts;
    RunScriptInThread *m_pScriptThread;
};

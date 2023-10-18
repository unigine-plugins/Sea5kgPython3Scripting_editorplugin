#include "RunPythonInThread.h"
#include "PythonExecutor.h"

#include <QThread>
#include <QTime>
#include <QCoreApplication>
#include <iostream>

// ------------------------------------------------------------------------------------------
// RunScriptInThread

RunScriptInThread::RunScriptInThread(
    const QString &sExtensionId,
    const QString &sPython3ScriptingDirPath
) {
    m_pExecutor = new PythonExecutor(
        sExtensionId.toStdString(),
        sPython3ScriptingDirPath.toStdString()
    );
}

RunScriptInThread::~RunScriptInThread() {
    delete m_pExecutor;
}

void RunScriptInThread::setExecCode(const QString &sExecCode) {
    m_sExecCode = sExecCode;
}

PythonExecutor *RunScriptInThread::executor() {
    return m_pExecutor;
}

void RunScriptInThread::run() {
    class LocalRunner : public Python3Runner {
        public:
            virtual void run() override {
                std::cout << "runner QThread::currentThreadId(): " << QThread::currentThread() << std::endl;
                std::cout << "runner QCoreApplication::instance()->thread(): " << QCoreApplication::instance()->thread() << std::endl;
            };
    };
    std::cout << "before QThread::currentThread(): " << QThread::currentThread() << std::endl;
    std::cout << "before QCoreApplication::instance()->thread(): " << QCoreApplication::instance()->thread() << std::endl;
    auto *pRunner = new LocalRunner();
    Python3Runner::runInMainThread(pRunner);
    while(!pRunner->mutexAsync.tryLock(5)) {
        // Unigine::Log::message("waiting...\n");
    }
    pRunner->mutexAsync.unlock();
    delete pRunner;
    int ret = m_pExecutor->execCode(m_sExecCode.toStdString());
    delete m_pExecutor;
    m_pExecutor = nullptr;
    // Unigine::Log::message("Executor removed\n");
}

// ------------------------------------------------------------------------------------------

IPython3RunnerMain *g_pPython3RunnerMain = nullptr;

void Python3Runner::runInMainThread(Python3Runner *pRunner) {
    // std::cout << "QThread::currentThreadId(): " << QThread::currentThreadId() << std::endl;
    // std::cout << "QCoreApplication::instance()->thread(): " << QCoreApplication::instance()->thread() << std::endl;
    if (g_pPython3RunnerMain) {
        g_pPython3RunnerMain->executeRunner(pRunner);
    } else {
        std::cout << "g_pPython3RunnerMain not initialized" << std::endl;
    }
}

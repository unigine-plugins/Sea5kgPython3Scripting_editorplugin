#pragma once

#include <QThread>
#include <QMutex>

class PythonExecutor;

class RunScriptInThread : public QThread {
        Q_OBJECT
    private:
        PythonExecutor *m_pExecutor;
        QString m_sExecCode;
    public:
        RunScriptInThread(
            const QString &sExtensionId,
            const QString &sPython3ScriptingDirPath
        );
        ~RunScriptInThread();
        void setExecCode(const QString &sExecCode);

        PythonExecutor *executor();
    protected:
        void run();

    signals:

    public slots:
};

class Python3Runner;

class IPython3RunnerMain {
    public:
        virtual void executeRunner(Python3Runner *p) = 0;
};

extern IPython3RunnerMain *g_pPython3RunnerMain;

class Python3Runner {
    public:
        virtual void run() = 0;
        QMutex mutexAsync;
        static void runInMainThread(Python3Runner *pRunner);
};

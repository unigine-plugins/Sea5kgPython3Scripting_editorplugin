#pragma once

#include <QMainWindow>
#include <QMenuBar>

enum class MenuSelectedType {
    MST_NONE,
    MST_MATERIALS,
    MST_NODES,
    MST_PROPERTIES,
    MST_RUNTIMES
};

class CollectorMenuSelected : public QObject {
    Q_OBJECT

public:
    CollectorMenuSelected(QObject *pParent, const QString &sMenuName);
    ~CollectorMenuSelected();
    void initMenuSafe(QMenu *pMenuPython3Scripting);
    void clear();
    void addAction(QAction *pAction);
    void setEnabled(bool bEnabled);

private slots:
    void processSelected();

private:
    QMenu *m_pMenuSelected;
    QString m_sMenuName;
    QVector<QAction *> m_vActions;
};
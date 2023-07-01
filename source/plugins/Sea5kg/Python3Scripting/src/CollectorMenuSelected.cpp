
#include "CollectorMenuSelected.h"

CollectorMenuSelected::CollectorMenuSelected(
    QObject *pParent,
    const QString &sMenuName
) : QObject(pParent) {
    m_pMenuSelected = nullptr;
    m_sMenuName = sMenuName;
}

CollectorMenuSelected::~CollectorMenuSelected() {

}

void CollectorMenuSelected::initMenuSafe(QMenu *pMenuPython3Scripting) {
    if (m_pMenuSelected == nullptr) {
        m_pMenuSelected = pMenuPython3Scripting->addMenu(tr("Selected ") + m_sMenuName);
        m_pMenuSelected->setEnabled(false); // default disabled menu
    }
}

void CollectorMenuSelected::clear() {
    if (m_pMenuSelected != nullptr) {
        m_pMenuSelected->setTitle(tr("Selected ") + m_sMenuName + "(0)");
        for (int i = 0; i < m_vActions.size(); i++) {
            m_pMenuSelected->removeAction(m_vActions[i]);
        }
        m_vActions.clear();
    }
}

void CollectorMenuSelected::addAction(QAction *pAction) {
    if (m_pMenuSelected != nullptr) {
        m_vActions.push_back(pAction);
        m_pMenuSelected->addAction(pAction);
        m_pMenuSelected->setTitle("Selected " + m_sMenuName + " (" + QString::number(m_vActions.size()) + ")");
    }
}

void CollectorMenuSelected::setEnabled(bool bEnabled) {
    if (m_pMenuSelected != nullptr) {
        m_pMenuSelected->setEnabled(bEnabled);
    }
}
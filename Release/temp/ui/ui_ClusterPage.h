/********************************************************************************
** Form generated from reading UI file 'ClusterPage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLUSTERPAGE_H
#define UI_CLUSTERPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClusterPage
{
public:

    void setupUi(QWidget *ClusterPage)
    {
        if (ClusterPage->objectName().isEmpty())
            ClusterPage->setObjectName(QString::fromUtf8("ClusterPage"));
        ClusterPage->resize(400, 300);

        retranslateUi(ClusterPage);

        QMetaObject::connectSlotsByName(ClusterPage);
    } // setupUi

    void retranslateUi(QWidget *ClusterPage)
    {
        ClusterPage->setWindowTitle(QCoreApplication::translate("ClusterPage", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ClusterPage: public Ui_ClusterPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLUSTERPAGE_H

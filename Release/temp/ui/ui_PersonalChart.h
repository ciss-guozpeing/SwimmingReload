/********************************************************************************
** Form generated from reading UI file 'PersonalChart.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERSONALCHART_H
#define UI_PERSONALCHART_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PersonalChart
{
public:

    void setupUi(QWidget *PersonalChart)
    {
        if (PersonalChart->objectName().isEmpty())
            PersonalChart->setObjectName(QString::fromUtf8("PersonalChart"));
        PersonalChart->resize(400, 300);

        retranslateUi(PersonalChart);

        QMetaObject::connectSlotsByName(PersonalChart);
    } // setupUi

    void retranslateUi(QWidget *PersonalChart)
    {
        PersonalChart->setWindowTitle(QCoreApplication::translate("PersonalChart", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PersonalChart: public Ui_PersonalChart {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERSONALCHART_H

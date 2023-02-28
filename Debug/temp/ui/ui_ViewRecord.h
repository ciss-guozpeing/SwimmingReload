/********************************************************************************
** Form generated from reading UI file 'ViewRecord.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWRECORD_H
#define UI_VIEWRECORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ViewRecord
{
public:
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;

    void setupUi(QDialog *ViewRecord)
    {
        if (ViewRecord->objectName().isEmpty())
            ViewRecord->setObjectName(QString::fromUtf8("ViewRecord"));
        ViewRecord->resize(400, 300);
        verticalLayout = new QVBoxLayout(ViewRecord);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(6, 6, 6, 6);
        scrollArea = new QScrollArea(ViewRecord);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 386, 286));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));

        verticalLayout_2->addLayout(gridLayout);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);


        retranslateUi(ViewRecord);

        QMetaObject::connectSlotsByName(ViewRecord);
    } // setupUi

    void retranslateUi(QDialog *ViewRecord)
    {
        ViewRecord->setWindowTitle(QCoreApplication::translate("ViewRecord", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ViewRecord: public Ui_ViewRecord {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWRECORD_H

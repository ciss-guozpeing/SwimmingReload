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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ViewRecord
{
public:
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;

    void setupUi(QDialog *ViewRecord)
    {
        if (ViewRecord->objectName().isEmpty())
            ViewRecord->setObjectName(QString::fromUtf8("ViewRecord"));
        ViewRecord->resize(870, 500);
        ViewRecord->setMinimumSize(QSize(870, 500));
        ViewRecord->setMaximumSize(QSize(10000, 10000));
        gridLayout = new QGridLayout(ViewRecord);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(6, 6, 6, 6);
        scrollArea = new QScrollArea(ViewRecord);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 856, 486));
        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 0, 0, 1, 1);


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

/********************************************************************************
** Form generated from reading UI file 'DB.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DB_H
#define UI_DB_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DB
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QStackedWidget *stackedWidget;

    void setupUi(QWidget *DB)
    {
        if (DB->objectName().isEmpty())
            DB->setObjectName(QString::fromUtf8("DB"));
        DB->resize(548, 372);
        horizontalLayout = new QHBoxLayout(DB);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        widget = new QWidget(DB);
        widget->setObjectName(QString::fromUtf8("widget"));

        horizontalLayout->addWidget(widget);

        stackedWidget = new QStackedWidget(DB);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));

        horizontalLayout->addWidget(stackedWidget);


        retranslateUi(DB);

        stackedWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(DB);
    } // setupUi

    void retranslateUi(QWidget *DB)
    {
        DB->setWindowTitle(QCoreApplication::translate("DB", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DB: public Ui_DB {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DB_H

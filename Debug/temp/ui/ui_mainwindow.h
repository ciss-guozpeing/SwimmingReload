/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QToolButton *mainPageBtn;
    QToolButton *dashBoardBtn;
    QToolButton *histDataBtn;
    QToolButton *systemSettingBtn;
    QStackedWidget *stackedWidget;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1168, 627);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout_3 = new QHBoxLayout(groupBox);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(25);
        font.setBold(true);
        label->setFont(font);

        horizontalLayout_3->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        mainPageBtn = new QToolButton(groupBox);
        mainPageBtn->setObjectName(QString::fromUtf8("mainPageBtn"));
        mainPageBtn->setMinimumSize(QSize(80, 50));
        mainPageBtn->setMaximumSize(QSize(16777215, 50));
        QFont font1;
        font1.setPointSize(13);
        font1.setBold(true);
        mainPageBtn->setFont(font1);

        horizontalLayout->addWidget(mainPageBtn);

        dashBoardBtn = new QToolButton(groupBox);
        dashBoardBtn->setObjectName(QString::fromUtf8("dashBoardBtn"));
        dashBoardBtn->setMinimumSize(QSize(80, 50));
        dashBoardBtn->setMaximumSize(QSize(80, 50));
        dashBoardBtn->setFont(font1);

        horizontalLayout->addWidget(dashBoardBtn);

        histDataBtn = new QToolButton(groupBox);
        histDataBtn->setObjectName(QString::fromUtf8("histDataBtn"));
        histDataBtn->setMinimumSize(QSize(80, 50));
        histDataBtn->setMaximumSize(QSize(80, 50));
        histDataBtn->setFont(font1);

        horizontalLayout->addWidget(histDataBtn);

        systemSettingBtn = new QToolButton(groupBox);
        systemSettingBtn->setObjectName(QString::fromUtf8("systemSettingBtn"));
        systemSettingBtn->setMinimumSize(QSize(80, 50));
        systemSettingBtn->setMaximumSize(QSize(80, 50));
        systemSettingBtn->setFont(font1);

        horizontalLayout->addWidget(systemSettingBtn);


        horizontalLayout_3->addLayout(horizontalLayout);


        verticalLayout->addWidget(groupBox);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));

        verticalLayout->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("MainWindow", "\345\233\275\345\256\266\351\230\237\346\260\264\344\270\255\345\212\233\351\207\217\346\265\213\350\257\204\345\271\263\345\217\260", nullptr));
        mainPageBtn->setText(QCoreApplication::translate("MainWindow", "\344\270\273\347\225\214\351\235\242", nullptr));
        dashBoardBtn->setText(QCoreApplication::translate("MainWindow", "\345\217\257\350\247\206\345\214\226\351\235\242\346\235\277", nullptr));
        histDataBtn->setText(QCoreApplication::translate("MainWindow", "\345\216\206\345\217\262\346\225\260\346\215\256", nullptr));
        systemSettingBtn->setText(QCoreApplication::translate("MainWindow", "\347\263\273\347\273\237\350\256\276\347\275\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

/********************************************************************************
** Form generated from reading UI file 'DashBoard.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DASHBOARD_H
#define UI_DASHBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DashBoard
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGroupBox *groupBox_4;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_2;
    QGroupBox *groupBox_7;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBox_5;
    QGroupBox *groupBox_8;
    QGroupBox *groupBox_6;

    void setupUi(QWidget *DashBoard)
    {
        if (DashBoard->objectName().isEmpty())
            DashBoard->setObjectName(QString::fromUtf8("DashBoard"));
        DashBoard->resize(852, 569);
        DashBoard->setAutoFillBackground(false);
        DashBoard->setStyleSheet(QString::fromUtf8("#DashBoard{border-image: url(:/Images/res/images/backend.png);}"));
        verticalLayout_3 = new QVBoxLayout(DashBoard);
#ifndef Q_OS_MAC
        verticalLayout_3->setSpacing(-1);
#endif
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(6, 6, 6, 6);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(DashBoard);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(16777215, 60));
        QFont font;
        font.setPointSize(25);
        font.setBold(true);
        label->setFont(font);
        label->setFrameShape(QFrame::NoFrame);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(DashBoard);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));

        verticalLayout->addWidget(groupBox);

        groupBox_4 = new QGroupBox(DashBoard);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));

        verticalLayout->addWidget(groupBox_4);


        horizontalLayout_3->addLayout(verticalLayout);

        groupBox_3 = new QGroupBox(DashBoard);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));

        horizontalLayout_3->addWidget(groupBox_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox_2 = new QGroupBox(DashBoard);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));

        verticalLayout_2->addWidget(groupBox_2);

        groupBox_7 = new QGroupBox(DashBoard);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));

        verticalLayout_2->addWidget(groupBox_7);


        horizontalLayout_3->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        groupBox_5 = new QGroupBox(DashBoard);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));

        horizontalLayout_2->addWidget(groupBox_5);

        groupBox_8 = new QGroupBox(DashBoard);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));

        horizontalLayout_2->addWidget(groupBox_8);

        groupBox_6 = new QGroupBox(DashBoard);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));

        horizontalLayout_2->addWidget(groupBox_6);


        verticalLayout_3->addLayout(horizontalLayout_2);


        retranslateUi(DashBoard);

        QMetaObject::connectSlotsByName(DashBoard);
    } // setupUi

    void retranslateUi(QWidget *DashBoard)
    {
        DashBoard->setWindowTitle(QCoreApplication::translate("DashBoard", "Form", nullptr));
        label->setText(QCoreApplication::translate("DashBoard", "\345\233\275\345\256\266\351\230\237\346\225\260\346\215\256\345\217\257\350\247\206\345\214\226\345\271\263\345\217\260", nullptr));
        groupBox->setTitle(QCoreApplication::translate("DashBoard", "GroupBox", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("DashBoard", "GroupBox", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("DashBoard", "GroupBox", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("DashBoard", "GroupBox", nullptr));
        groupBox_7->setTitle(QCoreApplication::translate("DashBoard", "GroupBox", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("DashBoard", "GroupBox", nullptr));
        groupBox_8->setTitle(QCoreApplication::translate("DashBoard", "GroupBox", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("DashBoard", "GroupBox", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DashBoard: public Ui_DashBoard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASHBOARD_H

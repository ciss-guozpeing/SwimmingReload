/********************************************************************************
** Form generated from reading UI file 'ViewBase.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWBASE_H
#define UI_VIEWBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ViewBase
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label_9;
    QLineEdit *personID;
    QFormLayout *formLayout_5;
    QLabel *label;
    QLineEdit *recordID;
    QFormLayout *formLayout_20;
    QLabel *label_2;
    QLineEdit *name;
    QFormLayout *formLayout_10;
    QLabel *label_10;
    QLineEdit *gender;
    QFormLayout *formLayout_3;
    QLabel *label_3;
    QLineEdit *weight;
    QFormLayout *formLayout_4;
    QLabel *label_4;
    QLineEdit *birthday;
    QFormLayout *formLayout_6;
    QLabel *label_5;
    QLineEdit *level;
    QFormLayout *formLayout_7;
    QLabel *label_6;
    QLineEdit *team;
    QFormLayout *formLayout_8;
    QLabel *label_7;
    QLineEdit *stage;
    QFormLayout *formLayout_12;
    QLabel *label_21;
    QLineEdit *distance;
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout_2;
    QLineEdit *env;
    QLabel *label_19;
    QFormLayout *formLayout_9;
    QLabel *label_8;
    QLineEdit *stroke;
    QFormLayout *formLayout_11;
    QLabel *label_11;
    QLineEdit *strokeItem;
    QFormLayout *formLayout_13;
    QLabel *label_12;
    QLineEdit *maxPower1;
    QFormLayout *formLayout_14;
    QLabel *label_13;
    QLineEdit *maxPower2;
    QFormLayout *formLayout_15;
    QLineEdit *maxPower3;
    QLabel *label_14;
    QFormLayout *formLayout_16;
    QLabel *label_15;
    QLineEdit *maxPower;
    QFormLayout *formLayout_17;
    QLineEdit *relPower;
    QLabel *label_16;
    QFormLayout *formLayout_18;
    QLabel *label_17;
    QLineEdit *percentage;
    QFormLayout *formLayout_19;
    QLineEdit *contributionRate;
    QLabel *label_18;

    void setupUi(QWidget *ViewBase)
    {
        if (ViewBase->objectName().isEmpty())
            ViewBase->setObjectName(QString::fromUtf8("ViewBase"));
        ViewBase->resize(400, 784);
        ViewBase->setMinimumSize(QSize(400, 0));
        ViewBase->setMaximumSize(QSize(400, 16777215));
        ViewBase->setStyleSheet(QString::fromUtf8("#ViewBase{ border: 3px solid green}"));
        horizontalLayout = new QHBoxLayout(ViewBase);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(20, 0, 12, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_9 = new QLabel(ViewBase);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMinimumSize(QSize(70, 0));
        label_9->setMaximumSize(QSize(70, 16777215));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_9);

        personID = new QLineEdit(ViewBase);
        personID->setObjectName(QString::fromUtf8("personID"));
        personID->setMinimumSize(QSize(100, 0));
        personID->setReadOnly(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, personID);


        verticalLayout->addLayout(formLayout);

        formLayout_5 = new QFormLayout();
        formLayout_5->setObjectName(QString::fromUtf8("formLayout_5"));
        label = new QLabel(ViewBase);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(70, 0));
        label->setMaximumSize(QSize(70, 16777215));

        formLayout_5->setWidget(0, QFormLayout::LabelRole, label);

        recordID = new QLineEdit(ViewBase);
        recordID->setObjectName(QString::fromUtf8("recordID"));
        recordID->setMinimumSize(QSize(100, 0));
        recordID->setReadOnly(true);

        formLayout_5->setWidget(0, QFormLayout::FieldRole, recordID);


        verticalLayout->addLayout(formLayout_5);

        formLayout_20 = new QFormLayout();
        formLayout_20->setObjectName(QString::fromUtf8("formLayout_20"));
        label_2 = new QLabel(ViewBase);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(70, 0));
        label_2->setMaximumSize(QSize(70, 16777215));

        formLayout_20->setWidget(0, QFormLayout::LabelRole, label_2);

        name = new QLineEdit(ViewBase);
        name->setObjectName(QString::fromUtf8("name"));
        name->setMinimumSize(QSize(100, 0));
        name->setMaximumSize(QSize(16777215, 16777215));

        formLayout_20->setWidget(0, QFormLayout::FieldRole, name);


        verticalLayout->addLayout(formLayout_20);

        formLayout_10 = new QFormLayout();
        formLayout_10->setObjectName(QString::fromUtf8("formLayout_10"));
        label_10 = new QLabel(ViewBase);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setMinimumSize(QSize(70, 0));
        label_10->setMaximumSize(QSize(70, 16777215));

        formLayout_10->setWidget(0, QFormLayout::LabelRole, label_10);

        gender = new QLineEdit(ViewBase);
        gender->setObjectName(QString::fromUtf8("gender"));
        gender->setMinimumSize(QSize(100, 0));
        gender->setReadOnly(true);

        formLayout_10->setWidget(0, QFormLayout::FieldRole, gender);


        verticalLayout->addLayout(formLayout_10);

        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        label_3 = new QLabel(ViewBase);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(70, 0));
        label_3->setMaximumSize(QSize(70, 16777215));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_3);

        weight = new QLineEdit(ViewBase);
        weight->setObjectName(QString::fromUtf8("weight"));
        weight->setMinimumSize(QSize(100, 0));
        weight->setReadOnly(true);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, weight);


        verticalLayout->addLayout(formLayout_3);

        formLayout_4 = new QFormLayout();
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        label_4 = new QLabel(ViewBase);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(70, 0));
        label_4->setMaximumSize(QSize(70, 16777215));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_4);

        birthday = new QLineEdit(ViewBase);
        birthday->setObjectName(QString::fromUtf8("birthday"));
        birthday->setMinimumSize(QSize(100, 0));
        birthday->setReadOnly(true);

        formLayout_4->setWidget(0, QFormLayout::FieldRole, birthday);


        verticalLayout->addLayout(formLayout_4);

        formLayout_6 = new QFormLayout();
        formLayout_6->setObjectName(QString::fromUtf8("formLayout_6"));
        label_5 = new QLabel(ViewBase);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(70, 0));
        label_5->setMaximumSize(QSize(70, 16777215));

        formLayout_6->setWidget(0, QFormLayout::LabelRole, label_5);

        level = new QLineEdit(ViewBase);
        level->setObjectName(QString::fromUtf8("level"));
        level->setMinimumSize(QSize(100, 0));
        level->setReadOnly(true);

        formLayout_6->setWidget(0, QFormLayout::FieldRole, level);


        verticalLayout->addLayout(formLayout_6);

        formLayout_7 = new QFormLayout();
        formLayout_7->setObjectName(QString::fromUtf8("formLayout_7"));
        label_6 = new QLabel(ViewBase);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(70, 0));
        label_6->setMaximumSize(QSize(70, 16777215));

        formLayout_7->setWidget(0, QFormLayout::LabelRole, label_6);

        team = new QLineEdit(ViewBase);
        team->setObjectName(QString::fromUtf8("team"));
        team->setMinimumSize(QSize(100, 0));
        team->setReadOnly(true);

        formLayout_7->setWidget(0, QFormLayout::FieldRole, team);


        verticalLayout->addLayout(formLayout_7);

        formLayout_8 = new QFormLayout();
        formLayout_8->setObjectName(QString::fromUtf8("formLayout_8"));
        label_7 = new QLabel(ViewBase);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMinimumSize(QSize(70, 0));
        label_7->setMaximumSize(QSize(70, 16777215));

        formLayout_8->setWidget(0, QFormLayout::LabelRole, label_7);

        stage = new QLineEdit(ViewBase);
        stage->setObjectName(QString::fromUtf8("stage"));
        stage->setReadOnly(true);

        formLayout_8->setWidget(0, QFormLayout::FieldRole, stage);


        verticalLayout->addLayout(formLayout_8);

        formLayout_12 = new QFormLayout();
        formLayout_12->setObjectName(QString::fromUtf8("formLayout_12"));
        label_21 = new QLabel(ViewBase);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setMinimumSize(QSize(70, 0));
        label_21->setMaximumSize(QSize(70, 16777215));

        formLayout_12->setWidget(0, QFormLayout::LabelRole, label_21);

        distance = new QLineEdit(ViewBase);
        distance->setObjectName(QString::fromUtf8("distance"));
        distance->setReadOnly(true);

        formLayout_12->setWidget(0, QFormLayout::FieldRole, distance);


        verticalLayout->addLayout(formLayout_12);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        env = new QLineEdit(ViewBase);
        env->setObjectName(QString::fromUtf8("env"));
        env->setMinimumSize(QSize(100, 0));
        env->setReadOnly(true);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, env);

        label_19 = new QLabel(ViewBase);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setMinimumSize(QSize(70, 0));
        label_19->setMaximumSize(QSize(70, 16777215));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_19);


        verticalLayout_2->addLayout(formLayout_2);

        formLayout_9 = new QFormLayout();
        formLayout_9->setObjectName(QString::fromUtf8("formLayout_9"));
        label_8 = new QLabel(ViewBase);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMinimumSize(QSize(70, 0));
        label_8->setMaximumSize(QSize(70, 16777215));

        formLayout_9->setWidget(0, QFormLayout::LabelRole, label_8);

        stroke = new QLineEdit(ViewBase);
        stroke->setObjectName(QString::fromUtf8("stroke"));
        stroke->setMinimumSize(QSize(100, 0));
        stroke->setReadOnly(true);

        formLayout_9->setWidget(0, QFormLayout::FieldRole, stroke);


        verticalLayout_2->addLayout(formLayout_9);

        formLayout_11 = new QFormLayout();
        formLayout_11->setObjectName(QString::fromUtf8("formLayout_11"));
        label_11 = new QLabel(ViewBase);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setMinimumSize(QSize(70, 0));
        label_11->setMaximumSize(QSize(70, 16777215));

        formLayout_11->setWidget(0, QFormLayout::LabelRole, label_11);

        strokeItem = new QLineEdit(ViewBase);
        strokeItem->setObjectName(QString::fromUtf8("strokeItem"));
        strokeItem->setMinimumSize(QSize(100, 0));
        strokeItem->setReadOnly(true);

        formLayout_11->setWidget(0, QFormLayout::FieldRole, strokeItem);


        verticalLayout_2->addLayout(formLayout_11);

        formLayout_13 = new QFormLayout();
        formLayout_13->setObjectName(QString::fromUtf8("formLayout_13"));
        label_12 = new QLabel(ViewBase);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setMinimumSize(QSize(70, 0));
        label_12->setMaximumSize(QSize(70, 16777215));

        formLayout_13->setWidget(0, QFormLayout::LabelRole, label_12);

        maxPower1 = new QLineEdit(ViewBase);
        maxPower1->setObjectName(QString::fromUtf8("maxPower1"));
        maxPower1->setMinimumSize(QSize(100, 0));
        maxPower1->setReadOnly(true);

        formLayout_13->setWidget(0, QFormLayout::FieldRole, maxPower1);


        verticalLayout_2->addLayout(formLayout_13);

        formLayout_14 = new QFormLayout();
        formLayout_14->setObjectName(QString::fromUtf8("formLayout_14"));
        label_13 = new QLabel(ViewBase);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setMinimumSize(QSize(70, 0));
        label_13->setMaximumSize(QSize(70, 16777215));

        formLayout_14->setWidget(0, QFormLayout::LabelRole, label_13);

        maxPower2 = new QLineEdit(ViewBase);
        maxPower2->setObjectName(QString::fromUtf8("maxPower2"));
        maxPower2->setReadOnly(true);

        formLayout_14->setWidget(0, QFormLayout::FieldRole, maxPower2);


        verticalLayout_2->addLayout(formLayout_14);

        formLayout_15 = new QFormLayout();
        formLayout_15->setObjectName(QString::fromUtf8("formLayout_15"));
        maxPower3 = new QLineEdit(ViewBase);
        maxPower3->setObjectName(QString::fromUtf8("maxPower3"));
        maxPower3->setReadOnly(true);

        formLayout_15->setWidget(0, QFormLayout::FieldRole, maxPower3);

        label_14 = new QLabel(ViewBase);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setMinimumSize(QSize(70, 0));
        label_14->setMaximumSize(QSize(70, 16777215));

        formLayout_15->setWidget(0, QFormLayout::LabelRole, label_14);


        verticalLayout_2->addLayout(formLayout_15);

        formLayout_16 = new QFormLayout();
        formLayout_16->setObjectName(QString::fromUtf8("formLayout_16"));
        label_15 = new QLabel(ViewBase);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setMinimumSize(QSize(70, 0));
        label_15->setMaximumSize(QSize(70, 16777215));

        formLayout_16->setWidget(0, QFormLayout::LabelRole, label_15);

        maxPower = new QLineEdit(ViewBase);
        maxPower->setObjectName(QString::fromUtf8("maxPower"));
        maxPower->setReadOnly(true);

        formLayout_16->setWidget(0, QFormLayout::FieldRole, maxPower);


        verticalLayout_2->addLayout(formLayout_16);

        formLayout_17 = new QFormLayout();
        formLayout_17->setObjectName(QString::fromUtf8("formLayout_17"));
        relPower = new QLineEdit(ViewBase);
        relPower->setObjectName(QString::fromUtf8("relPower"));
        relPower->setMinimumSize(QSize(100, 0));
        relPower->setReadOnly(true);

        formLayout_17->setWidget(0, QFormLayout::FieldRole, relPower);

        label_16 = new QLabel(ViewBase);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setMinimumSize(QSize(70, 0));
        label_16->setMaximumSize(QSize(70, 16777215));

        formLayout_17->setWidget(0, QFormLayout::LabelRole, label_16);


        verticalLayout_2->addLayout(formLayout_17);

        formLayout_18 = new QFormLayout();
        formLayout_18->setObjectName(QString::fromUtf8("formLayout_18"));
        label_17 = new QLabel(ViewBase);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setMinimumSize(QSize(70, 0));
        label_17->setMaximumSize(QSize(70, 16777215));

        formLayout_18->setWidget(0, QFormLayout::LabelRole, label_17);

        percentage = new QLineEdit(ViewBase);
        percentage->setObjectName(QString::fromUtf8("percentage"));
        percentage->setReadOnly(true);

        formLayout_18->setWidget(0, QFormLayout::FieldRole, percentage);


        verticalLayout_2->addLayout(formLayout_18);

        formLayout_19 = new QFormLayout();
        formLayout_19->setObjectName(QString::fromUtf8("formLayout_19"));
        contributionRate = new QLineEdit(ViewBase);
        contributionRate->setObjectName(QString::fromUtf8("contributionRate"));
        contributionRate->setReadOnly(true);

        formLayout_19->setWidget(0, QFormLayout::FieldRole, contributionRate);

        label_18 = new QLabel(ViewBase);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setMinimumSize(QSize(70, 0));
        label_18->setMaximumSize(QSize(70, 16777215));

        formLayout_19->setWidget(0, QFormLayout::LabelRole, label_18);


        verticalLayout_2->addLayout(formLayout_19);


        horizontalLayout->addLayout(verticalLayout_2);


        retranslateUi(ViewBase);

        QMetaObject::connectSlotsByName(ViewBase);
    } // setupUi

    void retranslateUi(QWidget *ViewBase)
    {
        ViewBase->setWindowTitle(QCoreApplication::translate("ViewBase", "Form", nullptr));
        label_9->setText(QCoreApplication::translate("ViewBase", "\350\272\253\344\273\275ID", nullptr));
        label->setText(QCoreApplication::translate("ViewBase", "\346\265\213\350\257\225ID", nullptr));
        label_2->setText(QCoreApplication::translate("ViewBase", "\345\247\223\345\220\215", nullptr));
        label_10->setText(QCoreApplication::translate("ViewBase", "\346\200\247\345\210\253", nullptr));
        label_3->setText(QCoreApplication::translate("ViewBase", "\344\275\223\351\207\215", nullptr));
        label_4->setText(QCoreApplication::translate("ViewBase", "\345\207\272\347\224\237\346\227\245\346\234\237", nullptr));
        label_5->setText(QCoreApplication::translate("ViewBase", "\350\277\220\345\212\250\347\255\211\347\272\247", nullptr));
        label_6->setText(QCoreApplication::translate("ViewBase", "\346\211\200\345\261\236\351\230\237\344\274\215", nullptr));
        label_7->setText(QCoreApplication::translate("ViewBase", "\350\256\255\347\273\203\351\230\266\346\256\265", nullptr));
        label_21->setText(QCoreApplication::translate("ViewBase", "\346\265\213\350\257\225\350\267\235\347\246\273", nullptr));
        label_19->setText(QCoreApplication::translate("ViewBase", "\347\216\257\345\242\203", nullptr));
        label_8->setText(QCoreApplication::translate("ViewBase", "\346\263\263\345\247\277", nullptr));
        label_11->setText(QCoreApplication::translate("ViewBase", "\346\263\263\345\247\277\351\241\271", nullptr));
        label_12->setText(QCoreApplication::translate("ViewBase", "\346\234\200\345\244\247\345\212\2331", nullptr));
        label_13->setText(QCoreApplication::translate("ViewBase", "\346\234\200\345\244\247\345\212\2332", nullptr));
        label_14->setText(QCoreApplication::translate("ViewBase", "\346\234\200\345\244\247\345\212\2333", nullptr));
        label_15->setText(QCoreApplication::translate("ViewBase", "\346\234\200\345\244\247\345\212\233", nullptr));
        label_16->setText(QCoreApplication::translate("ViewBase", "\347\233\270\345\257\271\345\212\233", nullptr));
        label_17->setText(QCoreApplication::translate("ViewBase", "\347\231\276\345\210\206\346\257\224%", nullptr));
        label_18->setText(QCoreApplication::translate("ViewBase", "\350\264\241\347\214\256\347\216\207%", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ViewBase: public Ui_ViewBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWBASE_H

/********************************************************************************
** Form generated from reading UI file 'AddRecord.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDRECORD_H
#define UI_ADDRECORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddRecord
{
public:
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_8;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_15;
    QLineEdit *name;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_16;
    QDateEdit *birthday;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_17;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_13;
    QRadioButton *man;
    QRadioButton *woman;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_18;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout_15;
    QDoubleSpinBox *weight;
    QLabel *label_19;
    QGroupBox *groupBox_9;
    QHBoxLayout *horizontalLayout_16;
    QGroupBox *groupBox_10;
    QGridLayout *gridLayout_5;
    QLabel *strokelabel_2;
    QLabel *teamlabel_2;
    QComboBox *stroke;
    QLabel *typelabel_2;
    QComboBox *level;
    QComboBox *strokeItem;
    QLabel *sportlevel_2;
    QComboBox *team;
    QGroupBox *groupBox_11;
    QGridLayout *gridLayout_6;
    QComboBox *distance;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QComboBox *env;
    QComboBox *stage;
    QGroupBox *groupBox_12;
    QGridLayout *gridLayout_2;
    QDoubleSpinBox *maxPower2;
    QLabel *label_23;
    QLabel *label_24;
    QDoubleSpinBox *maxPower3;
    QDoubleSpinBox *maxPower1;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *label_27;
    QLabel *label_28;
    QLabel *warnLabel;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AddRecord)
    {
        if (AddRecord->objectName().isEmpty())
            AddRecord->setObjectName(QString::fromUtf8("AddRecord"));
        AddRecord->resize(818, 453);
        verticalLayout_5 = new QVBoxLayout(AddRecord);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        groupBox = new QGroupBox(AddRecord);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout_8 = new QHBoxLayout(groupBox);
        horizontalLayout_8->setSpacing(7);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        groupBox_4 = new QGroupBox(groupBox);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        verticalLayout_3 = new QVBoxLayout(groupBox_4);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(12, 12, 12, 12);
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_15 = new QLabel(groupBox_4);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_10->addWidget(label_15);

        name = new QLineEdit(groupBox_4);
        name->setObjectName(QString::fromUtf8("name"));
        name->setEnabled(true);
        name->setMinimumSize(QSize(202, 25));
        name->setMaximumSize(QSize(202, 25));

        horizontalLayout_10->addWidget(name);


        verticalLayout_3->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_16 = new QLabel(groupBox_4);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        horizontalLayout_11->addWidget(label_16);

        birthday = new QDateEdit(groupBox_4);
        birthday->setObjectName(QString::fromUtf8("birthday"));
        birthday->setMinimumSize(QSize(202, 25));
        birthday->setMaximumSize(QSize(202, 25));

        horizontalLayout_11->addWidget(birthday);


        verticalLayout_3->addLayout(horizontalLayout_11);


        horizontalLayout_8->addWidget(groupBox_4);

        groupBox_5 = new QGroupBox(groupBox);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setMinimumSize(QSize(380, 0));
        verticalLayout_4 = new QVBoxLayout(groupBox_5);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(12, 12, 12, 12);
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_17 = new QLabel(groupBox_5);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        horizontalLayout_12->addWidget(label_17);

        frame_3 = new QFrame(groupBox_5);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        horizontalLayout_13 = new QHBoxLayout(frame_3);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        man = new QRadioButton(frame_3);
        man->setObjectName(QString::fromUtf8("man"));

        horizontalLayout_13->addWidget(man);

        woman = new QRadioButton(frame_3);
        woman->setObjectName(QString::fromUtf8("woman"));

        horizontalLayout_13->addWidget(woman);


        horizontalLayout_12->addWidget(frame_3);


        verticalLayout_4->addLayout(horizontalLayout_12);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        label_18 = new QLabel(groupBox_5);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        horizontalLayout_14->addWidget(label_18);

        frame_4 = new QFrame(groupBox_5);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        horizontalLayout_15 = new QHBoxLayout(frame_4);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        weight = new QDoubleSpinBox(frame_4);
        weight->setObjectName(QString::fromUtf8("weight"));

        horizontalLayout_15->addWidget(weight);

        label_19 = new QLabel(frame_4);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setMaximumSize(QSize(25, 16777215));
        label_19->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_19->setIndent(-1);

        horizontalLayout_15->addWidget(label_19);


        horizontalLayout_14->addWidget(frame_4);


        verticalLayout_4->addLayout(horizontalLayout_14);


        horizontalLayout_8->addWidget(groupBox_5);


        verticalLayout_5->addWidget(groupBox);

        groupBox_9 = new QGroupBox(AddRecord);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        horizontalLayout_16 = new QHBoxLayout(groupBox_9);
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        groupBox_10 = new QGroupBox(groupBox_9);
        groupBox_10->setObjectName(QString::fromUtf8("groupBox_10"));
        gridLayout_5 = new QGridLayout(groupBox_10);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        strokelabel_2 = new QLabel(groupBox_10);
        strokelabel_2->setObjectName(QString::fromUtf8("strokelabel_2"));

        gridLayout_5->addWidget(strokelabel_2, 2, 0, 1, 1);

        teamlabel_2 = new QLabel(groupBox_10);
        teamlabel_2->setObjectName(QString::fromUtf8("teamlabel_2"));

        gridLayout_5->addWidget(teamlabel_2, 1, 0, 1, 1);

        stroke = new QComboBox(groupBox_10);
        stroke->addItem(QString());
        stroke->setObjectName(QString::fromUtf8("stroke"));

        gridLayout_5->addWidget(stroke, 2, 1, 1, 1);

        typelabel_2 = new QLabel(groupBox_10);
        typelabel_2->setObjectName(QString::fromUtf8("typelabel_2"));

        gridLayout_5->addWidget(typelabel_2, 3, 0, 1, 1);

        level = new QComboBox(groupBox_10);
        level->addItem(QString());
        level->setObjectName(QString::fromUtf8("level"));

        gridLayout_5->addWidget(level, 0, 1, 1, 1);

        strokeItem = new QComboBox(groupBox_10);
        strokeItem->addItem(QString());
        strokeItem->setObjectName(QString::fromUtf8("strokeItem"));

        gridLayout_5->addWidget(strokeItem, 3, 1, 1, 1);

        sportlevel_2 = new QLabel(groupBox_10);
        sportlevel_2->setObjectName(QString::fromUtf8("sportlevel_2"));

        gridLayout_5->addWidget(sportlevel_2, 0, 0, 1, 1);

        team = new QComboBox(groupBox_10);
        team->addItem(QString());
        team->setObjectName(QString::fromUtf8("team"));

        gridLayout_5->addWidget(team, 1, 1, 1, 1);


        horizontalLayout_16->addWidget(groupBox_10);

        groupBox_11 = new QGroupBox(groupBox_9);
        groupBox_11->setObjectName(QString::fromUtf8("groupBox_11"));
        gridLayout_6 = new QGridLayout(groupBox_11);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        distance = new QComboBox(groupBox_11);
        distance->addItem(QString());
        distance->setObjectName(QString::fromUtf8("distance"));

        gridLayout_6->addWidget(distance, 2, 1, 1, 1);

        label_20 = new QLabel(groupBox_11);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout_6->addWidget(label_20, 4, 0, 1, 1);

        label_21 = new QLabel(groupBox_11);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        gridLayout_6->addWidget(label_21, 3, 0, 1, 1);

        label_22 = new QLabel(groupBox_11);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        gridLayout_6->addWidget(label_22, 2, 0, 1, 1);

        env = new QComboBox(groupBox_11);
        env->addItem(QString());
        env->setObjectName(QString::fromUtf8("env"));

        gridLayout_6->addWidget(env, 3, 1, 1, 1);

        stage = new QComboBox(groupBox_11);
        stage->addItem(QString());
        stage->setObjectName(QString::fromUtf8("stage"));

        gridLayout_6->addWidget(stage, 4, 1, 1, 1);


        horizontalLayout_16->addWidget(groupBox_11);

        groupBox_12 = new QGroupBox(groupBox_9);
        groupBox_12->setObjectName(QString::fromUtf8("groupBox_12"));
        gridLayout_2 = new QGridLayout(groupBox_12);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        maxPower2 = new QDoubleSpinBox(groupBox_12);
        maxPower2->setObjectName(QString::fromUtf8("maxPower2"));
        maxPower2->setMaximum(1000.000000000000000);

        gridLayout_2->addWidget(maxPower2, 1, 1, 1, 1);

        label_23 = new QLabel(groupBox_12);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        gridLayout_2->addWidget(label_23, 0, 0, 1, 1);

        label_24 = new QLabel(groupBox_12);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        gridLayout_2->addWidget(label_24, 1, 0, 1, 1);

        maxPower3 = new QDoubleSpinBox(groupBox_12);
        maxPower3->setObjectName(QString::fromUtf8("maxPower3"));
        maxPower3->setMaximum(1000.000000000000000);

        gridLayout_2->addWidget(maxPower3, 6, 1, 1, 1);

        maxPower1 = new QDoubleSpinBox(groupBox_12);
        maxPower1->setObjectName(QString::fromUtf8("maxPower1"));
        maxPower1->setMaximum(1000.000000000000000);

        gridLayout_2->addWidget(maxPower1, 0, 1, 1, 1);

        label_25 = new QLabel(groupBox_12);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        gridLayout_2->addWidget(label_25, 6, 0, 1, 1);

        label_26 = new QLabel(groupBox_12);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setMaximumSize(QSize(25, 16777215));
        label_26->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_26, 0, 2, 1, 1);

        label_27 = new QLabel(groupBox_12);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_27, 1, 2, 1, 1);

        label_28 = new QLabel(groupBox_12);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_28, 6, 2, 1, 1);


        horizontalLayout_16->addWidget(groupBox_12);


        verticalLayout_5->addWidget(groupBox_9);

        warnLabel = new QLabel(AddRecord);
        warnLabel->setObjectName(QString::fromUtf8("warnLabel"));
        warnLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));

        verticalLayout_5->addWidget(warnLabel);

        buttonBox = new QDialogButtonBox(AddRecord);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_5->addWidget(buttonBox);


        retranslateUi(AddRecord);
        QObject::connect(buttonBox, SIGNAL(accepted()), AddRecord, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AddRecord, SLOT(reject()));

        QMetaObject::connectSlotsByName(AddRecord);
    } // setupUi

    void retranslateUi(QDialog *AddRecord)
    {
        AddRecord->setWindowTitle(QCoreApplication::translate("AddRecord", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("AddRecord", "\344\270\252\344\272\272\344\277\241\346\201\257", nullptr));
        groupBox_4->setTitle(QString());
        label_15->setText(QCoreApplication::translate("AddRecord", "\345\247\223\345\220\215", nullptr));
        label_16->setText(QCoreApplication::translate("AddRecord", "\345\207\272\347\224\237\346\227\245\346\234\237", nullptr));
        groupBox_5->setTitle(QString());
        label_17->setText(QCoreApplication::translate("AddRecord", "\346\200\247\345\210\253", nullptr));
        man->setText(QCoreApplication::translate("AddRecord", "\347\224\267", nullptr));
        woman->setText(QCoreApplication::translate("AddRecord", "\345\245\263", nullptr));
        label_18->setText(QCoreApplication::translate("AddRecord", "\344\275\223\351\207\215", nullptr));
        label_19->setText(QCoreApplication::translate("AddRecord", "KG", nullptr));
        groupBox_9->setTitle(QCoreApplication::translate("AddRecord", "\346\265\213\350\257\225\346\225\260\346\215\256", nullptr));
        groupBox_10->setTitle(QString());
        strokelabel_2->setText(QCoreApplication::translate("AddRecord", "\346\263\263\345\247\277", nullptr));
        teamlabel_2->setText(QCoreApplication::translate("AddRecord", "\346\211\200\345\261\236\351\230\237", nullptr));
        stroke->setItemText(0, QCoreApplication::translate("AddRecord", "\350\257\267\351\200\211\346\213\251", nullptr));

        typelabel_2->setText(QCoreApplication::translate("AddRecord", "\347\261\273\345\210\253", nullptr));
        level->setItemText(0, QCoreApplication::translate("AddRecord", "\350\257\267\351\200\211\346\213\251", nullptr));

        strokeItem->setItemText(0, QCoreApplication::translate("AddRecord", "\350\257\267\351\200\211\346\213\251", nullptr));

        sportlevel_2->setText(QCoreApplication::translate("AddRecord", "\350\277\220\345\212\250\347\255\211\347\272\247", nullptr));
        team->setItemText(0, QCoreApplication::translate("AddRecord", "\350\257\267\351\200\211\346\213\251", nullptr));

        groupBox_11->setTitle(QString());
        distance->setItemText(0, QCoreApplication::translate("AddRecord", "\350\257\267\351\200\211\346\213\251", nullptr));

        label_20->setText(QCoreApplication::translate("AddRecord", "\346\265\213\350\257\225\351\230\266\346\256\265", nullptr));
        label_21->setText(QCoreApplication::translate("AddRecord", "\346\265\213\350\257\225\347\216\257\345\242\203", nullptr));
        label_22->setText(QCoreApplication::translate("AddRecord", "\346\265\213\350\257\225\350\267\235\347\246\273", nullptr));
        env->setItemText(0, QCoreApplication::translate("AddRecord", "\350\257\267\351\200\211\346\213\251", nullptr));

        stage->setItemText(0, QCoreApplication::translate("AddRecord", "\350\257\267\351\200\211\346\213\251", nullptr));

        groupBox_12->setTitle(QString());
        label_23->setText(QCoreApplication::translate("AddRecord", "\346\234\200\345\244\247\345\212\233\351\207\2171", nullptr));
        label_24->setText(QCoreApplication::translate("AddRecord", "\346\234\200\345\244\247\345\212\233\351\207\2172", nullptr));
        label_25->setText(QCoreApplication::translate("AddRecord", "\346\234\200\345\244\247\345\212\233\351\207\2173", nullptr));
        label_26->setText(QCoreApplication::translate("AddRecord", "KG", nullptr));
        label_27->setText(QCoreApplication::translate("AddRecord", "KG", nullptr));
        label_28->setText(QCoreApplication::translate("AddRecord", "KG", nullptr));
        warnLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AddRecord: public Ui_AddRecord {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDRECORD_H

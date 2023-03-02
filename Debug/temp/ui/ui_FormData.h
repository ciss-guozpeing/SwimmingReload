/********************************************************************************
** Form generated from reading UI file 'FormData.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMDATA_H
#define UI_FORMDATA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormData
{
public:
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_4;
    QGridLayout *gridLayout;
    QFormLayout *formLayout;
    QLabel *label_2;
    QComboBox *comboBox;
    QFormLayout *formLayout_3;
    QLabel *label_4;
    QComboBox *level;
    QFormLayout *formLayout_2;
    QLabel *label_3;
    QDoubleSpinBox *doubleSpinBox;
    QFormLayout *formLayout_4;
    QLabel *label_5;
    QComboBox *team;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer;
    QFormLayout *formLayout_5;
    QLabel *label_6;
    QComboBox *stroke;
    QFormLayout *formLayout_7;
    QLabel *label_8;
    QComboBox *stage;
    QFormLayout *formLayout_8;
    QLabel *label_9;
    QComboBox *distance;
    QFormLayout *formLayout_10;
    QLabel *label_7;
    QComboBox *strokeItem;
    QFormLayout *formLayout_9;
    QLabel *label_10;
    QComboBox *env;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *searchEdit;
    QPushButton *searchBtn;
    QHBoxLayout *horizontalLayout_5;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *openExcelBtn;
    QPushButton *refreshBtn;
    QPushButton *addRecordBtn;
    QPushButton *viewRecordBtn;
    QPushButton *exportRecordBtn;
    QPushButton *exportTemplate;
    QPushButton *deleteReocrdBtn;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *calculateSettingBtn;
    QPushButton *calculateBtn;
    QPushButton *statisticsBtn;
    QPushButton *clusterBtn;
    QPushButton *asSaveBtn;
    QSpacerItem *horizontalSpacer_4;
    QSplitter *splitter;
    QTabWidget *tabWidget;
    QWidget *calculateWidget;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_4;
    QGroupBox *groupBox_5;

    void setupUi(QWidget *FormData)
    {
        if (FormData->objectName().isEmpty())
            FormData->setObjectName(QString::fromUtf8("FormData"));
        FormData->resize(1084, 590);
        verticalLayout_3 = new QVBoxLayout(FormData);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBox = new QGroupBox(FormData);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(0, 100));
        groupBox->setMaximumSize(QSize(16777215, 100));
        horizontalLayout_4 = new QHBoxLayout(groupBox);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        comboBox = new QComboBox(groupBox);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, comboBox);


        gridLayout->addLayout(formLayout, 0, 0, 1, 1);

        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_4);

        level = new QComboBox(groupBox);
        level->addItem(QString());
        level->setObjectName(QString::fromUtf8("level"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, level);


        gridLayout->addLayout(formLayout_3, 0, 1, 1, 1);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_3);

        doubleSpinBox = new QDoubleSpinBox(groupBox);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, doubleSpinBox);


        gridLayout->addLayout(formLayout_2, 1, 0, 1, 1);

        formLayout_4 = new QFormLayout();
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_5);

        team = new QComboBox(groupBox);
        team->addItem(QString());
        team->setObjectName(QString::fromUtf8("team"));

        formLayout_4->setWidget(0, QFormLayout::FieldRole, team);


        gridLayout->addLayout(formLayout_4, 1, 1, 1, 1);


        horizontalLayout_4->addLayout(gridLayout);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 2, 3, 1, 1);

        formLayout_5 = new QFormLayout();
        formLayout_5->setObjectName(QString::fromUtf8("formLayout_5"));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout_5->setWidget(0, QFormLayout::LabelRole, label_6);

        stroke = new QComboBox(groupBox);
        stroke->addItem(QString());
        stroke->setObjectName(QString::fromUtf8("stroke"));

        formLayout_5->setWidget(0, QFormLayout::FieldRole, stroke);


        gridLayout_2->addLayout(formLayout_5, 0, 0, 1, 1);

        formLayout_7 = new QFormLayout();
        formLayout_7->setObjectName(QString::fromUtf8("formLayout_7"));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout_7->setWidget(0, QFormLayout::LabelRole, label_8);

        stage = new QComboBox(groupBox);
        stage->addItem(QString());
        stage->setObjectName(QString::fromUtf8("stage"));

        formLayout_7->setWidget(0, QFormLayout::FieldRole, stage);


        gridLayout_2->addLayout(formLayout_7, 0, 1, 1, 2);

        formLayout_8 = new QFormLayout();
        formLayout_8->setObjectName(QString::fromUtf8("formLayout_8"));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout_8->setWidget(0, QFormLayout::LabelRole, label_9);

        distance = new QComboBox(groupBox);
        distance->addItem(QString());
        distance->setObjectName(QString::fromUtf8("distance"));

        formLayout_8->setWidget(0, QFormLayout::FieldRole, distance);


        gridLayout_2->addLayout(formLayout_8, 1, 1, 2, 2);

        formLayout_10 = new QFormLayout();
        formLayout_10->setObjectName(QString::fromUtf8("formLayout_10"));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout_10->setWidget(0, QFormLayout::LabelRole, label_7);

        strokeItem = new QComboBox(groupBox);
        strokeItem->addItem(QString());
        strokeItem->setObjectName(QString::fromUtf8("strokeItem"));

        formLayout_10->setWidget(0, QFormLayout::FieldRole, strokeItem);


        gridLayout_2->addLayout(formLayout_10, 1, 0, 2, 1);

        formLayout_9 = new QFormLayout();
        formLayout_9->setObjectName(QString::fromUtf8("formLayout_9"));
        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        formLayout_9->setWidget(0, QFormLayout::LabelRole, label_10);

        env = new QComboBox(groupBox);
        env->addItem(QString());
        env->setObjectName(QString::fromUtf8("env"));

        formLayout_9->setWidget(0, QFormLayout::FieldRole, env);


        gridLayout_2->addLayout(formLayout_9, 0, 3, 1, 1);


        horizontalLayout_4->addLayout(gridLayout_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        searchEdit = new QLineEdit(groupBox);
        searchEdit->setObjectName(QString::fromUtf8("searchEdit"));

        horizontalLayout_3->addWidget(searchEdit);

        searchBtn = new QPushButton(groupBox);
        searchBtn->setObjectName(QString::fromUtf8("searchBtn"));

        horizontalLayout_3->addWidget(searchBtn);


        verticalLayout->addLayout(horizontalLayout_3);


        horizontalLayout_4->addLayout(verticalLayout);


        verticalLayout_3->addWidget(groupBox);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        groupBox_2 = new QGroupBox(FormData);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setMinimumSize(QSize(0, 70));
        groupBox_2->setMaximumSize(QSize(16777215, 70));
        horizontalLayout_6 = new QHBoxLayout(groupBox_2);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        openExcelBtn = new QPushButton(groupBox_2);
        openExcelBtn->setObjectName(QString::fromUtf8("openExcelBtn"));
        openExcelBtn->setMinimumSize(QSize(80, 35));
        openExcelBtn->setMaximumSize(QSize(80, 35));

        horizontalLayout_6->addWidget(openExcelBtn);

        refreshBtn = new QPushButton(groupBox_2);
        refreshBtn->setObjectName(QString::fromUtf8("refreshBtn"));
        refreshBtn->setMinimumSize(QSize(80, 35));
        refreshBtn->setMaximumSize(QSize(80, 35));

        horizontalLayout_6->addWidget(refreshBtn);

        addRecordBtn = new QPushButton(groupBox_2);
        addRecordBtn->setObjectName(QString::fromUtf8("addRecordBtn"));
        addRecordBtn->setMinimumSize(QSize(80, 35));
        addRecordBtn->setMaximumSize(QSize(80, 35));

        horizontalLayout_6->addWidget(addRecordBtn);

        viewRecordBtn = new QPushButton(groupBox_2);
        viewRecordBtn->setObjectName(QString::fromUtf8("viewRecordBtn"));
        viewRecordBtn->setMinimumSize(QSize(80, 35));
        viewRecordBtn->setMaximumSize(QSize(80, 35));

        horizontalLayout_6->addWidget(viewRecordBtn);

        exportRecordBtn = new QPushButton(groupBox_2);
        exportRecordBtn->setObjectName(QString::fromUtf8("exportRecordBtn"));
        exportRecordBtn->setMinimumSize(QSize(80, 35));
        exportRecordBtn->setMaximumSize(QSize(80, 35));

        horizontalLayout_6->addWidget(exportRecordBtn);

        exportTemplate = new QPushButton(groupBox_2);
        exportTemplate->setObjectName(QString::fromUtf8("exportTemplate"));
        exportTemplate->setMinimumSize(QSize(80, 35));
        exportTemplate->setMaximumSize(QSize(80, 35));

        horizontalLayout_6->addWidget(exportTemplate);

        deleteReocrdBtn = new QPushButton(groupBox_2);
        deleteReocrdBtn->setObjectName(QString::fromUtf8("deleteReocrdBtn"));
        deleteReocrdBtn->setMinimumSize(QSize(80, 35));
        deleteReocrdBtn->setMaximumSize(QSize(80, 35));

        horizontalLayout_6->addWidget(deleteReocrdBtn);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);


        horizontalLayout_5->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(FormData);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setMinimumSize(QSize(0, 70));
        groupBox_3->setMaximumSize(QSize(16777215, 70));
        horizontalLayout_7 = new QHBoxLayout(groupBox_3);
        horizontalLayout_7->setSpacing(0);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        calculateSettingBtn = new QPushButton(groupBox_3);
        calculateSettingBtn->setObjectName(QString::fromUtf8("calculateSettingBtn"));
        calculateSettingBtn->setMinimumSize(QSize(80, 35));
        calculateSettingBtn->setMaximumSize(QSize(80, 35));

        horizontalLayout_7->addWidget(calculateSettingBtn);

        calculateBtn = new QPushButton(groupBox_3);
        calculateBtn->setObjectName(QString::fromUtf8("calculateBtn"));
        calculateBtn->setMinimumSize(QSize(80, 35));
        calculateBtn->setMaximumSize(QSize(80, 35));

        horizontalLayout_7->addWidget(calculateBtn);

        statisticsBtn = new QPushButton(groupBox_3);
        statisticsBtn->setObjectName(QString::fromUtf8("statisticsBtn"));
        statisticsBtn->setMinimumSize(QSize(80, 35));
        statisticsBtn->setMaximumSize(QSize(80, 35));

        horizontalLayout_7->addWidget(statisticsBtn);

        clusterBtn = new QPushButton(groupBox_3);
        clusterBtn->setObjectName(QString::fromUtf8("clusterBtn"));
        clusterBtn->setMinimumSize(QSize(80, 35));
        clusterBtn->setMaximumSize(QSize(80, 35));

        horizontalLayout_7->addWidget(clusterBtn);

        asSaveBtn = new QPushButton(groupBox_3);
        asSaveBtn->setObjectName(QString::fromUtf8("asSaveBtn"));
        asSaveBtn->setMinimumSize(QSize(80, 35));
        asSaveBtn->setMaximumSize(QSize(80, 35));

        horizontalLayout_7->addWidget(asSaveBtn);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_4);


        horizontalLayout_5->addWidget(groupBox_3);


        verticalLayout_3->addLayout(horizontalLayout_5);

        splitter = new QSplitter(FormData);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        tabWidget = new QTabWidget(splitter);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setTabPosition(QTabWidget::South);
        splitter->addWidget(tabWidget);
        calculateWidget = new QWidget(splitter);
        calculateWidget->setObjectName(QString::fromUtf8("calculateWidget"));
        calculateWidget->setMaximumSize(QSize(450, 16777215));
        verticalLayout_2 = new QVBoxLayout(calculateWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox_4 = new QGroupBox(calculateWidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));

        verticalLayout_2->addWidget(groupBox_4);

        groupBox_5 = new QGroupBox(calculateWidget);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));

        verticalLayout_2->addWidget(groupBox_5);

        splitter->addWidget(calculateWidget);

        verticalLayout_3->addWidget(splitter);


        retranslateUi(FormData);

        tabWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(FormData);
    } // setupUi

    void retranslateUi(QWidget *FormData)
    {
        FormData->setWindowTitle(QCoreApplication::translate("FormData", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("FormData", "\346\220\234\347\264\242\351\200\211\351\241\271", nullptr));
        label_2->setText(QCoreApplication::translate("FormData", "\346\200\247\345\210\253", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("FormData", "\350\257\267\351\200\211\346\213\251", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("FormData", "\347\224\267", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("FormData", "\345\245\263", nullptr));

        label_4->setText(QCoreApplication::translate("FormData", "\350\277\220\345\212\250\347\255\211\347\272\247", nullptr));
        level->setItemText(0, QCoreApplication::translate("FormData", "\350\257\267\351\200\211\346\213\251", nullptr));

        label_3->setText(QCoreApplication::translate("FormData", "\344\275\223\351\207\215", nullptr));
        label_5->setText(QCoreApplication::translate("FormData", "\346\211\200\345\261\236\351\230\237\344\274\215", nullptr));
        team->setItemText(0, QCoreApplication::translate("FormData", "\350\257\267\351\200\211\346\213\251", nullptr));

        label_6->setText(QCoreApplication::translate("FormData", "\346\263\263\345\247\277", nullptr));
        stroke->setItemText(0, QCoreApplication::translate("FormData", "\350\257\267\351\200\211\346\213\251", nullptr));

        label_8->setText(QCoreApplication::translate("FormData", "\346\265\213\350\257\225\351\230\266\346\256\265", nullptr));
        stage->setItemText(0, QCoreApplication::translate("FormData", "\350\257\267\351\200\211\346\213\251", nullptr));

        label_9->setText(QCoreApplication::translate("FormData", "\346\265\213\350\257\225\350\267\235\347\246\273", nullptr));
        distance->setItemText(0, QCoreApplication::translate("FormData", "\350\257\267\351\200\211\346\213\251", nullptr));

        label_7->setText(QCoreApplication::translate("FormData", "\346\263\263\345\247\277\351\241\271", nullptr));
        strokeItem->setItemText(0, QCoreApplication::translate("FormData", "\350\257\267\351\200\211\346\213\251", nullptr));

        label_10->setText(QCoreApplication::translate("FormData", "\346\265\213\350\257\225\347\216\257\345\242\203", nullptr));
        env->setItemText(0, QCoreApplication::translate("FormData", "\350\257\267\351\200\211\346\213\251", nullptr));

        searchEdit->setPlaceholderText(QCoreApplication::translate("FormData", "\346\220\234\347\264\242\345\247\223\345\220\215...", nullptr));
        searchBtn->setText(QCoreApplication::translate("FormData", "\346\220\234\347\264\242", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("FormData", "\345\216\237\345\247\213\350\241\250\346\223\215\344\275\234", nullptr));
        openExcelBtn->setText(QCoreApplication::translate("FormData", "\346\211\223\345\274\200\346\226\207\344\273\266", nullptr));
        refreshBtn->setText(QCoreApplication::translate("FormData", "\345\210\267\346\226\260", nullptr));
        addRecordBtn->setText(QCoreApplication::translate("FormData", "\346\267\273\345\212\240", nullptr));
        viewRecordBtn->setText(QCoreApplication::translate("FormData", "\346\237\245\347\234\213", nullptr));
        exportRecordBtn->setText(QCoreApplication::translate("FormData", "\345\257\274\345\207\272\350\256\260\345\275\225", nullptr));
        exportTemplate->setText(QCoreApplication::translate("FormData", "\345\257\274\345\207\272\346\250\241\347\211\210", nullptr));
        deleteReocrdBtn->setText(QCoreApplication::translate("FormData", "\346\211\271\351\207\217\345\210\240\351\231\244", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("FormData", "\350\256\241\347\256\227\347\273\223\346\236\234\346\223\215\344\275\234", nullptr));
        calculateSettingBtn->setText(QCoreApplication::translate("FormData", "\350\256\276\347\275\256", nullptr));
        calculateBtn->setText(QCoreApplication::translate("FormData", "\350\256\241\347\256\227", nullptr));
        statisticsBtn->setText(QCoreApplication::translate("FormData", "\347\273\237\350\256\241", nullptr));
        clusterBtn->setText(QCoreApplication::translate("FormData", "\350\201\232\347\261\273", nullptr));
        asSaveBtn->setText(QCoreApplication::translate("FormData", "\345\217\246\345\255\230\344\270\272", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("FormData", "\350\201\232\347\261\273\350\256\276\347\275\256", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("FormData", "\350\257\204\345\210\206\350\256\276\347\275\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormData: public Ui_FormData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMDATA_H

#include "AddRecord.h"
#include "ui_AddRecord.h"

#include "TableView.h"
#include "../Common/CustomType.h"
#include "Components/ZpSqlQueryModel.h"
#include "../DB/DBPool.h"
#include "../DB/Record.h"
#include <QDebug>

static AddRecord* INSTANCE=nullptr;

AddRecord::AddRecord(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddRecord)
{
    ui->setupUi(this);
    ui->buttonBox->button(QDialogButtonBox::Ok)->setText("确定");
    ui->buttonBox->button(QDialogButtonBox::Cancel)->setText("取消");
    this->setWindowTitle(QString("添加记录"));

//    this->setDataWidgetMapper();

}

AddRecord::~AddRecord()
{
    delete ui;
}

AddRecord *AddRecord::getInstance()
{
    if (!INSTANCE) {
        INSTANCE = new AddRecord();
    }
    return INSTANCE;
}

void AddRecord::initUI()
{
    ui->warnLabel->clear();
    ui->name->clear();
    ui->maxPower1->clear();
    ui->maxPower2->clear();
    ui->maxPower3->clear();
    ui->maxPower1->setValue(0.00);
    ui->maxPower2->setValue(0.00);
    ui->maxPower3->setValue(0.00);
}

QString AddRecord::getGender(bool isManChecked, bool isWomanChecked)
{
    QString gender;
    if (isManChecked) {
        gender = "男";
    } else if(isWomanChecked){
        gender = "女";
    } else {
        gender = "请选择";
    }
    return gender;
}

void AddRecord::setTableRecord()
{
    TableView* tableView = TableView::getInstance();
    Record* record = new Record;

    QString name = ui->name->text();
    QString gender = getGender(ui->man->isChecked(),ui->woman->isChecked());
    QString weight = ui->weight->text();
    QString birthday = ui->birthday->text();
    QString level = ui->level->currentText();
    QString team = ui->team->currentText();
    QString stage = ui->stage->currentText();
    QString stroke = ui->stroke->currentText();
    QString strokeItem = ui->strokeItem->currentText();
    QString distance = ui->distance->currentText();
    QString maxPower1 = ui->maxPower1->text();
    QString maxPower2 = ui->maxPower2->text();
    QString maxPower3 = ui->maxPower3->text();
    QString env = ui->env->currentText();

    record->createRecord(name,  gender, weight, birthday,
                          level, team,  stage, distance,  env, stroke, strokeItem,
                          maxPower1, maxPower2, maxPower3);

    ZpSqlQueryModel* zpSqlQueryModel  = ZpSqlQueryModel::getInstance();
    zpSqlQueryModel->refresh();
    tableView->show();

    delete record;
}

void AddRecord::setDataWidgetMapper()
{
    TableView* tableView = TableView::getInstance();
   QDataWidgetMapper* m_dataMapper = new QDataWidgetMapper(this);

    //设置数据模型
    m_dataMapper->setModel(tableView->model());

    m_dataMapper->setSubmitPolicy(QDataWidgetMapper::AutoSubmit);

    //界面组件与tabModel的具体字段之间的联系
    m_dataMapper->addMapping(ui->weight,2);
//    m_dataMapper->addMapping(ui->lineEditName,1);
//    m_dataMapper->addMapping(ui->cbxSex,2);
//    m_dataMapper->addMapping(ui->spinBoxAge,3);
//    m_dataMapper->addMapping(ui->lineEditAddr,4);
//    m_dataMapper->addMapping(ui->doubleSpinBoxHeight,5);
}



#include "AddRecord.h"
#include "ui_AddRecord.h"

#include "TableView.h"
#include "../Common/CustomType.h"
#include "Components/ZpSqlQueryModel.h"
#include "../../Common/TableMess.h"
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

    //
    TableMess* tableMess= TableMess::getInstance();
    qDebug() << tableMess->getLevelItem();
    ui->level->addItems(tableMess->getLevelItem());
    ui->team->addItems(tableMess->getTeamItem());
    ui->stage->addItems(tableMess->getStageItem());
    ui->env->addItems(tableMess->getEnvItem());
    ui->distance->addItems(tableMess->getDistanceItem());
    ui->stroke->addItems(tableMess->getStrokeItem());
    connect(ui->stroke,SIGNAL(currentTextChanged(const QString)),this,SLOT(on_resetStrokeItem(const QString)));
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

bool AddRecord::checkText(QString name, QString gender, QString weight,QString stroke,QString storkeItem)
{
    if(name==""){
        this->setWarnText("姓名未填写");
        return false;
    }
    if(gender==""){
        this->setWarnText("性别未选择");
        return false;
    }
    if(weight=="0.00"){
        this->setWarnText("体重未设置");
        return false;
    }
    if(stroke=="请选择"){
        this->setWarnText("泳姿未选择");
        return false;
    }
    if(storkeItem=="请选择"){
        this->setWarnText("泳姿项未选择");
        return false;
    }
    return true;
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

void AddRecord::on_resetStrokeItem(QString stroke)
{
    ui->strokeItem->clear();

    if(stroke=="请选择"){
        ui->strokeItem->addItems({"请选择"});
    } else {
        TableMess* tableMess= TableMess::getInstance();
        ui->strokeItem->addItems(tableMess->getStrokeIItem()[stroke]);
    }
}

QMap<QString,QString>AddRecord::getTableRecord()
{
    QMap<QString,QString> record;
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

    record["name"] = name;
    record["weight"] = weight;
    record["gender"] = gender;
    record["stroke"] = stroke;
    record["strokeItem"] = strokeItem;
    return record;
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

QString AddRecord::getGender(bool isManChecked, bool isWomanChecked)
{
    QString gender;
    if (isManChecked) {
        gender = "男";
    } else if(isWomanChecked){
        gender = "女";
    } else {
        gender = "";
    }
    return gender;
}

void AddRecord::setWarnText(QString text)
{
    ui->warnLabel->clear();
    ui->warnLabel->setText(text);
}

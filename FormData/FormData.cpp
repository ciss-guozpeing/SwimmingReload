#include "FormData.h"
#include "ui_FormData.h"

#include "../../Common/TableMess.h"
#include "AddRecord.h"
#include "DeleteRecord.h"
#include "ViewRecord.h"
#include "TableView.h"
#include "ClusterPage.h"
#include "StatisticsPage.h"
#include "PersonalChart.h"
#include "Components/ZpSqlQueryModel.h"
#include <QDebug>

FormData::FormData(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormData)
{
    ui->setupUi(this);
    this->initUI();
}

FormData::~FormData()
{
    delete ui;
}

void FormData::initUI()
{
    //
    TableMess* tableMess= TableMess::getInstance();
    ui->level->addItems(tableMess->getLevelItem());
    ui->team->addItems(tableMess->getTeamItem());
    ui->stage->addItems(tableMess->getStageItem());
    ui->env->addItems(tableMess->getEnvItem());
    ui->distance->addItems(tableMess->getDistanceItem());
    ui->stroke->addItems(tableMess->getStrokeItem());
    connect(ui->stroke,SIGNAL(currentTextChanged(const QString)),this,SLOT(on_resetStrokeItem(const QString)));

    //
    ui->calculateWidget->hide();
    TableView* tableView = TableView::getInstance();
    ui->tabWidget->addTab(tableView,"原始数据表");
    PersonalChart* personalChart = new PersonalChart;
    ui->tabWidget->addTab(personalChart,"个人统计图");
    StatisticsPage* statisticsPage = new StatisticsPage;
    ui->tabWidget->addTab(statisticsPage,"统计表");
    ClusterPage* clusterPage = new ClusterPage;
    ui->tabWidget->addTab(clusterPage,"聚类表");
}


void FormData::on_addRecordBtn_clicked()
{
    qDebug() << QString("增加记录");
    AddRecord* addRecord = AddRecord::getInstance();
    int ret = addRecord->exec();
    QMap<QString,QString> record = addRecord->getTableRecord();
    bool isExists = addRecord->checkText(record["name"],record["gender"],record["weight"],
            record["stroke"],record["strokeItem"]);

    qDebug() <<"asdfasdfsdfadsf" <<record["stroke"]<<record["strokeItem"];
    if (ret==QDialog::Accepted)
    {
        if(isExists){
            addRecord->setTableRecord();
            addRecord->initUI();
        } else {
            this->on_addRecordBtn_clicked();
        }
    }
    if (ret==QDialog::Rejected){
        addRecord->initUI();
    }

}


void FormData::on_viewRecordBtn_clicked()
{
    qDebug() << QString("查看记录");
    ViewRecord* viewRecord = new ViewRecord;
    viewRecord->viewTableRecord();
    viewRecord->exec();
    delete viewRecord;
}


void FormData::on_openExcelBtn_clicked()
{
    qDebug() << QString("打开excel");
}


void FormData::on_refreshBtn_clicked()
{
    qDebug() << QString("刷新记录");
    ZpSqlQueryModel* zpSqlQueryModel = ZpSqlQueryModel::getInstance();
    zpSqlQueryModel->refresh();
}


void FormData::on_exportRecordBtn_clicked()
{
    qDebug() << QString("导出记录");
}


void FormData::on_exportTemplate_clicked()
{
    qDebug() << QString("导出模版");
}


void FormData::on_deleteReocrdBtn_clicked()
{
    qDebug() << QString("批量删除记录");
    DeleteRecord* deleteRecord = new DeleteRecord;
    deleteRecord->deleteTableRecord();
    delete deleteRecord;
}


void FormData::on_calculateSettingBtn_clicked()
{
    qDebug() << QString("计算设置");
    bool isHidden = ui->calculateWidget->isHidden();
    if(isHidden){
        ui->calculateWidget->show();
    }
    if(!isHidden){
        ui->calculateWidget->hide();
    }
}


void FormData::on_calculateBtn_clicked()
{
    qDebug() << QString("计算");
}


void FormData::on_statisticsBtn_clicked()
{
    qDebug() << QString("统计");
}


void FormData::on_clusterBtn_clicked()
{
    qDebug() << QString("聚类");
}


void FormData::on_asSaveBtn_clicked()
{
    qDebug() << QString("另存为");
}

void FormData::on_resetStrokeItem(QString stroke)
{
    ui->strokeItem->clear();

    if(stroke=="请选择"){
        ui->strokeItem->addItems({"请选择"});
    } else {
        TableMess* tableMess= TableMess::getInstance();
        ui->strokeItem->addItems(tableMess->getStrokeIItem()[stroke]);
    }
}

#include "FormData.h"
#include "ui_FormData.h"

#include "AddRecord.h"
#include "DeleteRecord.h"
#include "ViewRecord.h"
#include "TableView.h"
#include "ClusterPage.h"
#include "StatisticsPage.h"
#include "PersonalChart.h"
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
    qDebug() << ret;
    if (ret==QDialog::Accepted)
    {
        addRecord->setTableRecord();
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


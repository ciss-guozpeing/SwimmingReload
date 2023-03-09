#include "FormData.h"
#include "ui_FormData.h"

#include "../../Common/TableMess.h"
#include "../../Common/Tools.h"
#include "../Common/Algorithm/Score.h"
#include "AddRecord.h"
#include "DeleteRecord.h"
#include "ViewRecord.h"
#include "TableView.h"
#include "ClusterPage.h"
#include "StatisticsPage.h"
#include "PersonalChart.h"
#include "Components/ZpSqlQueryModel.h"
#include "../Excel/Save.h"
#include "../DB/DBPool.h"
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
    connect(ui->searchEdit,SIGNAL(textChanged(const QString)),this,SLOT(on_searchText(const QString)));

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
    Save* save = new Save;
    save->exprotTableRecord();
    delete save;
}


void FormData::on_exportTemplate_clicked()
{
    qDebug() << QString("导出模版");
    Save* save = new Save;
    save->exportTemplate();
    delete save;
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
    TableView* tableView = TableView::getInstance();
    QVector<QStringList> records = tableView->getCurTableData();
    tableView->createPersons(records);
    tableView->getCalculate();
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
    TableView* tableView = TableView::getInstance();
    Save* save = new Save;
    save->asSave(tableView->getCurTableData());
    delete save;
}

void FormData::on_searchBtn_clicked()
{
    Tools* tools = Tools::getInstance();
    TableView* tableView = TableView::getInstance();
    QStringList searchItem;
    if(ui->gender->currentText()!="请选择"){
        searchItem.append(QString("p.gender is '%1'").arg(ui->gender->currentText()));
    }
    if(ui->weight->text()!="0.00") {
        searchItem.append(QString("p.weight is '%1'").arg(ui->weight->text()));
    }
    if(ui->level->currentText()!="请选择"){
        searchItem.append(QString("r.level is '%1'").arg(ui->level->currentText()));
    }
    if(ui->team->currentText()!="请选择"){
        searchItem.append(QString("r.team is '%1'").arg(ui->team->currentText()));
    }
    if(ui->stroke->currentText()!="请选择"){
        searchItem.append(QString("r.stroke is '%1'").arg(ui->stroke->currentText()));
    }
    if(ui->strokeItem->currentText()!="请选择"){
        searchItem.append(QString("r.strokeItem is '%1'").arg(ui->strokeItem->currentText()));
    }
    if(ui->distance->currentText()!="请选择"){
        searchItem.append(QString("r.distance is '%1'").arg(ui->distance->currentText()));
    }
    if(ui->stage->currentText()!="请选择"){
        searchItem.append(QString("r.stage is '%1'").arg(ui->stage->currentText()));
    }
    if(ui->env->currentText()!="请选择"){
        searchItem.append(QString("r.env is '%1'").arg(ui->env->currentText()));
    }

    tools->getCurDate();

    QSqlQuery query = QSqlQuery(ConnectionPool::openConnection());
    QString sql = QString("select personId,r.id,name,gender,weight,birthday,level,team,stage,stroke,strokeItem,distance,"
                          "environment,maxPower1,maxPower2,maxPower3,maxPower,relPower,percentage,contributionRate,"
                          "score,clusterSerial from person as p inner join record as r on r.personID=p.id ");

    if(searchItem.size() > 0){
        sql.append(" and ");
    }
    for(int i=0; i<searchItem.size(); i++){
        sql.append(searchItem.at(i));
        if(i<(searchItem.size()-1))
            sql.append(" and ");//添加连接符，最后一个不添加
    }
    sql.append(QString(" and createAt is '%1'").arg(tools->getCurDate()));

    query.exec(sql);
    tableView->model()->setQuery(query);
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

void FormData::on_searchText(QString value)
{
    Tools* tools = Tools::getInstance();
    TableView* tableView = TableView::getInstance();
    QSqlQuery query = QSqlQuery(ConnectionPool::openConnection());
    query.prepare("select personId,r.id,name,gender,weight,birthday,level,team,stage,stroke,strokeItem,distance,"
                  "environment,maxPower1,maxPower2,maxPower3,maxPower,relPower,percentage,contributionRate,"
                  "score,clusterSerial from person as p inner join record as r  on p.name like ? and r.createAt=? and r.personID=p.id");
    query.addBindValue(QString("%1%").arg(value));
    query.addBindValue(QString("%2").arg(tools->getCurDate()));
    query.exec();
    tableView->model()->setQuery(query);

}

void FormData::on_scoreFormBtn_clicked()
{
    QString filePath = QFileDialog::getOpenFileName(0, "Open xlsx file", QString(), "*.xlsx");
    if(filePath!=""){
        Score* score = new Score;
        ui->scorePath->setText(filePath);
//        score->setScoreCommonStandard();


    } else {

    }
}


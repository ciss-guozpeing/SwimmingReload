#include "TableView.h"
#include "../Common/TableMess.h"
#include "../DB/DBPool.h"
#include "Components/GenderDelegate.h"
#include "Components/WeightDelegate.h"
#include "Components/BirthdayDelegate.h"
#include "Components/LevelDelegate.h"
#include "Components/MaxPowerDelegate.h"
#include "Components/TeamDelegate.h"
#include "Components/DistanceDelegate.h"
#include "Components/EnvDelegate.h"
#include "Components/StageDelegate.h"
#include "Components/TeamDelegate.h"
#include "Components/StrokeDelegate.h"


static TableView* INSTANCE = nullptr;

TableView::TableView() : QTableView()
{

    QDateTime curdate = QDateTime::currentDateTime();
    QString createAt = curdate.toString("yyyy/MM/dd");

    m_zpSqlQueryModel = ZpSqlQueryModel::getInstance();
    m_selectModel = new QItemSelectionModel(m_zpSqlQueryModel);

    m_zpSqlQueryModel->setQuery(QString("select  personId,r.id,name,gender,weight,birthday,level,team,stage,stroke,strokeItem,distance,"
                                "environment,maxPower1,maxPower2,maxPower3,maxPower,relPower,percentage,contributionRate,"
                                "score,clusterSerial from "
                                "record as r left join person as p where r.personId=p.id "
                                "and r.createAt='%1'").arg(createAt),ConnectionPool::openConnection());
    this->initUI();
    this->setModel(m_zpSqlQueryModel);
    this->setSelectionModel(m_selectModel);
    this->setSelectionBehavior(QAbstractItemView::SelectRows);
    this->setContextMenuPolicy(Qt::CustomContextMenu); // 选中菜单模式
    this->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
//    this->horizontalHeader()->setStretchLastSection(true);
}

void TableView::initUI()
{
    TableMess* tableMess = TableMess::getInstance();
    QStringList headers = tableMess->getTableHeader();

    for(int i=0; i<headers.size(); i++){
        m_zpSqlQueryModel->setHeaderData(i, Qt::Horizontal, headers.at(i));
    }
    // 设置代理
    this->setItemDelegate();


}

void TableView::setItemDelegate()
{
    GenderDelegate* genderDelegate = new GenderDelegate;
    this->setItemDelegateForColumn(3, genderDelegate);
    WeightDelegate* weightDelegate = new WeightDelegate;
    this->setItemDelegateForColumn(4, weightDelegate);
    BirthdayDelegate* birthdayDelegate = new BirthdayDelegate;
    this->setItemDelegateForColumn(5, birthdayDelegate);
    LevelDelegate* levelDelegate = new LevelDelegate;
    this->setItemDelegateForColumn(6, levelDelegate);
    TeamDelegate* teamDelegate = new TeamDelegate;
    this->setItemDelegateForColumn(7, teamDelegate);
    DistanceDelegate* distanceDelegate = new DistanceDelegate;
    this->setItemDelegateForColumn(11, distanceDelegate);
    EnvDelegate* envDelegate = new EnvDelegate;
    this->setItemDelegateForColumn(12, envDelegate);
    StageDelegate* stageDelegate = new StageDelegate;
    this->setItemDelegateForColumn(8, stageDelegate);
    StrokeDelegate* strokeDelegate = StrokeDelegate::getInstance();
    this->setItemDelegateForColumn(9, strokeDelegate);
    StrokeItemDelegate* strokeItemDelegate = new StrokeItemDelegate;
    this->setItemDelegateForColumn(10, strokeItemDelegate);
    MaxPowerDelegate* maxPower1Delegate = new MaxPowerDelegate;
    MaxPowerDelegate* maxPower2Delegate = new MaxPowerDelegate;
    MaxPowerDelegate* maxPower3Delegate = new MaxPowerDelegate;
    this->setItemDelegateForColumn(13, maxPower1Delegate);
    this->setItemDelegateForColumn(14, maxPower2Delegate);
    this->setItemDelegateForColumn(15, maxPower3Delegate);
}

TableView* TableView::getInstance()
{
    if(!INSTANCE){
        INSTANCE = new TableView;
    }
    return INSTANCE;
}

ZpSqlQueryModel* TableView::model()
{

    return m_zpSqlQueryModel;
}

QItemSelectionModel* TableView::selectModel()
{
    return m_selectModel;
}

QVector<personData> TableView::getPersons()
{
    return m_persons;
}

QVector<recordData> TableView::getRecords()
{
    return m_records;
}


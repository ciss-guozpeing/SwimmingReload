#include "TableView.h"
#include "../Common/TableMess.h"
#include "../DB/DBPool.h"
#include "Components/GenderDelegate.h"

static TableView* INSTANCE = nullptr;

TableView::TableView() : QTableView()
{

    QDateTime curdate = QDateTime::currentDateTime();
    QString createAt = curdate.toString("yyyy/MM/dd");

    m_zpSqlQueryModel = ZpSqlQueryModel::getInstance();
    m_selectModel = new QItemSelectionModel(m_zpSqlQueryModel);

    m_zpSqlQueryModel->setQuery(QString("select name,r.id,gender,weight,birthday,level,team,stage,stroke,strokeItem,distance,"
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


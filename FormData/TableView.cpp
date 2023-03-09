#include "TableView.h"
#include "../Common/TableMess.h"
#include "../Common/Algorithm/statistics.h"
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

//

ZpSqlQueryModel* TableView::model()
{

    return m_zpSqlQueryModel;
}

QItemSelectionModel* TableView::selectModel()
{
    return m_selectModel;
}

QVector<QStringList> TableView::getCurTableData()
{
    QVector<QStringList> tableData;

    int rowCount = this->model()->rowCount();
    int columnCount = this->model()->columnCount();

    QSqlQueryModel* model = this->model();

    for(int i=0; i<rowCount; i++) {

        QStringList rowData;
        for(int j=0; j<columnCount; j++) {
            QString cellValue = model->data(model->index(i,j)).toString();
            rowData.push_back(cellValue);
        }

        tableData.push_back(rowData);
    }

    return tableData;
}

QMap<QString,personData> TableView::getPersons()
{
    return m_persons;
}

QVector<recordData> TableView::getRecords()
{
    return m_records;
}

bool TableView::isExistsPerson(QString personMess)
{
    QString split = "-";
    int personCount = m_persons.count(personMess);
    if(personCount==0){
        return false;
    }
    return true;
}

void TableView::createPersons(QVector<QStringList> records)
{
    m_persons.clear();

    for(int i=0; i<records.size(); i++){
        QString split = "-";
        QString name = records.at(i).at(2);
        QString gender = records.at(i).at(3);
        QString birthday = records.at(i).at(5);
        QString weight = records.at(i).at(4);
        QString personMess = name + split + gender+ split + birthday+ split + weight;
        bool isExists = this->isExistsPerson(personMess);
        qDebug() << isExists;
        personData personData;
        if(!isExists){
            personData.name = name;
            personData.gender = gender;
            personData.birthday = birthday;
            personData.weight = weight;
            personData.level = records.at(i).at(6);
            personData.team = records.at(i).at(7);
            personData.stage = records.at(i).at(8);
            personData.distance = records.at(i).at(11);
            personData.env = records.at(i).at(12);
        }
        if(isExists){
            personData = m_persons[personMess];
        }
        personData.strokeItemToValue[records.at(i).at(9)][records.at(i).at(10)].insert(0,records.at(i).at(13).toFloat());
        personData.strokeItemToValue[records.at(i).at(9)][records.at(i).at(10)].insert(1,records.at(i).at(14).toFloat());
        personData.strokeItemToValue[records.at(i).at(9)][records.at(i).at(10)].insert(2,records.at(i).at(15).toFloat());
        m_persons[personMess] = personData;
    }

}
void TableView::createRecord(QVector<QStringList> records)
{
    recordData recordData;



    m_records.push_back(recordData);
}

void TableView::getCalculate()
{
    Statistics* statistics = Statistics::getInstance();
    QVector<QStringList> records = this->getCurTableData();
    for(int i=0; i<records.size();i++){

            QString split = "-";
            QString name = records.at(i).at(2);
            QString gender = records.at(i).at(3);
            QString birthday = records.at(i).at(5);
            QString weight = records.at(i).at(4);
            QString personMess = name + split + gender+ split + birthday+ split + weight;
            QString stroke = records.at(i).at(9);
            m_persons[personMess].strokeItemToValue[records.at(i).at(9)][records.at(i).at(10)].at(0);
            QVector<double> vec = {records.at(i).at(13).toDouble(),records.at(i).at(14).toDouble(),records.at(i).at(15).toDouble()};
            // 最大力
            QString maxPower = statistics->getMaxPower(vec);
            model()->setData(model()->index(i,16), maxPower);
            // 相对力
            QString relPower = statistics->getRelativePower(maxPower, weight);
            model()->setData(model()->index(i,17), relPower);
            // 百分比%
            QString coordinateValue = statistics->getMaxPower(
                        {m_persons[personMess].strokeItemToValue[stroke][percentageMap[stroke]].value(0),
                         m_persons[personMess].strokeItemToValue[stroke][percentageMap[stroke]].value(1),
                         m_persons[personMess].strokeItemToValue[stroke][percentageMap[stroke]].value(2)});
            QString percentage = statistics->getPercentage(maxPower, coordinateValue);
            model()->setData(model()->index(i,18), percentage);
            // 贡献率%
            QString leg = contributionRateMap[stroke].split("-").at(0);
            QString hand = contributionRateMap[stroke].split("-").at(1);
            QString legValue = statistics->getMaxPower(
                        {m_persons[personMess].strokeItemToValue[stroke][leg].value(0),
                         m_persons[personMess].strokeItemToValue[stroke][leg].value(1),
                         m_persons[personMess].strokeItemToValue[stroke][leg].value(2)});
            QString handValue = statistics->getMaxPower(
                            {m_persons[personMess].strokeItemToValue[stroke][hand].value(0),
                             m_persons[personMess].strokeItemToValue[stroke][hand].value(1),
                             m_persons[personMess].strokeItemToValue[stroke][hand].value(2)});

            QString contributeRate = statistics->getContribute(maxPower, legValue.toDouble() + handValue.toDouble());
            model()->setData(model()->index(i,19), contributeRate);
    }
}

int TableView::getPersonCount()
{
    return m_persons.count();
}

int TableView::getManCount()
{
    int personCount = m_persons.values().count();
    int num=0;
    for(int i=0;i<personCount;i++){
        if(m_persons.values().at(i).gender == "男"){
            num+=1;
        }
    }
    return num;
}

int TableView::getWomanCount()
{
    int personCount = m_persons.values().count();
    int num=0;
    for(int i=0;i<personCount;i++){
        if(m_persons.values().at(i).gender == "女"){
            num+=1;
        }
    }
    return num;
}

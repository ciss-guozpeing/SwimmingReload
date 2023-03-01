#include "ZpSqlQueryModel.h"
#include "../../Common/TableMess.h"
#include "../../DB/DBPool.h"

static ZpSqlQueryModel* INSTANCE=nullptr;

ZpSqlQueryModel::ZpSqlQueryModel(QObject *parent):QSqlQueryModel(parent)
{
}

ZpSqlQueryModel* ZpSqlQueryModel::getInstance()
{
    if(INSTANCE==nullptr)
    {
        INSTANCE = new ZpSqlQueryModel;
    }
    return INSTANCE;
}

//添加数据
bool ZpSqlQueryModel::setData(const QModelIndex &index, const QVariant &value, int role)
{

    Q_UNUSED(role)

    QModelIndex recordKeyIndex = QSqlQueryModel::index(index.row(), 1);
    QModelIndex personKeyIndex = QSqlQueryModel::index(index.row(), 0);
    //获取ID号
    int recordId = this->data(recordKeyIndex).toInt();
    int personId = this->data(personKeyIndex).toInt();

    this->clear();

    bool ret = false;

    qDebug() << index.column();
    if(index.column() == 2){
        ret = setName(personId, value.toString());
    }
    if(index.column() == 3){
        ret = setGender(personId, value.toString());
    }
    if(index.column() == 4){
        ret = setWeight(personId, value.toString());
    }
    if(index.column() == 5){
        ret = setBirthday(personId, value.toString());
    }
    if(index.column() == 6){
        ret = setLevel(recordId, value.toString());
    }
    if(index.column() == 7){
        ret = setTeam(recordId, value.toString());
    }
    if(index.column() == 8){
        ret = setStage(recordId, value.toString());
    }
    if(index.column() == 9){
        ret = setStroke(recordId, value.toString());
    }
    if(index.column() == 10){
        ret = setStrokeItem(recordId, value.toString());
    }
    if(index.column() == 11){
        ret = setDistance(recordId, value.toString());
    }
    if(index.column() == 12){
        ret = setEnv(recordId, value.toString());
    }
    if(index.column() == 13){
        ret = setMaxPower1(recordId, value.toString());
    }
    if(index.column() == 14){
        ret = setMaxPower2(recordId, value.toString());
    }
    if(index.column() == 15){
        ret = setMaxPower3(recordId, value.toString());
    }
    refresh();

    return ret;
}

//返回表格是否可以被更改的标志
Qt::ItemFlags ZpSqlQueryModel::flags(const QModelIndex &index) const
{
    Qt::ItemFlags flags = QSqlQueryModel::flags(index);

    for(int i=0; i<=15; i++){
        if(i!=1 && i!=0){
            if (index.column() == i){
                flags |= Qt::ItemIsEditable;
            }
        }
    }
    return flags;
}

//更改数据显示样式
QVariant ZpSqlQueryModel::data(const QModelIndex &index, int role) const
{
    QVariant value = QSqlQueryModel::data(index, role);

    //第一个字段的字体颜色为红色
    if (role == Qt::TextColorRole && index.column() == 0)
    {
        return QVariant::fromValue(QColor(Qt::red));
    }
    //单元格内容居中
    if(role == Qt::TextAlignmentRole)
    {
        value = Qt::AlignCenter;
    }

    return value;
}

//更新显示
void ZpSqlQueryModel::refresh()
{
    QSqlDatabase db = ConnectionPool::openConnection();
    QDateTime curdate = QDateTime::currentDateTime();
    QString createAt = curdate.toString("yyyy/MM/dd");
    TableMess* tableMess = TableMess::getInstance();
    QStringList headers = tableMess->getTableHeader();
    this->setQuery(QString("select personId,r.id,name,gender,weight,birthday,level,team,stage,stroke,strokeItem,distance,"
                           "environment,maxPower1,maxPower2,maxPower3,maxPower,relPower,percentage,contributionRate,"
                           "score,clusterSerial from "
                           "record as r left join person as p where r.personId=p.id "
                           "and r.createAt='%1'").arg(createAt),db);
    for(int i=0; i<headers.size(); i++){
        this->setHeaderData(i, Qt::Horizontal, headers.at(i));
    }
//    ConnectionPool::closeConnection(db);
}

bool ZpSqlQueryModel::setName(int id, QString Value)
{
    qDebug() << "设置姓名" << id << Value;
    QSqlQuery query = QSqlQuery(ConnectionPool::openConnection());
    QString sql = QString("update person set name = '%1' where id = '%2'").arg(Value,QString::number(id));
    if(query.prepare(sql)){
        qDebug() << "11111";
    } else {
        qDebug() << "12221";
    }
    return query.exec();
}

bool ZpSqlQueryModel::setGender(int id, QString value)
{
    qDebug() << "设置性别";
    QSqlQuery query = QSqlQuery(ConnectionPool::openConnection());
    QString sql = QString("update person set gender = '%1' where id = '%2'").arg(value,QString::number(id));
    if(query.prepare(sql)){
        qDebug() << "11111";
    } else {
        qDebug() << "12221";
    }
    return query.exec();
}

bool ZpSqlQueryModel::setWeight(int id, QString value)
{
    qDebug() << "设置体重";
    QSqlQuery query = QSqlQuery(ConnectionPool::openConnection());
    QString sql = QString("update person set weight = '%1' where id = '%2'").arg(value,QString::number(id));
    if(query.prepare(sql)){
        qDebug() << "11111";
    } else {
        qDebug() << "12221";
    }
    return query.exec();
}

bool ZpSqlQueryModel::setBirthday(int id, QString value)
{
    qDebug() << "设置出生日期";
    QSqlQuery query = QSqlQuery(ConnectionPool::openConnection());
    QString sql = QString("update person set birthday = '%1' where id = '%2'").arg(value,QString::number(id));
    if(query.prepare(sql)){
        qDebug() << "11111";
    } else {
        qDebug() << "12221";
    }
    return query.exec();
}

bool ZpSqlQueryModel::setLevel(int id, QString value)
{
    qDebug() << "设置等级";
    QSqlQuery query = QSqlQuery(ConnectionPool::openConnection());
    QString sql = QString("update record set level = '%1' where id = '%2'").arg(value,QString::number(id));
    if(query.prepare(sql)){
        qDebug() << "11111";
    } else {
        qDebug() << "12221";
    }
    return query.exec();
}

bool ZpSqlQueryModel::setTeam(int id, QString value)
{
    qDebug() << "设置队伍";
    QSqlQuery query = QSqlQuery(ConnectionPool::openConnection());
    QString sql = QString("update record set team = '%1' where id = '%2'").arg(value,QString::number(id));
    if(query.prepare(sql)){
        qDebug() << "11111";
    } else {
        qDebug() << "12221";
    }
    return query.exec();
}

bool ZpSqlQueryModel::setStage(int id, QString value)
{
    qDebug() << "设置阶段";
    QSqlQuery query = QSqlQuery(ConnectionPool::openConnection());
    QString sql = QString("update record set stage = '%1' where id = '%2'").arg(value,QString::number(id));
    if(query.prepare(sql)){
        qDebug() << "11111";
    } else {
        qDebug() << "12221";
    }
    return query.exec();
}

bool ZpSqlQueryModel::setEnv(int id, QString value)
{
    qDebug() << "设置环境";
    QSqlQuery query = QSqlQuery(ConnectionPool::openConnection());
    QString sql = QString("update record set environment = '%1' where id = '%2'").arg(value,QString::number(id));
    if(query.prepare(sql)){
        qDebug() << "11111";
    } else {
        qDebug() << "12221";
    }
    return query.exec();
}

bool ZpSqlQueryModel::setDistance(int id, QString value)
{
    qDebug() << "设置距离";
    QSqlQuery query = QSqlQuery(ConnectionPool::openConnection());
    QString sql = QString("update record set distance = '%1' where id = '%2'").arg(value,QString::number(id));
    if(query.prepare(sql)){
        qDebug() << "11111";
    } else {
        qDebug() << "12221";
    }
    return query.exec();
}

bool ZpSqlQueryModel::setStroke(int id, QString value)
{
    qDebug() << "设置泳姿";
    QSqlQuery query = QSqlQuery(ConnectionPool::openConnection());
    QString sql = QString("update record set stroke = '%1' where id = '%2'").arg(value,QString::number(id));
    if(query.prepare(sql)){
        qDebug() << "11111";
    } else {
        qDebug() << "12221";
    }
    return query.exec();
}

bool ZpSqlQueryModel::setStrokeItem(int id, QString value)
{
    qDebug() << "设置泳姿项";
    QSqlQuery query = QSqlQuery(ConnectionPool::openConnection());
    QString sql = QString("update record set strokeItem = '%1' where id = '%2'").arg(value,QString::number(id));
    if(query.prepare(sql)){
        qDebug() << "11111";
    } else {
        qDebug() << "12221";
    }
    return query.exec();
}

bool ZpSqlQueryModel::setMaxPower1(int id, QString value)
{
    qDebug() << "设置最大力1";
    QSqlQuery query = QSqlQuery(ConnectionPool::openConnection());
    QString sql = QString("update record set maxPower1 = '%1' where id = '%2'").arg(value,QString::number(id));
    if(query.prepare(sql)){
        qDebug() << "11111";
    } else {
        qDebug() << "12221";
    }
    return query.exec();
}


bool ZpSqlQueryModel::setMaxPower2(int id, QString value)
{
    qDebug() << "设置最大力2";
    QSqlQuery query = QSqlQuery(ConnectionPool::openConnection());
    QString sql = QString("update record set maxPower2 = '%1' where id = '%2'").arg(value,QString::number(id));
    if(query.prepare(sql)){
        qDebug() << "11111";
    } else {
        qDebug() << "12221";
    }
    return query.exec();
}

bool ZpSqlQueryModel::setMaxPower3(int id, QString value)
{
    qDebug() << "设置最大力3";
    QSqlQuery query = QSqlQuery(ConnectionPool::openConnection());
    QString sql = QString("update record set maxPower3 = '%1' where id = '%2'").arg(value,QString::number(id));
    if(query.prepare(sql)){
        qDebug() << "11111";
    } else {
        qDebug() << "12221";
    }
    return query.exec();
}

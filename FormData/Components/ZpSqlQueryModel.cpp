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

    QModelIndex primaryKeyIndex = QSqlQueryModel::index(index.row(), 1);
    //获取ID号
    int id = this->data(primaryKeyIndex).toInt();///

    this->clear();

    bool ret = false;
    //设置第二个字段可以更改
    if (index.column() == 0)
    {
        ret = setName(id, value.toString());
    }

    refresh();

    return ret;
}

//返回表格是否可以被更改的标志
Qt::ItemFlags ZpSqlQueryModel::flags(const QModelIndex &index) const
{
    Qt::ItemFlags flags = QSqlQueryModel::flags(index);

    for(int i=0; i<=14; i++){
        if(i!=1){
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
    this->setQuery(QString("select name,r.id,gender,weight,birthday,level,team,stage,stroke,strokeItem,distance,"
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
    qDebug() << "设置姓名";
    QSqlQuery query = QSqlQuery(ConnectionPool::openConnection());
    QString sql = QString("update person set name = '%1' where id = '%2'").arg(Value,QString::number(id));
    if(query.prepare(sql)){
        qDebug() << "11111";
    } else {
        qDebug() << "12221";
    }
    return query.exec();
}

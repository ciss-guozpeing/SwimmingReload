#include "Record.h"
#include "Person.h"
#include "FormData/Components/ZpSqlQueryModel.h"

Record::Record(QObject *parent)
    : QObject{parent}
{

}

bool Record::isExistsRecord(QString name, QString gender,QString weight,QString birthday,QString stroke,QString strokeItem,QString createAt)
{
    QSqlQuery person_query = QSqlQuery(ConnectionPool::openConnection());
    QString sql = QString("select id from person where name='%1' and gender='%2' and birthday='%3'").arg(name,gender,birthday);
    person_query.exec(sql);
    person_query.next();
    QString personID = person_query.value(0).toString();

    QSqlQuery record_query = QSqlQuery(ConnectionPool::openConnection());
    QString record_sql = QString("select count(id) from record where personId='%1' and stroke='%2' and strokeItem='%3'"
                                 " and createAt='%4'").arg(personID,stroke,strokeItem,createAt);
    record_query.exec(record_sql);
    record_query.next();
    if(record_query.value(0).toInt()){
        return true;
    } else {
        return false;
    }
}

void Record::createRecord(QString name, QString gender,QString weight,QString birthday,
                          QString level,QString team, QString stage,QString distance, QString env,QString stroke,QString strokeItem,
                          QString maxPower1,QString maxPower2,QString maxPower3)
{
    QSqlDatabase db=  ConnectionPool::openConnection();
    QDateTime curdate = QDateTime::currentDateTime();
    QString createAt = curdate.toString("yyyy/MM/dd");
    Person* person = new Person;
    person->createPerson(name,gender,weight,birthday);
    QSqlQuery person_query = QSqlQuery(db);
    QString sql = QString("select id from person where name='%1' and gender='%2' and birthday='%3'").arg(name,gender,birthday);
    person_query.exec(sql);
    person_query.next();
    QString personID = person_query.value(0).toString();
    delete person;

    bool isExists = this->isExistsRecord(name,gender,weight,birthday,stroke,strokeItem,createAt);
    if(!isExists){

        QString sql = QString("INSERT into record (level,team,stage,stroke,strokeItem,distance,maxPower1,maxPower2,maxPower3,"
                              "environment, createAt, personId) "
                              "VALUES('%1','%2','%3','%4','%5','%6','%7','%8','%9','%10','%11','%12')").arg(
                    level,team,stage,stroke,strokeItem,distance,maxPower1,maxPower2,maxPower3,env,createAt,personID);
        qDebug() << sql;
        QSqlQuery record_query = QSqlQuery(db);
        record_query.prepare(sql);
        if(!record_query.exec()){
            qDebug() << record_query.lastError().text();
        } else{
            qDebug() << record_query.lastError().text();
        }
    }
    ConnectionPool::closeConnection(db);

}

void Record::deleteRecord(QString id)
{
    ZpSqlQueryModel* zpSqlQueryModel = ZpSqlQueryModel::getInstance();
    QSqlQuery query = QSqlQuery(ConnectionPool::openConnection());
    QString sql = QString("delete from record where id='%1'").arg(id);
    qDebug() << sql;
    query.exec(sql);
    zpSqlQueryModel->refresh();
}

#include "Person.h"
#include "DBPool.h"

Person::Person(QObject *parent)
    : QObject{parent}
{

}
dbReturnData Person::isExistsPerson(QString name, QString gender,QString birthday)
{
    dbReturnData data;
    QSqlQuery select_query = QSqlQuery(ConnectionPool::openConnection());
    QString select_sql = QString("SELECT COUNT(name), id, name,gender,"
                                 "weight,birthday from person where name='%1' AND birthday='%2' AND gender='%3'").arg(name,birthday,gender);
    select_query.prepare(select_sql);
    if(!select_query.exec()){
        QString text = select_query.lastError().text();
    } else {
        select_query.next();
        if(select_query.value(0).toInt()){
            data.code = 200;
            data.id = select_query.value(1).toInt();
            data.data["name"] = select_query.value(2).toString();
            data.data["gender"] = select_query.value(3).toString();
            data.data["weight"] = select_query.value(4).toString();
            data.data["birthday"] = select_query.value(5).toString();
            return data;
        } else{
            data.code = 400;
            return data;
        }
    }
}


void Person::createPerson(QString name, QString gender,QString weight,QString birthday)
{
    dbReturnData personData = this->isExistsPerson(name,gender,birthday);
    if(personData.code==200){
        QString newWeight = weight;
        QString oldWeight = personData.data["weight"];
        if(oldWeight!=newWeight){
            QSqlQuery query = QSqlQuery(ConnectionPool::openConnection());
            QString sql = QString("update person set weight='%1' where id='%2'").arg(newWeight,QString::number(personData.id));
            query.prepare(sql);
            query.exec();
        }
        return ;
    }
    if(personData.code==400){
        QSqlQuery query = QSqlQuery(ConnectionPool::openConnection());
        QString sql = QString("insert into person (name,gender,weight,birthday) values('%1','%2','%3','%4')").arg(name,gender,weight,birthday);
        query.prepare(sql);
        query.exec();
    }
}

QMap<QString,QString> Person::getPerson(QString name, QString gender)
{
    QMap<QString,QString> person;
    QSqlQuery query = QSqlQuery(ConnectionPool::openConnection());
    QString sql = QString("select name, gender, weight, birthday from person where name='%1' and gender='%2'").arg(name,gender);
    qDebug() << sql;
    query.prepare(sql);
    query.exec();
    query.next();
    if(query.first()){
        person["name"] = query.value(0).toString();
        person["gender"] = query.value(1).toString();
        person["weight"] = query.value(2).toString();
        person["birthday"] = query.value(3).toString();
    }
    return person;
}

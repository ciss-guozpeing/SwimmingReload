#include "Person.h"
#include "DBPool.h"
Person::Person(QObject *parent)
    : QObject{parent}
{

}
bool Person::isExistsPerson(QString name, QString gender,QString birthday)
{
    QSqlQuery select_query = QSqlQuery(ConnectionPool::openConnection());
    QString select_sql = QString("SELECT COUNT(name) from person where name='%1' AND birthday='%2' AND gender='%3'").arg(name,birthday,gender);
    select_query.prepare(select_sql);
    if(!select_query.exec()){
        QString text = select_query.lastError().text();
    } else {
        select_query.next();
        if(select_query.value(0).toInt()){
            return true;
        } else{
            return false;
        }
    }
}


void Person::createPerson(QString name, QString gender,QString weight,QString birthday)
{
    bool isExists = this->isExistsPerson(name,gender,birthday);
    if(isExists){
        return ;
    }
    if(!isExists){
        QSqlQuery query = QSqlQuery(ConnectionPool::openConnection());
        QString sql = QString("insert into person (name,gender,weight,birthday) values('%1','%2','%3','%4')").arg(name,gender,weight,birthday);
        query.prepare(sql);
        query.exec();
    }
}

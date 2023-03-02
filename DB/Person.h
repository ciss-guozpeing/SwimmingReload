#ifndef PERSON_H
#define PERSON_H

#include <QObject>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>

#include "../Common/CustomType.h"

class Person : public QObject
{
    Q_OBJECT
    dbReturnData isExistsPerson(QString name, QString gender,QString birthday);
public:
    explicit Person(QObject *parent = nullptr);

    void createPerson(QString name, QString gender,QString weight,QString birthday);
    QMap<QString,QString> getPerson(QString name, QString gender);
signals:

};

#endif // PERSON_H

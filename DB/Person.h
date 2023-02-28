#ifndef PERSON_H
#define PERSON_H

#include <QObject>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>

class Person : public QObject
{
    Q_OBJECT
    bool isExistsPerson(QString name, QString gender,QString birthday);
public:
    explicit Person(QObject *parent = nullptr);

    void createPerson(QString name, QString gender,QString weight,QString birthday);

signals:

};

#endif // PERSON_H

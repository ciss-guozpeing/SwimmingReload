#ifndef RECORD_H
#define RECORD_H

#include <QObject>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>

#include "DBPool.h"

class Record : public QObject
{
    Q_OBJECT
    bool isExistsRecord(QString name, QString gender,QString weight,QString birthday,QString stroke,QString strokeItem,QString createAt);
public:
    explicit Record(QObject *parent = nullptr);

    void createRecord(QString name, QString gender,QString weight,QString birthday,
                      QString level,QString team, QString stage,QString distance, QString env,QString stroke,QString strokeItem,
                      QString maxPower1,QString maxPower2,QString maxPower3);

    void deleteRecord(QString id);

    void selectRecord(QString id);

    void getRecords(QString name, QString createAt);


signals:

};

#endif // RECORD_H

#ifndef CUSTOMTYPE_H
#define CUSTOMTYPE_H

#include <QObject>
#include <QString>
#include <QMap>

typedef struct personData{
    QString name;
    QString gender;
    QString birthday;
    QString weight;
    QString level;
    QString stage;
    QString team;
    QMap<QString,QMap<QString,QVector<float>>> strokeItemToValue;
    QString env;
} personData;

typedef struct recordData{
    QString name;
    QString gender;
    QString birthday;
    QString weight;
    QString level;
    QString stage;
    QString team;
    QString env;
    QString createAt;

} recordData;

typedef struct dbReturnData{
    int id;
    int code;
    QMap<QString,QString> data;
    QString mess;
} dbReturnData;

#endif // CUSTOMTYPE_H

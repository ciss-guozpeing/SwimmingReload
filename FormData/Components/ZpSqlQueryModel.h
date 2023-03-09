#ifndef ZPSQLQUERYMODEL_H
#define ZPSQLQUERYMODEL_H

#include <QObject>
#include <QSqlQueryModel>
#include <QSqlQuery>

class ZpSqlQueryModel: public QSqlQueryModel
{
    Q_OBJECT

    bool setName(int id, QString value);
    bool setGender(int id, QString value);
    bool setBirthday(int id, QString value);
    bool setWeight(int id, QString value);
    bool setLevel(int id, QString value);
    bool setTeam(int id, QString value);
    bool setStage(int id, QString value);
    bool setEnv(int id, QString value);
    bool setDistance(int id, QString value);
    bool setStroke(int id, QString value);
    bool setStrokeItem(int id, QString value);
    bool setMaxPower1(int id, QString value);
    bool setMaxPower2(int id, QString value);
    bool setMaxPower3(int id, QString value);
    bool setMaxPower(int id, QString value);
    bool setRelPower(int id, QString value);
    bool setPercentage(int id, QString value);
    bool setContributionRate(int id, QString value);
    bool setClusterSerial(int id, QString value);
    bool setScore(int id, QString value);

public:
    ZpSqlQueryModel(QObject *parent = 0);
    static ZpSqlQueryModel* getInstance();

    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const;
    bool setData(const QModelIndex &index, const QVariant &value, int role = Qt::EditRole);
    Qt::ItemFlags flags(const QModelIndex &index) const;

    void refresh();
//    void setLimitCount(int count);

};

#endif // ZPSQLQUERYMODEL_H

#ifndef ZPSQLQUERYMODEL_H
#define ZPSQLQUERYMODEL_H

#include <QObject>
#include <QSqlQueryModel>
#include <QSqlQuery>

class ZpSqlQueryModel: public QSqlQueryModel
{
    Q_OBJECT

    bool setName(int id, QString Value);
    void setGender();
    void setBirthday();
    void setWeight();
    void setLevel();

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

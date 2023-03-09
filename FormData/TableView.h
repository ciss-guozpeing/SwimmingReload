#ifndef TABLEVIEW_H
#define TABLEVIEW_H

#include <QObject>
#include <QRegExp>
#include <QStandardItem>
#include <QStandardItemModel>
#include <QItemSelectionModel>
#include <QSortFilterProxyModel>
#include <QTableView>
#include <QModelIndex>
#include <QMap>
#include <QString>
#include <QLabel>
#include <sstream>
#include <QHeaderView>
#include <QSqlTableModel>
#include <QSqlRelationalTableModel>
#include <QSqlRelationalDelegate>
#include <QDataWidgetMapper>
#include <QDateTime>
#include <QtConcurrent>

#include "../Common/CustomType.h"
#include "Components/ZpSqlQueryModel.h"




class TableView : public QTableView
{
    Q_OBJECT
    QMap<QString,QString> percentageMap{{"自由泳","自配合"},{"仰泳","仰配合"},{"蛙泳","蛙配合"},{"蝶泳","蝶配合"}};
    QMap<QString,QString> contributionRateMap{{"自由泳","自腿-自手"},{"仰泳","仰腿-仰手"},{"蛙泳","蛙腿-蛙手"},{"蝶泳","蝶腿-蝶手"}};

    QItemSelectionModel* m_selectModel;
    ZpSqlQueryModel* m_zpSqlQueryModel;
    QMap<QString,personData> m_persons;
    QVector<recordData> m_records;

    bool isExistsPerson(QString name,QString gender, QString birthday,QString weight);
    bool isExistsRecord(QString personMess,QString stroke,QString strokeItem,QString createAt);

    personData getPersonRecord(QString name,QString gender,QString birthday,QString weight);

    void deletePersonData(QString name, QString gender, QString birthday, QString weight);
    void updatePersonData();

    void updateRecordData();

    void setItemDelegate();
    void initUI();


public:
    TableView();
    static TableView* getInstance();

    ZpSqlQueryModel* model();
    QItemSelectionModel* selectModel();

    QVector<QStringList> getCurTableData();

    QMap<QString,personData> getPersons();
    QVector<recordData> getRecords();

    bool isExistsPerson(QString personMess);

    void createPersons(QVector<QStringList> records);
    void createRecord(QVector<QStringList> records);


    void getCalculate();

    int getPersonCount();
    int getWomanCount();
    int getManCount();


};

#endif // TABLEVIEW_H

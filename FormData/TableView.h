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

#include "../Common/CustomType.h"
#include "Components/ZpSqlQueryModel.h"

class TableView : public QTableView
{
    Q_OBJECT
    QItemSelectionModel* m_selectModel;
    ZpSqlQueryModel* m_zpSqlQueryModel;
    QVector<personData> m_persons;
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

    QVector<personData> getPersons();
    QVector<recordData> getRecords();


};

#endif // TABLEVIEW_H

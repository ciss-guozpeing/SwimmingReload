#ifndef DB_H
#define DB_H

#include <QWidget>
#include <QCoreApplication>
#include <QFileInfo>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDir>

namespace Ui {
class DB;
}

class DB : public QWidget
{
    Q_OBJECT

    QSqlDatabase m_db;
    QString fullFileName=QCoreApplication::applicationDirPath() + "/../../../DB/" + "Swimming.db";
    QString fullFileDir = QCoreApplication::applicationDirPath() + "/../../../DB/";


public:
    explicit DB(QWidget *parent = nullptr);
    ~DB();
    static DB* getInstance();

    bool isExistsDBFile();
    void createDBFile();
    void initDBTable();



private:
    Ui::DB *ui;
};

#endif // DB_H

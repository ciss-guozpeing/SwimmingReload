#include "DB.h"
#include "ui_DB.h"

#include <QDebug>
static DB* INSTANCE =nullptr;

DB::DB(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DB)
{
    ui->setupUi(this);
}

DB::~DB()
{
    delete ui;
}

DB* DB::getInstance()
{
    if(!INSTANCE){
        INSTANCE = new DB;
    }
    return INSTANCE;
}

bool DB::isExistsDBFile()
{
    QFileInfo fileInfo(fullFileName);
    if(fileInfo.isFile())
    {
        return true;
    }
    return false;
}

void DB::createDBFile()
{
    QFileInfo fi(fullFileDir);
    bool isExists = fi.exists();
    if(!isExists){
        QDir dir;
        dir.mkdir(fullFileDir);
    }
    m_db = QSqlDatabase::addDatabase("QSQLITE");
    m_db.setDatabaseName(fullFileName);
}

void DB::initDBTable()
{
    // person table
    m_db.open();
    QSqlQuery person_query(m_db);
    QString person_sql = "create table if not exists person (id integer primary key autoincrement not null, \
                                                             name varchar(30) not null, \
                                                             birthday varchar(20) not null, \
                                                             gender varchar(5) not null, \
                                                             weight varchar(5))";
    person_query.prepare(person_sql);
    if (!person_query.exec()){
       qDebug() <<"person表创建失败"<< person_query.lastError();
    } else{
       qDebug() << "person表创建成功";
    }
    person_query.finish();


   // user table
   QSqlQuery user_query(m_db);
   QString user_sql = "create table if not exists user(id integer primary key autoincrement not null, \
                                                       username varchar(30) not null, \
                                                       password varchar(30) not null, \
                                                       isSupper bool not null, \
                                                       email varchar(30))";
   user_query.prepare(user_sql);
   if (!user_query.exec()){
       qDebug() <<"user表创建失败"<< user_query.lastError();
   } else{
       qDebug() << "user表创建成功";
   }
   user_query.finish();


   // record table
   QSqlQuery record_query(m_db);
   QString record_sql = "create table if not exists record(id integer primary key autoincrement not null, \
                                                           level varchar(30) not null, \
                                                           team varchar(30) not null , \
                                                           stage varchar(10) not null, \
                                                           stroke varchar(10) not null, \
                                                           strokeItem varchar(10) not null, \
                                                           distance integer not null, \
                                                           maxPower1 varchar(10) not null, \
                                                           maxPower2 varchar(10) not null, \
                                                           maxPower3 varchar(10) not null, \
                                                           maxPower varchar(10), \
                                                           relPower varchar(10), \
                                                           percentage varchar(10), \
                                                           contributionRate varchar(10), \
                                                           environment varchar(10), \
                                                           workspace varchar(10), \
                                                           createAt TIMESTAMP default (strftime('%Y/%m/%d','now','localtime')), \
                                                           updateAt numeric default (datetime('now','localtime')), \
                                                           clusterSerial integer, \
                                                           score integer, \
                                                           personId interger, \
                                                           constraint fk_person_id foreign key(personId) references person(id) \
                                                           )";
   record_query.prepare(record_sql);
   if (!record_query.exec()){
       qDebug() <<"record表创建失败"<< record_query.lastError();
   } else{
       qDebug() << "record表创建成功";
   }
   record_query.finish();
   m_db.close();
}

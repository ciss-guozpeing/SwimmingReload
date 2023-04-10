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

    m_db.open();

    // person table
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
                                                           constraint fk_person_id foreign key(personId) references person(id))";
   record_query.prepare(record_sql);
   if (!record_query.exec()){
       qDebug() <<"record表创建失败"<< record_query.lastError();
   } else{
       qDebug() << "record表创建成功";
   }
   record_query.finish();


   // woman score table
   QSqlQuery woman_score_query(m_db);
   QString woman_score_sql = "create table if not exists woman_score(id integer primary key autoincrement not null, \
                                                                    freestyle_leg integer not null, \
                                                                    freestyle_hand integer not null, \
                                                                    freestyle_coordinate integer not null, \
                                                                    backstroke_leg integer not null, \
                                                                    backstroke_hand integer not null, \
                                                                    backstroke_coordinate integer not null, \
                                                                    butterflystroke_leg integer not null, \
                                                                    butterflystroke_hand integer not null, \
                                                                    butterflystroke_coordinate integer not null, \
                                                                    breaststroke_leg integer not null, \
                                                                    breaststroke_hand integer not null, \
                                                                    breaststroke_corrdinate integer not null, \
                                                                    glissade integer not null)";
   woman_score_query.prepare(woman_score_sql);
   if (!woman_score_query.exec()){
       qDebug() <<"woman score表不成功"<< woman_score_query.lastError();
   } else{
       qDebug() << "woman score表成功";
   }
   woman_score_query.finish();

   // woman score table
   QSqlQuery man_score_query(m_db);
   QString man_score_sql = "create table if not exists man_score(id integer primary key autoincrement not null, \
                                                                    freestyle_leg integer not null, \
                                                                    freestyle_hand integer not null, \
                                                                    freestyle_coordinate integer not null, \
                                                                    backstroke_leg integer not null, \
                                                                    backstroke_hand integer not null, \
                                                                    backstroke_coordinate integer not null, \
                                                                    butterflystroke_leg integer not null, \
                                                                    butterflystroke_hand integer not null, \
                                                                    butterflystroke_coordinate integer not null, \
                                                                    breaststroke_leg integer not null, \
                                                                    breaststroke_hand integer not null, \
                                                                    breaststroke_corrdinate integer not null, \
                                                                    glissade integer not null)";
   man_score_query.prepare(man_score_sql);
   if (!man_score_query.exec()){
       qDebug() <<"man score表不成功"<< man_score_query.lastError();
   } else{
       qDebug() << "man score表成功";
   }
   man_score_query.finish();
//glissade
   // insert woman score
   QSqlQuery insert_woman_score_query(m_db);
   QString insert_woman_score_sql = "insert into woman_score("
                                    "freestyle_leg, freestyle_hand,freestyle_coordinate,"
                                    "backstroke_leg,backstroke_hand,backstroke_coordinate,"
                                    "butterflystroke_leg,butterflystroke_hand,butterflystroke_coordinate,"
                                    "breaststroke_leg,breaststroke_hand,breaststroke_corrdinate,glissade) values"
                                    "(47.4,60.1,66.7,46.4,52.8,55.5,58.6,71.3,70.1,53.0,60.4,69.7,33.7),"
                                    "(44.2,56.3,62.9,43.8,50.2,54.6,53.2,64.8,68.0,49.0,55.2,64.8,31.8),"
                                    "(42.7,54.4,61,42.5,48.8,57,53.2,64.8,65.8,47,52.6,62.3,30),"
                                    "(41.1,52.4,59.1,41.2,46.5,54.8,51.5,61.9,62.7,45,50,58.9,28.1),"
                                    "(39.6,50.5,57.2,39.9,45.2,52.6,49.7,57.3,56.5,43,47.3,56.4,26.2),"
                                    "(36.4,46.7,53.4,37.3,43.5,48.2,46.1,54.4,53.4,39,42.1,52.5,22.5),"
                                    "(34.9,44.8,51.5,35.9,42.2,46,44.3,51.6,47.1,37,39.5,50,20.7),"
                                    "(31.8,40.9,47.8,33.3,39.6,41.6,40.8,45.9,40.9,33.1,34.3,45.1,18.8),"
                                    "(28.6,37.1,44,30.7,36.9,37.2,37.2,40.2,34.7,29.1,29,40.2,16.9),"
                                    "(25.5,33.2,40.2,28.1,34.3,32.8,33.6,34.5,32.7,25.1,23.8,35.3,15.1)";

   insert_woman_score_query.prepare(insert_woman_score_sql);
   if (!insert_woman_score_query.exec()){
       qDebug() <<"插入表不成功"<< insert_woman_score_query.lastError();
   } else{
       qDebug() << "插入表成功";
   }
   insert_woman_score_query.finish();

   // insert man score
   QSqlQuery insert_man_score_query(m_db);
   QString insert_man_score_sql = "insert into man_score("
                                  "freestyle_leg, freestyle_hand,freestyle_coordinate,"
                                  "backstroke_leg,backstroke_hand,backstroke_coordinate,"
                                  "butterflystroke_leg,butterflystroke_hand,butterflystroke_coordinate,"
                                  "breaststroke_leg,breaststroke_hand,breaststroke_corrdinate,glissade) values"
                                  "(63.6,79.3,86.3,55.4,66.9,71.4,68.4,85.8,81.5,65.9,68.7,82.2,50.3),"
                                  "(59.2,74.3,81.2,54.2,65.5,69.9,66.6,83.3,79.3,61.8,64.9,77.7,47.7),"
                                  "(57.0,71.9,78.7,52.9,64.0,68.5,64.7,80.8,77.1,59.7,62.9,75.2,45.1),"
                                  "(54.8,69.4,76.2,51.7,62.5,67.0,62.8,78.3,74.9,57.6,61.0,72.7,42.4),"
                                  "(52.6,65.9,73.7,49.2,59.6,64.1,60.0,73.3,70.5,55.5,58.1,68.6,39.8),"
                                  "(48.2,61.9,68.6,48.0,58.1,62.7,58.1,70.9,68.3,51.3,55.2,66.1,34.6),"
                                  "(46.0,59.4,66.1,45.5,55.2,59.8,54.4,65.9,63.9,49.2,53.3,61.1,31.9),"
                                  "(41.6,54.4,61.1,43.1,52.3,56.9,50.6,60.9,59.5,45.0,49.4,56.0,29.3),"
                                  "(37.2,49.4,56.0,40.6,49.4,54.0,46.8,56.0,55.1,40.9,45.5,51.0,26.7),"
                                  "(32.8,44.4,51.0,39.5,47.4,52.7,45.0,53.0,53.1,36.7,41.7,49.2,24.1)";

   insert_man_score_query.prepare(insert_man_score_sql);
   if (!insert_man_score_query.exec()){
       qDebug() <<"插入表不成功"<< insert_man_score_query.lastError();
   } else{
       qDebug() << "插入表成功";
   }
   insert_man_score_query.finish();


   m_db.close();
}

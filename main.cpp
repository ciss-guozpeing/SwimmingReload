#include "mainwindow.h"

#include <QApplication>
#include "Common/Theme.h"
#include "DB/DB.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    Theme* theme = new Theme;
    theme->configTheme();
    // 初始化db
    DB* db = DB::getInstance();
    if(!db->isExistsDBFile()){
        db->createDBFile();
        db->initDBTable();
    }
    w.show();
    return a.exec();
}

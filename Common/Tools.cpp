#include "Tools.h"

static Tools* INSTANCE = nullptr;
Tools::Tools(QObject *parent)
    : QObject{parent}
{

}

Tools* Tools::getInstance()
{
    if(INSTANCE==nullptr){
        INSTANCE = new Tools;
    }
    return INSTANCE;
}

QString Tools::getCurDate()
{
    QString curDate;
    curDate = QDateTime::currentDateTime().toString("yyyy/MM/dd");
    return curDate;
}

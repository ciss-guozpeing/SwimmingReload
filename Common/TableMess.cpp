#include "TableMess.h"
#include <QDir>
#include <QStandardPaths>
static TableMess* INSTANCE=nullptr;

TableMess::TableMess(QObject *parent)
    : QObject{parent}
{
    QString fileName;
    #ifdef Q_OS_WIN
        qDebug() << "win";
    #endif
    #ifdef Q_OS_MAC
        fileName = fileName = QDir::currentPath() + "/Config/config.ini";
        qDebug() << fileName;
    #endif
    #ifdef Q_OS_LINUX
        qDebug()<<"linux";
    #endif
    qDebug() << fileName;
    m_tableMessSetting = new QSettings(fileName,QSettings::IniFormat);
    m_tableMessSetting->setIniCodec(QTextCodec::codecForName("UTF-8"));
}

TableMess *TableMess::getInstance()
{
    if (!INSTANCE) {
        INSTANCE = new TableMess();
    }
    return INSTANCE;
}

QStringList TableMess::getTableHeader()
{
    QStringList headerData;
    m_tableMessSetting->beginGroup("Table");
    m_tableMessSetting->setIniCodec(QTextCodec::codecForName("UTF-8"));
    QString s_headerData = m_tableMessSetting->value("tableHeader","null").toString();
    headerData = s_headerData.split(",");
    m_tableMessSetting->endGroup();
    return headerData;
}

QStringList TableMess::getLevelItem()
{
    QStringList levelItem;
    m_tableMessSetting->beginGroup("Level");
    QString s_sportLevel = m_tableMessSetting->value("level","null").toString();
    levelItem = s_sportLevel.split(",");
    m_tableMessSetting->endGroup();
    return levelItem;
}

QStringList TableMess::getTeamItem()
{
    QStringList teamItem;
    m_tableMessSetting->beginGroup("Team");
    QString s_team = m_tableMessSetting->value("team","null").toString();
    teamItem = s_team.split(",");
    m_tableMessSetting->endGroup();
    return teamItem;
}

QStringList TableMess::getStageItem()
{
    QStringList stageItem;
    m_tableMessSetting->beginGroup("Stage");
    QString s_stage = m_tableMessSetting->value("stage","null").toString();
    stageItem = s_stage.split(",");
    m_tableMessSetting->endGroup();
    return stageItem;
}

QStringList TableMess::getEnvItem()
{
    QStringList envItem;
    m_tableMessSetting->beginGroup("Env");
    QString s_env = m_tableMessSetting->value("env","null").toString();
    envItem = s_env.split(",");
    m_tableMessSetting->endGroup();
    return envItem;
}

QStringList TableMess::getDistanceItem()
{
    QStringList distanceItem;
    m_tableMessSetting->beginGroup("Distance");
    QString s_distance = m_tableMessSetting->value("distance","null").toString();
    distanceItem = s_distance.split(",");
    m_tableMessSetting->endGroup();
    return distanceItem;
}

QStringList TableMess::getStrokeItem()
{
    QStringList strokeItem;
    QStringList strokeKeys;
    m_tableMessSetting->beginGroup("Stroke");
    strokeKeys = m_tableMessSetting->allKeys();
    for (int i=0; i<strokeKeys.length(); i++) {
        strokeItem.push_back(m_tableMessSetting->value(strokeKeys[i],"null").toString());
    }
    m_tableMessSetting->endGroup();
    return strokeItem;
}

QMap<QString,QStringList> TableMess::getStrokeIItem()
{
    QMap<QString,QStringList> strokeItem;
    QStringList strokeKeys;
    QStringList strokeValues;
    m_tableMessSetting->beginGroup("Stroke");
    strokeKeys = m_tableMessSetting->allKeys();
    for (int i=0; i<strokeKeys.length(); i++) {
        strokeValues.push_back(m_tableMessSetting->value(strokeKeys[i],"null").toString());
    }
    m_tableMessSetting->endGroup();

    m_tableMessSetting->beginGroup("StrokeItem");
    for (int i=0; i<strokeKeys.length(); i++) {
        QString item = m_tableMessSetting->value(strokeKeys[i] + "Item","null").toString();
        QStringList sl_item = item.split(",");
        strokeItem.insert(strokeValues[i],sl_item);
    }
    m_tableMessSetting->endGroup();
    return strokeItem;
}

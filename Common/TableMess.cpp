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
        fileName = fileName = QDir::currentPath() + "/../../../Config/config.ini";
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

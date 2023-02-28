#ifndef TABLEMESS_H
#define TABLEMESS_H

#include <QObject>
#include <QSettings>
#include <QFileInfo>
#include <QTextCodec>
#include <QCoreApplication>
#include <QDebug>

class TableMess : public QObject
{
    Q_OBJECT
private:
    QSettings* m_tableMessSetting;

public:
    explicit TableMess(QObject *parent = nullptr);
    static TableMess *getInstance();

    QStringList getTableHeader();


signals:

};

#endif // TABLEMESS_H

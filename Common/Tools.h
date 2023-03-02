#ifndef TOOLS_H
#define TOOLS_H

#include <QObject>
#include <QDate>

class Tools : public QObject
{
    Q_OBJECT
public:
    explicit Tools(QObject *parent = nullptr);
    static Tools* getInstance();

    QString getCurDate();

signals:

};

#endif // TOOLS_H

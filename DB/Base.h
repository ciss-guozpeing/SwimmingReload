#ifndef BASE_H
#define BASE_H

#include <QObject>

class Base : public QObject
{
    Q_OBJECT
public:
    explicit Base(QObject *parent = nullptr);

    void refresh();
signals:

};

#endif // BASE_H

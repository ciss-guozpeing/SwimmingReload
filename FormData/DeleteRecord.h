#ifndef DELETERECORD_H
#define DELETERECORD_H

#include <QObject>
#include <QModelIndex>

class DeleteRecord : public QObject
{
    Q_OBJECT
public:
    explicit DeleteRecord(QObject *parent = nullptr);
    void deleteTableRecord();
signals:

};

#endif // DELETERECORD_H

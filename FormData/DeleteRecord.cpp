#include "DeleteRecord.h"
#include "TableView.h"
#include "../DB/Record.h"
#include <QDebug>

DeleteRecord::DeleteRecord(QObject *parent)
    : QObject{parent}
{

}

void DeleteRecord::deleteTableRecord()
{
    TableView* tableView = TableView::getInstance();
    QModelIndexList rowsIndex = tableView->selectModel()->selectedRows();
    Record* record = new Record;
    for(int i=0;i<rowsIndex.count();i++){
        int rowIndex = rowsIndex.at(rowsIndex.count() - (i+1)).row();
        QString redocrdId = tableView->model()->record(rowIndex).value("id").toString();
        record->deleteRecord(redocrdId);
    }
}

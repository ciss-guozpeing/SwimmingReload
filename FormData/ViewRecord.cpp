#include "ViewRecord.h"
#include "ui_ViewRecord.h"

#include "TableView.h"
#include <QDebug>
ViewRecord::ViewRecord(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ViewRecord)
{
    ui->setupUi(this);
    this->setWindowTitle("查看记录");
    this->setWindowFlags(Qt::CustomizeWindowHint | Qt::WindowCloseButtonHint |Qt::WindowMaximizeButtonHint);
}

ViewRecord::~ViewRecord()
{
    delete ui;
}

void ViewRecord::viewTableRecord()
{
    TableView* tableView = TableView::getInstance();
    int size = tableView->selectModel()->selectedRows().at(0).row();
    tableView->currentIndex().row();
    qDebug() << tableView->currentIndex().row();
    qDebug() << "afsdf"<< size;
}

#include "ViewRecord.h"
#include "ui_ViewRecord.h"

#include "../DB/Record.h"
#include "Components/ViewBase.h"
#include "TableView.h"
#include "../../../libs/zpWidgetsUI/Layouts/ZpFlowlayout.h"

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
    ZpFlowLayout* zpFlowLayout = new ZpFlowLayout;
    TableView* tableView = TableView::getInstance();
    QModelIndexList rowsIndex = tableView->selectModel()->selectedRows();
    Record* record = new Record;
    for(int i=0;i<rowsIndex.count();i++){
        int rowIndex = rowsIndex.at(rowsIndex.count() - (i+1)).row();
        QString redocrdId = tableView->model()->record(rowIndex).value("id").toString();
    }
    for (int i=0; i<20; i++){
            ViewBase* viewBase = new ViewBase;
                zpFlowLayout->addWidget(viewBase);
    }




    ui->scrollAreaWidgetContents->setLayout(zpFlowLayout);
}

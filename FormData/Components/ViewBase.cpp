#include "ViewBase.h"
#include "ui_ViewBase.h"

ViewBase::ViewBase(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ViewBase)
{
    ui->setupUi(this);
}

ViewBase::~ViewBase()
{
    delete ui;
}

void ViewBase::setViewBase()
{
    ui->groupBox->setTitle("record");
//    ui->name->setText();
}

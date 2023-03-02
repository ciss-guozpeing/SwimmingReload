#include "ViewBase.h"
#include "ui_ViewBase.h"
#include "../TableView.h"

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

void ViewBase::setViewBase(int rowIndex)
{
    TableView* tableView = TableView::getInstance();


    ui->personID->setText(tableView->model()->data(tableView->model()->index(rowIndex,0)).toString());
    ui->recordID->setText(tableView->model()->data(tableView->model()->index(rowIndex,0)).toString());
    ui->name->setText(tableView->model()->data(tableView->model()->index(rowIndex,2)).toString());
    ui->gender->setText(tableView->model()->data(tableView->model()->index(rowIndex,3)).toString());
    ui->weight->setText(tableView->model()->data(tableView->model()->index(rowIndex,4)).toString());
    ui->birthday->setText(tableView->model()->data(tableView->model()->index(rowIndex,5)).toString());
    ui->level->setText(tableView->model()->data(tableView->model()->index(rowIndex,6)).toString());
    ui->team->setText(tableView->model()->data(tableView->model()->index(rowIndex,7)).toString());
    ui->stage->setText(tableView->model()->data(tableView->model()->index(rowIndex,8)).toString());
    ui->stroke->setText(tableView->model()->data(tableView->model()->index(rowIndex,9)).toString());
    ui->strokeItem->setText(tableView->model()->data(tableView->model()->index(rowIndex,10)).toString());
    ui->distance->setText(tableView->model()->data(tableView->model()->index(rowIndex,11)).toString());
    ui->env->setText(tableView->model()->data(tableView->model()->index(rowIndex,12)).toString());
    ui->maxPower1->setText(tableView->model()->data(tableView->model()->index(rowIndex,13)).toString());
    ui->maxPower2->setText(tableView->model()->data(tableView->model()->index(rowIndex,14)).toString());
    ui->maxPower3->setText(tableView->model()->data(tableView->model()->index(rowIndex,15)).toString());
    ui->maxPower->setText(tableView->model()->data(tableView->model()->index(rowIndex,16)).toString());
    ui->relPower->setText(tableView->model()->data(tableView->model()->index(rowIndex,17)).toString());
    ui->percentage ->setText(tableView->model()->data(tableView->model()->index(rowIndex,18)).toString());
    ui->contributionRate->setText(tableView->model()->data(tableView->model()->index(rowIndex,19)).toString());
}

#include "ClusterPage.h"
#include "ui_ClusterPage.h"

ClusterPage::ClusterPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ClusterPage)
{
    ui->setupUi(this);
}

ClusterPage::~ClusterPage()
{
    delete ui;
}

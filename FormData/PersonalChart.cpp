#include "PersonalChart.h"
#include "ui_PersonalChart.h"

PersonalChart::PersonalChart(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PersonalChart)
{
    ui->setupUi(this);
}

PersonalChart::~PersonalChart()
{
    delete ui;
}

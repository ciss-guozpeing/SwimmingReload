#include "PersonalChart.h"
#include "ui_PersonalChart.h"

static PersonalChart* INSTANCE = nullptr;

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

PersonalChart* PersonalChart::getInstance()
{
    if(INSTANCE==nullptr){
        INSTANCE = new PersonalChart;
    }
    return INSTANCE;
}



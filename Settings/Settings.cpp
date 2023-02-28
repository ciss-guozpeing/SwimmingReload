#include "Settings.h"
#include "ui_Settings.h"

Settings::Settings(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Settings)
{
    ui->setupUi(this);
    this->setWindowTitle(QString("系统设置"));
}

Settings::~Settings()
{
    delete ui;
}

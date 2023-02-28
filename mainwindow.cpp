#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

#include "FormData/FormData.h"
#include "DashBoard/DashBoard.h"
#include "DB/DB.h"
#include "Settings/Settings.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("主界面");
    this->setWindowState(Qt::WindowMaximized); //窗口最大化显示
    this->setAutoFillBackground(true);

    this->initUI();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::initUI()
{
    FormData* formData = new FormData;
    ui->stackedWidget->addWidget(formData);
    DashBoard* dashBoard = new DashBoard;
    ui->stackedWidget->addWidget(dashBoard);
    DB* db = DB::getInstance();
    ui->stackedWidget->addWidget(db);
}


void MainWindow::on_mainPageBtn_clicked()
{
    qDebug() << QString("主界面");
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_dashBoardBtn_clicked()
{
    qDebug() << QString("数据可视化面板");
    ui->stackedWidget->currentIndex();
    qDebug() << ui->stackedWidget->count();
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_histDataBtn_clicked()
{
    qDebug() << QString("历史数据");
    ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_systemSettingBtn_clicked()
{
    qDebug() << QString("系统设置");
    Settings* settings = new Settings;
    int ret = settings->exec();
    if(ret==QDialog::Accepted){

    } else {

    }
}


#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

    void initUI();

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_mainPageBtn_clicked();

    void on_dashBoardBtn_clicked();

    void on_histDataBtn_clicked();

    void on_systemSettingBtn_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H

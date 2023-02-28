#ifndef FORMDATA_H
#define FORMDATA_H

#include <QWidget>

namespace Ui {
class FormData;
}

class FormData : public QWidget
{
    Q_OBJECT
    void initUI();

public:
    explicit FormData(QWidget *parent = nullptr);
    ~FormData();

private slots:
    void on_addRecordBtn_clicked();

    void on_viewRecordBtn_clicked();

    void on_openExcelBtn_clicked();

    void on_refreshBtn_clicked();

    void on_exportRecordBtn_clicked();

    void on_exportTemplate_clicked();

    void on_deleteReocrdBtn_clicked();

    void on_calculateSettingBtn_clicked();

    void on_calculateBtn_clicked();

    void on_statisticsBtn_clicked();

    void on_clusterBtn_clicked();

    void on_asSaveBtn_clicked();

private:
    Ui::FormData *ui;
};

#endif // FORMDATA_H

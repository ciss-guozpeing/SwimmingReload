#ifndef ADDRECORD_H
#define ADDRECORD_H

#include <QDialog>
#include <QPushButton>
#include <QDataWidgetMapper>

namespace Ui {
class AddRecord;
}

class AddRecord : public QDialog
{
    Q_OBJECT
    QString getGender(bool isManCheck,bool isWomanCheck);

    void setWarnText(QString text);


public:
    explicit AddRecord(QWidget *parent = nullptr);
    ~AddRecord();
    static AddRecord *getInstance();

    void initUI();
    bool checkText(QString name, QString gender, QString weight,QString stroke,QString storkeItem);
    QMap<QString,QString> getTableRecord();
    void setTableRecord();

public slots:
        void on_resetStrokeItem(QString stroke);
        void on_findDefaultPersonMess(QString name);
private:
    Ui::AddRecord *ui;
};

#endif // ADDRECORD_H

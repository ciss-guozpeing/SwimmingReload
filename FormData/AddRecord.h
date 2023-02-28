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

    void setWarnText();

public:
    explicit AddRecord(QWidget *parent = nullptr);
    ~AddRecord();
    static AddRecord *getInstance();

    void initUI();
    void setTableRecord();
    void setDataWidgetMapper();

private:
    Ui::AddRecord *ui;
};

#endif // ADDRECORD_H

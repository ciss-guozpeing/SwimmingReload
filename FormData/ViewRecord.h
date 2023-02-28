#ifndef VIEWRECORD_H
#define VIEWRECORD_H

#include <QDialog>

namespace Ui {
class ViewRecord;
}

class ViewRecord : public QDialog
{
    Q_OBJECT

public:
    explicit ViewRecord(QWidget *parent = nullptr);
    ~ViewRecord();

    void viewTableRecord();

private:
    Ui::ViewRecord *ui;
};

#endif // VIEWRECORD_H

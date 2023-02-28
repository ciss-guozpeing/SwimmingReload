#ifndef PERSONALCHART_H
#define PERSONALCHART_H

#include <QWidget>

namespace Ui {
class PersonalChart;
}

class PersonalChart : public QWidget
{
    Q_OBJECT

public:
    explicit PersonalChart(QWidget *parent = nullptr);
    ~PersonalChart();

private:
    Ui::PersonalChart *ui;
};

#endif // PERSONALCHART_H

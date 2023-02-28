#ifndef CLUSTERPAGE_H
#define CLUSTERPAGE_H

#include <QWidget>

namespace Ui {
class ClusterPage;
}

class ClusterPage : public QWidget
{
    Q_OBJECT

public:
    explicit ClusterPage(QWidget *parent = nullptr);
    ~ClusterPage();

private:
    Ui::ClusterPage *ui;
};

#endif // CLUSTERPAGE_H

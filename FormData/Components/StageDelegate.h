#ifndef TRAINSTAGEDELEGATE_H
#define TRAINSTAGEDELEGATE_H

#include <QObject>
#include <QStyledItemDelegate>
#include <QComboBox>

class StageDelegate: public QStyledItemDelegate
{
    Q_OBJECT
public:
    StageDelegate();
    virtual QWidget* createEditor(QWidget* parent, const QStyleOptionViewItem& option, const QModelIndex& index) const override;
    void setModelData(QWidget *editor, QAbstractItemModel *model,const QModelIndex &index) const override;
};

#endif // TRAINSTAGEDELEGATE_H

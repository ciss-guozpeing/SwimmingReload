#ifndef BIRTHDAYDELEGATE_H
#define BIRTHDAYDELEGATE_H

#include <QStyledItemDelegate>
#include <QDateEdit>

class BirthdayDelegate : public QStyledItemDelegate
{
public:
    BirthdayDelegate();
    virtual QWidget* createEditor(QWidget* parent, const QStyleOptionViewItem& option, const QModelIndex& index) const override;
    void setModelData(QWidget *editor, QAbstractItemModel *model,const QModelIndex &index) const override;
};

#endif // BIRTHDAYDELEGATE_H

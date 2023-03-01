#include "BirthdayDelegate.h"

BirthdayDelegate::BirthdayDelegate()
{

}

QWidget* BirthdayDelegate::createEditor(QWidget* parent, const QStyleOptionViewItem& option, const QModelIndex& index) const
{
    QDateEdit* editor = new QDateEdit(parent);
    editor->dateTime();
    return editor;
}

void BirthdayDelegate::setModelData(QWidget *editor, QAbstractItemModel *model,const QModelIndex &index) const
{
    QDateEdit* dateEdit = static_cast<QDateEdit*> (editor);
    // 更新表格
    model->setData(index,dateEdit->text());
}

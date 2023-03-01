#include "WeightDelegate.h"

WeightDelegate::WeightDelegate()
{

}

QWidget* WeightDelegate::createEditor(QWidget* parent, const QStyleOptionViewItem& option, const QModelIndex& index) const
{
    QDoubleSpinBox* editor = new QDoubleSpinBox(parent);
    editor->setMinimum(0);
    editor->setMaximum(100);
    return editor;
}

void WeightDelegate::setModelData(QWidget *editor, QAbstractItemModel *model,const QModelIndex &index) const
{
    QDoubleSpinBox* doubleSpinBox = static_cast<QDoubleSpinBox*> (editor);
    // 更新表格
    model->setData(index,doubleSpinBox->text());
}

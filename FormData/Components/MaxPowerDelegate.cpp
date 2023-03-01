#include "MaxPowerDelegate.h"


MaxPowerDelegate::MaxPowerDelegate()
{

}

QWidget* MaxPowerDelegate::createEditor(QWidget* parent, const QStyleOptionViewItem& option, const QModelIndex& index) const
{
    Q_UNUSED(option);
    Q_UNUSED(index);
    QDoubleSpinBox* editor = new QDoubleSpinBox(parent);
    editor->setMinimum(0);
    editor->setMaximum(1000);
    return editor;
}

void MaxPowerDelegate::setModelData(QWidget *editor, QAbstractItemModel *model,const QModelIndex &index) const
{

    QDoubleSpinBox* doubleSpinxBox = static_cast<QDoubleSpinBox*> (editor);
    model->setData(index,doubleSpinxBox->text());
}

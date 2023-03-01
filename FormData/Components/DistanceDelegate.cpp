#include "DistanceDelegate.h"

#include "../Common/TableMess.h"

DistanceDelegate::DistanceDelegate()
{

}

QWidget* DistanceDelegate::createEditor(QWidget* parent, const QStyleOptionViewItem& option, const QModelIndex& index) const
{
    auto tableMess = TableMess::getInstance();
    QComboBox* editor = new QComboBox(parent);
    editor->addItems(tableMess->getDistanceItem());
    return editor;
}

void DistanceDelegate::setModelData(QWidget *editor, QAbstractItemModel *model,const QModelIndex &index) const
{
    QComboBox* comBox = static_cast<QComboBox*> (editor);
    model->setData(index,comBox->currentText());
}

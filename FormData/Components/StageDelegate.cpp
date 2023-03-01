#include "StageDelegate.h"

#include "../Common/TableMess.h"

StageDelegate::StageDelegate()
{

}
QWidget* StageDelegate::createEditor(QWidget* parent, const QStyleOptionViewItem& option, const QModelIndex& index) const
{
    auto tableMess = TableMess::getInstance();
    QComboBox* editor = new QComboBox(parent);
    editor->addItems(tableMess->getStageItem());
    return editor;
}

void StageDelegate::setModelData(QWidget *editor, QAbstractItemModel *model,const QModelIndex &index) const
{
    QComboBox* comBox = static_cast<QComboBox*> (editor);
    // 更新界面
    model->setData(index,comBox->currentText());
}

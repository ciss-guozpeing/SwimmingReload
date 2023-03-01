#include "LevelDelegate.h"

#include "../Common/TableMess.h"

LevelDelegate::LevelDelegate() {}

QWidget* LevelDelegate::createEditor(QWidget* parent, const QStyleOptionViewItem& option, const QModelIndex& index) const
{
    auto tableMess = TableMess::getInstance();
    QComboBox* editor = new QComboBox(parent);
    editor->addItems(tableMess->getLevelItem());
    return editor;
}

void LevelDelegate::setModelData(QWidget *editor, QAbstractItemModel *model,const QModelIndex &index) const
{
    QComboBox* comBox = static_cast<QComboBox*> (editor);
    // 更新表格
    model->setData(index,comBox->currentText());
}

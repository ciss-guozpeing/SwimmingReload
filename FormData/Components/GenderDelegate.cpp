#include "GenderDelegate.h"


GenderDelegate::GenderDelegate() {}

QWidget* GenderDelegate::createEditor(QWidget* parent, const QStyleOptionViewItem& option, const QModelIndex& index) const
{
    QComboBox* editor = new QComboBox(parent);
    editor->addItems(QStringList() <<"男" << "女");
    return editor;
}

void GenderDelegate::setModelData(QWidget *editor, QAbstractItemModel *model,const QModelIndex &index) const
{
    QComboBox* comBox = static_cast<QComboBox*> (editor);
    // 更新表格
    model->setData(index,comBox->currentText());
}

#include "StrokeItemDelegate.h"

#include "../Common/TableMess.h"
#include "StrokeDelegate.h"

#include <QDebug>
static StrokeItemDelegate* INSTANCE=nullptr;

StrokeItemDelegate::StrokeItemDelegate()
{

}

StrokeItemDelegate *StrokeItemDelegate::getInstance()
{
    if (!INSTANCE) {
        INSTANCE = new StrokeItemDelegate();
    }
    return INSTANCE;
}

QWidget* StrokeItemDelegate::createEditor(QWidget* parent, const QStyleOptionViewItem& option, const QModelIndex& index) const
{
    Q_UNUSED(option);
    Q_UNUSED(index);
    auto strokeDelgegate = StrokeDelegate::getInstance();
    QComboBox* editor = new QComboBox(parent);

    editor->addItems(strokeDelgegate->getStrokeIItem());

    return editor;
}

void StrokeItemDelegate::setModelData(QWidget *editor, QAbstractItemModel *model,const QModelIndex &index) const
{
    QComboBox* comBox = static_cast<QComboBox*> (editor);
    // 更新表格
    model->setData(index,comBox->currentText());
}





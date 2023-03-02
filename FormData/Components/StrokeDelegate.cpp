#include "StrokeDelegate.h"

#include "../Common/TableMess.h"

static StrokeDelegate* INSTANCE=nullptr;

StrokeDelegate::StrokeDelegate()
{
//    connect(this,SIGNAL(curr))
}

StrokeDelegate *StrokeDelegate::getInstance()
{
    if (!INSTANCE) {
        INSTANCE = new StrokeDelegate();
    }
    return INSTANCE;
}

QWidget* StrokeDelegate::createEditor(QWidget* parent, const QStyleOptionViewItem& option, const QModelIndex& index) const
{
    Q_UNUSED(option);
    Q_UNUSED(index);
    auto TableMess = TableMess::getInstance();

    QComboBox* editor = new QComboBox(parent);
    connect(editor,SIGNAL(currentTextChanged(QString)),this,SLOT(on_strokeTextChanged(QString)));

    editor->addItems(TableMess->getStrokeItem());
    return editor;
}

void StrokeDelegate::setEditorData(QWidget *editor, const QModelIndex &index) const
{
    Q_UNUSED(editor);
}

void StrokeDelegate::setModelData(QWidget *editor, QAbstractItemModel *model,const QModelIndex &index) const
{

    QComboBox* comBox = static_cast<QComboBox*> (editor);

    model->setData(index,comBox->currentText());

}

void StrokeDelegate::on_strokeTextChanged(QString text)
{
    m_strokeItem.clear();
    auto tableMess = TableMess::getInstance();
    m_strokeItem = tableMess->getStrokeIItem()[text];
}

QStringList StrokeDelegate::getStrokeIItem()
{
    qDebug() << "zaici" << m_strokeItem;
    return m_strokeItem;
}


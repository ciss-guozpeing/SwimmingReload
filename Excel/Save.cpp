#include "Save.h"

#include "../Common/TableMess.h"
#include "../FormData/TableView.h"

Save::Save()
{

}

QXlsx::Format Save::_CellFormat()
{
    m_cellFormat.setHorizontalAlignment(QXlsx::Format::AlignHCenter);
    return m_cellFormat;
}

QXlsx::Format Save::_HeaderFormat()
{
    m_headerFormat.setHorizontalAlignment(QXlsx::Format::AlignHCenter);
    return m_headerFormat;
}


void Save::exprotTableRecord()
{
    TableView* tableView = TableView::getInstance();
    TableMess* tableMess = TableMess::getInstance();
    QStringList headers = tableMess->getTableHeader();
    QString filename = "Records.xlsx";
    QString location = QStandardPaths::writableLocation(QStandardPaths::DesktopLocation);
    QString filepath = location + "/"  + filename;
    QXlsx::Document xlsx;
    QVector<QStringList> records = tableView->getCurTableData();
    //
    for (int i = 0; i<headers.length(); i++) {
        xlsx.write(1, i + 1, headers.at(i), _HeaderFormat());
    }
    //
    for(int i=0; i<records.size(); i++){
        for (int j=0; j<records.at(i).size(); j++){
            xlsx.write(i+2, j+1, records.at(i).at(j),_HeaderFormat());
        }
    }


    bool isSave = xlsx.saveAs(filepath);
    if (isSave) {
        QString text = "导出数据成功";
    } else {
        QString text = "导出数据失败";
    }
}

void Save::exportTemplate()
{
    TableMess* tableMess = TableMess::getInstance();
    QStringList headers = tableMess->getTableHeader();
    QString filename = "Template.xlsx";
    QString location = QStandardPaths::writableLocation(QStandardPaths::DesktopLocation);
    QString filepath = location + "/"  + filename;
    QXlsx::Document xlsx;
    for (int i = 0; i<headers.length(); i++) {
        xlsx.write(1, i + 1, headers.at(i), _HeaderFormat());
    }
    bool isSave = xlsx.saveAs(filepath);
    if (isSave) {
        QString text = "导出模版成功";
    } else {
        QString text = "导出模版失败";
    }
}

void Save::asSave(QVector<QStringList> tableData)
{
//    tableData;
    QXlsx::Document xlsx;
    QString filepath = QFileDialog::getSaveFileName(NULL, "save xlsx file", "", "xlsx(*.xlsx)");
    TableMess* tableMess = TableMess::getInstance();
    QStringList headers = tableMess->getTableHeader();

    //
    for (int i = 0; i<headers.length(); i++) {
        xlsx.write(1, i + 1, headers.at(i), _HeaderFormat());
    }
    //
    for(int i=0; i<tableData.size(); i++){
        for (int j=0; j<tableData.at(i).size(); j++){
            xlsx.write(i+2, j+1, tableData.at(i).at(j),_HeaderFormat());
        }
    }

    bool isSave = xlsx.saveAs(filepath);
    if (isSave) {
        QString text = "导出数据成功";
    } else {
        QString text = "导出数据失败";
    }
}

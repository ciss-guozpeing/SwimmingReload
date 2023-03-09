#ifndef SAVE_H
#define SAVE_H

#include <QObject>
#include <QFileDialog>
#include <QTableWidget>
#include <QStandardPaths>
#include <QPoint>

#include "xlsxdocument.h"
#include "xlsxworksheet.h"
#include "xlsxcellrange.h"
#include "xlsxformat.h"
#include "xlsxcell.h"
class Save: public QObject
{
    Q_OBJECT
    QXlsx::Format m_cellFormat;
    QXlsx::Format m_headerFormat;
    QXlsx::Format _CellFormat();
    QXlsx::Format _HeaderFormat();
public:
    Save();

    void exprotTableRecord();
    void exportTemplate();
    void asSave(QVector<QStringList> tableData);
};

#endif // SAVE_H

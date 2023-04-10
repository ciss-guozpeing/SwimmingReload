#ifndef SORE_H
#define SORE_H

#include <QObject>
#include <QMap>
#include <QVector>
#include <QSqlQuery>
#include <QSqlError>

#include "math.h"
#include "xlsxdocument.h"
#include "xlsxworksheet.h"
#include "xlsxcellrange.h"
#include "xlsxformat.h"
#include "xlsxcell.h"

#define WOMANSCORE "woman_score"
#define MANSCORE "man_score"

class Score
{
public:
    Score();
    static Score *getInstance();

    QString getCommonScore(QString gender, QString stroke, QString strokeItem, QString maxPower);

    void openScoreForm(QString filePath);
};

#endif // SORE_H

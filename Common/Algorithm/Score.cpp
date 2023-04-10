#include "../Algorithm/Score.h"
#include "../DB/DBPool.h"
#include <QDebug>

static Score* INSTANCE=nullptr;



Score::Score(){}

Score *Score::getInstance()
{
    if (!INSTANCE) {
        INSTANCE = new Score();
    }
    return INSTANCE;
}

QString Score::getCommonScore(QString gender, QString stroke, QString strokeItem,QString maxPower)
{
    QString score;
    QString tableName;
    QString fieldName;
    if(gender == "男"){
        tableName = MANSCORE;
    }else if(gender == "女"){
        tableName = WOMANSCORE;
    }

    if(stroke=="自由泳"){
        fieldName = "freestyle_";
        if(strokeItem =="自腿"){
            fieldName = fieldName + "leg";
        } else if(strokeItem == "自手"){
            fieldName = fieldName + "hand";
        } else if (strokeItem == "自配合"){
            fieldName = fieldName + "coordinate";
        } else {
            fieldName = "glissade";
        }
    } else if(stroke == "仰泳"){
        fieldName = "backstroke_";
        if(strokeItem =="仰腿"){
            fieldName = fieldName + "leg";
        } else if(strokeItem == "仰手"){
            fieldName = fieldName + "hand";
        } else if (strokeItem == "仰配合"){
            fieldName = fieldName + "coordinate";
        } else {
            fieldName = "glissade";
        }
    } else if(stroke == "蝶泳"){
        fieldName = "butterflystroke_";
        if(strokeItem =="蝶腿"){
            fieldName = fieldName + "leg";
        } else if(strokeItem == "蝶手"){
            fieldName = fieldName + "hand";
        } else if (strokeItem == "蝶配合"){
            fieldName = fieldName + "coordinate";
        } else {
            fieldName = "glissade";
        }
    } else if(stroke == "蛙泳"){
        fieldName = "breaststroke_";
        if(strokeItem =="蛙腿"){
            fieldName = fieldName + "leg";
        } else if(strokeItem == "蛙手"){
            fieldName = fieldName + "hand";
        } else if (strokeItem == "蛙配合"){
            fieldName = fieldName + "coordinate";
        } else {
            fieldName = "glissade";
        }
    }

    QSqlDatabase db = ConnectionPool::openConnection();
    QSqlQuery query = QSqlQuery(db);
    QString sql = QString("select %1 from %2").arg(fieldName,tableName);
    query.exec(sql);
    QVector<QString> vector;
    QSqlRecord rec =query.record();
    while(query.next()){
        int index = rec.indexOf(fieldName);
        QString value = query.value(index).toString();
        vector.push_back(value);
    }

    const float EPSINON = 0.00001;
    for(int i=1; i<vector.size(); i++){
        if(maxPower.toFloat()> vector.first().toFloat()){
            score = "10";
            break;
        }
        if(maxPower.toFloat()< vector.last().toFloat()){
            score = "0";
            break;
        }
        if((vector.at(i-1).toFloat()>maxPower.toFloat() && maxPower.toFloat() < vector.at(i).toFloat()))
        {
            score = QString::number(vector.size()-i-1);
        }
        if(fabs(maxPower.toFloat()-vector.at(i).toFloat()) <= EPSINON){
            score = QString::number(vector.size()-i);
        }
    }
    qDebug() << vector;
    return score;
}

void Score::openScoreForm(QString filePath)
{
    QVector<QVector<QString>> scoreDatas;
    if (!filePath.isEmpty()) {
        QString cell_str;

        QXlsx::Document xlsx(filePath);
        xlsx.selectSheet(xlsx.sheetNames().at(0));

        int rowCount = xlsx.dimension().rowCount();
        int columnCount = xlsx.dimension().columnCount();

        for(int i=1; i<rowCount + 1; i++){
            QVector<QString> rowData;
            for(int j=1; j<columnCount+1; j++){
                QXlsx::Cell *cell = xlsx.cellAt(i, j);
                if (cell == NULL){
                    cell_str = "";
                    rowData.push_back(cell_str);
                } else {
                    cell_str = cell->value().toString();
                    if(cell->cellType() == 1){
                        cell_str = QString::number(cell_str.toDouble(),'f', 2);
                    }
                    rowData.push_back(cell_str);
                }
            }
            scoreDatas.append(rowData);
        }
    }
}

#ifndef THEME_H
#define THEME_H

#include <QObject>
#include <QPoint>
#include <QMainWindow>
#include <QApplication>
#include <QMessageBox>
#include <QObject>
#include <QStyleFactory>
#include <QSettings>

class Theme : public QObject
{
    Q_OBJECT
public:
    explicit Theme(QObject *parent = nullptr);
    void configTheme();
signals:

};

#endif // THEME_H

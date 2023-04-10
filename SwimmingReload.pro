QT       += core gui
QT       += datavisualization
QT       += sql
QT       += websockets
QT       += charts
QT       += printsupport
QT       += concurrent
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17


####### 软件生成目录 #########
TARGET = "国家队水中力量测评平台"
TEMPLATE = app
#临时文件存放位置
MOC_DIR         = $$PWD/Debug/temp/moc  #指定moc命令将含Q_OBJECT的头文件转换成标准.h文件的存放目录
RCC_DIR         = $$PWD/Debug/temp/rcc  #指定rcc命令将.qrc文件转换成qrc_*.h文件的存放目录
UI_DIR          = $$PWD/Debug/temp/ui   #指定rcc命令将.qrc文件转换成qrc_*.h文件的存放目录
OBJECTS_DIR     = $$PWD/Debug/temp/obj  #指定目标文件(obj)的存放目录

#指定生成的应用程序放置的目录
DESTDIR         = $$PWD/Debug/bin

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

###################################


copy_files.files = $$PWD/Config/config.ini
copy_files.path = $$DESTDIR/Config/
COPIES += copy_files



#### 项目文件目录结构#############
SOURCES += \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    mainwindow.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target


include($$PWD/LIBS/Libraries.pri)
include($$PWD/FormData/FromData.pri)
include($$PWD/DashBoard/DashBoard.pri)
include($$PWD/DB/DB.pri)
include($$PWD/Common/Common.pri)
include($$PWD/Settings/Settings.pri)
include($$PWD/Excel/Excel.pri)

###################################

RESOURCES += \
    res.qrc

DISTFILES += \
    Config/config.ini


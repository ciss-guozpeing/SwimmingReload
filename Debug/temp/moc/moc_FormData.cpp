/****************************************************************************
** Meta object code from reading C++ file 'FormData.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../FormData/FormData.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FormData.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FormData_t {
    QByteArrayData data[14];
    char stringdata0[308];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FormData_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FormData_t qt_meta_stringdata_FormData = {
    {
QT_MOC_LITERAL(0, 0, 8), // "FormData"
QT_MOC_LITERAL(1, 9, 23), // "on_addRecordBtn_clicked"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 24), // "on_viewRecordBtn_clicked"
QT_MOC_LITERAL(4, 59, 23), // "on_openExcelBtn_clicked"
QT_MOC_LITERAL(5, 83, 21), // "on_refreshBtn_clicked"
QT_MOC_LITERAL(6, 105, 26), // "on_exportRecordBtn_clicked"
QT_MOC_LITERAL(7, 132, 25), // "on_exportTemplate_clicked"
QT_MOC_LITERAL(8, 158, 26), // "on_deleteReocrdBtn_clicked"
QT_MOC_LITERAL(9, 185, 30), // "on_calculateSettingBtn_clicked"
QT_MOC_LITERAL(10, 216, 23), // "on_calculateBtn_clicked"
QT_MOC_LITERAL(11, 240, 24), // "on_statisticsBtn_clicked"
QT_MOC_LITERAL(12, 265, 21), // "on_clusterBtn_clicked"
QT_MOC_LITERAL(13, 287, 20) // "on_asSaveBtn_clicked"

    },
    "FormData\0on_addRecordBtn_clicked\0\0"
    "on_viewRecordBtn_clicked\0"
    "on_openExcelBtn_clicked\0on_refreshBtn_clicked\0"
    "on_exportRecordBtn_clicked\0"
    "on_exportTemplate_clicked\0"
    "on_deleteReocrdBtn_clicked\0"
    "on_calculateSettingBtn_clicked\0"
    "on_calculateBtn_clicked\0"
    "on_statisticsBtn_clicked\0on_clusterBtn_clicked\0"
    "on_asSaveBtn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FormData[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08 /* Private */,
       3,    0,   75,    2, 0x08 /* Private */,
       4,    0,   76,    2, 0x08 /* Private */,
       5,    0,   77,    2, 0x08 /* Private */,
       6,    0,   78,    2, 0x08 /* Private */,
       7,    0,   79,    2, 0x08 /* Private */,
       8,    0,   80,    2, 0x08 /* Private */,
       9,    0,   81,    2, 0x08 /* Private */,
      10,    0,   82,    2, 0x08 /* Private */,
      11,    0,   83,    2, 0x08 /* Private */,
      12,    0,   84,    2, 0x08 /* Private */,
      13,    0,   85,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FormData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FormData *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_addRecordBtn_clicked(); break;
        case 1: _t->on_viewRecordBtn_clicked(); break;
        case 2: _t->on_openExcelBtn_clicked(); break;
        case 3: _t->on_refreshBtn_clicked(); break;
        case 4: _t->on_exportRecordBtn_clicked(); break;
        case 5: _t->on_exportTemplate_clicked(); break;
        case 6: _t->on_deleteReocrdBtn_clicked(); break;
        case 7: _t->on_calculateSettingBtn_clicked(); break;
        case 8: _t->on_calculateBtn_clicked(); break;
        case 9: _t->on_statisticsBtn_clicked(); break;
        case 10: _t->on_clusterBtn_clicked(); break;
        case 11: _t->on_asSaveBtn_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject FormData::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_FormData.data,
    qt_meta_data_FormData,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FormData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FormData::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FormData.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int FormData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

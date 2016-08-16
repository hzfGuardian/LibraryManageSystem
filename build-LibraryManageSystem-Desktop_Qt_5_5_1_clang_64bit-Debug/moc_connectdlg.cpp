/****************************************************************************
** Meta object code from reading C++ file 'connectdlg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Library/LibraryManageSystem/connectdlg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'connectdlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_connectdlg_t {
    QByteArrayData data[6];
    char stringdata0[95];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_connectdlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_connectdlg_t qt_meta_stringdata_connectdlg = {
    {
QT_MOC_LITERAL(0, 0, 10), // "connectdlg"
QT_MOC_LITERAL(1, 11, 19), // "on_okButton_clicked"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 21), // "on_exitButton_clicked"
QT_MOC_LITERAL(4, 54, 20), // "on_adminRBtn_clicked"
QT_MOC_LITERAL(5, 75, 19) // "on_userRBtn_clicked"

    },
    "connectdlg\0on_okButton_clicked\0\0"
    "on_exitButton_clicked\0on_adminRBtn_clicked\0"
    "on_userRBtn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_connectdlg[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    0,   36,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void connectdlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        connectdlg *_t = static_cast<connectdlg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_okButton_clicked(); break;
        case 1: _t->on_exitButton_clicked(); break;
        case 2: _t->on_adminRBtn_clicked(); break;
        case 3: _t->on_userRBtn_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject connectdlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_connectdlg.data,
      qt_meta_data_connectdlg,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *connectdlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *connectdlg::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_connectdlg.stringdata0))
        return static_cast<void*>(const_cast< connectdlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int connectdlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

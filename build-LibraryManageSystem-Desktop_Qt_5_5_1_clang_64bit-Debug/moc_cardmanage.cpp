/****************************************************************************
** Meta object code from reading C++ file 'cardmanage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Library/LibraryManageSystem/cardmanage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cardmanage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_cardmanage_t {
    QByteArrayData data[8];
    char stringdata0[120];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cardmanage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cardmanage_t qt_meta_stringdata_cardmanage = {
    {
QT_MOC_LITERAL(0, 0, 10), // "cardmanage"
QT_MOC_LITERAL(1, 11, 17), // "on_TRdBtn_clicked"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 17), // "on_GRdBtn_clicked"
QT_MOC_LITERAL(4, 48, 17), // "on_URdBtn_clicked"
QT_MOC_LITERAL(5, 66, 17), // "on_ORdBtn_clicked"
QT_MOC_LITERAL(6, 84, 17), // "on_addBtn_clicked"
QT_MOC_LITERAL(7, 102, 17) // "on_delBtn_clicked"

    },
    "cardmanage\0on_TRdBtn_clicked\0\0"
    "on_GRdBtn_clicked\0on_URdBtn_clicked\0"
    "on_ORdBtn_clicked\0on_addBtn_clicked\0"
    "on_delBtn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cardmanage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void cardmanage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        cardmanage *_t = static_cast<cardmanage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_TRdBtn_clicked(); break;
        case 1: _t->on_GRdBtn_clicked(); break;
        case 2: _t->on_URdBtn_clicked(); break;
        case 3: _t->on_ORdBtn_clicked(); break;
        case 4: _t->on_addBtn_clicked(); break;
        case 5: _t->on_delBtn_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject cardmanage::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_cardmanage.data,
      qt_meta_data_cardmanage,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *cardmanage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cardmanage::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_cardmanage.stringdata0))
        return static_cast<void*>(const_cast< cardmanage*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int cardmanage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'querywindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Library/LibraryManageSystem/querywindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'querywindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_queryWindow_t {
    QByteArrayData data[11];
    char stringdata0[219];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_queryWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_queryWindow_t qt_meta_stringdata_queryWindow = {
    {
QT_MOC_LITERAL(0, 0, 11), // "queryWindow"
QT_MOC_LITERAL(1, 12, 23), // "on_cateCheckBox_clicked"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 24), // "on_titleCheckBox_clicked"
QT_MOC_LITERAL(4, 62, 23), // "on_yearCheckBox_clicked"
QT_MOC_LITERAL(5, 86, 24), // "on_pressCheckBox_clicked"
QT_MOC_LITERAL(6, 111, 25), // "on_authorCheckBox_clicked"
QT_MOC_LITERAL(7, 137, 24), // "on_priceCheckBox_clicked"
QT_MOC_LITERAL(8, 162, 19), // "on_queryBtn_clicked"
QT_MOC_LITERAL(9, 182, 17), // "on_ascBtn_clicked"
QT_MOC_LITERAL(10, 200, 18) // "on_discBtn_clicked"

    },
    "queryWindow\0on_cateCheckBox_clicked\0"
    "\0on_titleCheckBox_clicked\0"
    "on_yearCheckBox_clicked\0"
    "on_pressCheckBox_clicked\0"
    "on_authorCheckBox_clicked\0"
    "on_priceCheckBox_clicked\0on_queryBtn_clicked\0"
    "on_ascBtn_clicked\0on_discBtn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_queryWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,

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

       0        // eod
};

void queryWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        queryWindow *_t = static_cast<queryWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_cateCheckBox_clicked(); break;
        case 1: _t->on_titleCheckBox_clicked(); break;
        case 2: _t->on_yearCheckBox_clicked(); break;
        case 3: _t->on_pressCheckBox_clicked(); break;
        case 4: _t->on_authorCheckBox_clicked(); break;
        case 5: _t->on_priceCheckBox_clicked(); break;
        case 6: _t->on_queryBtn_clicked(); break;
        case 7: _t->on_ascBtn_clicked(); break;
        case 8: _t->on_discBtn_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject queryWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_queryWindow.data,
      qt_meta_data_queryWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *queryWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *queryWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_queryWindow.stringdata0))
        return static_cast<void*>(const_cast< queryWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int queryWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

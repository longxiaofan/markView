/****************************************************************************
** Meta object code from reading C++ file 'BCSettingIPVSignalWindowLoopConfigDlg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Setting/BCSettingIPVSignalWindowLoopConfigDlg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BCSettingIPVSignalWindowLoopConfigDlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BCSettingIPVSignalWindowLoopConfigDlg_t {
    QByteArrayData data[8];
    char stringdata0[126];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BCSettingIPVSignalWindowLoopConfigDlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BCSettingIPVSignalWindowLoopConfigDlg_t qt_meta_stringdata_BCSettingIPVSignalWindowLoopConfigDlg = {
    {
QT_MOC_LITERAL(0, 0, 37), // "BCSettingIPVSignalWindowLoopC..."
QT_MOC_LITERAL(1, 38, 13), // "onItemChanged"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(4, 70, 4), // "item"
QT_MOC_LITERAL(5, 75, 6), // "column"
QT_MOC_LITERAL(6, 82, 23), // "on_m_pCancelBtn_clicked"
QT_MOC_LITERAL(7, 106, 19) // "on_m_pOKBtn_clicked"

    },
    "BCSettingIPVSignalWindowLoopConfigDlg\0"
    "onItemChanged\0\0QTreeWidgetItem*\0item\0"
    "column\0on_m_pCancelBtn_clicked\0"
    "on_m_pOKBtn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BCSettingIPVSignalWindowLoopConfigDlg[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x08 /* Private */,
       6,    0,   34,    2, 0x08 /* Private */,
       7,    0,   35,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void BCSettingIPVSignalWindowLoopConfigDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BCSettingIPVSignalWindowLoopConfigDlg *_t = static_cast<BCSettingIPVSignalWindowLoopConfigDlg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->on_m_pCancelBtn_clicked(); break;
        case 2: _t->on_m_pOKBtn_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject BCSettingIPVSignalWindowLoopConfigDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_BCSettingIPVSignalWindowLoopConfigDlg.data,
      qt_meta_data_BCSettingIPVSignalWindowLoopConfigDlg,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *BCSettingIPVSignalWindowLoopConfigDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BCSettingIPVSignalWindowLoopConfigDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BCSettingIPVSignalWindowLoopConfigDlg.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int BCSettingIPVSignalWindowLoopConfigDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'FloorVisual.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "TileCalculator/TilePicturesAreas/FloorVisual.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FloorVisual.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FloorVisualArea_t {
    QByteArrayData data[10];
    char stringdata0[62];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FloorVisualArea_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FloorVisualArea_t qt_meta_stringdata_FloorVisualArea = {
    {
QT_MOC_LITERAL(0, 0, 15), // "FloorVisualArea"
QT_MOC_LITERAL(1, 16, 5), // "setup"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 1), // "n"
QT_MOC_LITERAL(4, 25, 1), // "o"
QT_MOC_LITERAL(5, 27, 7), // "inColor"
QT_MOC_LITERAL(6, 35, 8), // "outColor"
QT_MOC_LITERAL(7, 44, 5), // "clear"
QT_MOC_LITERAL(8, 50, 5), // "reset"
QT_MOC_LITERAL(9, 56, 5) // "floor"

    },
    "FloorVisualArea\0setup\0\0n\0o\0inColor\0"
    "outColor\0clear\0reset\0floor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FloorVisualArea[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    4,   34,    2, 0x0a /* Public */,
       7,    0,   43,    2, 0x0a /* Public */,
       8,    0,   44,    2, 0x0a /* Public */,
       9,    0,   45,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Int, QMetaType::QColor, QMetaType::QColor,    3,    4,    5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FloorVisualArea::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FloorVisualArea *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setup((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QColor(*)>(_a[3])),(*reinterpret_cast< QColor(*)>(_a[4]))); break;
        case 1: _t->clear(); break;
        case 2: _t->reset(); break;
        case 3: _t->floor(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FloorVisualArea::staticMetaObject = { {
    QMetaObject::SuperData::link<QQuickItem::staticMetaObject>(),
    qt_meta_stringdata_FloorVisualArea.data,
    qt_meta_data_FloorVisualArea,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FloorVisualArea::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FloorVisualArea::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FloorVisualArea.stringdata0))
        return static_cast<void*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int FloorVisualArea::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE

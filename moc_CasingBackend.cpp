/****************************************************************************
** Meta object code from reading C++ file 'CasingBackend.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "MalamuteCore/CasingBackend.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CasingBackend.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CasingBackend_t {
    QByteArrayData data[30];
    char stringdata0[458];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CasingBackend_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CasingBackend_t qt_meta_stringdata_CasingBackend = {
    {
QT_MOC_LITERAL(0, 0, 13), // "CasingBackend"
QT_MOC_LITERAL(1, 14, 14), // "sendDataToIdea"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 25), // "std::shared_ptr<DataType>"
QT_MOC_LITERAL(4, 56, 8), // "dataType"
QT_MOC_LITERAL(5, 65, 10), // "PlugNumber"
QT_MOC_LITERAL(6, 76, 11), // "inPlugIndex"
QT_MOC_LITERAL(7, 88, 9), // "onNewData"
QT_MOC_LITERAL(8, 98, 10), // "plugNumber"
QT_MOC_LITERAL(9, 109, 17), // "onNewDataAllPlugs"
QT_MOC_LITERAL(10, 127, 19), // "onClearDataAllPlugs"
QT_MOC_LITERAL(11, 147, 15), // "sendDataNewWire"
QT_MOC_LITERAL(12, 163, 2), // "id"
QT_MOC_LITERAL(13, 166, 15), // "onStatusChanged"
QT_MOC_LITERAL(14, 182, 19), // "onStartSpinningGear"
QT_MOC_LITERAL(15, 202, 18), // "onStopSpinningGear"
QT_MOC_LITERAL(16, 221, 20), // "onSetContextProperty"
QT_MOC_LITERAL(17, 242, 4), // "name"
QT_MOC_LITERAL(18, 247, 3), // "obj"
QT_MOC_LITERAL(19, 251, 21), // "onReportParamsChanged"
QT_MOC_LITERAL(20, 273, 9), // "oldParams"
QT_MOC_LITERAL(21, 283, 9), // "newParams"
QT_MOC_LITERAL(22, 293, 17), // "onDisconnectPlugs"
QT_MOC_LITERAL(23, 311, 28), // "std::vector<UnplugWiresInfo>"
QT_MOC_LITERAL(24, 340, 11), // "unplugWires"
QT_MOC_LITERAL(25, 352, 26), // "onInPortLabelColorsChanged"
QT_MOC_LITERAL(26, 379, 13), // "QList<QColor>"
QT_MOC_LITERAL(27, 393, 17), // "inPortLabelColors"
QT_MOC_LITERAL(28, 411, 27), // "onOutPortLabelColorsChanged"
QT_MOC_LITERAL(29, 439, 18) // "outPortLabelColors"

    },
    "CasingBackend\0sendDataToIdea\0\0"
    "std::shared_ptr<DataType>\0dataType\0"
    "PlugNumber\0inPlugIndex\0onNewData\0"
    "plugNumber\0onNewDataAllPlugs\0"
    "onClearDataAllPlugs\0sendDataNewWire\0"
    "id\0onStatusChanged\0onStartSpinningGear\0"
    "onStopSpinningGear\0onSetContextProperty\0"
    "name\0obj\0onReportParamsChanged\0oldParams\0"
    "newParams\0onDisconnectPlugs\0"
    "std::vector<UnplugWiresInfo>\0unplugWires\0"
    "onInPortLabelColorsChanged\0QList<QColor>\0"
    "inPortLabelColors\0onOutPortLabelColorsChanged\0"
    "outPortLabelColors"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CasingBackend[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   79,    2, 0x0a /* Public */,
       7,    1,   84,    2, 0x0a /* Public */,
       9,    0,   87,    2, 0x0a /* Public */,
      10,    0,   88,    2, 0x0a /* Public */,
      11,    1,   89,    2, 0x0a /* Public */,
      13,    0,   92,    2, 0x0a /* Public */,
      14,    0,   93,    2, 0x0a /* Public */,
      15,    0,   94,    2, 0x0a /* Public */,
      16,    2,   95,    2, 0x0a /* Public */,
      19,    2,  100,    2, 0x0a /* Public */,
      22,    1,  105,    2, 0x0a /* Public */,
      25,    1,  108,    2, 0x0a /* Public */,
      28,    1,  111,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 5,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUuid,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QObjectStar,   17,   18,
    QMetaType::Void, QMetaType::QJsonObject, QMetaType::QJsonObject,   20,   21,
    QMetaType::Void, 0x80000000 | 23,   24,
    QMetaType::Void, 0x80000000 | 26,   27,
    QMetaType::Void, 0x80000000 | 26,   29,

       0        // eod
};

void CasingBackend::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CasingBackend *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendDataToIdea((*reinterpret_cast< std::shared_ptr<DataType>(*)>(_a[1])),(*reinterpret_cast< PlugNumber(*)>(_a[2]))); break;
        case 1: _t->onNewData((*reinterpret_cast< PlugNumber(*)>(_a[1]))); break;
        case 2: _t->onNewDataAllPlugs(); break;
        case 3: _t->onClearDataAllPlugs(); break;
        case 4: _t->sendDataNewWire((*reinterpret_cast< QUuid(*)>(_a[1]))); break;
        case 5: _t->onStatusChanged(); break;
        case 6: _t->onStartSpinningGear(); break;
        case 7: _t->onStopSpinningGear(); break;
        case 8: _t->onSetContextProperty((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2]))); break;
        case 9: _t->onReportParamsChanged((*reinterpret_cast< QJsonObject(*)>(_a[1])),(*reinterpret_cast< QJsonObject(*)>(_a[2]))); break;
        case 10: _t->onDisconnectPlugs((*reinterpret_cast< std::vector<UnplugWiresInfo>(*)>(_a[1]))); break;
        case 11: _t->onInPortLabelColorsChanged((*reinterpret_cast< QList<QColor>(*)>(_a[1]))); break;
        case 12: _t->onOutPortLabelColorsChanged((*reinterpret_cast< QList<QColor>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QColor> >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QColor> >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CasingBackend::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CasingBackend.data,
    qt_meta_data_CasingBackend,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CasingBackend::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CasingBackend::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CasingBackend.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int CasingBackend::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'Wire.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "MalamuteCore/Wire.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Wire.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Wire_t {
    QByteArrayData data[27];
    char stringdata0[348];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Wire_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Wire_t qt_meta_stringdata_Wire = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Wire"
QT_MOC_LITERAL(1, 5, 15), // "selectedChanged"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 8), // "selected"
QT_MOC_LITERAL(4, 31, 15), // "draggingChanged"
QT_MOC_LITERAL(5, 47, 8), // "dragging"
QT_MOC_LITERAL(6, 56, 14), // "inPointChanged"
QT_MOC_LITERAL(7, 71, 7), // "inPoint"
QT_MOC_LITERAL(8, 79, 15), // "outPointChanged"
QT_MOC_LITERAL(9, 95, 8), // "outPoint"
QT_MOC_LITERAL(10, 104, 20), // "controlPoint1Changed"
QT_MOC_LITERAL(11, 125, 13), // "controlPoint1"
QT_MOC_LITERAL(12, 139, 20), // "controlPoint2Changed"
QT_MOC_LITERAL(13, 160, 13), // "controlPoint2"
QT_MOC_LITERAL(14, 174, 12), // "colorChanged"
QT_MOC_LITERAL(15, 187, 5), // "color"
QT_MOC_LITERAL(16, 193, 19), // "transmittingChanged"
QT_MOC_LITERAL(17, 213, 12), // "transmitting"
QT_MOC_LITERAL(18, 226, 11), // "setSelected"
QT_MOC_LITERAL(19, 238, 11), // "setDragging"
QT_MOC_LITERAL(20, 250, 10), // "setInPoint"
QT_MOC_LITERAL(21, 261, 11), // "setOutPoint"
QT_MOC_LITERAL(22, 273, 16), // "setControlPoint1"
QT_MOC_LITERAL(23, 290, 16), // "setControlPoint2"
QT_MOC_LITERAL(24, 307, 8), // "setColor"
QT_MOC_LITERAL(25, 316, 15), // "setTransmitting"
QT_MOC_LITERAL(26, 332, 15) // "endTransmitting"

    },
    "Wire\0selectedChanged\0\0selected\0"
    "draggingChanged\0dragging\0inPointChanged\0"
    "inPoint\0outPointChanged\0outPoint\0"
    "controlPoint1Changed\0controlPoint1\0"
    "controlPoint2Changed\0controlPoint2\0"
    "colorChanged\0color\0transmittingChanged\0"
    "transmitting\0setSelected\0setDragging\0"
    "setInPoint\0setOutPoint\0setControlPoint1\0"
    "setControlPoint2\0setColor\0setTransmitting\0"
    "endTransmitting"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Wire[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       8,  148, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   99,    2, 0x06 /* Public */,
       4,    1,  102,    2, 0x06 /* Public */,
       6,    1,  105,    2, 0x06 /* Public */,
       8,    1,  108,    2, 0x06 /* Public */,
      10,    1,  111,    2, 0x06 /* Public */,
      12,    1,  114,    2, 0x06 /* Public */,
      14,    1,  117,    2, 0x06 /* Public */,
      16,    1,  120,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      18,    1,  123,    2, 0x0a /* Public */,
      19,    1,  126,    2, 0x0a /* Public */,
      20,    1,  129,    2, 0x0a /* Public */,
      21,    1,  132,    2, 0x0a /* Public */,
      22,    1,  135,    2, 0x0a /* Public */,
      23,    1,  138,    2, 0x0a /* Public */,
      24,    1,  141,    2, 0x0a /* Public */,
      25,    1,  144,    2, 0x0a /* Public */,
      26,    0,  147,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::QPointF,    7,
    QMetaType::Void, QMetaType::QPointF,    9,
    QMetaType::Void, QMetaType::QPointF,   11,
    QMetaType::Void, QMetaType::QPointF,   13,
    QMetaType::Void, QMetaType::QColor,   15,
    QMetaType::Void, QMetaType::Bool,   17,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::QPointF,    7,
    QMetaType::Void, QMetaType::QPointF,    9,
    QMetaType::Void, QMetaType::QPointF,   11,
    QMetaType::Void, QMetaType::QPointF,   13,
    QMetaType::Void, QMetaType::QColor,   15,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::Bool, 0x00495103,
       5, QMetaType::Bool, 0x00495103,
      17, QMetaType::Bool, 0x00495103,
       7, QMetaType::QPointF, 0x00495103,
       9, QMetaType::QPointF, 0x00495103,
      11, QMetaType::QPointF, 0x00495103,
      13, QMetaType::QPointF, 0x00495103,
      15, QMetaType::QColor, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       7,
       2,
       3,
       4,
       5,
       6,

       0        // eod
};

void Wire::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Wire *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selectedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->draggingChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->inPointChanged((*reinterpret_cast< QPointF(*)>(_a[1]))); break;
        case 3: _t->outPointChanged((*reinterpret_cast< QPointF(*)>(_a[1]))); break;
        case 4: _t->controlPoint1Changed((*reinterpret_cast< QPointF(*)>(_a[1]))); break;
        case 5: _t->controlPoint2Changed((*reinterpret_cast< QPointF(*)>(_a[1]))); break;
        case 6: _t->colorChanged((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 7: _t->transmittingChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->setSelected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->setDragging((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->setInPoint((*reinterpret_cast< QPointF(*)>(_a[1]))); break;
        case 11: _t->setOutPoint((*reinterpret_cast< QPointF(*)>(_a[1]))); break;
        case 12: _t->setControlPoint1((*reinterpret_cast< QPointF(*)>(_a[1]))); break;
        case 13: _t->setControlPoint2((*reinterpret_cast< QPointF(*)>(_a[1]))); break;
        case 14: _t->setColor((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 15: _t->setTransmitting((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->endTransmitting(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Wire::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Wire::selectedChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Wire::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Wire::draggingChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Wire::*)(QPointF );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Wire::inPointChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Wire::*)(QPointF );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Wire::outPointChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Wire::*)(QPointF );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Wire::controlPoint1Changed)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Wire::*)(QPointF );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Wire::controlPoint2Changed)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Wire::*)(QColor );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Wire::colorChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Wire::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Wire::transmittingChanged)) {
                *result = 7;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Wire *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->selected(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->dragging(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->transmitting(); break;
        case 3: *reinterpret_cast< QPointF*>(_v) = _t->inPoint(); break;
        case 4: *reinterpret_cast< QPointF*>(_v) = _t->outPoint(); break;
        case 5: *reinterpret_cast< QPointF*>(_v) = _t->controlPoint1(); break;
        case 6: *reinterpret_cast< QPointF*>(_v) = _t->controlPoint2(); break;
        case 7: *reinterpret_cast< QColor*>(_v) = _t->color(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Wire *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSelected(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setDragging(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setTransmitting(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setInPoint(*reinterpret_cast< QPointF*>(_v)); break;
        case 4: _t->setOutPoint(*reinterpret_cast< QPointF*>(_v)); break;
        case 5: _t->setControlPoint1(*reinterpret_cast< QPointF*>(_v)); break;
        case 6: _t->setControlPoint2(*reinterpret_cast< QPointF*>(_v)); break;
        case 7: _t->setColor(*reinterpret_cast< QColor*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Wire::staticMetaObject = { {
    QMetaObject::SuperData::link<QQuickItem::staticMetaObject>(),
    qt_meta_stringdata_Wire.data,
    qt_meta_data_Wire,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Wire::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Wire::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Wire.stringdata0))
        return static_cast<void*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int Wire::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Wire::selectedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Wire::draggingChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Wire::inPointChanged(QPointF _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Wire::outPointChanged(QPointF _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Wire::controlPoint1Changed(QPointF _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Wire::controlPoint2Changed(QPointF _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Wire::colorChanged(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Wire::transmittingChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

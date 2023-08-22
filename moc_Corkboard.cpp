/****************************************************************************
** Meta object code from reading C++ file 'Corkboard.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "MalamuteCore/Corkboard.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Corkboard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Corkboard_t {
    QByteArrayData data[53];
    char stringdata0[725];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Corkboard_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Corkboard_t qt_meta_stringdata_Corkboard = {
    {
QT_MOC_LITERAL(0, 0, 9), // "Corkboard"
QT_MOC_LITERAL(1, 10, 16), // "selectingChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 9), // "selecting"
QT_MOC_LITERAL(4, 38, 19), // "selectingBoxChanged"
QT_MOC_LITERAL(5, 58, 12), // "selectingBox"
QT_MOC_LITERAL(6, 71, 24), // "contextMenuActiveChanged"
QT_MOC_LITERAL(7, 96, 17), // "contextMenuActive"
QT_MOC_LITERAL(8, 114, 20), // "contextMenuPtChanged"
QT_MOC_LITERAL(9, 135, 13), // "contextMenuPt"
QT_MOC_LITERAL(10, 149, 23), // "casingMenuActiveChanged"
QT_MOC_LITERAL(11, 173, 16), // "casingMenuActive"
QT_MOC_LITERAL(12, 190, 19), // "casingMenuPtChanged"
QT_MOC_LITERAL(13, 210, 12), // "casingMenuPt"
QT_MOC_LITERAL(14, 223, 19), // "headerHeightChanged"
QT_MOC_LITERAL(15, 243, 12), // "headerHeight"
QT_MOC_LITERAL(16, 256, 12), // "setSelecting"
QT_MOC_LITERAL(17, 269, 15), // "setSelectingBox"
QT_MOC_LITERAL(18, 285, 20), // "setContextMenuActive"
QT_MOC_LITERAL(19, 306, 16), // "setContextMenuPt"
QT_MOC_LITERAL(20, 323, 19), // "setCasingMenuActive"
QT_MOC_LITERAL(21, 343, 15), // "setCasingMenuPt"
QT_MOC_LITERAL(22, 359, 15), // "setHeaderHeight"
QT_MOC_LITERAL(23, 375, 10), // "createIdea"
QT_MOC_LITERAL(24, 386, 4), // "name"
QT_MOC_LITERAL(25, 391, 5), // "point"
QT_MOC_LITERAL(26, 397, 4), // "undo"
QT_MOC_LITERAL(27, 402, 4), // "redo"
QT_MOC_LITERAL(28, 407, 3), // "cut"
QT_MOC_LITERAL(29, 411, 4), // "copy"
QT_MOC_LITERAL(30, 416, 5), // "paste"
QT_MOC_LITERAL(31, 422, 9), // "duplicate"
QT_MOC_LITERAL(32, 432, 15), // "deleteSelection"
QT_MOC_LITERAL(33, 448, 9), // "deleteAll"
QT_MOC_LITERAL(34, 458, 11), // "deselectAll"
QT_MOC_LITERAL(35, 470, 9), // "selectAll"
QT_MOC_LITERAL(36, 480, 8), // "saveData"
QT_MOC_LITERAL(37, 489, 8), // "loadData"
QT_MOC_LITERAL(38, 498, 4), // "data"
QT_MOC_LITERAL(39, 503, 22), // "setVisibleWindowParams"
QT_MOC_LITERAL(40, 526, 5), // "width"
QT_MOC_LITERAL(41, 532, 6), // "height"
QT_MOC_LITERAL(42, 539, 10), // "centerView"
QT_MOC_LITERAL(43, 550, 10), // "resetScale"
QT_MOC_LITERAL(44, 561, 6), // "zoomIn"
QT_MOC_LITERAL(45, 568, 7), // "zoomOut"
QT_MOC_LITERAL(46, 576, 22), // "minimizeFromCasingMenu"
QT_MOC_LITERAL(47, 599, 26), // "showControlsFromCasingMenu"
QT_MOC_LITERAL(48, 626, 22), // "setColorFromCasingMenu"
QT_MOC_LITERAL(49, 649, 5), // "color"
QT_MOC_LITERAL(50, 655, 20), // "deleteFromCasingMenu"
QT_MOC_LITERAL(51, 676, 23), // "copyStateFromCasingMenu"
QT_MOC_LITERAL(52, 700, 24) // "pasteStateFromCasingMenu"

    },
    "Corkboard\0selectingChanged\0\0selecting\0"
    "selectingBoxChanged\0selectingBox\0"
    "contextMenuActiveChanged\0contextMenuActive\0"
    "contextMenuPtChanged\0contextMenuPt\0"
    "casingMenuActiveChanged\0casingMenuActive\0"
    "casingMenuPtChanged\0casingMenuPt\0"
    "headerHeightChanged\0headerHeight\0"
    "setSelecting\0setSelectingBox\0"
    "setContextMenuActive\0setContextMenuPt\0"
    "setCasingMenuActive\0setCasingMenuPt\0"
    "setHeaderHeight\0createIdea\0name\0point\0"
    "undo\0redo\0cut\0copy\0paste\0duplicate\0"
    "deleteSelection\0deleteAll\0deselectAll\0"
    "selectAll\0saveData\0loadData\0data\0"
    "setVisibleWindowParams\0width\0height\0"
    "centerView\0resetScale\0zoomIn\0zoomOut\0"
    "minimizeFromCasingMenu\0"
    "showControlsFromCasingMenu\0"
    "setColorFromCasingMenu\0color\0"
    "deleteFromCasingMenu\0copyStateFromCasingMenu\0"
    "pasteStateFromCasingMenu"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Corkboard[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      39,   14, // methods
       7,  290, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  209,    2, 0x06 /* Public */,
       4,    1,  212,    2, 0x06 /* Public */,
       6,    1,  215,    2, 0x06 /* Public */,
       8,    1,  218,    2, 0x06 /* Public */,
      10,    1,  221,    2, 0x06 /* Public */,
      12,    1,  224,    2, 0x06 /* Public */,
      14,    1,  227,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    1,  230,    2, 0x0a /* Public */,
      17,    1,  233,    2, 0x0a /* Public */,
      18,    1,  236,    2, 0x0a /* Public */,
      19,    1,  239,    2, 0x0a /* Public */,
      20,    1,  242,    2, 0x0a /* Public */,
      21,    1,  245,    2, 0x0a /* Public */,
      22,    1,  248,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      23,    2,  251,    2, 0x02 /* Public */,
      23,    1,  256,    2, 0x22 /* Public | MethodCloned */,
      26,    0,  259,    2, 0x02 /* Public */,
      27,    0,  260,    2, 0x02 /* Public */,
      28,    0,  261,    2, 0x02 /* Public */,
      29,    0,  262,    2, 0x02 /* Public */,
      30,    0,  263,    2, 0x02 /* Public */,
      31,    0,  264,    2, 0x02 /* Public */,
      32,    0,  265,    2, 0x02 /* Public */,
      33,    0,  266,    2, 0x02 /* Public */,
      34,    0,  267,    2, 0x02 /* Public */,
      35,    0,  268,    2, 0x02 /* Public */,
      36,    0,  269,    2, 0x02 /* Public */,
      37,    1,  270,    2, 0x02 /* Public */,
      39,    2,  273,    2, 0x02 /* Public */,
      42,    0,  278,    2, 0x02 /* Public */,
      43,    0,  279,    2, 0x02 /* Public */,
      44,    0,  280,    2, 0x02 /* Public */,
      45,    0,  281,    2, 0x02 /* Public */,
      46,    0,  282,    2, 0x02 /* Public */,
      47,    0,  283,    2, 0x02 /* Public */,
      48,    1,  284,    2, 0x02 /* Public */,
      50,    0,  287,    2, 0x02 /* Public */,
      51,    0,  288,    2, 0x02 /* Public */,
      52,    0,  289,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::QRectF,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::QPointF,    9,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::QPointF,   13,
    QMetaType::Void, QMetaType::Int,   15,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::QRectF,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::QPointF,    9,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::QPointF,   13,
    QMetaType::Void, QMetaType::Int,   15,

 // methods: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QPointF,   24,   25,
    QMetaType::Void, QMetaType::QString,   24,
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
    QMetaType::QByteArray,
    QMetaType::Void, QMetaType::QByteArray,   38,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   40,   41,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   49,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::Bool, 0x00495103,
       5, QMetaType::QRectF, 0x00495103,
       7, QMetaType::Bool, 0x00495103,
       9, QMetaType::QPointF, 0x00495103,
      11, QMetaType::Bool, 0x00495103,
      13, QMetaType::QPointF, 0x00495103,
      15, QMetaType::Int, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,

       0        // eod
};

void Corkboard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Corkboard *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selectingChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->selectingBoxChanged((*reinterpret_cast< QRectF(*)>(_a[1]))); break;
        case 2: _t->contextMenuActiveChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->contextMenuPtChanged((*reinterpret_cast< QPointF(*)>(_a[1]))); break;
        case 4: _t->casingMenuActiveChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->casingMenuPtChanged((*reinterpret_cast< QPointF(*)>(_a[1]))); break;
        case 6: _t->headerHeightChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->setSelecting((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->setSelectingBox((*reinterpret_cast< QRectF(*)>(_a[1]))); break;
        case 9: _t->setContextMenuActive((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->setContextMenuPt((*reinterpret_cast< QPointF(*)>(_a[1]))); break;
        case 11: _t->setCasingMenuActive((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->setCasingMenuPt((*reinterpret_cast< QPointF(*)>(_a[1]))); break;
        case 13: _t->setHeaderHeight((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->createIdea((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QPointF(*)>(_a[2]))); break;
        case 15: _t->createIdea((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 16: _t->undo(); break;
        case 17: _t->redo(); break;
        case 18: _t->cut(); break;
        case 19: _t->copy(); break;
        case 20: _t->paste(); break;
        case 21: _t->duplicate(); break;
        case 22: _t->deleteSelection(); break;
        case 23: _t->deleteAll(); break;
        case 24: _t->deselectAll(); break;
        case 25: _t->selectAll(); break;
        case 26: { QByteArray _r = _t->saveData();
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = std::move(_r); }  break;
        case 27: _t->loadData((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 28: _t->setVisibleWindowParams((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 29: _t->centerView(); break;
        case 30: _t->resetScale(); break;
        case 31: _t->zoomIn(); break;
        case 32: _t->zoomOut(); break;
        case 33: _t->minimizeFromCasingMenu(); break;
        case 34: _t->showControlsFromCasingMenu(); break;
        case 35: _t->setColorFromCasingMenu((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 36: _t->deleteFromCasingMenu(); break;
        case 37: _t->copyStateFromCasingMenu(); break;
        case 38: _t->pasteStateFromCasingMenu(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Corkboard::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Corkboard::selectingChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Corkboard::*)(QRectF );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Corkboard::selectingBoxChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Corkboard::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Corkboard::contextMenuActiveChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Corkboard::*)(QPointF );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Corkboard::contextMenuPtChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Corkboard::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Corkboard::casingMenuActiveChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Corkboard::*)(QPointF );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Corkboard::casingMenuPtChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Corkboard::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Corkboard::headerHeightChanged)) {
                *result = 6;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Corkboard *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->selecting(); break;
        case 1: *reinterpret_cast< QRectF*>(_v) = _t->selectingBox(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->contextMenuActive(); break;
        case 3: *reinterpret_cast< QPointF*>(_v) = _t->contextMenuPt(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->casingMenuActive(); break;
        case 5: *reinterpret_cast< QPointF*>(_v) = _t->casingMenuPt(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->headerHeight(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Corkboard *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSelecting(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setSelectingBox(*reinterpret_cast< QRectF*>(_v)); break;
        case 2: _t->setContextMenuActive(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setContextMenuPt(*reinterpret_cast< QPointF*>(_v)); break;
        case 4: _t->setCasingMenuActive(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setCasingMenuPt(*reinterpret_cast< QPointF*>(_v)); break;
        case 6: _t->setHeaderHeight(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Corkboard::staticMetaObject = { {
    QMetaObject::SuperData::link<QQuickItem::staticMetaObject>(),
    qt_meta_stringdata_Corkboard.data,
    qt_meta_data_Corkboard,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Corkboard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Corkboard::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Corkboard.stringdata0))
        return static_cast<void*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int Corkboard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 39)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 39;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 39)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 39;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Corkboard::selectingChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Corkboard::selectingBoxChanged(QRectF _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Corkboard::contextMenuActiveChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Corkboard::contextMenuPtChanged(QPointF _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Corkboard::casingMenuActiveChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Corkboard::casingMenuPtChanged(QPointF _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Corkboard::headerHeightChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

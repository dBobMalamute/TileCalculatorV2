/****************************************************************************
** Meta object code from reading C++ file 'SliderNumberInputIdea.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "Calculator/SliderNumberInputIdea.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SliderNumberInputIdea.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SliderNumberInputIdea_t {
    QByteArrayData data[15];
    char stringdata0[178];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SliderNumberInputIdea_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SliderNumberInputIdea_t qt_meta_stringdata_SliderNumberInputIdea = {
    {
QT_MOC_LITERAL(0, 0, 21), // "SliderNumberInputIdea"
QT_MOC_LITERAL(1, 22, 13), // "numberChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 14), // "upLimitChanged"
QT_MOC_LITERAL(4, 52, 15), // "lowLimitChanged"
QT_MOC_LITERAL(5, 68, 9), // "setNumber"
QT_MOC_LITERAL(6, 78, 6), // "number"
QT_MOC_LITERAL(7, 85, 10), // "setUpLimit"
QT_MOC_LITERAL(8, 96, 7), // "upLimit"
QT_MOC_LITERAL(9, 104, 11), // "setLowLimit"
QT_MOC_LITERAL(10, 116, 8), // "lowLimit"
QT_MOC_LITERAL(11, 125, 17), // "setNumberBySlider"
QT_MOC_LITERAL(12, 143, 5), // "value"
QT_MOC_LITERAL(13, 149, 18), // "updateOutputNumber"
QT_MOC_LITERAL(14, 168, 9) // "sliderPos"

    },
    "SliderNumberInputIdea\0numberChanged\0"
    "\0upLimitChanged\0lowLimitChanged\0"
    "setNumber\0number\0setUpLimit\0upLimit\0"
    "setLowLimit\0lowLimit\0setNumberBySlider\0"
    "value\0updateOutputNumber\0sliderPos"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SliderNumberInputIdea[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,
       3,    0,   75,    2, 0x06 /* Public */,
       4,    0,   76,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   77,    2, 0x0a /* Public */,
       7,    1,   80,    2, 0x0a /* Public */,
       9,    1,   83,    2, 0x0a /* Public */,
      11,    1,   86,    2, 0x0a /* Public */,
      13,    0,   89,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       6,    0,   90,    2, 0x02 /* Public */,
       8,    0,   91,    2, 0x02 /* Public */,
      10,    0,   92,    2, 0x02 /* Public */,
      14,    0,   93,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    6,
    QMetaType::Void, QMetaType::Double,    8,
    QMetaType::Void, QMetaType::Double,   10,
    QMetaType::Void, QMetaType::Double,   12,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Double,
    QMetaType::Double,
    QMetaType::Double,
    QMetaType::Double,

       0        // eod
};

void SliderNumberInputIdea::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SliderNumberInputIdea *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->numberChanged(); break;
        case 1: _t->upLimitChanged(); break;
        case 2: _t->lowLimitChanged(); break;
        case 3: _t->setNumber((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->setUpLimit((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->setLowLimit((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->setNumberBySlider((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->updateOutputNumber(); break;
        case 8: { double _r = _t->number();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 9: { double _r = _t->upLimit();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 10: { double _r = _t->lowLimit();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 11: { double _r = _t->sliderPos();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SliderNumberInputIdea::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SliderNumberInputIdea::numberChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SliderNumberInputIdea::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SliderNumberInputIdea::upLimitChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SliderNumberInputIdea::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SliderNumberInputIdea::lowLimitChanged)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SliderNumberInputIdea::staticMetaObject = { {
    QMetaObject::SuperData::link<Idea::staticMetaObject>(),
    qt_meta_stringdata_SliderNumberInputIdea.data,
    qt_meta_data_SliderNumberInputIdea,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SliderNumberInputIdea::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SliderNumberInputIdea::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SliderNumberInputIdea.stringdata0))
        return static_cast<void*>(this);
    return Idea::qt_metacast(_clname);
}

int SliderNumberInputIdea::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Idea::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void SliderNumberInputIdea::numberChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SliderNumberInputIdea::upLimitChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void SliderNumberInputIdea::lowLimitChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

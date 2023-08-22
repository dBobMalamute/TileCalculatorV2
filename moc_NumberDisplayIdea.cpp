/****************************************************************************
** Meta object code from reading C++ file 'NumberDisplayIdea.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "Calculator/NumberDisplayIdea.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NumberDisplayIdea.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NumberDisplayIdea_t {
    QByteArrayData data[5];
    char stringdata0[52];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NumberDisplayIdea_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NumberDisplayIdea_t qt_meta_stringdata_NumberDisplayIdea = {
    {
QT_MOC_LITERAL(0, 0, 17), // "NumberDisplayIdea"
QT_MOC_LITERAL(1, 18, 13), // "displayNumber"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 5), // "value"
QT_MOC_LITERAL(4, 39, 12) // "clearDisplay"

    },
    "NumberDisplayIdea\0displayNumber\0\0value\0"
    "clearDisplay"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NumberDisplayIdea[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       4,    0,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,

       0        // eod
};

void NumberDisplayIdea::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NumberDisplayIdea *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->displayNumber((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->clearDisplay(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (NumberDisplayIdea::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NumberDisplayIdea::displayNumber)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (NumberDisplayIdea::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NumberDisplayIdea::clearDisplay)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject NumberDisplayIdea::staticMetaObject = { {
    QMetaObject::SuperData::link<Idea::staticMetaObject>(),
    qt_meta_stringdata_NumberDisplayIdea.data,
    qt_meta_data_NumberDisplayIdea,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *NumberDisplayIdea::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NumberDisplayIdea::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NumberDisplayIdea.stringdata0))
        return static_cast<void*>(this);
    return Idea::qt_metacast(_clname);
}

int NumberDisplayIdea::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Idea::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void NumberDisplayIdea::displayNumber(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void NumberDisplayIdea::clearDisplay()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'OneToOneIdeaTemplate.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "Calculator/IdeaTemplates/OneToOneIdeaTemplate.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'OneToOneIdeaTemplate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OneToOneIdeaTemplate_t {
    QByteArrayData data[6];
    char stringdata0[49];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OneToOneIdeaTemplate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OneToOneIdeaTemplate_t qt_meta_stringdata_OneToOneIdeaTemplate = {
    {
QT_MOC_LITERAL(0, 0, 20), // "OneToOneIdeaTemplate"
QT_MOC_LITERAL(1, 21, 7), // "display"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 5), // "input"
QT_MOC_LITERAL(4, 36, 6), // "output"
QT_MOC_LITERAL(5, 43, 5) // "clear"

    },
    "OneToOneIdeaTemplate\0display\0\0input\0"
    "output\0clear"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OneToOneIdeaTemplate[] = {

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
       1,    2,   24,    2, 0x06 /* Public */,
       5,    0,   29,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    3,    4,
    QMetaType::Void,

       0        // eod
};

void OneToOneIdeaTemplate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OneToOneIdeaTemplate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->display((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 1: _t->clear(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (OneToOneIdeaTemplate::*)(double , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OneToOneIdeaTemplate::display)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (OneToOneIdeaTemplate::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OneToOneIdeaTemplate::clear)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OneToOneIdeaTemplate::staticMetaObject = { {
    QMetaObject::SuperData::link<Idea::staticMetaObject>(),
    qt_meta_stringdata_OneToOneIdeaTemplate.data,
    qt_meta_data_OneToOneIdeaTemplate,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OneToOneIdeaTemplate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OneToOneIdeaTemplate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OneToOneIdeaTemplate.stringdata0))
        return static_cast<void*>(this);
    return Idea::qt_metacast(_clname);
}

int OneToOneIdeaTemplate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void OneToOneIdeaTemplate::display(double _t1, double _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OneToOneIdeaTemplate::clear()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

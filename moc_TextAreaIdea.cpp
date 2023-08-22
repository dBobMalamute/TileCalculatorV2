/****************************************************************************
** Meta object code from reading C++ file 'TextAreaIdea.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "Utilities/TextAreaIdea.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TextAreaIdea.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TextAreaIdea_t {
    QByteArrayData data[11];
    char stringdata0[101];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TextAreaIdea_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TextAreaIdea_t qt_meta_stringdata_TextAreaIdea = {
    {
QT_MOC_LITERAL(0, 0, 12), // "TextAreaIdea"
QT_MOC_LITERAL(1, 13, 11), // "textChanged"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 15), // "fontSizeChanged"
QT_MOC_LITERAL(4, 42, 8), // "fontSize"
QT_MOC_LITERAL(5, 51, 11), // "boldChanged"
QT_MOC_LITERAL(6, 63, 4), // "bold"
QT_MOC_LITERAL(7, 68, 7), // "setText"
QT_MOC_LITERAL(8, 76, 4), // "text"
QT_MOC_LITERAL(9, 81, 11), // "setFontSize"
QT_MOC_LITERAL(10, 93, 7) // "setBold"

    },
    "TextAreaIdea\0textChanged\0\0fontSizeChanged\0"
    "fontSize\0boldChanged\0bold\0setText\0"
    "text\0setFontSize\0setBold"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TextAreaIdea[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       3,   60, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    1,   45,    2, 0x06 /* Public */,
       5,    1,   48,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   51,    2, 0x0a /* Public */,
       9,    1,   54,    2, 0x0a /* Public */,
      10,    1,   57,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Bool,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Bool,    6,

 // properties: name, type, flags
       8, QMetaType::QString, 0x00495103,
       4, QMetaType::Int, 0x00495103,
       6, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void TextAreaIdea::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TextAreaIdea *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->textChanged(); break;
        case 1: _t->fontSizeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->boldChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setText((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->setFontSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setBold((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TextAreaIdea::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TextAreaIdea::textChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TextAreaIdea::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TextAreaIdea::fontSizeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TextAreaIdea::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TextAreaIdea::boldChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<TextAreaIdea *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->text(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->fontSize(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->bold(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<TextAreaIdea *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setText(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setFontSize(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setBold(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject TextAreaIdea::staticMetaObject = { {
    QMetaObject::SuperData::link<Idea::staticMetaObject>(),
    qt_meta_stringdata_TextAreaIdea.data,
    qt_meta_data_TextAreaIdea,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TextAreaIdea::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TextAreaIdea::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TextAreaIdea.stringdata0))
        return static_cast<void*>(this);
    return Idea::qt_metacast(_clname);
}

int TextAreaIdea::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Idea::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void TextAreaIdea::textChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void TextAreaIdea::fontSizeChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TextAreaIdea::boldChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

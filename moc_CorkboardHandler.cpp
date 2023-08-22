/****************************************************************************
** Meta object code from reading C++ file 'CorkboardHandler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "MalamuteCore/CorkboardHandler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CorkboardHandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CorkboardHandler_t {
    QByteArrayData data[31];
    char stringdata0[403];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CorkboardHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CorkboardHandler_t qt_meta_stringdata_CorkboardHandler = {
    {
QT_MOC_LITERAL(0, 0, 16), // "CorkboardHandler"
QT_MOC_LITERAL(1, 17, 18), // "recentFilesChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 21), // "collectionListChanged"
QT_MOC_LITERAL(4, 59, 18), // "paletteListChanged"
QT_MOC_LITERAL(5, 78, 15), // "ideaListChanged"
QT_MOC_LITERAL(6, 94, 14), // "resetCorkboard"
QT_MOC_LITERAL(7, 109, 10), // "Corkboard*"
QT_MOC_LITERAL(8, 120, 9), // "corkboard"
QT_MOC_LITERAL(9, 130, 10), // "isModified"
QT_MOC_LITERAL(10, 141, 4), // "save"
QT_MOC_LITERAL(11, 146, 6), // "saveAs"
QT_MOC_LITERAL(12, 153, 7), // "fileUrl"
QT_MOC_LITERAL(13, 161, 4), // "load"
QT_MOC_LITERAL(14, 166, 6), // "revert"
QT_MOC_LITERAL(15, 173, 21), // "adjustRecentFilesList"
QT_MOC_LITERAL(16, 195, 14), // "getOpenFileUrl"
QT_MOC_LITERAL(17, 210, 16), // "validOpenFileUrl"
QT_MOC_LITERAL(18, 227, 16), // "clearRecentFiles"
QT_MOC_LITERAL(19, 244, 26), // "setVisibleWindowProperties"
QT_MOC_LITERAL(20, 271, 5), // "width"
QT_MOC_LITERAL(21, 277, 6), // "height"
QT_MOC_LITERAL(22, 284, 14), // "setPalleteList"
QT_MOC_LITERAL(23, 299, 14), // "collectionName"
QT_MOC_LITERAL(24, 314, 18), // "collectionIdeaList"
QT_MOC_LITERAL(25, 333, 12), // "ideaIconPath"
QT_MOC_LITERAL(26, 346, 8), // "ideaName"
QT_MOC_LITERAL(27, 355, 11), // "recentFiles"
QT_MOC_LITERAL(28, 367, 14), // "collectionList"
QT_MOC_LITERAL(29, 382, 11), // "paletteList"
QT_MOC_LITERAL(30, 394, 8) // "ideaList"

    },
    "CorkboardHandler\0recentFilesChanged\0"
    "\0collectionListChanged\0paletteListChanged\0"
    "ideaListChanged\0resetCorkboard\0"
    "Corkboard*\0corkboard\0isModified\0save\0"
    "saveAs\0fileUrl\0load\0revert\0"
    "adjustRecentFilesList\0getOpenFileUrl\0"
    "validOpenFileUrl\0clearRecentFiles\0"
    "setVisibleWindowProperties\0width\0"
    "height\0setPalleteList\0collectionName\0"
    "collectionIdeaList\0ideaIconPath\0"
    "ideaName\0recentFiles\0collectionList\0"
    "paletteList\0ideaList"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CorkboardHandler[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       4,  138, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  104,    2, 0x06 /* Public */,
       3,    0,  105,    2, 0x06 /* Public */,
       4,    0,  106,    2, 0x06 /* Public */,
       5,    0,  107,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       6,    1,  108,    2, 0x02 /* Public */,
       9,    0,  111,    2, 0x02 /* Public */,
      10,    0,  112,    2, 0x02 /* Public */,
      11,    1,  113,    2, 0x02 /* Public */,
      13,    1,  116,    2, 0x02 /* Public */,
      14,    0,  119,    2, 0x02 /* Public */,
      15,    0,  120,    2, 0x02 /* Public */,
      16,    0,  121,    2, 0x02 /* Public */,
      17,    0,  122,    2, 0x02 /* Public */,
      18,    0,  123,    2, 0x02 /* Public */,
      19,    2,  124,    2, 0x02 /* Public */,
      22,    1,  129,    2, 0x02 /* Public */,
      24,    1,  132,    2, 0x02 /* Public */,
      25,    1,  135,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,   12,
    QMetaType::Void, QMetaType::QUrl,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QUrl,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   20,   21,
    QMetaType::Void, QMetaType::QString,   23,
    QMetaType::QStringList, QMetaType::QString,   23,
    QMetaType::QString, QMetaType::QString,   26,

 // properties: name, type, flags
      27, QMetaType::QStringList, 0x00495001,
      28, QMetaType::QStringList, 0x00495001,
      29, QMetaType::QStringList, 0x00495001,
      30, QMetaType::QStringList, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

void CorkboardHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CorkboardHandler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->recentFilesChanged(); break;
        case 1: _t->collectionListChanged(); break;
        case 2: _t->paletteListChanged(); break;
        case 3: _t->ideaListChanged(); break;
        case 4: _t->resetCorkboard((*reinterpret_cast< Corkboard*(*)>(_a[1]))); break;
        case 5: { bool _r = _t->isModified();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->save(); break;
        case 7: _t->saveAs((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 8: _t->load((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 9: _t->revert(); break;
        case 10: _t->adjustRecentFilesList(); break;
        case 11: { QUrl _r = _t->getOpenFileUrl();
            if (_a[0]) *reinterpret_cast< QUrl*>(_a[0]) = std::move(_r); }  break;
        case 12: { bool _r = _t->validOpenFileUrl();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 13: _t->clearRecentFiles(); break;
        case 14: _t->setVisibleWindowProperties((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 15: _t->setPalleteList((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 16: { QStringList _r = _t->collectionIdeaList((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 17: { QString _r = _t->ideaIconPath((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Corkboard* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CorkboardHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CorkboardHandler::recentFilesChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CorkboardHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CorkboardHandler::collectionListChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CorkboardHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CorkboardHandler::paletteListChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CorkboardHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CorkboardHandler::ideaListChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<CorkboardHandler *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QStringList*>(_v) = _t->recentFiles(); break;
        case 1: *reinterpret_cast< QStringList*>(_v) = _t->collectionList(); break;
        case 2: *reinterpret_cast< QStringList*>(_v) = _t->paletteList(); break;
        case 3: *reinterpret_cast< QStringList*>(_v) = _t->ideaList(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject CorkboardHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CorkboardHandler.data,
    qt_meta_data_CorkboardHandler,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CorkboardHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CorkboardHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CorkboardHandler.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int CorkboardHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void CorkboardHandler::recentFilesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void CorkboardHandler::collectionListChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void CorkboardHandler::paletteListChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void CorkboardHandler::ideaListChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

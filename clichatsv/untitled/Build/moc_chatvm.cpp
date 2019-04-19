/****************************************************************************
** Meta object code from reading C++ file 'chatvm.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../chatvm.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chatvm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ChatVM_t {
    QByteArrayData data[15];
    char stringdata0[128];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ChatVM_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ChatVM_t qt_meta_stringdata_ChatVM = {
    {
QT_MOC_LITERAL(0, 0, 6), // "ChatVM"
QT_MOC_LITERAL(1, 7, 11), // "nameChanged"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 4), // "name"
QT_MOC_LITERAL(4, 25, 14), // "messageChanged"
QT_MOC_LITERAL(5, 40, 7), // "message"
QT_MOC_LITERAL(6, 48, 7), // "setname"
QT_MOC_LITERAL(7, 56, 10), // "setMessage"
QT_MOC_LITERAL(8, 67, 14), // "receiveMessage"
QT_MOC_LITERAL(9, 82, 4), // "user"
QT_MOC_LITERAL(10, 87, 10), // "handleName"
QT_MOC_LITERAL(11, 98, 4), // "chat"
QT_MOC_LITERAL(12, 103, 4), // "init"
QT_MOC_LITERAL(13, 108, 10), // "disconnect"
QT_MOC_LITERAL(14, 119, 8) // "writeLog"

    },
    "ChatVM\0nameChanged\0\0name\0messageChanged\0"
    "message\0setname\0setMessage\0receiveMessage\0"
    "user\0handleName\0chat\0init\0disconnect\0"
    "writeLog"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ChatVM[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       2,   90, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       4,    1,   67,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   70,    2, 0x0a /* Public */,
       7,    1,   73,    2, 0x0a /* Public */,
       8,    2,   76,    2, 0x0a /* Public */,
      10,    1,   81,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      11,    1,   84,    2, 0x02 /* Public */,
      12,    0,   87,    2, 0x02 /* Public */,
      13,    0,   88,    2, 0x02 /* Public */,
      14,    0,   89,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    9,    5,
    QMetaType::Void, QMetaType::QString,    3,

 // methods: parameters
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00495003,
       5, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void ChatVM::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ChatVM *_t = static_cast<ChatVM *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->nameChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->messageChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->setname((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->setMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->receiveMessage((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 5: _t->handleName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->chat((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->init(); break;
        case 8: _t->disconnect(); break;
        case 9: _t->writeLog(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ChatVM::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ChatVM::nameChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ChatVM::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ChatVM::messageChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        ChatVM *_t = static_cast<ChatVM *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->message(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        ChatVM *_t = static_cast<ChatVM *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setname(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setMessage(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject ChatVM::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ChatVM.data,
      qt_meta_data_ChatVM,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ChatVM::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ChatVM::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ChatVM.stringdata0))
        return static_cast<void*>(const_cast< ChatVM*>(this));
    return QObject::qt_metacast(_clname);
}

int ChatVM::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ChatVM::nameChanged(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ChatVM::messageChanged(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE

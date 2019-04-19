/****************************************************************************
** Meta object code from reading C++ file 'loginvm.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../loginvm.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'loginvm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_LoginVM_t {
    QByteArrayData data[8];
    char stringdata0[55];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LoginVM_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LoginVM_t qt_meta_stringdata_LoginVM = {
    {
QT_MOC_LITERAL(0, 0, 7), // "LoginVM"
QT_MOC_LITERAL(1, 8, 14), // "connectSuccess"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 9), // "connected"
QT_MOC_LITERAL(4, 34, 7), // "connect"
QT_MOC_LITERAL(5, 42, 2), // "ip"
QT_MOC_LITERAL(6, 45, 4), // "port"
QT_MOC_LITERAL(7, 50, 4) // "init"

    },
    "LoginVM\0connectSuccess\0\0connected\0"
    "connect\0ip\0port\0init"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LoginVM[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   35,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       4,    2,   36,    2, 0x02 /* Public */,
       7,    0,   41,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    5,    6,
    QMetaType::Void,

       0        // eod
};

void LoginVM::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LoginVM *_t = static_cast<LoginVM *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->connectSuccess(); break;
        case 1: _t->connected(); break;
        case 2: _t->connect((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->init(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (LoginVM::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LoginVM::connectSuccess)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject LoginVM::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_LoginVM.data,
      qt_meta_data_LoginVM,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LoginVM::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LoginVM::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LoginVM.stringdata0))
        return static_cast<void*>(const_cast< LoginVM*>(this));
    return QObject::qt_metacast(_clname);
}

int LoginVM::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void LoginVM::connectSuccess()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE

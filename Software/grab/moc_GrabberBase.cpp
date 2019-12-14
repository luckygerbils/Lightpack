/****************************************************************************
** Meta object code from reading C++ file 'GrabberBase.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "include/GrabberBase.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GrabberBase.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_GrabberBase_t {
    QByteArrayData data[18];
    char stringdata[216];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_GrabberBase_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_GrabberBase_t qt_meta_stringdata_GrabberBase = {
    {
QT_MOC_LITERAL(0, 0, 11),
QT_MOC_LITERAL(1, 12, 18),
QT_MOC_LITERAL(2, 31, 0),
QT_MOC_LITERAL(3, 32, 10),
QT_MOC_LITERAL(4, 43, 10),
QT_MOC_LITERAL(5, 54, 27),
QT_MOC_LITERAL(6, 82, 16),
QT_MOC_LITERAL(7, 99, 4),
QT_MOC_LITERAL(8, 104, 13),
QT_MOC_LITERAL(9, 118, 12),
QT_MOC_LITERAL(10, 131, 17),
QT_MOC_LITERAL(11, 149, 15),
QT_MOC_LITERAL(12, 165, 4),
QT_MOC_LITERAL(13, 170, 4),
QT_MOC_LITERAL(14, 175, 17),
QT_MOC_LITERAL(15, 193, 8),
QT_MOC_LITERAL(16, 202, 6),
QT_MOC_LITERAL(17, 209, 5)
    },
    "GrabberBase\0frameGrabAttempted\0\0"
    "GrabResult\0grabResult\0grabberStateChangeRequested\0"
    "isStartRequested\0init\0startGrabbing\0"
    "stopGrabbing\0isGrabbingStarted\0"
    "setGrabInterval\0msec\0grab\0updateGrabMonitor\0"
    "QWidget*\0widget\0_grab\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GrabberBase[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06,
       5,    1,   67,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       7,    0,   70,    2, 0x0a,
       8,    0,   71,    2, 0x0a,
       9,    0,   72,    2, 0x0a,
      10,    0,   73,    2, 0x0a,
      11,    1,   74,    2, 0x0a,
      13,    0,   77,    2, 0x0a,
      14,    1,   78,    2, 0x0a,
      17,    0,   81,    2, 0x0a,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Bool,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15,   16,
    0x80000000 | 3,

       0        // eod
};

void GrabberBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GrabberBase *_t = static_cast<GrabberBase *>(_o);
        switch (_id) {
        case 0: _t->frameGrabAttempted((*reinterpret_cast< GrabResult(*)>(_a[1]))); break;
        case 1: _t->grabberStateChangeRequested((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->init(); break;
        case 3: _t->startGrabbing(); break;
        case 4: _t->stopGrabbing(); break;
        case 5: { bool _r = _t->isGrabbingStarted();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: _t->setGrabInterval((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->grab(); break;
        case 8: _t->updateGrabMonitor((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 9: { GrabResult _r = _t->_grab();
            if (_a[0]) *reinterpret_cast< GrabResult*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (GrabberBase::*_t)(GrabResult );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GrabberBase::frameGrabAttempted)) {
                *result = 0;
            }
        }
        {
            typedef void (GrabberBase::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GrabberBase::grabberStateChangeRequested)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject GrabberBase::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_GrabberBase.data,
      qt_meta_data_GrabberBase,  qt_static_metacall, 0, 0}
};


const QMetaObject *GrabberBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GrabberBase::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GrabberBase.stringdata))
        return static_cast<void*>(const_cast< GrabberBase*>(this));
    return QObject::qt_metacast(_clname);
}

int GrabberBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void GrabberBase::frameGrabAttempted(GrabResult _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GrabberBase::grabberStateChangeRequested(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE

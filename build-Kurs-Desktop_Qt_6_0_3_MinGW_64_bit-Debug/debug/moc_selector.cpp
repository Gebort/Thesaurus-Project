/****************************************************************************
** Meta object code from reading C++ file 'selector.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.0.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Kurs/selector.h"
#include <QtNetwork/QSslError>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'selector.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.0.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Selector_t {
    const uint offsetsAndSize[22];
    char stringdata0[109];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Selector_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Selector_t qt_meta_stringdata_Selector = {
    {
QT_MOC_LITERAL(0, 8), // "Selector"
QT_MOC_LITERAL(9, 9), // "infoReady"
QT_MOC_LITERAL(19, 0), // ""
QT_MOC_LITERAL(20, 5), // "Word*"
QT_MOC_LITERAL(26, 4), // "info"
QT_MOC_LITERAL(31, 8), // "finished"
QT_MOC_LITERAL(40, 17), // "finishedWithError"
QT_MOC_LITERAL(58, 5), // "error"
QT_MOC_LITERAL(64, 7), // "getInfo"
QT_MOC_LITERAL(72, 17), // "getInfoFromAccess"
QT_MOC_LITERAL(90, 18) // "getErrorFromAccess"

    },
    "Selector\0infoReady\0\0Word*\0info\0finished\0"
    "finishedWithError\0error\0getInfo\0"
    "getInfoFromAccess\0getErrorFromAccess"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Selector[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   50,    2, 0x06,    0 /* Public */,
       5,    0,   53,    2, 0x06,    2 /* Public */,
       6,    1,   54,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    0,   57,    2, 0x0a,    5 /* Public */,
       9,    1,   58,    2, 0x0a,    6 /* Public */,
      10,    1,   61,    2, 0x0a,    8 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    7,

       0        // eod
};

void Selector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Selector *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->infoReady((*reinterpret_cast< Word*(*)>(_a[1]))); break;
        case 1: _t->finished(); break;
        case 2: _t->finishedWithError((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->getInfo(); break;
        case 4: _t->getInfoFromAccess((*reinterpret_cast< Word*(*)>(_a[1]))); break;
        case 5: _t->getErrorFromAccess((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Selector::*)(Word * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Selector::infoReady)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Selector::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Selector::finished)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Selector::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Selector::finishedWithError)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject Selector::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Selector.offsetsAndSize,
    qt_meta_data_Selector,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Selector_t
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Word *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Word *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>


>,
    nullptr
} };


const QMetaObject *Selector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Selector::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Selector.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Selector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void Selector::infoReady(Word * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Selector::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Selector::finishedWithError(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

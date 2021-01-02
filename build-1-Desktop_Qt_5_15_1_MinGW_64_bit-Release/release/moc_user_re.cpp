/****************************************************************************
** Meta object code from reading C++ file 'user_re.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../1/user_re.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'user_re.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_user_re_t {
    QByteArrayData data[14];
    char stringdata0[147];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_user_re_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_user_re_t qt_meta_stringdata_user_re = {
    {
QT_MOC_LITERAL(0, 0, 7), // "user_re"
QT_MOC_LITERAL(1, 8, 9), // "setupdate"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 3), // "ctl"
QT_MOC_LITERAL(4, 23, 11), // "re_head_jpg"
QT_MOC_LITERAL(5, 35, 13), // "re_background"
QT_MOC_LITERAL(6, 49, 11), // "re_nickname"
QT_MOC_LITERAL(7, 61, 8), // "re_brief"
QT_MOC_LITERAL(8, 70, 12), // "re_user_head"
QT_MOC_LITERAL(9, 83, 12), // "re_user_back"
QT_MOC_LITERAL(10, 96, 12), // "re_user_nick"
QT_MOC_LITERAL(11, 109, 13), // "re_user_brief"
QT_MOC_LITERAL(12, 123, 10), // "outlogin_2"
QT_MOC_LITERAL(13, 134, 12) // "get_outlogin"

    },
    "user_re\0setupdate\0\0ctl\0re_head_jpg\0"
    "re_background\0re_nickname\0re_brief\0"
    "re_user_head\0re_user_back\0re_user_nick\0"
    "re_user_brief\0outlogin_2\0get_outlogin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_user_re[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   72,    2, 0x0a /* Public */,
       5,    0,   73,    2, 0x0a /* Public */,
       6,    0,   74,    2, 0x0a /* Public */,
       7,    0,   75,    2, 0x0a /* Public */,
       8,    0,   76,    2, 0x0a /* Public */,
       9,    0,   77,    2, 0x0a /* Public */,
      10,    0,   78,    2, 0x0a /* Public */,
      11,    0,   79,    2, 0x0a /* Public */,
      12,    0,   80,    2, 0x0a /* Public */,
      13,    0,   81,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void user_re::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<user_re *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setupdate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: { int _r = _t->re_head_jpg();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 2: { int _r = _t->re_background();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->re_nickname(); break;
        case 4: _t->re_brief(); break;
        case 5: _t->re_user_head(); break;
        case 6: _t->re_user_back(); break;
        case 7: _t->re_user_nick(); break;
        case 8: _t->re_user_brief(); break;
        case 9: _t->outlogin_2(); break;
        case 10: _t->get_outlogin(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (user_re::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&user_re::setupdate)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject user_re::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_user_re.data,
    qt_meta_data_user_re,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *user_re::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *user_re::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_user_re.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int user_re::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void user_re::setupdate(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'paleta.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../Sculptor/paleta.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'paleta.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Paleta_t {
    QByteArrayData data[10];
    char stringdata0[90];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Paleta_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Paleta_t qt_meta_stringdata_Paleta = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Paleta"
QT_MOC_LITERAL(1, 7, 12), // "setPaletaRed"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 4), // "_red"
QT_MOC_LITERAL(4, 26, 13), // "setPaletaBlue"
QT_MOC_LITERAL(5, 40, 5), // "_blue"
QT_MOC_LITERAL(6, 46, 14), // "setPaletaGreen"
QT_MOC_LITERAL(7, 61, 6), // "_green"
QT_MOC_LITERAL(8, 68, 14), // "setPaletaAlpha"
QT_MOC_LITERAL(9, 83, 6) // "_alpha"

    },
    "Paleta\0setPaletaRed\0\0_red\0setPaletaBlue\0"
    "_blue\0setPaletaGreen\0_green\0setPaletaAlpha\0"
    "_alpha"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Paleta[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x0a /* Public */,
       4,    1,   37,    2, 0x0a /* Public */,
       6,    1,   40,    2, 0x0a /* Public */,
       8,    1,   43,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    9,

       0        // eod
};

void Paleta::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Paleta *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setPaletaRed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setPaletaBlue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setPaletaGreen((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setPaletaAlpha((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Paleta::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_Paleta.data,
    qt_meta_data_Paleta,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Paleta::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Paleta::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Paleta.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Paleta::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE

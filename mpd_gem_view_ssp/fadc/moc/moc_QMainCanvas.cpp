/****************************************************************************
** Meta object code from reading C++ file 'QMainCanvas.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../include/QMainCanvas.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QMainCanvas.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QMainCanvas_t {
    QByteArrayData data[11];
    char stringdata0[176];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QMainCanvas_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QMainCanvas_t qt_meta_stringdata_QMainCanvas = {
    {
QT_MOC_LITERAL(0, 0, 11), // "QMainCanvas"
QT_MOC_LITERAL(1, 12, 12), // "ItemSelected"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 14), // "ItemDeSelected"
QT_MOC_LITERAL(4, 41, 10), // "DrawCanvas"
QT_MOC_LITERAL(5, 52, 18), // "std::vector<TH1I*>"
QT_MOC_LITERAL(6, 71, 30), // "std::vector<std::vector<int> >"
QT_MOC_LITERAL(7, 102, 23), // "std::vector<APVAddress>"
QT_MOC_LITERAL(8, 126, 4), // "addr"
QT_MOC_LITERAL(9, 131, 25), // "std::vector<TMultiGraph*>"
QT_MOC_LITERAL(10, 157, 18) // "handle_root_events"

    },
    "QMainCanvas\0ItemSelected\0\0ItemDeSelected\0"
    "DrawCanvas\0std::vector<TH1I*>\0"
    "std::vector<std::vector<int> >\0"
    "std::vector<APVAddress>\0addr\0"
    "std::vector<TMultiGraph*>\0handle_root_events"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QMainCanvas[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    3,   46,    2, 0x0a /* Public */,
       4,    4,   53,    2, 0x0a /* Public */,
       4,    3,   62,    2, 0x0a /* Public */,
      10,    0,   69,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5, QMetaType::Int, QMetaType::Int,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 7, QMetaType::Int, QMetaType::Int,    2,    8,    2,    2,
    QMetaType::Void, 0x80000000 | 9, QMetaType::Int, QMetaType::Int,    2,    2,    2,
    QMetaType::Void,

       0        // eod
};

void QMainCanvas::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QMainCanvas *_t = static_cast<QMainCanvas *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ItemSelected(); break;
        case 1: _t->ItemDeSelected(); break;
        case 2: _t->DrawCanvas((*reinterpret_cast< const std::vector<TH1I*>(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 3: _t->DrawCanvas((*reinterpret_cast< const std::vector<std::vector<int> >(*)>(_a[1])),(*reinterpret_cast< const std::vector<APVAddress>(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 4: _t->DrawCanvas((*reinterpret_cast< const std::vector<TMultiGraph*>(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 5: _t->handle_root_events(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QMainCanvas::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMainCanvas::ItemSelected)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QMainCanvas::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMainCanvas::ItemDeSelected)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject QMainCanvas::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QMainCanvas.data,
      qt_meta_data_QMainCanvas,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QMainCanvas::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QMainCanvas::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QMainCanvas.stringdata0))
        return static_cast<void*>(const_cast< QMainCanvas*>(this));
    return QWidget::qt_metacast(_clname);
}

int QMainCanvas::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void QMainCanvas::ItemSelected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void QMainCanvas::ItemDeSelected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE

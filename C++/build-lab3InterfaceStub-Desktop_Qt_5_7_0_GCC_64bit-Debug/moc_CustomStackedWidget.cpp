/****************************************************************************
** Meta object code from reading C++ file 'CustomStackedWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../lab3InterfaceStub/CustomStackedWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CustomStackedWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CustomStackedWidget_t {
    QByteArrayData data[7];
    char stringdata0[86];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CustomStackedWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CustomStackedWidget_t qt_meta_stringdata_CustomStackedWidget = {
    {
QT_MOC_LITERAL(0, 0, 19), // "CustomStackedWidget"
QT_MOC_LITERAL(1, 20, 11), // "closeDialog"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 24), // "changeNextButtonToFinish"
QT_MOC_LITERAL(4, 58, 3), // "str"
QT_MOC_LITERAL(5, 62, 11), // "setNextPage"
QT_MOC_LITERAL(6, 74, 11) // "setPrevPage"

    },
    "CustomStackedWidget\0closeDialog\0\0"
    "changeNextButtonToFinish\0str\0setNextPage\0"
    "setPrevPage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CustomStackedWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    1,   40,    2, 0x06 /* Public */,
       3,    0,   43,    2, 0x26 /* Public | MethodCloned */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   44,    2, 0x0a /* Public */,
       6,    0,   45,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CustomStackedWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CustomStackedWidget *_t = static_cast<CustomStackedWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->closeDialog(); break;
        case 1: _t->changeNextButtonToFinish((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->changeNextButtonToFinish(); break;
        case 3: _t->setNextPage(); break;
        case 4: _t->setPrevPage(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CustomStackedWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CustomStackedWidget::closeDialog)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (CustomStackedWidget::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CustomStackedWidget::changeNextButtonToFinish)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject CustomStackedWidget::staticMetaObject = {
    { &QStackedWidget::staticMetaObject, qt_meta_stringdata_CustomStackedWidget.data,
      qt_meta_data_CustomStackedWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CustomStackedWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CustomStackedWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CustomStackedWidget.stringdata0))
        return static_cast<void*>(const_cast< CustomStackedWidget*>(this));
    return QStackedWidget::qt_metacast(_clname);
}

int CustomStackedWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStackedWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void CustomStackedWidget::closeDialog()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void CustomStackedWidget::changeNextButtonToFinish(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE

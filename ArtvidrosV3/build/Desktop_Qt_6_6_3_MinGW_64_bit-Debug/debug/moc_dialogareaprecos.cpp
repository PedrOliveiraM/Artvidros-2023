/****************************************************************************
** Meta object code from reading C++ file 'dialogareaprecos.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../dialogareaprecos.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialogareaprecos.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSDialogAreaPrecosENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSDialogAreaPrecosENDCLASS = QtMocHelpers::stringData(
    "DialogAreaPrecos",
    "on_pushButtonADD_clicked",
    "",
    "on_pushButtonALTER_clicked",
    "on_pushButtonDELETE_clicked",
    "on_pushButtonOrdem_clicked",
    "mostrarDadosOrdeandos",
    "typeOrder",
    "order"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSDialogAreaPrecosENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[17];
    char stringdata1[25];
    char stringdata2[1];
    char stringdata3[27];
    char stringdata4[28];
    char stringdata5[27];
    char stringdata6[22];
    char stringdata7[10];
    char stringdata8[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSDialogAreaPrecosENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSDialogAreaPrecosENDCLASS_t qt_meta_stringdata_CLASSDialogAreaPrecosENDCLASS = {
    {
        QT_MOC_LITERAL(0, 16),  // "DialogAreaPrecos"
        QT_MOC_LITERAL(17, 24),  // "on_pushButtonADD_clicked"
        QT_MOC_LITERAL(42, 0),  // ""
        QT_MOC_LITERAL(43, 26),  // "on_pushButtonALTER_clicked"
        QT_MOC_LITERAL(70, 27),  // "on_pushButtonDELETE_clicked"
        QT_MOC_LITERAL(98, 26),  // "on_pushButtonOrdem_clicked"
        QT_MOC_LITERAL(125, 21),  // "mostrarDadosOrdeandos"
        QT_MOC_LITERAL(147, 9),  // "typeOrder"
        QT_MOC_LITERAL(157, 5)   // "order"
    },
    "DialogAreaPrecos",
    "on_pushButtonADD_clicked",
    "",
    "on_pushButtonALTER_clicked",
    "on_pushButtonDELETE_clicked",
    "on_pushButtonOrdem_clicked",
    "mostrarDadosOrdeandos",
    "typeOrder",
    "order"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSDialogAreaPrecosENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x08,    1 /* Private */,
       3,    0,   45,    2, 0x08,    2 /* Private */,
       4,    0,   46,    2, 0x08,    3 /* Private */,
       5,    0,   47,    2, 0x08,    4 /* Private */,
       6,    2,   48,    2, 0x08,    5 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    7,    8,

       0        // eod
};

Q_CONSTINIT const QMetaObject DialogAreaPrecos::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSDialogAreaPrecosENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSDialogAreaPrecosENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSDialogAreaPrecosENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DialogAreaPrecos, std::true_type>,
        // method 'on_pushButtonADD_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonALTER_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonDELETE_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonOrdem_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'mostrarDadosOrdeandos'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>
    >,
    nullptr
} };

void DialogAreaPrecos::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DialogAreaPrecos *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_pushButtonADD_clicked(); break;
        case 1: _t->on_pushButtonALTER_clicked(); break;
        case 2: _t->on_pushButtonDELETE_clicked(); break;
        case 3: _t->on_pushButtonOrdem_clicked(); break;
        case 4: _t->mostrarDadosOrdeandos((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject *DialogAreaPrecos::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DialogAreaPrecos::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSDialogAreaPrecosENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int DialogAreaPrecos::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP

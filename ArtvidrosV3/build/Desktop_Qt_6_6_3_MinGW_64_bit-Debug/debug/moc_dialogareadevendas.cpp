/****************************************************************************
** Meta object code from reading C++ file 'dialogareadevendas.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../dialogareadevendas.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialogareadevendas.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSDialogAreaDeVendasENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSDialogAreaDeVendasENDCLASS = QtMocHelpers::stringData(
    "DialogAreaDeVendas",
    "on_pushButton_Buscar_clicked",
    "",
    "on_pushButtonVerResultados_clicked",
    "on_pushButton_Adicionar_clicked",
    "on_pushButtonAlterar_clicked",
    "on_pushButton_Excluir_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSDialogAreaDeVendasENDCLASS_t {
    uint offsetsAndSizes[14];
    char stringdata0[19];
    char stringdata1[29];
    char stringdata2[1];
    char stringdata3[35];
    char stringdata4[32];
    char stringdata5[29];
    char stringdata6[30];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSDialogAreaDeVendasENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSDialogAreaDeVendasENDCLASS_t qt_meta_stringdata_CLASSDialogAreaDeVendasENDCLASS = {
    {
        QT_MOC_LITERAL(0, 18),  // "DialogAreaDeVendas"
        QT_MOC_LITERAL(19, 28),  // "on_pushButton_Buscar_clicked"
        QT_MOC_LITERAL(48, 0),  // ""
        QT_MOC_LITERAL(49, 34),  // "on_pushButtonVerResultados_cl..."
        QT_MOC_LITERAL(84, 31),  // "on_pushButton_Adicionar_clicked"
        QT_MOC_LITERAL(116, 28),  // "on_pushButtonAlterar_clicked"
        QT_MOC_LITERAL(145, 29)   // "on_pushButton_Excluir_clicked"
    },
    "DialogAreaDeVendas",
    "on_pushButton_Buscar_clicked",
    "",
    "on_pushButtonVerResultados_clicked",
    "on_pushButton_Adicionar_clicked",
    "on_pushButtonAlterar_clicked",
    "on_pushButton_Excluir_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSDialogAreaDeVendasENDCLASS[] = {

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
       6,    0,   48,    2, 0x08,    5 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject DialogAreaDeVendas::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSDialogAreaDeVendasENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSDialogAreaDeVendasENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSDialogAreaDeVendasENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DialogAreaDeVendas, std::true_type>,
        // method 'on_pushButton_Buscar_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonVerResultados_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_Adicionar_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonAlterar_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_Excluir_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void DialogAreaDeVendas::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DialogAreaDeVendas *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_pushButton_Buscar_clicked(); break;
        case 1: _t->on_pushButtonVerResultados_clicked(); break;
        case 2: _t->on_pushButton_Adicionar_clicked(); break;
        case 3: _t->on_pushButtonAlterar_clicked(); break;
        case 4: _t->on_pushButton_Excluir_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *DialogAreaDeVendas::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DialogAreaDeVendas::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSDialogAreaDeVendasENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int DialogAreaDeVendas::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
/****************************************************************************
** Meta object code from reading C++ file 'bascula.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../bascula.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bascula.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSBascolaENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSBascolaENDCLASS = QtMocHelpers::stringData(
    "Bascola",
    "on_pushButtonCalcular_clicked",
    "",
    "atualizarValoresImportados",
    "valor",
    "lucro",
    "on_pushButtonDesconto_clicked",
    "on_pushButtonSalvar_clicked",
    "on_pushButtonLimpar_clicked",
    "on_pushButtonRefatorando_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSBascolaENDCLASS_t {
    uint offsetsAndSizes[20];
    char stringdata0[8];
    char stringdata1[30];
    char stringdata2[1];
    char stringdata3[27];
    char stringdata4[6];
    char stringdata5[6];
    char stringdata6[30];
    char stringdata7[28];
    char stringdata8[28];
    char stringdata9[33];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSBascolaENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSBascolaENDCLASS_t qt_meta_stringdata_CLASSBascolaENDCLASS = {
    {
        QT_MOC_LITERAL(0, 7),  // "Bascola"
        QT_MOC_LITERAL(8, 29),  // "on_pushButtonCalcular_clicked"
        QT_MOC_LITERAL(38, 0),  // ""
        QT_MOC_LITERAL(39, 26),  // "atualizarValoresImportados"
        QT_MOC_LITERAL(66, 5),  // "valor"
        QT_MOC_LITERAL(72, 5),  // "lucro"
        QT_MOC_LITERAL(78, 29),  // "on_pushButtonDesconto_clicked"
        QT_MOC_LITERAL(108, 27),  // "on_pushButtonSalvar_clicked"
        QT_MOC_LITERAL(136, 27),  // "on_pushButtonLimpar_clicked"
        QT_MOC_LITERAL(164, 32)   // "on_pushButtonRefatorando_clicked"
    },
    "Bascola",
    "on_pushButtonCalcular_clicked",
    "",
    "atualizarValoresImportados",
    "valor",
    "lucro",
    "on_pushButtonDesconto_clicked",
    "on_pushButtonSalvar_clicked",
    "on_pushButtonLimpar_clicked",
    "on_pushButtonRefatorando_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSBascolaENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x08,    1 /* Private */,
       3,    2,   51,    2, 0x08,    2 /* Private */,
       6,    0,   56,    2, 0x08,    5 /* Private */,
       7,    0,   57,    2, 0x08,    6 /* Private */,
       8,    0,   58,    2, 0x08,    7 /* Private */,
       9,    0,   59,    2, 0x08,    8 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Bascola::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSBascolaENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSBascolaENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSBascolaENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Bascola, std::true_type>,
        // method 'on_pushButtonCalcular_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'atualizarValoresImportados'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_pushButtonDesconto_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonSalvar_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonLimpar_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonRefatorando_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Bascola::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Bascola *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_pushButtonCalcular_clicked(); break;
        case 1: _t->atualizarValoresImportados((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 2: _t->on_pushButtonDesconto_clicked(); break;
        case 3: _t->on_pushButtonSalvar_clicked(); break;
        case 4: _t->on_pushButtonLimpar_clicked(); break;
        case 5: _t->on_pushButtonRefatorando_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *Bascola::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Bascola::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSBascolaENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Bascola::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
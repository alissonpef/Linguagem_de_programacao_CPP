/****************************************************************************
** Meta object code from reading C++ file 'fm_gestaocolaboradores.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../Downloads/Trabalho_Final (1)/Trabalho_Final/Controle_de_estoque/fm_gestaocolaboradores.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fm_gestaocolaboradores.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_fm_gestaoColaboradores_t {
    QByteArrayData data[10];
    char stringdata0[243];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_fm_gestaoColaboradores_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_fm_gestaoColaboradores_t qt_meta_stringdata_fm_gestaoColaboradores = {
    {
QT_MOC_LITERAL(0, 0, 22), // "fm_gestaoColaboradores"
QT_MOC_LITERAL(1, 23, 31), // "on_btn_novo_novousuario_clicked"
QT_MOC_LITERAL(2, 55, 0), // ""
QT_MOC_LITERAL(3, 56, 33), // "on_btn_novousuario_gravar_cli..."
QT_MOC_LITERAL(4, 90, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(5, 114, 27), // "on_tabWidget_currentChanged"
QT_MOC_LITERAL(6, 142, 5), // "index"
QT_MOC_LITERAL(7, 148, 25), // "on_btn_gu_excluir_clicked"
QT_MOC_LITERAL(8, 174, 42), // "on_tw_gu_listausuario_itemSel..."
QT_MOC_LITERAL(9, 217, 25) // "on_btn_gu_filtrar_clicked"

    },
    "fm_gestaoColaboradores\0"
    "on_btn_novo_novousuario_clicked\0\0"
    "on_btn_novousuario_gravar_clicked\0"
    "on_pushButton_2_clicked\0"
    "on_tabWidget_currentChanged\0index\0"
    "on_btn_gu_excluir_clicked\0"
    "on_tw_gu_listausuario_itemSelectionChanged\0"
    "on_btn_gu_filtrar_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_fm_gestaoColaboradores[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    1,   52,    2, 0x08 /* Private */,
       7,    0,   55,    2, 0x08 /* Private */,
       8,    0,   56,    2, 0x08 /* Private */,
       9,    0,   57,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void fm_gestaoColaboradores::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<fm_gestaoColaboradores *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btn_novo_novousuario_clicked(); break;
        case 1: _t->on_btn_novousuario_gravar_clicked(); break;
        case 2: _t->on_pushButton_2_clicked(); break;
        case 3: _t->on_tabWidget_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_btn_gu_excluir_clicked(); break;
        case 5: _t->on_tw_gu_listausuario_itemSelectionChanged(); break;
        case 6: _t->on_btn_gu_filtrar_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject fm_gestaoColaboradores::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_fm_gestaoColaboradores.data,
    qt_meta_data_fm_gestaoColaboradores,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *fm_gestaoColaboradores::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fm_gestaoColaboradores::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_fm_gestaoColaboradores.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int fm_gestaoColaboradores::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

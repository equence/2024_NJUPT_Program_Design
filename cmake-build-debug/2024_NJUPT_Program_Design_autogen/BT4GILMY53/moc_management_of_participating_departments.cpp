/****************************************************************************
** Meta object code from reading C++ file 'management_of_participating_departments.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../sys_admin/management_of_participating_departments.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'management_of_participating_departments.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.0. It"
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
struct qt_meta_stringdata_CLASSmanagement_of_participating_departmentsENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmanagement_of_participating_departmentsENDCLASS = QtMocHelpers::stringData(
    "management_of_participating_departments",
    "pushButton_Init_clicked",
    "",
    "pushButton_Add_clicked",
    "pushButton_Delete_clicked",
    "pushButton_Modify_clicked",
    "pushButton_Search_clicked"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmanagement_of_participating_departmentsENDCLASS[] = {

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
       1,    0,   44,    2, 0x0a,    1 /* Public */,
       3,    0,   45,    2, 0x0a,    2 /* Public */,
       4,    0,   46,    2, 0x0a,    3 /* Public */,
       5,    0,   47,    2, 0x0a,    4 /* Public */,
       6,    0,   48,    2, 0x0a,    5 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject management_of_participating_departments::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSmanagement_of_participating_departmentsENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmanagement_of_participating_departmentsENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmanagement_of_participating_departmentsENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<management_of_participating_departments, std::true_type>,
        // method 'pushButton_Init_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'pushButton_Add_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'pushButton_Delete_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'pushButton_Modify_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'pushButton_Search_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void management_of_participating_departments::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<management_of_participating_departments *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->pushButton_Init_clicked(); break;
        case 1: _t->pushButton_Add_clicked(); break;
        case 2: _t->pushButton_Delete_clicked(); break;
        case 3: _t->pushButton_Modify_clicked(); break;
        case 4: _t->pushButton_Search_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *management_of_participating_departments::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *management_of_participating_departments::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmanagement_of_participating_departmentsENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int management_of_participating_departments::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

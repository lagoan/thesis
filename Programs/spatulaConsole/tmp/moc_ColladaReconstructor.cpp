/****************************************************************************
** Meta object code from reading C++ file 'ColladaReconstructor.h'
**
** Created: Sun Nov 14 09:23:42 2010
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/ColladaReconstructor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ColladaReconstructor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ColladaReconstructor[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

       0        // eod
};

static const char qt_meta_stringdata_ColladaReconstructor[] = {
    "ColladaReconstructor\0"
};

const QMetaObject ColladaReconstructor::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ColladaReconstructor,
      qt_meta_data_ColladaReconstructor, 0 }
};

const QMetaObject *ColladaReconstructor::metaObject() const
{
    return &staticMetaObject;
}

void *ColladaReconstructor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ColladaReconstructor))
        return static_cast<void*>(const_cast< ColladaReconstructor*>(this));
    return QObject::qt_metacast(_clname);
}

int ColladaReconstructor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
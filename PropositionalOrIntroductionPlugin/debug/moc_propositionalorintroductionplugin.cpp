/****************************************************************************
** Meta object code from reading C++ file 'propositionalorintroductionplugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../propositionalorintroductionplugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'propositionalorintroductionplugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PropositionalOrIntroductionPlugin_t {
    QByteArrayData data[1];
    char stringdata0[34];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PropositionalOrIntroductionPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PropositionalOrIntroductionPlugin_t qt_meta_stringdata_PropositionalOrIntroductionPlugin = {
    {
QT_MOC_LITERAL(0, 0, 33) // "PropositionalOrIntroductionPl..."

    },
    "PropositionalOrIntroductionPlugin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PropositionalOrIntroductionPlugin[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void PropositionalOrIntroductionPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject PropositionalOrIntroductionPlugin::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_PropositionalOrIntroductionPlugin.data,
    qt_meta_data_PropositionalOrIntroductionPlugin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PropositionalOrIntroductionPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PropositionalOrIntroductionPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PropositionalOrIntroductionPlugin.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "InferenceRuleFactoryPlugin"))
        return static_cast< InferenceRuleFactoryPlugin*>(this);
    if (!strcmp(_clname, "PluginFactoryInterface<const InferenceRule>"))
        return static_cast< InferenceRuleFactoryPlugin*>(this);
    return QObject::qt_metacast(_clname);
}

int PropositionalOrIntroductionPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}

QT_PLUGIN_METADATA_SECTION
static constexpr unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', '!',
    // metadata version, Qt version, architectural requirements
    0, QT_VERSION_MAJOR, QT_VERSION_MINOR, qPluginArchRequirements(),
    0xbf, 
    // "IID"
    0x02,  0x78,  0x21,  'P',  'r',  'o',  'p',  'o', 
    's',  'i',  't',  'i',  'o',  'n',  'a',  'l', 
    'O',  'r',  'I',  'n',  't',  'r',  'o',  'd', 
    'u',  'c',  't',  'i',  'o',  'n',  'P',  'l', 
    'u',  'g',  'i',  'n', 
    // "className"
    0x03,  0x78,  0x21,  'P',  'r',  'o',  'p',  'o', 
    's',  'i',  't',  'i',  'o',  'n',  'a',  'l', 
    'O',  'r',  'I',  'n',  't',  'r',  'o',  'd', 
    'u',  'c',  't',  'i',  'o',  'n',  'P',  'l', 
    'u',  'g',  'i',  'n', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(PropositionalOrIntroductionPlugin, PropositionalOrIntroductionPlugin)

QT_WARNING_POP
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'propositionalhypothesisintroductionplugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../propositionalhypothesisintroductionplugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'propositionalhypothesisintroductionplugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PropositionalHypothesisIntroductionPlugin_t {
    QByteArrayData data[1];
    char stringdata0[42];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PropositionalHypothesisIntroductionPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PropositionalHypothesisIntroductionPlugin_t qt_meta_stringdata_PropositionalHypothesisIntroductionPlugin = {
    {
QT_MOC_LITERAL(0, 0, 41) // "PropositionalHypothesisIntrod..."

    },
    "PropositionalHypothesisIntroductionPlugin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PropositionalHypothesisIntroductionPlugin[] = {

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

void PropositionalHypothesisIntroductionPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject PropositionalHypothesisIntroductionPlugin::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_PropositionalHypothesisIntroductionPlugin.data,
    qt_meta_data_PropositionalHypothesisIntroductionPlugin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PropositionalHypothesisIntroductionPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PropositionalHypothesisIntroductionPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PropositionalHypothesisIntroductionPlugin.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "InferenceRuleFactoryPlugin"))
        return static_cast< InferenceRuleFactoryPlugin*>(this);
    if (!strcmp(_clname, "PluginFactoryInterface<const InferenceRule>"))
        return static_cast< InferenceRuleFactoryPlugin*>(this);
    return QObject::qt_metacast(_clname);
}

int PropositionalHypothesisIntroductionPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    0x02,  0x78,  0x1a,  'I',  'n',  'f',  'e',  'r', 
    'e',  'n',  'c',  'e',  'R',  'u',  'l',  'e', 
    'F',  'a',  'c',  't',  'o',  'r',  'y',  'P', 
    'l',  'u',  'g',  'i',  'n', 
    // "className"
    0x03,  0x78,  0x29,  'P',  'r',  'o',  'p',  'o', 
    's',  'i',  't',  'i',  'o',  'n',  'a',  'l', 
    'H',  'y',  'p',  'o',  't',  'h',  'e',  's', 
    'i',  's',  'I',  'n',  't',  'r',  'o',  'd', 
    'u',  'c',  't',  'i',  'o',  'n',  'P',  'l', 
    'u',  'g',  'i',  'n', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(PropositionalHypothesisIntroductionPlugin, PropositionalHypothesisIntroductionPlugin)

QT_WARNING_POP
QT_END_MOC_NAMESPACE

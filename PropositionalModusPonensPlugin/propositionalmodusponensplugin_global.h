#ifndef PROPOSITIONALMODUSPONENSPLUGIN_GLOBAL_H
#define PROPOSITIONALMODUSPONENSPLUGIN_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(PROPOSITIONALMODUSPONENSPLUGIN_LIBRARY)
#  define PROPOSITIONALMODUSPONENSPLUGINSHARED_EXPORT Q_DECL_EXPORT
#else
#  define PROPOSITIONALMODUSPONENSPLUGINSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // PROPOSITIONALMODUSPONENSPLUGIN_GLOBAL_H

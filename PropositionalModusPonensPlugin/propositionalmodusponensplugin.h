#ifndef PROPOSITIONALMODUSPONENSPLUGIN_H
#define PROPOSITIONALMODUSPONENSPLUGIN_H

#include "pluginfactoryinterface.h"
#include "propositionalmodusponensplugin_global.h"
class PROPOSITIONALMODUSPONENSPLUGINSHARED_EXPORT PropositionalModusPonensPlugin : public QObject, public InferenceRuleFactoryPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "PropositionalModusPonensPlugin")
    Q_INTERFACES(InferenceRuleFactoryPlugin)

public:
    PropositionalModusPonensPlugin();

    // PluginFactoryInterface interface
public:
    shared_ptr<const InferenceRule> instance() const;
};

#endif // PROPOSITIONALMODUSPONENSPLUGIN_H

#ifndef PROPOSITIONALORELIMINATIONPLUGIN_H
#define PROPOSITIONALORELIMINATIONPLUGIN_H

#include "pluginfactoryinterface.h"
#include "propositionaloreliminationplugin_global.h"
class PROPOSITIONALORELIMINATIONPLUGINSHARED_EXPORT PropositionalOrEliminationPlugin : public QObject, public InferenceRuleFactoryPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "PropositionalOrEliminationPlugin")
    Q_INTERFACES(InferenceRuleFactoryPlugin)

public:
    PropositionalOrEliminationPlugin();

    // PluginFactoryInterface interface
public:
    shared_ptr<const InferenceRule> instance() const;
};

#endif // PROPOSITIONALORELIMINATIONPLUGIN_H

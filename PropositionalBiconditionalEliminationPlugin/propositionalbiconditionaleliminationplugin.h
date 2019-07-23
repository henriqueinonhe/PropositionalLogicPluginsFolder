#ifndef PROPOSITIONALBICONDITIONALELIMINATIONPLUGIN_H
#define PROPOSITIONALBICONDITIONALELIMINATIONPLUGIN_H

#include "pluginfactoryinterface.h"
#include "propositionalbiconditionaleliminationplugin_global.h"
class PROPOSITIONALBICONDITIONALELIMINATIONPLUGINSHARED_EXPORT PropositionalBiconditionalEliminationPlugin : public QObject, public InferenceRuleFactoryPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "PropositionalBiconditionalEliminationPlugin")
    Q_INTERFACES(InferenceRuleFactoryPlugin)

public:
    PropositionalBiconditionalEliminationPlugin();

    // PluginFactoryInterface interface
public:
    shared_ptr<const InferenceRule> instance() const;
};

#endif // PROPOSITIONALBICONDITIONALELIMINATIONPLUGIN_H

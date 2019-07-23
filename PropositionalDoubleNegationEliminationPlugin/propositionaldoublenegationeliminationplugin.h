#ifndef PROPOSITIONALDOUBLENEGATIONELIMINATIONPLUGIN_H
#define PROPOSITIONALDOUBLENEGATIONELIMINATIONPLUGIN_H

#include "pluginfactoryinterface.h"

#include "propositionaldoublenegationeliminationplugin_global.h"
class PROPOSITIONALDOUBLENEGATIONELIMINATIONPLUGINSHARED_EXPORT PropositionalDoubleNegationEliminationPlugin : public QObject, public InferenceRuleFactoryPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "PropositionalDoubleNegationEliminationPlugin")
    Q_INTERFACES(InferenceRuleFactoryPlugin)

public:
    PropositionalDoubleNegationEliminationPlugin();

    // PluginFactoryInterface interface
public:
    shared_ptr<const InferenceRule> instance() const;
};

#endif // PROPOSITIONALDOUBLENEGATIONELIMINATIONPLUGIN_H

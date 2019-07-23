#ifndef PROPOSITIONALANDELIMINATIONPLUGIN_H
#define PROPOSITIONALANDELIMINATIONPLUGIN_H

#include "pluginfactoryinterface.h"
#include "propositionalandeliminationplugin_global.h"
class PROPOSITIONALANDELIMINATIONPLUGINSHARED_EXPORT PropositionalAndEliminationPlugin : public QObject, public InferenceRuleFactoryPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "PropositionalAndElimination")
    Q_INTERFACES(InferenceRuleFactoryPlugin)

public:
    PropositionalAndEliminationPlugin();

    // PluginFactoryInterface interface
public:
    shared_ptr<const InferenceRule> instance() const;
};

#endif // PROPOSITIONALANDELIMINATIONPLUGIN_H

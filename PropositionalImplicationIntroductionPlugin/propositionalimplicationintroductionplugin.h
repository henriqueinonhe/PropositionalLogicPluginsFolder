#ifndef PROPOSITIONALIMPLICATIONINTRODUCTIONPLUGIN_H
#define PROPOSITIONALIMPLICATIONINTRODUCTIONPLUGIN_H

#include "pluginfactoryinterface.h"
#include "propositionalimplicationintroductionplugin_global.h"
class PROPOSITIONALIMPLICATIONINTRODUCTIONPLUGINSHARED_EXPORT PropositionalImplicationIntroductionPlugin : public QObject, public InferenceRuleFactoryPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "PropositionalImplicationIntroductionPlugin")
    Q_INTERFACES(InferenceRuleFactoryPlugin)

public:
    PropositionalImplicationIntroductionPlugin();

    // PluginFactoryInterface interface
public:
    shared_ptr<const InferenceRule> instance() const;
};

#endif // PROPOSITIONALIMPLICATIONINTRODUCTIONPLUGIN_H

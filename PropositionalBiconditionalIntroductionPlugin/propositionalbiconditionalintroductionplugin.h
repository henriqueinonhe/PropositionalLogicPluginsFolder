#ifndef PROPOSITIONALBICONDITIONALINTRODUCTIONPLUGIN_H
#define PROPOSITIONALBICONDITIONALINTRODUCTIONPLUGIN_H

#include "pluginfactoryinterface.h"
#include "propositionalbiconditionalintroductionplugin_global.h"
class PROPOSITIONALBICONDITIONALINTRODUCTIONPLUGINSHARED_EXPORT PropositionalBiconditionalIntroductionPlugin : public QObject, public InferenceRuleFactoryPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "PropoisitionalBiconditionalIntroductionPlugin")
    Q_INTERFACES(InferenceRuleFactoryPlugin)

public:
    PropositionalBiconditionalIntroductionPlugin();


    // PluginFactoryInterface interface
public:
    shared_ptr<const InferenceRule> instance() const;
};

#endif // PROPOSITIONALBICONDITIONALINTRODUCTIONPLUGIN_H

#ifndef PROPOSITIONALNEGATIONINTRODUCTIONPLUGIN_H
#define PROPOSITIONALNEGATIONINTRODUCTIONPLUGIN_H

#include "pluginfactoryinterface.h"
#include "propositionalnegationintroductionplugin_global.h"
class PROPOSITIONALNEGATIONINTRODUCTIONPLUGINSHARED_EXPORT PropositionalNegationIntroductionPlugin : public QObject, public InferenceRuleFactoryPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "PropositionalNegationIntroductionPlugin")
    Q_INTERFACES(InferenceRuleFactoryPlugin)

public:
    PropositionalNegationIntroductionPlugin();

    // PluginFactoryInterface interface
public:
    shared_ptr<const InferenceRule> instance() const;
};

#endif // PROPOSITIONALNEGATIONINTRODUCTIONPLUGIN_H

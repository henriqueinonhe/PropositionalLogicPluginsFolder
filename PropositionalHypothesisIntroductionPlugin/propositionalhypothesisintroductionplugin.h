#ifndef PROPOSITIONALHYPOTHESISINTRODUCTIONPLUGIN_H
#define PROPOSITIONALHYPOTHESISINTRODUCTIONPLUGIN_H

#include "pluginfactoryinterface.h"
#include "propositionalhypothesisintroductionplugin_global.h"
class PROPOSITIONALHYPOTHESISINTRODUCTIONPLUGINSHARED_EXPORT PropositionalHypothesisIntroductionPlugin : public QObject, public InferenceRuleFactoryPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "InferenceRuleFactoryPlugin")
    Q_INTERFACES(InferenceRuleFactoryPlugin)

public:
    PropositionalHypothesisIntroductionPlugin();

    // PluginFactoryInterface interface
public:
    shared_ptr<const InferenceRule> instance() const;
};

#endif // PROPOSITIONALHYPOTHESISINTRODUCTIONPLUGIN_H

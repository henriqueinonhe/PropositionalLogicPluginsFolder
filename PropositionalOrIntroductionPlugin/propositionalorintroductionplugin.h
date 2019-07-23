#ifndef PROPOSITIONALORINTRODUCTIONPLUGIN_H
#define PROPOSITIONALORINTRODUCTIONPLUGIN_H

#include "pluginfactoryinterface.h"
#include "propositionalorintroductionplugin_global.h"
class PROPOSITIONALORINTRODUCTIONPLUGINSHARED_EXPORT PropositionalOrIntroductionPlugin : public QObject, public InferenceRuleFactoryPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "PropositionalOrIntroductionPlugin")
    Q_INTERFACES(InferenceRuleFactoryPlugin)

public:
    PropositionalOrIntroductionPlugin();

    // PluginFactoryInterface interface
public:
    shared_ptr<const InferenceRule> instance() const;
};

#endif // PROPOSITIONALORINTRODUCTIONPLUGIN_H

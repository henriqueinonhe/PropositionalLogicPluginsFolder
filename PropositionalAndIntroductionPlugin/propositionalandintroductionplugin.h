#ifndef PROPOSITIONALANDINTRODUCTIONPLUGIN_H
#define PROPOSITIONALANDINTRODUCTIONPLUGIN_H

#include "pluginfactoryinterface.h"
#include "propositionalandintroductionplugin_global.h"
class PROPOSITIONALANDINTRODUCTIONPLUGINSHARED_EXPORT PropositionalAndIntroductionPlugin : public QObject, public InferenceRuleFactoryPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "PropositionalAndIntroduction")
    Q_INTERFACES(InferenceRuleFactoryPlugin)

public:
    PropositionalAndIntroductionPlugin();

    // PluginFactoryInterface interface
public:
    shared_ptr<const InferenceRule> instance() const;
};

#endif // PROPOSITIONALANDINTRODUCTIONPLUGIN_H

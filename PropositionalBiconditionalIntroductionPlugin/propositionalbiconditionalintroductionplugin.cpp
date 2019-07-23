#include "propositionalbiconditionalintroductionplugin.h"
#include "propositionalbiconditionalintroduction.h"
#include <memory>

PropositionalBiconditionalIntroductionPlugin::PropositionalBiconditionalIntroductionPlugin()
{
}

shared_ptr<const InferenceRule> PropositionalBiconditionalIntroductionPlugin::instance() const
{
    return make_shared<const PropositionalBiconditionalIntroduction>();
}

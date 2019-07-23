#include "propositionalimplicationintroductionplugin.h"
#include "propositionalimplicationintroduction.h"
#include "memory"

PropositionalImplicationIntroductionPlugin::PropositionalImplicationIntroductionPlugin()
{
}

shared_ptr<const InferenceRule> PropositionalImplicationIntroductionPlugin::instance() const
{
    return make_shared<const PropositionalImplicationIntroduction>();
}

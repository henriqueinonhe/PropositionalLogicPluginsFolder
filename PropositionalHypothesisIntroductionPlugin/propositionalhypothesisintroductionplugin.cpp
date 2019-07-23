#include "propositionalhypothesisintroductionplugin.h"
#include "propositionalhypothesisintroduction.h"
#include <memory>

PropositionalHypothesisIntroductionPlugin::PropositionalHypothesisIntroductionPlugin()
{
}

shared_ptr<const InferenceRule> PropositionalHypothesisIntroductionPlugin::instance() const
{
    return make_shared<const PropositionalHypothesisIntroduction>();
}

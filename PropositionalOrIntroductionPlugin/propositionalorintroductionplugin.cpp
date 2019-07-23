#include "propositionalorintroductionplugin.h"
#include "propositionalorintroduction.h"
#include <memory>

PropositionalOrIntroductionPlugin::PropositionalOrIntroductionPlugin()
{
}

shared_ptr<const InferenceRule> PropositionalOrIntroductionPlugin::instance() const
{
    return make_shared<PropositionalOrIntroduction>();
}

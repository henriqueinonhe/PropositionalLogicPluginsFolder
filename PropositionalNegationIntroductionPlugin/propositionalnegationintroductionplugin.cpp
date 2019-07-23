#include "propositionalnegationintroductionplugin.h"
#include "propositionalnegationintroduction.h"
#include <memory>

PropositionalNegationIntroductionPlugin::PropositionalNegationIntroductionPlugin()
{
}

shared_ptr<const InferenceRule> PropositionalNegationIntroductionPlugin::instance() const
{
    return make_shared<PropositionalNegationIntroduction>();
}

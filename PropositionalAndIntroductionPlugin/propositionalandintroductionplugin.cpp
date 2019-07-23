#include "propositionalandintroductionplugin.h"
#include "propositionalandintroduction.h"
#include <memory>

PropositionalAndIntroductionPlugin::PropositionalAndIntroductionPlugin()
{
}

shared_ptr<const InferenceRule> PropositionalAndIntroductionPlugin::instance() const
{
    return make_shared<const PropositionalAndIntroduction>();
}

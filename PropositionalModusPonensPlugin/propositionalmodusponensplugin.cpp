#include "propositionalmodusponensplugin.h"
#include "propositionalmodusponens.h"
#include <memory>

PropositionalModusPonensPlugin::PropositionalModusPonensPlugin()
{
}

shared_ptr<const InferenceRule> PropositionalModusPonensPlugin::instance() const
{
    return make_shared<const PropositionalModusPonens>();
}

#include "propositionalbiconditionaleliminationplugin.h"
#include "propositionalbiconditionalelimination.h"
#include <memory>

PropositionalBiconditionalEliminationPlugin::PropositionalBiconditionalEliminationPlugin()
{
}

shared_ptr<const InferenceRule> PropositionalBiconditionalEliminationPlugin::instance() const
{
    return make_shared<const PropositionalBiconditionalElimination>();
}

#include "propositionaloreliminationplugin.h"
#include "propositionalorelimination.h"
#include <memory>

PropositionalOrEliminationPlugin::PropositionalOrEliminationPlugin()
{
}

shared_ptr<const InferenceRule> PropositionalOrEliminationPlugin::instance() const
{
    return std::make_shared<PropositionalOrElimination>();
}

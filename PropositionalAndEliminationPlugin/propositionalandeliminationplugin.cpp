#include "propositionalandeliminationplugin.h"
#include "propositionalandelimination.h"
#include <memory>

PropositionalAndEliminationPlugin::PropositionalAndEliminationPlugin()
{
}

shared_ptr<const InferenceRule> PropositionalAndEliminationPlugin::instance() const
{
    return std::make_shared<const PropositionalAndElimination>();
}

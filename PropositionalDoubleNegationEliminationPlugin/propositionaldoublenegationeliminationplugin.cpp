#include "propositionaldoublenegationeliminationplugin.h"
#include "propositionaldoublenegationelimination.h"
#include <memory>

PropositionalDoubleNegationEliminationPlugin::PropositionalDoubleNegationEliminationPlugin()
{

}

shared_ptr<const InferenceRule> PropositionalDoubleNegationEliminationPlugin::instance() const
{
    return make_shared<const PropositionalDoubleNegationElimination>();
}

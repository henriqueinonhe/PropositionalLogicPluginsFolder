#include "automaticpropositionallogicsignature.h"
#include "automaticpropsignature.h"

AutomaticPropositionalLogicSignature::AutomaticPropositionalLogicSignature()
{
}

shared_ptr<Signature> AutomaticPropositionalLogicSignature::instance() const
{
    return make_shared<AutomaticPropSignature>();
}

shared_ptr<Signature> AutomaticPropositionalLogicSignature::instance(QDataStream &stream) const
{
    return make_shared<AutomaticPropSignature>();
}

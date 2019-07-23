#include "proofwithhypothesisplugin.h"
#include "proofwithhypothesis.h"

ProofWithHypothesisPlugin::ProofWithHypothesisPlugin()
{
}

shared_ptr<Proof> ProofWithHypothesisPlugin::instance() const
{
    return make_shared<ProofWithHypothesis>();
}

shared_ptr<Proof> ProofWithHypothesisPlugin::instance(const uint id, const QString &name, const QString &description, const QVector<Formula> &premises, const Formula &conclusion) const
{
    return make_shared<ProofWithHypothesis>(id, name, description, premises, conclusion);
}


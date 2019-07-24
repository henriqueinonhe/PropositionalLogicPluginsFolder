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
    return Proof::createNewProof<ProofWithHypothesis>(id, name, description, premises, conclusion);
}

shared_ptr<Proof> ProofWithHypothesisPlugin::instance(QDataStream &stream, const Signature * const signature) const
{
    return make_shared<ProofWithHypothesis>(stream, signature);
}


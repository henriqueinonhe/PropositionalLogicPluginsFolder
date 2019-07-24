#ifndef PROOFWITHHYPOTHESISPLUGIN_H
#define PROOFWITHHYPOTHESISPLUGIN_H

#include "pluginfactoryinterface.h"
#include "proofwithhypothesisplugin_global.h"
class PROOFWITHHYPOTHESISPLUGINSHARED_EXPORT ProofWithHypothesisPlugin : public QObject, public ProofFactoryPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "ProofWithHypothesisPlugin")
    Q_INTERFACES(ProofFactoryPlugin)

public:
    ProofWithHypothesisPlugin();

    shared_ptr<Proof> instance() const override;
    shared_ptr<Proof> instance(const uint id, const QString &name, const QString &description, const QVector<Formula> &premises, const Formula &conclusion) const override;
    shared_ptr<Proof> instance(QDataStream &stream, const Signature * const signature) const override;
};

#endif // PROOFWITHHYPOTHESISPLUGIN_H

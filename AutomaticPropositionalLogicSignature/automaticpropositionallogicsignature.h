#ifndef AUTOMATICPROPOSITIONALLOGICSIGNATURE_H
#define AUTOMATICPROPOSITIONALLOGICSIGNATURE_H

#include "pluginfactoryinterface.h"

#include "automaticpropositionallogicsignature_global.h"
class AUTOMATICPROPOSITIONALLOGICSIGNATURESHARED_EXPORT AutomaticPropositionalLogicSignature : public QObject, public SignatureFactoryPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "AutomaticPropositionalLogicSignature")
    Q_INTERFACES(SignatureFactoryPlugin)


public:
    AutomaticPropositionalLogicSignature();

public:
    shared_ptr<Signature> instance() const;
    shared_ptr<Signature> instance(QDataStream &stream) const;
};

#endif // AUTOMATICPROPOSITIONALLOGICSIGNATURE_H

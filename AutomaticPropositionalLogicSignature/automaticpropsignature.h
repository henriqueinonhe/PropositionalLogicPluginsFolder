#ifndef AUTOMATICPROPSIGNATURE_H
#define AUTOMATICPROPSIGNATURE_H

#include "signature.h"
#include <memory>
#include <unordered_map>
#include <string>
#include "token.h"

using namespace std;

class AutomaticPropSignature : public Signature
{
public:
    AutomaticPropSignature();

    // Signature interface
public:
    const Token *getTokenPointer(const QString &token) const override;

protected:
    void serialize(QDataStream &stream) const override;
    void deserialize(QDataStream &stream) override;

private:
    bool tokenIsAlreadyPresentInSignature(const Token &token) const;
    void pushTokenPointerToTable(const Token &token) const;

    mutable unordered_map<string, unique_ptr<Token>> tokenTable;

    // Signature interface
};

#endif // AUTOMATICPROPSIGNATURE_H

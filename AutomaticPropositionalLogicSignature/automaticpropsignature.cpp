#include "automaticpropsignature.h"
#include "token.h"
#include <QRegularExpression>
#include "type.h"
#include "coretoken.h"
#include <QDataStream>
#include "tablesignature.h"
#include "punctuationtoken.h"

AutomaticPropSignature::AutomaticPropSignature()
{
    pushTokenPointerToTable(PunctuationToken("("));
    pushTokenPointerToTable(PunctuationToken(")"));
    pushTokenPointerToTable(CoreToken("^", Type("[o,o]->o")));
    pushTokenPointerToTable(CoreToken("->", Type("[o,o]->o")));
    pushTokenPointerToTable(CoreToken("<->", Type("[o,o]->o")));
    pushTokenPointerToTable(CoreToken("v", Type("[o,o]->o")));
    pushTokenPointerToTable(CoreToken("~", Type("o->o")));
}

bool AutomaticPropSignature::tokenIsAlreadyPresentInSignature(const Token &token) const
{
    return tokenTable.find(token.getString().toStdString()) != tokenTable.end();
}

const Token *AutomaticPropSignature::getTokenPointer(const QString &token) const
{
    if(tokenTable.find(token.toStdString()) != tokenTable.end())
    {
        return tokenTable[token.toStdString()].get();
    }

    QRegularExpression regex("^[A-Z]$");
    if(regex.match(token).hasMatch())
    {
        pushTokenPointerToTable(CoreToken(token, Type("o")));
        return tokenTable[token.toStdString()].get();
    }
    else
    {
        QString errorMsg;
        errorMsg += "This token (\"";
        errorMsg += token;
        errorMsg += "\") is not supported!";
        throw std::invalid_argument(errorMsg.toStdString());
    }
}

void AutomaticPropSignature::serialize(QDataStream &stream) const
{
    stream << tokenTable;
}

void AutomaticPropSignature::deserialize(QDataStream &stream)
{
    stream >> tokenTable;
}

void AutomaticPropSignature::pushTokenPointerToTable(const Token &token) const
{
    tokenTable.emplace(token.getString().toStdString(), unique_ptr<Token>(token.getAllocatedClone()));
}

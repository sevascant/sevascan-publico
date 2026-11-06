#pragma once

#include <mw/exceptions/SEVException.h>
#include <mw/util/StringUtil.h>

#define ThrowInsufficientFunds(msg) throw InsufficientFundsException(msg, __FUNCTION__)
#define ThrowInsufficientFunds_F(msg, ...) throw InsufficientFundsException(StringUtil::Format(msg, __VA_ARGS__), __FUNCTION__)

class InsufficientFundsException : public SEVException
{
public:
    InsufficientFundsException(const std::string& message, const std::string& function)
        : SEVException("InsufficientFundsException", message, function)
    {

    }
};
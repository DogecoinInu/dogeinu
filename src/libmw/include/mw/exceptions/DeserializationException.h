#pragma once

#include <mw/exceptions/DOGEINUException.h>
#include <mw/util/StringUtil.h>

#define ThrowDeserialization(msg) throw DeserializationException(msg, __FUNCTION__)
#define ThrowDeserialization_F(msg, ...) throw DeserializationException(StringUtil::Format(msg, __VA_ARGS__), __FUNCTION__)

class DeserializationException : public DOGEINUException
{
public:
    DeserializationException(const std::string& message, const std::string& function)
        : DOGEINUException("DeserializationException", message, function)
    {

    }
};
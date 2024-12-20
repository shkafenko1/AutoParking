#ifndef REGEXEXCEPTION_H
#define REGEXEXCEPTION_H

#include "BaseCustomException.h"

class RegexException : public BaseCustomException {
public:
    const char* what() const noexcept override {
        return "Ошибка регулярного выражения!";
    }
};
//    std::regex pattern(R"(^\+?375(29|33|44|25|17|44)\d{7}$)");
#endif // REGEXEXCEPTION_H

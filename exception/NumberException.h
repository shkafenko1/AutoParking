#ifndef NUMBEREXCEPTION_H
#define NUMBEREXCEPTION_H

#include "BaseCustomException.h"

class NumberException : public BaseCustomException {
public:
    const char* what() const noexcept override {
        return "Ошибка с числом!";
    }
};


#endif // NUMBEREXCEPTION_H

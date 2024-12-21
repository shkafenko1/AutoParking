#ifndef NAMESSTRINGEXCEPTION_H
#define NAMESSTRINGEXCEPTION_H

#include "BaseCustomException.h"

class NameStringException : public BaseCustomException {
public:
    const char* what() const noexcept override {
        return "Имя должно содержать только латинские буквы!";
    }
};

#endif // NAMESSTRINGEXCEPTION_H

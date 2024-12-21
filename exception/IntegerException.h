#include "NumberException.h"
#ifndef AUTOPARKING_NIGHT_INTEGEREXCEPTION_H
#define AUTOPARKING_NIGHT_INTEGEREXCEPTION_H
class IntegerException : public NumberException {
public:
    const char* what() const noexcept override {
        return "Ожидалось целое число!";
    }
};
#endif //AUTOPARKING_NIGHT_INTEGEREXCEPTION_H

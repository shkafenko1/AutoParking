#include "NumberException.h"
#ifndef AUTOPARKING_NIGHT_FLOATEXCEPTION_H
#define AUTOPARKING_NIGHT_FLOATEXCEPTION_H
class FloatException : public NumberException {
public:
    const char* what() const noexcept override {
        return "Ожидалось число с плавающей точкой!";
    }
};
#endif //AUTOPARKING_NIGHT_FLOATEXCEPTION_H

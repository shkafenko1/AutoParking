#ifndef BASECUSTOMEXCEPTION_H
#define BASECUSTOMEXCEPTION_H

#include <exception>

class BaseCustomException : public std::exception {
public:
    virtual const char* what() const noexcept override {
        return "Произошло исключение!";
    }
};

#endif // BASECUSTOMEXCEPTION_H

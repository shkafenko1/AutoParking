#ifndef FILEEXCEPTION_H
#define FILEEXCEPTION_H

#include "BaseCustomException.h"

class FileException : public BaseCustomException {
public:
    const char* what() const noexcept override {
        return "Ошибка работы с файлом!";
    }
};

#endif // FILEEXCEPTION_H

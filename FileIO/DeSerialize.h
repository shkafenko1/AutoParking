#ifndef AUTOPARKING_NIGHT_DESERIALIZE_H
#define AUTOPARKING_NIGHT_DESERIALIZE_H

#include <string>

class DeSerialize{
public:
    virtual std::string serialize();
    virtual void deserialize(std::string& string);
};

#endif //AUTOPARKING_NIGHT_DESERIALIZE_H

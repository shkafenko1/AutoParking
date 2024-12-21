//
// Created by LENOVO on 21.12.2024.
//

#ifndef AUTOPARKING_NIGHT_FILEMANAGER_H
#define AUTOPARKING_NIGHT_FILEMANAGER_H

#include <string>
#include <fstream>
#include "../container/List.h"

template<typename Type>

class FileManager {
private:
    std::string filePath;
public:
    explicit FileManager(const std::string& filePath) : filePath(filePath) {}

    void writeToFile(List<Type>* list);

    void readFromFile(List<Type>* list);
};

template<typename Type>
void FileManager<Type>::readFromFile(List<Type> *list) {
    std::ifstream inFile(filePath);
    if (inFile.is_open()) {
        std::string line;
        while (std::getline(inFile, line)) {
            Type* obj = new Type();
            obj->deserialize(line);
            list->addObj(*obj);
        }
        inFile.close();
    }
    else {
        std::cerr << "Error: Unable to open file for reading!" << std::endl;
    }
}

template<typename Type>
void FileManager<Type>::writeToFile(List<Type> *list) {
    std::ofstream outFile(filePath, std::ios::app);
    if (outFile.is_open()) {
        for (auto& obj : *list)
            outFile << obj.serialize() << std::endl;
        outFile.close();
    }
    else {
        std::cerr << "Error: Unable to open file for writing!" << std::endl;
    }
}

#endif //AUTOPARKING_NIGHT_FILEMANAGER_H

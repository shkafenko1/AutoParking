#ifndef AUTOPARKING_NIGHT_ALGORITHM_H
#define AUTOPARKING_NIGHT_ALGORITHM_H

#include "sorter.h"

template <typename T>
class Algorithm {
private:
    Sorter<T> sorter; // Поле для сортировки

public:
    void sort(List<T>& container) {
        sorter.sort(container.begin(), container.end());
    }
};

#endif
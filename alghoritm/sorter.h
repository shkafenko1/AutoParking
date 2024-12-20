#ifndef AUTOPARKING_NIGHT_SORTER_H
#define AUTOPARKING_NIGHT_SORTER_H
#include <iostream>
#include "../container/ListContainer.h"

template <typename T>
class Sorter {
public:
    // Сортировка слиянием через итераторы
    void sort(typename List<T>::Iterator begin, typename List<T>::Iterator end) {
        if (begin == end || ++typename List<T>::Iterator(begin) == end) {
            return; // База рекурсии: список пуст или содержит один элемент
        }

        // Разделяем список на две части
        typename List<T>::Iterator midIter = findMiddle(begin, end);

        // Рекурсивная сортировка двух частей
        sort(begin, midIter);
        sort(midIter, end);

        // Слияние отсортированных частей
        merge(begin, midIter, end);
    }

private:
    // Функция для нахождения середины списка (работает через итераторы)
    typename List<T>::Iterator findMiddle(typename List<T>::Iterator begin, typename List<T>::Iterator end) {
        typename List<T>::Iterator slow = begin;
        typename List<T>::Iterator fast = begin;

        while (fast != end && ++fast != end) {
            ++slow;
            ++fast;
        }

        return slow; // Возвращаем итератор на середину
    }

    // Функция слияния двух отсортированных частей
    void merge(typename List<T>::Iterator begin, typename List<T>::Iterator mid, typename List<T>::Iterator end) {
        List<T> temp;

        auto left = begin;
        auto right = mid;

        // Слияние двух частей в временный список
        while (left != mid && right != end) {
            if (*left <= *right) {
                temp.add(*left);
                ++left;
            } else {
                temp.add(*right);
                ++right;
            }
        }

        // Добавляем оставшиеся элементы из левой части
        while (left != mid) {
            temp.add(*left);
            ++left;
        }

        // Добавляем оставшиеся элементы из правой части
        while (right != end) {
            temp.add(*right);
            ++right;
        }

        // Копируем данные из временного списка обратно в исходный
        auto it = begin;
        for (auto tempIt = temp.begin(); tempIt != temp.end(); ++tempIt) {
            *it = *tempIt;
            ++it;
        }
    }
};

#endif
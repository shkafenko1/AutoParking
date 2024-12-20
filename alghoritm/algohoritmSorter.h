#ifndef AUTOPARKING_NIGHT_ALGOHORITMSORTER_H
#define AUTOPARKING_NIGHT_ALGOHORITMSORTER_H
#include "../container/ListContainer.h"

template <typename T>
class Sorter {
public:

    void sort(List<T>& container) {
        List<T>& items = container.getItems(); // Получаем доступ к элементам контейнера
        quickSort(items, 0, items.size() - 1);        // Вызываем быструю сортировку
    }

    // Метод сортировки с пользовательским компаратором
    template <typename Comparator>
    void sort(List<T>& container, Comparator comp) {
        List<T>& items = container.getItems(); // Получаем доступ к элементам контейнера
        quickSort(items, 0, items.size() - 1, comp); // Вызываем быструю сортировку с компаратором
    }

private:
    // Метод быстрой сортировки
    void quickSort(List<T>& items, int low, int high) {
        if (low < high) {
            int pi = partition(items, low, high); // Находим индекс опорного элемента
            quickSort(items, low, pi - 1);        // Сортируем элементы до опорного
            quickSort(items, pi + 1, high);       // Сортируем элементы после опорного
        }
    }

    // Метод разбиения для быстрой сортировки
    int partition(List<T>& items, int low, int high) {
        T pivot = items[high]; // Опорный элемент
        int i = (low - 1);     // Индекс меньшего элемента
        for (int j = low; j < high; j++) {
            if (items[j] < pivot) { // Если текущий элемент меньше опорного
                i++;
                std::swap(items[i], items[j]); // Меняем местами
            }
        }
        std::swap(items[i + 1], items[high]); // Меняем опорный элемент с элементом на i + 1
        return i + 1; // Возвращаем индекс опорного элемента
    }

    // Метод быстрой сортировки с пользовательским компаратором
    template <typename Comparator>
    void quickSort(List<T>& items, int low, int high, Comparator comp) {
        if (low < high) {
            int pi = partition(items, low, high, comp); // Находим индекс опорного элемента
            quickSort(items, low, pi - 1, comp);        // Сортируем элементы до опорного
            quickSort(items, pi + 1, high, comp);       // Сортируем элементы после опорного
        }
    }

    template <typename Comparator>
    int partition(List<T>& items, int low, int high, Comparator comp) {
        T pivot = items[high];
        int i = (low - 1);     // Индекс меньшего элемента
        for (int j = low; j < high; j++) {
            if (comp(items[j], pivot)) { // Если текущий элемент меньше опорного
                i++;
                std::swap(items[i], items[j]); // Меняем местами
            }
        }
        std::swap(items[i + 1], items[high]); // Меняем опорный элемент с элементом на i + 1
        return i + 1; // Возвращаем индекс опорного элемента
    }
};
#endif //AUTOPARKING_NIGHT_ALGOHORITMSORTER_H

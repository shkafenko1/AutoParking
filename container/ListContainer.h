#include <iostream>
#include <vector>
#include <stdexcept>

template <typename T>
class ListContainer {
private:
    T* items;
    size_t capacity;
    size_t count;

    void resize(size_t newCapacity) {
        T* newItems = new T[newCapacity];
        for (size_t i = 0; i < count; ++i) {
            newItems[i] = items[i];
        }
        delete[] items;
        items = newItems;
        capacity = newCapacity;
    }

public:
    class Iterator {
    private:
        T* current;
        T* end;

    public:
        Iterator(T* start, T* end) : current(start), end(end) {}

        T& operator*() {
            if (current == end) {
                throw std::out_of_range("Итератор вышел за пределы диапазона.");
            }
            return *current;
        }

        Iterator& operator++() {
            if (current != end) {
                ++current;
            }
            return *this;
        }

        bool operator==(const Iterator& other) const {
            return current == other.current;
        }

        bool operator!=(const Iterator& other) const {
            return current != other.current;
        }
    };

    ListContainer() : items(nullptr), capacity(0), count(0) {}

    ~ListContainer() {
        delete[] items;
    }

    void add(const T& item) {
        if (count == capacity) {
            resize(capacity == 0 ? 1 : capacity * 2);
        }
        items[count++] = item;
    }

    void remove(const T& item) {
        size_t index = count;
        for (size_t i = 0; i < count; ++i) {
            if (items[i] == item) {
                index = i;
                break;
            }
        }
        if (index == count) {
            throw std::invalid_argument("Элемент не найден в контейнере.");
        }
        for (size_t i = index; i < count - 1; ++i) {
            items[i] = items[i + 1];
        }
        --count;
    }

    Iterator begin() {
        return Iterator(items, items + count);
    }

    Iterator end() {
        return Iterator(items + count, items + count);
    }

    size_t size() const {
        return count;
    }

    T& operator[](size_t index) {
        if (index >= count) {
            throw std::out_of_range("Индекс выходит за пределы диапазона.");
        }
        return items[index];
    }

    void print() const {
        for (size_t i = 0; i < count; ++i) {
            std::cout << items[i] << " ";
        }
        std::cout << std::endl;
    }
};
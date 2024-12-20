#include <iostream>
#include <stdexcept>

// Класс узла списка
template <typename T>
class Node {
private:
    T data;          // Данные узла
    Node* prev;      // Указатель на предыдущий узел
    Node* next;      // Указатель на следующий узел

public:
    // Конструктор для создания узла с заданным значением
    explicit Node(const T& value) : data(value), prev(nullptr), next(nullptr) {}

    // Геттеры и сеттеры для доступа к данным и указателям
    T& getData() { return data; }
    const T& getData() const { return data; }

    Node* getPrev() const { return prev; }
    void setPrev(Node* node) { prev = node; }

    Node* getNext() const { return next; }
    void setNext(Node* node) { next = node; }
};

// Класс контейнера для двусвязного списка
template <typename T>
class List {
public:
    // Вложенный класс итератора для обхода списка
    class Iterator {
    public:
        using pointer = T*;      // Определение типа указателя
        using reference = T&;    // Определение типа ссылки

        // Конструктор итератора, принимающий указатель на узел
        explicit Iterator(Node<T>* node) : current(node) {}

        // Оператор разыменования для получения значения узла
        reference operator*() const { return current->getData(); }
        pointer operator->() const { return &current->getData(); }

        // Префиксная форма ++ для перехода к следующему узлу
        Iterator& operator++() {
            if (current) current = current->getNext();
            return *this;
        }

        // Постфиксная форма ++ для перехода к следующему узлу
        Iterator operator++(int) {
            Iterator temp = *this;
            ++(*this);
            return temp;
        }

        // Префиксная форма -- для перехода к предыдущему узлу
        Iterator& operator--() {
            if (current) current = current->getPrev();
            return *this;
        }

        // Постфиксная форма -- для перехода к предыдущему узлу
        Iterator operator--(int) {
            Iterator temp = *this;
            --(*this);
            return temp;
        }

        // Операторы сравнения для итераторов
        bool operator==(const Iterator& other) const { return current == other.current; }
        bool operator!=(const Iterator& other) const { return current != other.current; }

    private:
        Node<T>* current; // Указатель на текущий узел
    };

    // Конструктор по умолчанию для инициализации пустого списка
    List() : head(nullptr), tail(nullptr), size(0) {}

    // Конструктор копирования для создания копии списка
    List(const List& other) : head(nullptr), tail(nullptr), size(0) {
        Node<T>* current = other.head;
        while (current) {
            add(current->getData()); // Добавление элементов из другого списка
            current = current->getNext();
        }
    }

    // Деструктор для освобождения ресурсов
    ~List() { clear(); }

    // Оператор индексации для доступа к элементам по индексу
    T& operator[](size_t index) {
        if (index >= size) {
            throw std::out_of_range("Индекс выходит за пределы списка.");
        }
        Node<T>* current = head;
        for (size_t i = 0; i < index; ++i) {
            current = current->getNext();
        }
        return current->getData();
    }

    const T& operator[](size_t index) const {
        if (index >= size) {
            throw std::out_of_range("Индекс выходит за пределы списка.");
        }
        Node<T>* current = head;
        for (size_t i = 0; i < index; ++i) {
            current = current->getNext();
        }
        return current->getData();
    }

    // Метод add для добавления элемента в конец списка
    void add(const T& value) {
        Node<T>* newNode = new Node<T>(value); // Создание нового узла
        if (tail) {
            tail->setNext(newNode); // Установка следующего узла для текущего хвоста
            newNode->setPrev(tail); // Установка предыдущего узла для нового узла
            tail = newNode;         // Обновление указателя на хвост
        } else {
            head = tail = newNode;  // Если список пуст, новый узел становится головой и хвостом
        }
        ++size; // Увеличение размера списка
    }

    // Метод remove для удаления элемента по значению
    void remove(const T& value) {
        Node<T>* current = head; // Начинаем с головы
        while (current) {
            if (current->getData() == value) {
                // Если найден элемент, обновляем указатели предыдущего и следующего узлов
                if (current->getPrev()) {
                    current->getPrev()->setNext(current->getNext());
                } else {
                    head = current->getNext(); // Удаляемый элемент — голова
                }

                if (current->getNext()) {
                    current->getNext()->setPrev(current->getPrev());
                } else {
                    tail = current->getPrev(); // Удаляемый элемент — хвост
                }

                delete current; // Освобождение памяти
                --size; // Уменьшение размера списка
                return;
            }
            current = current->getNext(); // Переход к следующему узлу
        }
        throw std::runtime_error("Элемент не найден!"); // Если элемент не найден
    }

    // Очистка списка
    void clear() {
        while (head) {
            Node<T>* temp = head; // Сохраняем указатель на текущий узел
            head = head->getNext(); // Переход к следующему узлу
            delete temp; // Освобождение памяти текущего узла
        }
        tail = nullptr; // Обнуляем указатель на хвост
        size = 0; // Сбрасываем размер
    }

    // Получение размера списка
    size_t get_size() const { return size; }

    // Итераторы для начала и конца списка
    Iterator begin() { return Iterator(head); }
    Iterator end() { return Iterator(nullptr); }

private:
    Node<T>* head; // Указатель на начало списка
    Node<T>* tail; // Указатель на конец списка
    size_t size;   // Текущее количество элементов в списке
};
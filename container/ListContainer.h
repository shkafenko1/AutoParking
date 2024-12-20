#include <iostream>
#include <stdexcept>

template <typename T>
class Node {
private:
    T data;
    Node* prev;
    Node* next;

public:
    explicit Node(const T& value) : data(value), prev(nullptr), next(nullptr) {}

    T& getData() { return data; }
    const T& getData() const { return data; }

    Node* getPrev() const { return prev; }
    void setPrev(Node* node) { prev = node; }

    Node* getNext() const { return next; }
    void setNext(Node* node) { next = node; }
};

template <typename T>
class List {
public:
    class Iterator {
    public:
        using pointer = T*;
        using reference = T&;

        explicit Iterator(Node<T>* node) : current(node) {}
        reference operator*() const { return current->getData(); }
        pointer operator->() const { return &current->getData(); }

        Iterator& operator++() {
            if (current) current = current->getNext();
            return *this;
        }

        Iterator operator++(int) {
            Iterator temp = *this;
            ++(*this);
            return temp;
        }

        Iterator& operator--() {
            if (current) current = current->getPrev();
            return *this;
        }

        Iterator operator--(int) {
            Iterator temp = *this;
            --(*this);
            return temp;
        }

        bool operator==(const Iterator& other) const { return current == other.current; }
        bool operator!=(const Iterator& other) const { return current != other.current; }

    private:
        Node<T>* current;
    };

    List() : head(nullptr), tail(nullptr), size(0) {}

    ~List() { clear(); }

    void add(const T& value) {
        Node<T>* newNode = new Node<T>(value);
        if (tail) {
            tail->setNext(newNode);
            newNode->setPrev(tail);
            tail = newNode;
        } else {
            head = tail = newNode;
        }
        ++size;
    }

    void remove(const T& value) {
        Node<T>* current = head;
        while (current) {
            if (current->getData() == value) {
                if (current->getPrev()) {
                    current->getPrev()->setNext(current->getNext());
                } else {
                    head = current->getNext();
                }

                if (current->getNext()) {
                    current->getNext()->setPrev(current->getPrev());
                } else {
                    tail = current->getPrev();
                }

                delete current;
                --size;
                return;
            }
            current = current->getNext();
        }
        throw std::runtime_error("Элемент не найден!");
    }

    void clear() {
        while (head) {
            Node<T>* temp = head;
            head = head->getNext();
            delete temp;
        }
        tail = nullptr;
        size = 0;
    }

    size_t get_size() const { return size; }

    Iterator begin() { return Iterator(head); }
    Iterator end() { return Iterator(nullptr); }

private:
    Node<T>* head;
    Node<T>* tail;
    size_t size;
};
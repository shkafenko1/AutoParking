#ifndef AUTOPARKING_NIGHT_ACTION_H
#define AUTOPARKING_NIGHT_ACTION_H

#include <stack>
#include <functional>

class Action {
public:
    // Выполняет действие и добавляет его в стек для возможности отмены
    void perform(const std::function<void()>& doAction, const std::function<void()>& undoAction);

    // Отменяет последнее действие
    void undo();

    // Проверяет, можно ли выполнить отмену
    bool canUndo() const;

private:
    std::stack<std::function<void()>> undoStack; // Стек действий для отмены
};

#endif

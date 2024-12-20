#include "Action.h"
#include <stdexcept>

void Action::perform(const std::function<void()>& doAction, const std::function<void()>& undoAction) {
    doAction(); // Выполняем действие
    undoStack.push(undoAction); // Добавляем обратное действие в стек
}

void Action::undo() {
    if (!undoStack.empty()) {
        undoStack.top()(); // Выполняем действие отмены
        undoStack.pop();   // Удаляем действие из стека
    } else {
        throw std::runtime_error("Нет действий для отмены!");
    }
}

bool Action::canUndo() const {
    return !undoStack.empty();
}

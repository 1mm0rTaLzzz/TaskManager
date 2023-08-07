#include "TaskManager.h"


void TaskManager::addTask(const Task &task) {
    tasks.push_back(task);
}

void TaskManager::removeTask(size_t index) {
    if (index < tasks.size()) {
        tasks.erase(tasks.begin() + index);
    }
}

void TaskManager::markTaskAsCompleted(size_t index) {
    if (index < tasks.size()) {
        tasks[index].setCompleted(true);
    }
}

void TaskManager::printTasks() const {
    for (size_t i = 0; i < tasks.size(); ++i) {
        std::cout << "[" << i + 1 << "] ";
        std::cout << (tasks[i].getCompleted() ? "[x] " : "[ ] ");
        std::cout << tasks[i].getTitle() << " - " << tasks[i].getDescription();

        switch (tasks[i].getCategory()) {
            case TaskCategory::Personal:
                std::cout << " (Личное)";
                break;
            case TaskCategory::Work:
                std::cout << " (Работа)";
                break;
            case TaskCategory::Study:
                std::cout << " (Учеба)";
                break;
            case TaskCategory::Other:
                std::cout << " (Другое)";
                break;
        }

        std::cout << std::endl;
    }
}



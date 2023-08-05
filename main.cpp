#include <iostream>
#include <string>
#include <vector>

class Task {
private:
    std::string title;
    std::string description;
    bool isCompleted;

public:
    Task(const std::string& title, const std::string& description)
            : title(title), description(description), isCompleted(false) {}

    void setTitle(const std::string& newTitle) {
        title = newTitle;
    }

    void setDescription(const std::string& newDescription) {
        description = newDescription;
    }

    void setCompleted(bool completed) {
        isCompleted = completed;
    }

    std::string getTitle() const {
        return title;
    }

    std::string getDescription() const {
        return description;
    }

    bool getCompleted() const {
        return isCompleted;
    }
};

class TaskManager {
private:
    std::vector<Task> tasks;

public:
    void addTask(const Task& task) {
        tasks.push_back(task);
    }

    void removeTask(size_t index) {
        if (index < tasks.size()) {
            tasks.erase(tasks.begin() + index);
        }
    }

    void markTaskAsCompleted(size_t index) {
        if (index < tasks.size()) {
            tasks[index].setCompleted(true);
        }
    }

    void printTasks() const {
        for (size_t i = 0; i < tasks.size(); ++i) {
            std::cout << "[" << i + 1 << "] ";
            std::cout << (tasks[i].getCompleted() ? "[x] " : "[ ] ");
            std::cout << tasks[i].getTitle() << " - " << tasks[i].getDescription() << std::endl;
        }
    }
};

int main() {
    TaskManager manager;

    Task task1("Задача 1", "Описание задачи 1");
    Task task2("Задача 2", "Описание задачи 2");

    manager.addTask(task1);
    manager.addTask(task2);

    manager.printTasks();

    manager.markTaskAsCompleted(0);

    manager.printTasks();

    return 0;
}

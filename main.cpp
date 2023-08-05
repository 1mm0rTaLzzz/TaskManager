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

};

class TaskManager {
private:
    std::vector<Task> tasks;

public:

};

int main() {
    TaskManager manager;

    Task task1("Задача 1", "Описание задачи 1");
    Task task2("Задача 2", "Описание задачи 2");

    return 0;
}

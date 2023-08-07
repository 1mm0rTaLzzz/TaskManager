#include "TaskManager.h"


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

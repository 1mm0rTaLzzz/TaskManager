#include <iostream>
#include <string>
#include <vector>
#include "Task.h"

#ifndef TASKMANAGER_TASKMANAGER_H
#define TASKMANAGER_TASKMANAGER_H


class TaskManager {
private:
    std::vector<Task> tasks;
public:
    void addTask(const Task &task);

    void removeTask(size_t index);

    void markTaskAsCompleted(size_t index);

    void printTasks() const;
};


#endif //TASKMANAGER_TASKMANAGER_H

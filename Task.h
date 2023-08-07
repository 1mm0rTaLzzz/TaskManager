#include <iostream>
#ifndef TASKMANAGER_TASK_H
#define TASKMANAGER_TASK_H

enum class TaskCategory {
    Personal,
    Work,
    Study,
    Other
};

class Task {
private:
    std::string title;
    std::string description;
    bool isCompleted;
    TaskCategory category;
public:
    Task(const std::string& title, const std::string& description, TaskCategory category);

    void setTitle(const std::string &newTitle);

    void setDescription(const std::string &newDescription);

    void setCompleted(bool completed);

    std::string getTitle() const;

    TaskCategory getCategory() const;

    std::string getDescription() const;

    bool getCompleted() const;

};


#endif //TASKMANAGER_TASK_H

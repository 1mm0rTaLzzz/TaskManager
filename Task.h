#include <iostream>

#ifndef TASKMANAGER_TASK_H
#define TASKMANAGER_TASK_H


class Task {
private:
    std::string title;
    std::string description;
    bool isCompleted;
public:
    Task(const std::string &title, const std::string &description);

    void setTitle(const std::string &newTitle);

    void setDescription(const std::string &newDescription);

    void setCompleted(bool completed);

    std::string getTitle() const;

    std::string getDescription() const;

    bool getCompleted() const;

};


#endif //TASKMANAGER_TASK_H

#include "Task.h"

Task::Task(const std::string& title, const std::string& description, TaskCategory category)
        : title(title), description(description), category(category), isCompleted(false) {}

void Task::setTitle(const std::string &newTitle) {
    title = newTitle;
}

void Task::setDescription(const std::string &newDescription) {
    description = newDescription;
}
TaskCategory Task::getCategory() const {
    return category;
}
void Task::setCompleted(bool completed) {
    isCompleted = completed;
}

std::string Task::getTitle() const {
    return title;
}

std::string Task::getDescription() const {
    return description;
}

bool Task::getCompleted() const {
    return isCompleted;
}

#ifndef PROJECT_PROGRAMING_TODOLIST_H
#define PROJECT_PROGRAMING_TODOLIST_H
#include <iostream>
#include "Task.h"
#include <vector>
using namespace std;
class TodoList
{
private:
    vector<Task*>tasks;
public:
    TodoList();
    ~TodoList();
    void addTask(Task* task);
    void removeTask(int Index);
    void changeTask_status(int Index);
    void show_allTask()const;
    void show_Task_status(bool Done)const;
    void show_delayed_Tasks()const;
    void sort_by_priority();
    void sort_by_DeadLine();
    bool isEmpty()const;
    int get_count_Tasks()const;

};

#endif //PROJECT_PROGRAMING_TODOLIST_H

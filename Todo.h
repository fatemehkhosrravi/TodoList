#ifndef PROJECT_PROGRAMING_TODO_H
#define PROJECT_PROGRAMING_TODO_H

#include "Task.h"
using namespace std;
class Todo:public Task
{
public:
    Todo(string,string,string,string,Priority);
    void showInfo()const;
};
#endif //PROJECT_PROGRAMING_TODO_H

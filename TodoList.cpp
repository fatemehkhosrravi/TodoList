#include <iostream>
#include <vector>
#include "Task.h"
#include <algorithm>
#include "TodoList.h"
using namespace std;
TodoList::TodoList() {

}
TodoList::~TodoList()
{
    for(Task* task: tasks)
    {
        delete task;
    }
    tasks.clear();
}
void TodoList::addTask(Task *task) {
    tasks.push_back(task);
    cout<<"This work was added!"<<endl;
}
void TodoList::changeTask_status(int Index)
{
    if(Index<0||Index>=tasks.size())
    {
        cout << "the number is work invalid" << endl;
        return;
    }
    tasks[Index]->changeStatus();
    cout<<"the work situation changed!"<<endl;
}
void TodoList::show_allTask() const {
    if(tasks.empty())
    {
        cout<<"the task list is empty!"<<endl;
        return;
    }
    cout<<"------All Work------"<<endl;
    for(int i=0;i<tasks.size();i++)
    {
        cout<<"["<<i+1<<"]";
        tasks[i]->showInfo();
    }
}
void TodoList::show_Task_status(bool Done) const
{
    string status=Done?"not Done":"Done";
    cout<<"---works"<<status<<"---"<<endl;
    bool found=false;
    for(int i=0;i<tasks.size();i++)
    {
        if(tasks[i]->getIsDone()==Done)
        {
            cout<<"["<<i+1<<"]";
            tasks[i]->showInfo();
            found= true;
        }
    }
    if(!found)
        cout<<"work"<<status<<"not found!"<<endl;
}
void TodoList::sort_by_priority()
{
    sort(tasks.begin(),tasks.end(),[](Task* t1,Task* t2)
    {
        return t1->getPriority() > t2->getPriority();
    });
    cout<<"Sorted by priority!"<<endl;
}
bool TodoList::isEmpty() const {
    if(tasks.empty())
        return true;
    else
        return false;
}
int TodoList::get_count_Tasks() const
{
    return tasks.size();
}
void TodoList::sort_by_DeadLine()
{
    sort(tasks.begin(),tasks.end(),[](Task* t3,Task* t4)
    {
        return t3->getDeadline()<t4->getDeadline();
    });
    cout<<"Sorted by deadline!"<<endl;
}
void TodoList::show_delayed_Tasks() const
{
    cout<<"------delayed work------"<<endl;
    bool found=false;
    for(int i=0;i<tasks.size();i++)
    {
        if(tasks[i]->delayed())
        {
            cout<<"["<<i+1<<"]";
            tasks[i]->showInfo();
            found= true;
        }
    }
    if(!found)
        cout<<"is not a delayed task"<<endl;
}
void TodoList::removeTask(int Index)
{
    if(Index<0 || Index>=tasks.size())
    {
        cout<<"the work number is invalid!"<<endl;
        return;
    }
    delete tasks[Index];
    tasks.erase(tasks.begin()+Index);
    cout<<"task was deleted!"<<endl;
    cout<<"--------------------------";
}
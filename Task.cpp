#include <iostream>
#include "Task.h"
using namespace std;
Task::Task(string t,string des,string cd,string dl,Priority p)
{
    Title=t;
    Description=des;
    Deadline=dl;
    CreationDate=cd;
    priority=p;
    IsDone= false;
}
void Task::changeStatus()
{
    IsDone= !IsDone;
}
void Task::showInfo() const
{
    cout<<"title: "<<Title<<endl;
    cout<<"description: "<<Description<<endl;
    cout<<"status: "<<(IsDone?"Done":"Not Done")<<endl;
    cout<<"Creation Date: "<<CreationDate<<endl;
    cout<<"Due Date: "<<Deadline<<endl;
    string str_priority;
    switch (priority)
    {
        case Low: str_priority="Low"; break;
        case Medium: str_priority="medium"; break;
        case High: str_priority="High"; break;
    }
    cout<<"priority: "<<str_priority<<endl;
    cout<<"---------------------"<<endl;
}
bool Task::delayed() const
{
    if(Deadline<CreationDate&&!IsDone)
    {
        return true;
    }
    else
        return false;
}
string Task::getTitle() const { return Title; }
string Task::getDescription() const { return Description; }
bool Task::getIsDone() const { return IsDone; }
string Task::getCreationDate() const { return CreationDate; }
string Task::getDeadline() const { return Deadline; }
Priority Task::getPriority() const { return priority; }
void Task::setTitle(const string& t) { Title = t; }
void Task::setDeadline(const string& dl) { Deadline = dl; }
void Task::setDescription(const string& desc) { Description = desc; }
void Task::setCreationDate(const string& date) { CreationDate = date; }
void Task::setPriority(Priority p) { priority = p; }

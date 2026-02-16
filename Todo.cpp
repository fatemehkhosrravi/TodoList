#include <iostream>
using namespace std;
#include "Todo.h"
Todo::Todo(string title,string des,string cd,string dl,Priority p): Task(title,des,cd,dl,p)
{
}
void Todo::showInfo()const
{
    cout<<"------Todo Info------"<<endl;
    Task::showInfo();
    cout<<"---------------------"<<endl;
}
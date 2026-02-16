#ifndef PROJECT_PROGRAMING_TASK_H
#define PROJECT_PROGRAMING_TASK_H

#include <iostream>
using namespace std;
enum Priority
{
    Low=1,
    Medium=2,
    High=3
};
class Task
{
private:
    string Title;
    string Description;
    bool IsDone;
    string CreationDate;
    string Deadline;
    Priority priority;
public:
    // constructor
    Task(string,string,string,string,Priority);
    //setter
    void changeStatus();
    void showInfo()const;
    bool delayed()const;
    void setTitle(const string& T);
    void setDeadline(const string& D);
    void setDescription(const string& Des);
    void setCreationDate(const string& Date);
    void setPriority(Priority Pr);
    //getter
    string getTitle() const;
    string getDescription() const;
    bool getIsDone() const;
    string getCreationDate() const;
    string getDeadline() const;
    Priority getPriority() const;
};
#endif //PROJECT_PROGRAMING_TASK_H

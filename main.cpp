#include <iostream>
#include "TodoList.h"
#include "Task.h"
#include "Todo.h"
    using namespace std;

    int main() {
        TodoList myList;
        int choice;

        do {
            cout << "\n------TodoList Meno------" << endl;
            cout << "1.added new Task" << endl;
            cout << "2.show all Tasks" << endl;
            cout << "3.show completed Tasks" << endl;
            cout << "4.show uncompleted Tasks" << endl;
            cout << "5.show overdue Tasks" << endl;
            cout << "6.changing the status of a Task" << endl;
            cout << "7.remove a Task" << endl;
            cout << "8.sorted by priority" << endl;
            cout << "9.sorted by date" << endl;
            cout << "10.exit" << endl;
            cout << " choose:";
            cin >> choice;

            switch(choice) {
                case 1: {

                    string title, desc, createDate, deadline;
                    int priority;

                    cout << "Task Title: ";
                    cin.ignore();
                    getline(cin, title);

                    cout <<"Task Description: ";
                    getline(cin, desc);

                    cout << "creation date(example:1404/10/09): "<<endl;
                    cin >> createDate;

                    cout << "Due date(example:1404/10/09): "<<endl;
                    cin >> deadline;

                    cout <<"priority:(Low=1,Medium=2,High=3): ";
                    cin >> priority;

                    Task* newTask = new Task(title, desc, createDate, deadline,
                                             static_cast<Priority>(priority));
                    myList.addTask(newTask);
                    break;
                }

                case 2:
                    myList.show_allTask();
                    break;

                case 3:
                    myList.show_Task_status(true);
                    break;

                case 4:
                    myList.show_Task_status(false);
                    break;

                case 5:
                    myList.show_delayed_Tasks();
                    break;

                case 6: {
                    int index;
                    cout << "Task Number: ";
                    cin >> index;
                    myList.changeTask_status(index - 1);
                    break;
                }

                case 7: {
                    int index;
                    cout << "Task Number: ";//for delete
                    cin >> index;
                    myList.removeTask(index - 1);
                    break;
                }

                case 8:
                    myList.sort_by_priority();
                    break;

                case 9:
                    myList.sort_by_DeadLine();
                    break;

                case 10:
                    cout << "Exit the program" << endl;
                    break;

                default:
                    cout << "invalid choice!" << endl;
            }

        } while(choice != 10);

        return 0;
    }
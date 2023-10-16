#include <bits/stdc++.h>
using namespace std;


// Structure to represent a task
struct Task {
    string description;
    bool completed;
};

// Function to add a task to the list
void addTask(vector<Task>& taskList, const string& d) {
 
    Task task;
    task.description=d;
    task.completed=false;
    taskList.push_back(task);
    cout << "Task added: " << d << endl;
}

// Function to view tasks
void viewTasks(const vector<Task>& taskList) {
    cout << "Tasks:" << endl;
    for (int i = 0; i < taskList.size(); ++i) {
         Task task = taskList[i];
        cout << "[" << (task.completed ? "X" : " ") << "] " << i + 1 << ". " << task.description << endl;
    }
}
//Function  to mark task as completed
void markAsCompleted(vector<Task>& taskList, int taskIndex) {
    if (taskIndex >= 1 && taskIndex <= taskList.size()) {
        taskList[taskIndex - 1].completed = true;
        cout << "Task " << taskIndex << " marked as completed." << endl;
    } else {
        cout << "Invalid task number." << endl;
    }
}

//Function to remove the tasks
void removeTask(vector<Task>& taskList, int taskIndex) {
    if (taskIndex >= 1 && taskIndex <= taskList.size()) {
        taskList.erase(taskList.begin() + taskIndex - 1);
        cout << "Task " << taskIndex << " removed." << endl;
    } else {
        cout << "Invalid task number." << endl;
    }
}


int main() {
    vector<Task> taskList;

    while (true) {
        cout << "\nTo-Do List Manager\n";
        cout << "1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Mark Task as Completed\n";
        cout << "4. Remove Task\n";
        cout << "5. Quit\n";
        cout << "Enter your choice: ";

        int choice;
        cin >> choice;

        switch (choice) {
            case 1:{
                cout << "Enter task description: ";
                string des;
                cin>>des;
                addTask(taskList, des);
                break;
            }
            case 2:
               { viewTasks(taskList);
                break;}
            case 3: {
                cout << "Enter task number to mark as completed: ";
                int taskIndex;
                cin >> taskIndex;
                markAsCompleted(taskList, taskIndex);
                break;}
            case 4:
              {  cout << "Enter task number to remove: ";
              int taskIndex;
                cin >> taskIndex;
                removeTask(taskList, taskIndex);
                break;}
            case 5:
               { cout << "Goodbye!\n";
                return 0;}
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}

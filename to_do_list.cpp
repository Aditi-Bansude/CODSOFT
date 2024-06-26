#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Task {
    string description;
    bool completed;
};

vector<Task> tasks;

void addTask() {
    cout << "\nEnter task description: ";
    string description;
    cin.ignore();
    getline(cin, description);

    Task new_task = { description, false };
    tasks.push_back(new_task);
    cout << "\nTask added successfully!" << endl;
}

void viewTasks() {
    if (tasks.empty()) {
        cout << "\nNo tasks to display." << endl;
        return;
    }

    cout << "\nTask List:" << endl;
    for (size_t i = 0; i < tasks.size(); ++i) {
        cout << i + 1 << ". " << (tasks[i].completed ? "[Completed] " : "[Pending] ") << tasks[i].description << endl;
    }
}

void markTaskAsCompleted() {
    viewTasks();
    if (tasks.empty()) return;

    cout << "\nEnter the number of the task to mark as completed: ";
    int task_number;
    cin >> task_number;

    if (task_number < 1 || task_number > tasks.size()) {
        cout << "\nInvalid task number." << endl;
    } else {
        tasks[task_number - 1].completed = true;
        cout << "\nTask marked as completed!" << endl;
    }
}

void removeTask() {
    viewTasks();
    if (tasks.empty()) return;

    cout << "\nEnter the number of the task to remove: ";
    int task_number;
    cin >> task_number;

    if (task_number < 1 || task_number > tasks.size()) {
        cout << "\nInvalid task number." << endl;
    } else {
        tasks.erase(tasks.begin() + task_number - 1);
        cout << "\nTask removed successfully!" << endl;
    }
}

void displayMenu() {
    cout << "\nTo-Do List Manager" << endl;
    cout << "\n1. Add Task" << endl;
    cout << "2. View Tasks" << endl;
    cout << "3. Mark Task as Completed" << endl;
    cout << "4. Remove Task" << endl;
    cout << "5. Exit" << endl;
    cout << "\nChoose an option: ";
}

int main() {
    int choice;
    do {
        displayMenu();
        cin >> choice;

        switch (choice) {
        case 1:
            addTask();
            break;
        case 2:
            viewTasks();
            break;
        case 3:
            markTaskAsCompleted();
            break;
        case 4:
            removeTask();
            break;
        case 5:
            cout << "\nExiting the to-do-list manager." << endl;
            break;
        default:
            cout << "\nInvalid choice. Please try again." << endl;
        }
    } while (choice != 5);

    return 0;
}
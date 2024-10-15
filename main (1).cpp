#include <iostream>
using namespace std;

int main() {
    string tasks[5];
    int taskCount = 0;
    int choice;

    do {
        cout << "\nTo-Do List\n";
        cout << "1. Add a Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Exit\n";
        cout << "Choose an option: ";
        cin >> choice;
        cin.ignore(); // To ignore newline after entering an option

        switch (choice) {
            case 1:
                if (taskCount < 5) {
                    cout << "Enter task: ";
                    getline(cin, tasks[taskCount]);
                    taskCount++;
                } else {
                    cout << "Task list is full.\n";
                }
                break;
            case 2:
                if (taskCount == 0) {
                    cout << "No tasks available.\n";
                } else {
                    cout << "Tasks:\n";
                    for (int i = 0; i < taskCount; i++) {
                        cout << i + 1 << ". " << tasks[i] << "\n";
                    }
                }
                break;
            case 3:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid option!\n";
        }
    } while (choice != 3);

    return 0;
}

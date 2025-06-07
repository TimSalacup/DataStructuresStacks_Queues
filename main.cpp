#include <iostream>
#include "stack_queue.h"
using namespace std;

// Function declarations
void staticStackMenu();
void dynamicStackMenu();
void staticQueueMenu();
void dynamicQueueMenu();
DynIntQueue dynamicQueue;
DynamicStack dynamicStack;
StaticStack staticStack;
staticQueue StaticQueue;

int main() {
    int mainChoice;

    do {
        cout << "\n=== MAIN MENU ===\n";
        cout << "1. Static Stack\n";
        cout << "2. Dynamic Stack\n";
        cout << "3. Static Queue\n";
        cout << "4. Dynamic Queue\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> mainChoice;

        switch (mainChoice) {
            case 1:
                staticStackMenu();
                break;
            case 2:
                dynamicStackMenu();
                break;
            case 3:
                staticQueueMenu();
                break;
            case 4:
                dynamicQueueMenu();
                break;
            case 5:
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid choice.\n";
        }
    } while (mainChoice != 5);

    return 0;
}

// Stack Menus
void staticStackMenu() {
    int choice, value;
    do {
        cout << "\n--- Static Stack Menu ---\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Display Stack\n";
        cout << "4. Back to Main Menu\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to push (int only): ";
                cin >> value;
                staticStack.push(value);
                break;
            case 2:
                staticStack.pop();
                break;
            case 3:
                staticStack.display();
                break;
            case 4:
                cout << "Returning to Main Menu...\n";
                break;
            default:
                cout << "Invalid choice.\n";
        }
    } while (choice != 4);
}

void dynamicStackMenu() {
    int choice, value;
    do {
        cout << "\n--- Dynamic Stack Menu ---\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Display Stack\n";
        cout << "4. Back to Main Menu\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to push (int only): ";
                cin >> value;
                dynamicStack.push(value);
                break;
            case 2:
                dynamicStack.pop();
                break;
            case 3:
                dynamicStack.display();
                break;
            case 4:
                cout << "Returning to Main Menu...\n";
                break;
            default:
                cout << "Invalid choice.\n";
        }
    } while (choice != 4);
}

// Queue Menus
void staticQueueMenu() {
    int choice, value;
    do {
        cout << "\n--- Static Queue Menu ---\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Display Queue\n";
        cout << "4. Back to Main Menu\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to enqueue (int only): ";
                cin >> value;
                StaticQueue.enqueue(value);
                break;
            case 2:
                StaticQueue.dequeue();
                cout << "Dequeued: " << value << endl;
                break;
            case 3:
                StaticQueue.display();
                break;
            case 4:
                cout << "Returning to Main Menu...\n";
                break;
            default:
                cout << "Invalid choice.\n";
        }
    } while (choice != 4);
}

void dynamicQueueMenu() {
    int choice, value;
    do {
        cout << "\n--- Dynamic Queue Menu ---\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Display Queue\n";
        cout << "4. Back to Main Menu\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to enqueue (int only): ";
                cin >> value;
                dynamicQueue.enqueue(value);
                break;
            case 2:
                dynamicQueue.dequeue(value);
                cout << "Dequeued: " << value << endl;
                break;
            case 3:
                dynamicQueue.displayQueue();
                break;
            case 4:
                cout << "Returning to Main Menu...\n";
                break;
            default:
                cout << "Invalid choice.\n";
        }
    } while (choice != 4);
}
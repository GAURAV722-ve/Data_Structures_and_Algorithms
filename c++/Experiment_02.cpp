#include <iostream>
using namespace std;

#define MAX 5  // maximum size of stack

class Stack {
    int arr[MAX];
    int top;

public:
    Stack() {
        top = -1; // initialize top to -1 (empty stack)
    }

    // Function to push an element into the stack
    void push(int x) {
        if (top == MAX - 1) {
            cout << "STACK OVERFLOW! Cannot push " << x << endl;
        } else {
            arr[++top] = x;
            cout << x << " pushed into stack.\n";
        }
    }

    // Function to pop an element from the stack
    void pop() {
        if (top == -1) {
            cout << "STACK UNDERFLOW! No element to pop.\n";
        } else {
            cout << arr[top--] << " popped from stack.\n";
        }
    }

    // Function to view the top element
    void peek() {
        if (top == -1) {
            cout << "Stack is empty.\n";
        } else {
            cout << "Top element is: " << arr[top] << endl;
        }
    }

    // Function to display all elements
    void display() {
        if (top == -1) {
            cout << "Stack is empty.\n";
        } else {
            cout << "Stack elements (top to bottom): ";
            for (int i = top; i >= 0; i--) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Stack s;
    int choice, value;

    do {
        cout << "\n=== STACK MENU ===\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek (Top Element)\n";
        cout << "4. Display Stack\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                s.push(value);
                break;
            case 2:
                s.pop();
                break;
            case 3:
                s.peek();
                break;
            case 4:
                s.display();
                break;
            case 5:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 5);

    return 0;
}

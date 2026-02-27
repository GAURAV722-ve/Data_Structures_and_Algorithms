#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

// Head pointer
Node* head = nullptr;

// Function to insert node at end
void insertEnd(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = nullptr;

    if (head == nullptr)
        head = newNode;
    else {
        Node* temp = head;
        while (temp->next != nullptr)
            temp = temp->next;
        temp->next = newNode;
    }
    cout << "Inserted " << value << " at end.\n";
}

// Function to insert node at beginning
void insertBegin(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = head;
    head = newNode;
    cout << "Inserted " << value << " at beginning.\n";
}

// Function to delete a node by value
void deleteNode(int value) {
    if (head == nullptr) {
        cout << "List is empty.\n";
        return;
    }

    if (head->data == value) {
        Node* temp = head;
        head = head->next;
        delete temp;
        cout << "Deleted " << value << " from list.\n";
        return;
    }

    Node* temp = head;
    while (temp->next != nullptr && temp->next->data != value)
        temp = temp->next;

    if (temp->next == nullptr)
        cout << "Value not found.\n";
    else {
        Node* delNode = temp->next;
        temp->next = delNode->next;
        delete delNode;
        cout << "Deleted " << value << " from list.\n";
    }
}

// Function to display the list
void display() {
    if (head == nullptr) {
        cout << "List is empty.\n";
        return;
    }
    cout << "Linked List: ";
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

// Main function
int main() {
    int choice, value;
    do {
        cout << "\n=== Linked List Menu ===\n";
        cout << "1. Insert at Beginning\n";
        cout << "2. Insert at End\n";
        cout << "3. Delete Node\n";
        cout << "4. Display List\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                insertBegin(value);
                break;
            case 2:
                cout << "Enter value: ";
                cin >> value;
                insertEnd(value);
                break;
            case 3:
                cout << "Enter value to delete: ";
                cin >> value;
                deleteNode(value);
                break;
            case 4:
                display();
                break;
            case 5:
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid choice!\n";
        }
    } while (choice != 5);

    return 0;
}

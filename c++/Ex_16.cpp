#include <iostream>
using namespace std;

// Node structure for polynomial term
struct Node {
    int coeff, power;
    Node* next;
};

// Function to create a new node
Node* createNode(int coeff, int power) {
    Node* newNode = new Node();
    newNode->coeff = coeff;
    newNode->power = power;
    newNode->next = nullptr;
    return newNode;
}

// Function to insert a term at the end
void insertTerm(Node*& head, int coeff, int power) {
    Node* newNode = createNode(coeff, power);
    if (!head) head = newNode;
    else {
        Node* temp = head;
        while (temp->next) temp = temp->next;
        temp->next = newNode;
    }
}

// Function to add two polynomials
Node* addPoly(Node* p1, Node* p2) {
    Node* result = nullptr;
    while (p1 && p2) {
        if (p1->power == p2->power) {
            insertTerm(result, p1->coeff + p2->coeff, p1->power);
            p1 = p1->next; p2 = p2->next;
        } else if (p1->power > p2->power) {
            insertTerm(result, p1->coeff, p1->power);
            p1 = p1->next;
        } else {
            insertTerm(result, p2->coeff, p2->power);
            p2 = p2->next;
        }
    }
    while (p1) { insertTerm(result, p1->coeff, p1->power); p1 = p1->next; }
    while (p2) { insertTerm(result, p2->coeff, p2->power); p2 = p2->next; }
    return result;
}

// Function to display a polynomial
void display(Node* head) {
    while (head) {
        cout << head->coeff << "x^" << head->power;
        head = head->next;
        if (head) cout << " + ";
    }
    cout << endl;
}

// Main function
int main() {
    Node *poly1 = nullptr, *poly2 = nullptr, *sum = nullptr;

    // First polynomial: 5x^2 + 4x + 2
    insertTerm(poly1, 5, 2);
    insertTerm(poly1, 4, 1);
    insertTerm(poly1, 2, 0);

    // Second polynomial: 3x^3 + 2x + 1
    insertTerm(poly2, 3, 3);
    insertTerm(poly2, 2, 1);
    insertTerm(poly2, 1, 0);

    cout << "First Polynomial: ";
    display(poly1);

    cout << "Second Polynomial: ";
    display(poly2);

    sum = addPoly(poly1, poly2);
    cout << "Sum: ";
    display(sum);

    return 0;
}

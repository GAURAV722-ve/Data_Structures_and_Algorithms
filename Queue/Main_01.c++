#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class Queue
{
    Node *head;
    Node *tail;

public:
    Queue()
    {
        head = tail = NULL;
    }
    void push(int data)
    {
        Node *newNode = new Node(data);
        if (isEmpty())
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "LL is Empty.\n";
            return;
        }

        Node *curr = head;
        cout << head->data << " ";

        head = head->next;
        delete curr;

        if (head == NULL)
        {
            tail = NULL;
        }
    }
    bool isEmpty()
    {
        return head == NULL;
    }

    int front()
    {
        if (isEmpty())
        {
            cout << "LL is empty.\n";
            return -1;
        }
        else
        {
            return head->data;
        }
    }
};

int main()
{
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    while (!q.isEmpty())
    {
        cout << q.front() << "->";
        q.pop();
    }
    cout << "NULL";
    return 0;
}

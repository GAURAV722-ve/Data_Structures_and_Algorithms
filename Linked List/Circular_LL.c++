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

class circularLL
{
    Node *head;
    Node *tail;

public:
    circularLL()
    {
        head = tail = NULL;
    }

    void insertAH(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
            tail->next = head;
        }
        else
        {
            newNode->next = head;
            head = newNode;
            tail->next = head;
        }
    }

    void insertAT(int val){
        Node* newNode = new Node(val);
        if(head==NULL){
            head = tail = newNode;
            tail->next = head;
        }else{
            newNode->next = head;
            tail->next = newNode;
            tail = newNode;
        }
    }

    void deleteAH(){
        if(head==NULL) 
            return;
        else if(head==tail){
            delete head;
            head = tail = NULL;
        }else{
            Node* temp = head;
            head = head->next;
            tail->next = head;
            temp->next = NULL;
            delete temp;
        }
    }

    void deleteAT(){
        if(head==NULL) 
            return;
        else if(head==tail){
            delete head;
            head = tail = NULL;
        }else{
            Node* prev = head;
            Node* temp = tail;
            while(prev->next != temp){
                prev = prev->next;
            }
            tail = prev;
            tail->next = head;
            temp->next = NULL;
            delete temp;
        }
    }
    void print(){
        if (head == NULL)
            return;

        Node *temp = head;

        do{
            cout << temp->data << " => ";
            temp = temp->next;
        } while (temp != head);
        cout<<"Head("<<head->data<<")"<<endl;
    }
};

int main()
{
    circularLL cll;

    cll.insertAH(1);
    cll.insertAH(2);
    cll.insertAH(3);
    cll.insertAT(0);
    cll.deleteAH();
    cll.deleteAT();
    cll.print();
    return 0;
}
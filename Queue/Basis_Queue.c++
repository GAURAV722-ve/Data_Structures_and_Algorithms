#include<iostream>
#include<vector>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next=NULL;
    }
};

class Queue{
    Node* head;
    Node* tail;

public:

    Queue(){
        head=tail=NULL;
    }

    void push(int data){
        Node* newNode = new Node(data);
        if(empty()){
            head = tail = newNode;
        }else{
            tail->next = newNode;
            tail = newNode;
        }

    }

    void pop(){
        if(empty()){
            cout<<"LL is Empty";
            return;
        }else{
            Node* curr = head;
            head = head->next;
            delete curr;
        }
    }

    bool empty(){
        return head==NULL;
    }

    int front(){
        if(empty()){
            cout<<"LL is Empty";
            return -1;
        }
        return head->data;
    }
};

int main(){
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    while(!q.empty()){
        cout<<q.front()<<"->";
        q.pop();
    }
    cout<<"NULL";
    return 0;
}
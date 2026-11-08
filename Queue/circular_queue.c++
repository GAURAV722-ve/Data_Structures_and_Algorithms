#include<iostream>
using namespace std;

class circularQueue{
    int* arr;
    int currSize, cap;
    int f, r;
public:
    circularQueue(int size){
        cap = size;
        arr = new int(cap);
        currSize = 0;
        f=0;
        r=-1;
    }

    void push(int data){
        if(isfull()){
            cout<<"CQueue is FULL."<<endl;
            return;
        }
        r = (r+1)%cap;
        arr[r] = data;
        currSize++;
    }

    void pop(){
        if(isempty()){
            cout<<"CQueue is Empty."<<endl;
            return;
        }
        f = (f+1)%cap;
        currSize--;
    }

    int front(){
        if(isempty()){
            cout<<"CQueue is empty."<<endl;
            return -1;
        }

        return arr[f];
    }

    bool isempty(){
        return currSize == 0;
    }

    bool isfull(){
        return currSize == cap;
    }

    void printArray(){
        for(int i=0; i<currSize; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    circularQueue cq(3);

    cq.push(1);
    cq.push(2);
    cq.push(3);
    cq.pop();
    cq.push(4);
    cq.printArray();

    while(!cq.isempty()){
        cout<<cq.front()<<" ";
        cq.pop();
    }
    cout<<endl;
    return 0;
}
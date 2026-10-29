// Deque -> Double ended queue;
// Dequeu -> pop the data from queue;
#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> dq;
    dq.push_back(1);
    dq.push_back(2);
    dq.push_back(3);
    dq.push_back(4);

    dq.push_front(9); //9 1 2 3 4
    cout<<dq.front()<<" "<<dq.back();
    return 0;
}
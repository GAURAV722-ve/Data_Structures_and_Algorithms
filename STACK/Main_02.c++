#include <iostream>
#include <list>
using namespace std;

class stack {
    list<int> ll;

public:
    void push(int val) {
        ll.push_front(val);
    }

    int top() {
        return ll.front();
    }

    void pop() {
        if (isempty()) {
            cout << "Stack underflow";
            return;
        }
        ll.pop_front();
    }

    bool isempty() {
        return ll.size() == 0;
    }
};

int main() {
    stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    while (!s.isempty()) {
        cout << s.top() << " ";
        s.pop();
    }

    cout << endl;
    return 0;
}
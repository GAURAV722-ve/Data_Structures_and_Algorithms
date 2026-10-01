#include <iostream>
#include <vector>
using namespace std;

class stack {
    vector<int> v;

public:
    void push(int val) {
        v.push_back(val);
    }

    int top() {
        return v.back();
    }

    void pop() {
        if (isempty()) {
            cout << "Stack underflow";
            return;
        }
        v.pop_back();
    }

    bool isempty() {
        return v.size() == 0;
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
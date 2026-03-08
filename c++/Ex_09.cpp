#include <iostream>
#include <stack>
using namespace std;

// Function to define operator precedence
int precedence(char c) {
    if (c == '^') return 3;
    if (c == '*' || c == '/') return 2;
    if (c == '+' || c == '-') return 1;
    return -1;
}

// Function to convert infix to postfix
string infixToPostfix(string infix) {
    stack<char> s;
    string postfix = "";

    for (char c : infix) {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || isdigit(c))
            postfix += c; // operand
        else if (c == '(')
            s.push(c);
        else if (c == ')') {
            while (!s.empty() && s.top() != '(') {
                postfix += s.top();
                s.pop();
            }
            s.pop(); // remove '('
        } else { // operator
            while (!s.empty() && precedence(s.top()) >= precedence(c)) {
                postfix += s.top();
                s.pop();
            }
            s.push(c);
        }
    }

    // Pop remaining operators
    while (!s.empty()) {
        postfix += s.top();
        s.pop();
    }

    return postfix;
}

int main() {
    string infix;
    cout << "Enter Infix Expression: ";
    cin >> infix;

    cout << "Postfix Expression: " << infixToPostfix(infix);
    return 0;
}

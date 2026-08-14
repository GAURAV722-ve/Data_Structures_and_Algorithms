#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string name = "mam";

    string rev = name; // Copy the original string
    reverse(rev.begin(), rev.end());

    if (name == rev) {
        cout << "Yes, string is palindrome";
    } else {
        cout << "Not a palindrome";
    }

    return 0;
}
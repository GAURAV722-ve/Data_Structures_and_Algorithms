#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {

    vector<int> price = {100, 80, 60, 70, 60, 75, 85};

    vector<int> ans(price.size());
    stack<int> s;   // stores indices

    for (int i = 0; i < price.size(); i++) {

        // Remove all previous prices smaller than or equal to current price
        while (!s.empty() && price[s.top()] <= price[i]) {
            s.pop();
        }

        // If no greater price exists on the left
        if (s.empty()) {
            ans[i] = i + 1;
        }
        else {
            ans[i] = i - s.top();
        }

        // Store current index
        s.push(i);
    }

    for (int val : ans) {
        cout << val << " ";
    }

    return 0;
}
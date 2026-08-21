#include <iostream>
#include <vector>

using namespace std;

// Time complexity = O(2^n * n).

void print_subset(vector<int>& arr, vector<int>& ans, int i) {
    // Base case
    if (i == arr.size()) {
        cout << "{ ";
        for (int val : ans) {
            cout << val << " ";
        }
        cout << "}, ";
        return;
    }

    // Include current element
    ans.push_back(arr[i]);
    print_subset(arr, ans, i + 1);

    // Exclude current element
    ans.pop_back();
    print_subset(arr, ans, i + 1);
}

int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    vector<int> ans;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    print_subset(arr, ans, 0);

    return 0;
}
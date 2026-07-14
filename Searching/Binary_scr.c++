#include <iostream>
#include <vector>
using namespace std;

int binary_sc(vector<int> arr, int tar, int st, int end) {
    // Base case
    if (st > end) {
        return -1;
    }

    int mid = st + (end - st) / 2;

    if (arr[mid] == tar) {
        return mid;
    }
    else if (arr[mid] < tar) {
        return binary_sc(arr, tar, mid + 1, end);
    }
    else {
        return binary_sc(arr, tar, st, mid - 1);
    }
}

int main() {
    vector<int> arr = {-1, 0, 3, 4, 5, 9, 12};

    int tar;
    cout << "Enter target: ";
    cin >> tar;

    int idx = binary_sc(arr, tar, 0, arr.size() - 1);

    if (idx != -1) {
        cout << "Target: " << tar << " Index: " << idx;
    } else {
        cout << "Target not found.";
    }

    return 0;
}
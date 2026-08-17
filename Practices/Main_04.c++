#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    int sum = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    // Sum of largest 5 elements
    for (int i = 0; i < 5; i++) {
        sum += arr[n - 1 - i];
    }

    cout << sum << endl;

    // Print largest 5 elements
    for (int i = n - 1; i >= n - 5; i--) {
        cout << arr[i] << " ";
    }

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> vec(n);

    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    if (find(vec.begin(), vec.end(), 4) != vec.end()) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}
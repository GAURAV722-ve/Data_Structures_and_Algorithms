#include <iostream>
#include <vector>
#include <algorithm>   // Required for count()

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> vec(n);

    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    int ans = count(vec.begin(), vec.begin() + 5, 3);
    cout << ans;

    return 0;
}
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main() {
    int n, sum = 0;
    cout << "Enter the order of matrix (n*n): ";
    cin >> n;
   vector<vector<int>> arr(n , vector<int>(n));

    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            sum += arr[i][j];
        }
    }

    cout << "Sum above principal diagonal: " << sum << endl;
    return 0;
}
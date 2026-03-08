#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    cout << "Enter size of first set (A): ";
    cin >> n1;
    int a[n1];
    cout << "Enter " << n1 << " elements of A: ";
    for (int i = 0; i < n1; i++)
        cin >> a[i];

    cout << "Enter size of second set (B): ";
    cin >> n2;
    int b[n2];
    cout << "Enter " << n2 << " elements of B: ";
    for (int i = 0; i < n2; i++)
        cin >> b[i];

    int c[100], k = 0;

    // A - B → elements present in A but not in B
    for (int i = 0; i < n1; i++) {
        bool found = false;
        for (int j = 0; j < n2; j++) {
            if (a[i] == b[j]) {
                found = true;
                break;
            }
        }
        if (!found)
            c[k++] = a[i];
    }

    cout << "Set Difference (A - B): ";
    if (k == 0)
        cout << "No unique elements in A";
    else
        for (int i = 0; i < k; i++)
            cout << c[i] << " ";

    return 0;
}

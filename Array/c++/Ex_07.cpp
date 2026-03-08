#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    cout << "Enter size of first set: ";
    cin >> n1;
    int a[n1];
    cout << "Enter " << n1 << " elements: ";
    for (int i = 0; i < n1; i++)
        cin >> a[i];

    cout << "Enter size of second set: ";
    cin >> n2;
    int b[n2];
    cout << "Enter " << n2 << " elements: ";
    for (int i = 0; i < n2; i++)
        cin >> b[i];

    int c[100], k = 0;

    // Find common elements
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (a[i] == b[j]) {
                c[k++] = a[i];
                break;
            }
        }
    }

    cout << "Intersection of sets: ";
    if (k == 0)
        cout << "No common elements";
    else
        for (int i = 0; i < k; i++)
            cout << c[i] << " ";

    return 0;
}

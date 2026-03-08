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

    // Copy all elements of first set
    for (int i = 0; i < n1; i++)
        c[k++] = a[i];

    // Add elements from second set if not already present
    for (int i = 0; i < n2; i++) {
        bool found = false;
        for (int j = 0; j < n1; j++) {
            if (b[i] == a[j]) {
                found = true;
                break;
            }
        }
        if (!found)
            c[k++] = b[i];
    }

    cout << "Union of sets: ";
    for (int i = 0; i < k; i++)
        cout << c[i] << " ";

    return 0;
}

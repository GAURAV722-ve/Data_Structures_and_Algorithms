#include <iostream>
using namespace std;

// Insert value at position pos (0-based index)
void insertion(int arr[], int &n) {
    int ele, pos;
    cout << "Enter element and position to insert: ";
    cin >> ele >> pos;

    if (pos < 0 || pos > n) {
        cout << "Invalid position!" << endl;
        return;
    }

    // Shift elements right
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = ele;
    n++; // Increase array size

    cout << "Element inserted successfully!" << endl;
}

// Delete element at position pos (0-based index)
void deletion(int arr[], int &n) {
    int pos;
    cout << "Enter position to delete element: ";
    cin >> pos;

    if (pos < 0 || pos >= n) {
        cout << "Invalid position!" << endl;
        return;
    }

    int item = arr[pos];

    // Shift elements left
    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--; // Decrease array size

    cout << "Item deleted is: " << item << endl;
}

// Print all elements in array
void traversal(int arr[], int n) {
    if (n == 0) {
        cout << "Array is empty!" << endl;
        return;
    }

    cout << "Array elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Main function
int main() {
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[100]; // allocate fixed max size

    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "\n--- Array Operations ---\n";
    traversal(arr, n);

    // Perform insertion
    insertion(arr, n);
    traversal(arr, n);

    // Perform deletion
    deletion(arr, n);
    traversal(arr, n);

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int arr[100];  // fixed-size array
    int n, choice, pos, ele;

    cout << "Enter number of elements in array: ";
    cin >> n;

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    do {
        cout << "\n=== Array Operations Menu ===\n";
        cout << "1. Traverse Array\n";
        cout << "2. Insert Element\n";
        cout << "3. Delete Element\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: // Traversal
                cout << "Array elements are: ";
                for (int i = 0; i < n; i++) {
                    cout << arr[i] << " ";
                }
                cout << endl;
                break;

            case 2: // Insertion
                cout << "Enter position to insert (1 to " << n+1 << "): ";
                cin >> pos;
                cout << "Enter element to insert: ";
                cin >> ele;

                if (pos < 1 || pos > n + 1) {
                    cout << "Invalid position!" << endl;
                } else {
                    for (int i = n; i >= pos; i--) {
                        arr[i] = arr[i - 1];
                    }
                    arr[pos - 1] = ele;
                    n++;
                    cout << "Element inserted successfully!" << endl;
                }
                break;

            case 3: // Deletion
                cout << "Enter position to delete (1 to " << n << "): ";
                cin >> pos;
                if (pos < 1 || pos > n) {
                    cout << "Invalid position!" << endl;
                } else {
                    for (int i = pos - 1; i < n - 1; i++) {
                        arr[i] = arr[i + 1];
                    }
                    n--;
                    cout << "Element deleted successfully!" << endl;
                }
                break;

            case 4:
                cout << "Exiting program..." << endl;
                break;

            default:
                cout << "Invalid choice! Please try again." << endl;
        }

    } while (choice != 4);

    return 0;
}

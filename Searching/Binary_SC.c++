#include <iostream>
using namespace std;

int binarySearch(int arr[], int key, int n) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}

int main() {
    int arr[] = {2,4,6,8,10,12};
    int key;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Enter element: ";
    cin >> key;

    int result = binarySearch(arr, key, n);

    if(result != -1)
        cout << "Element found at index " << result;
    else
        cout << "Element not found";

    return 0;
}
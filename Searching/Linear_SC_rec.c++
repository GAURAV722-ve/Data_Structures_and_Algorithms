#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int x, int index = 0){
    
    if (index == n)
    {
        return -1;
    }
    if (arr[index] == x)
    {
        return index;
    }

    return linearSearch(arr, n, x, index + 1);
}

int main(){

    int arr[] = {1, 5, 3, 2, 6, 89, 1, 79, 0, 46};
    int n = sizeof(arr) / sizeof(arr[0]);

    int x;
    cout << "Enter the element: ";
    cin >> x;

    int result = linearSearch(arr, n, x);

    if (result != -1)
    {
        cout << "Element is present in the array at index: " << result;
    }
    else
    {
        cout << "Element is not present in the array.";
    }

    return 0;

}
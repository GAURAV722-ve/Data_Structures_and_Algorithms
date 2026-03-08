#include<iostream>
using namespace std;

void print(int* arr, int n){
    for(int i=0; i<n-1; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void deletion(int* arr, int &n, int idx){
    for(int i=idx-1; i<n-1; i++){
        arr[i] = arr[i+1];
    }
    n--;
}

int main(){
    int n, data, idx;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100]; 
    cout << "Enter elements:\n";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    cout << "Before deletion : ";
    print(arr, n);

    cout << "Enter index : ";
    cin >> idx;

    deletion(arr, n, idx);

    cout << "After insertion: ";
    print(arr, n);
}
#include<iostream>
using namespace std;

void print(int* arr, int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insert(int* arr, int &n, int idx, int data){
    for(int i=n-1; i>=idx-1; i--){
        arr[i+1] = arr[i];
    }
    arr[idx-1] = data;
    n++;
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

    cout << "Before insertion: ";
    print(arr, n);

    cout << "Enter index (1-based) and data: ";
    cin >> idx >> data;

    insert(arr, n, idx, data);

    cout << "After insertion: ";
    print(arr, n);
}

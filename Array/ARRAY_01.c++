// ARRAY : Collection of same data type, Stored in Contiguous memory Allocation.
#include<iostream>
#include<stdlib.h>
using namespace std;
void print(int* arr, int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter number of Element : ";
    cin>>n;

    int arr[n];
    cout<<"Enter Element.\n";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Your Enter Element is.\n";
    print(arr, n);
    return (0);
}
#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int>& arr, int st, int end){
    int idx=st-1;
    int pivot=arr[end];
    for(int i=st; i<end; i++){
        if(arr[i]<=pivot){
            idx++;
            swap(arr[i], arr[idx]);
        }
    }
    idx++;
    swap(arr[end],arr[idx]);
    return idx;
}

void quick_sort(vector<int>& arr, int st, int end){
    if(st<end){
        int pi = partition(arr, st, end);
        quick_sort(arr, st, pi-1);
        quick_sort(arr, pi+1, end);
        
    }
}

int main(){
    vector<int> arr;
    int n;
    cout<<"No. of element : ";
    cin>>n;

    arr.resize(n);

    cout<<"Enter Elements : ";
    for(int i=0; i<n; i++)
        cin>>arr[i];
    
    quick_sort(arr, 0, n-1);

    cout<<"Sorted Elements is : ";
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";

    return 0;
}
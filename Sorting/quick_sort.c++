#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int>& arr, int st, int end){
    int idx=st-1, pivot=arr[end];
    for(int i=st; i<end; i++){
        if(arr[i]<pivot){
            idx++;
            swap(arr[i],arr[idx]);
        }
    }
    idx++;
    swap(arr[idx], arr[end]);
    return idx;
}

void quick_sort(vector<int>& arr, int st, int end){
    if(st<end){
        int PI = partition(arr, st, end);
        quick_sort(arr, st, PI-1);
        quick_sort(arr, PI+1, end);
    }
}

void print(vector<int>& arr){
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> arr = {5,2,6,4,1,3};
    int n=arr.size()-1;
    quick_sort(arr, 0, n);
    print(arr);
    return 0;
}
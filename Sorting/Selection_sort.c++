#include<iostream>
#include<vector>
using namespace std;

void sort(vector<int> &arr, int n){
    for(int i=0; i<n; i++){
        int SI = i;
        for(int j=i+1; j<n; j++){
            if(arr[SI]>arr[j]){
                SI = j;
            }
        }
        swap(arr[i],arr[SI]);
    }
}

void print(vector<int> &arr, int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    vector<int> arr = {2,3,5,1,7,10};
    int n = arr.size();
    sort(arr, n);
    print(arr,n);
    return 0;
}
#include<iostream>
#include<vector>
using namespace std;

void sort(vector<int> &arr, int n){
    for(int i=0; i<n; i++){
        bool flag = false;
        for(int j=0; j<(n-i-1); j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag=true;
            }
        }
        if(!flag){
            return;
        }
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
#include<iostream>
#include<vector>
using namespace std;

int maxi(int arr[], int n){
    int m = arr[0];
    for(int i=0; i<n; i++){
        if(m<arr[i])
            m = arr[i];
    }
    return m;
}

void count_sort(int arr[], int n){
    int max = maxi(arr, n);
    vector<int> count(max+1,0);
    for(int i=0; i<n; i++){
        count[arr[i]]++;
    }
    int idx=0;
    for(int i=0; i<max; i++){
        while(count[i]>0){
            arr[idx] = i;
            idx++;
            count[i]--;
        }
    }
}

int main(){
    int arr[] = {6,5,1,2,0,10};
    int n = sizeof(arr)/sizeof(arr[0]);

    count_sort(arr, n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
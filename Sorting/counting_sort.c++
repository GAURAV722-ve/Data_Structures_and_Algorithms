#include<iostream>
using namespace std;

void count_sort(int arr[], int n){
    int max = arr[0];
    for(int i=0; i<n; i++){
        if(max<arr[i])
            max = arr[i];
    }

    int count[max+1] = {0};

    for(int i=0; i<n; i++){
        count[arr[i]]++;
    }

    int idx=0;

    for(int i=0; i<=max; i++){
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
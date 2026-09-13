#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void bucket_sort(float arr[], int n){
    int max = arr[0];
    for(int i=0; i<n; i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }

    vector<float> bucket[max+1];
    
    for(int i=0; i<n; i++){
        int idx=arr[i];
        bucket[idx].push_back(arr[i]);
    }

    for(int i=0; i<=max; i++){
        sort(bucket[i].begin(), bucket[i].end());
    }
    int idx=0;

    for(int i=0; i<=max; i++){
        for(int j=0; j<bucket[i].size(); j++){
            arr[idx] = bucket[i][j];
            idx++;
        }
    }
}

int main(){
    float arr[] = {0.2,0.36,0.5,0.09};
    int n = sizeof(arr)/sizeof(arr[0]);

    bucket_sort(arr, n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
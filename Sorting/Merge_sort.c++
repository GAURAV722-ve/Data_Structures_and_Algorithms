#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& arr, int st, int mid, int end){
    vector<int> temp;

    int i = st;
    int j = mid + 1;

    while(i <= mid && j <= end){
        if(arr[i] <= arr[j]){
            temp.push_back(arr[i]);
            i++;
        }else{
            temp.push_back(arr[j]);
            j++;
        }
    }

    while(i <= mid){
        temp.push_back(arr[i]);
        i++;
    }

    while(j <= end){
        temp.push_back(arr[j]);
        j++;
    }

    for(int idx = 0; idx < temp.size(); idx++){
        arr[st + idx] = temp[idx];
    }
}

void mergesort(vector<int>& arr, int st, int end){
    if(st<end){
        int mid=st+(end-st)/2;
        mergesort(arr, st, mid);
        mergesort(arr, mid+1, end);
        merge(arr, st, mid, end);

    }
}

void print(vector<int> ans){
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}

int main(){
    vector<int> arr= {24,3,65,2,0,88};
    int n=arr.size();
    mergesort(arr, 0, n-1);
    print(arr);
    return 0;
}
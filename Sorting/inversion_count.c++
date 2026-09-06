#include<iostream>
#include<vector>
using namespace std;

int merge(vector<int>& arr, int st, int mid, int end){
    vector<int> temp;

    int i = st;
    int j = mid + 1;
    int inv=0;
    while(i <= mid && j <= end){
        if(arr[i] <= arr[j]){
            temp.push_back(arr[i]);
            i++;
        }else{
            temp.push_back(arr[j]);
            j++;
            inv += (mid-i+1);
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
    return inv;
}

int mergesort(vector<int>& arr, int st, int end){
    if(st<end){
        int mid=st+(end-st)/2;
        int lc=mergesort(arr, st, mid);
        int rc=mergesort(arr, mid+1, end);
        int inv=merge(arr, st, mid, end);
        return lc+rc+inv;
    }
    return 0;
}

int main(){
    vector<int> arr= {6,3,5,2,7};
    int n=arr.size();
    int inv = mergesort(arr, 0, n-1);
    cout<<"Inversion count : "<<inv<<endl;
    return 0;
}
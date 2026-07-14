#include<iostream>
#include<vector>
using namespace std;

int binary_sc(vector<int> arr, int tar){
    int st=0, end = arr.size()-1;
    while(st<=end){
        int mid = st + (end-st)/2;
        if(arr[mid]<tar){
            st=mid+1;
        }else if(arr[mid]>tar){
            end = mid-1;
        }else{
            return mid;
        }
    }
    return -1;
}

int main(){
    vector<int> arr = {-1,0,3,4,5,9,12};
    int tar;
    cout<<"Enter target : ";
    cin>>tar;
    int idx = binary_sc(arr, tar);

    if(idx!=-1){
        cout<<"Target : "<<tar<<" Index : "<<idx;
    }else{
        cout<<"Target not found.";
    }
}
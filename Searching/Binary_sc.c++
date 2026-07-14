#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 10;
    int st=0, end=n;
    int mid=(st+end)/2;
    while(st<=end){
        int mid=(st+end)/2;
        if(target> arr[mid]){
            st=mid+1;
        }else if(target<arr[mid]){
            end=mid-1;
        }else{
            cout<<"Target are present at index : "<<mid;
        }
    }

    return(0);
}
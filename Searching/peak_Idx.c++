#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {1,2,3,4,9,5,6};
    int n = arr.size();
    
    for(int i=1; i<n-1; i++){
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
            cout<<"Peak Element is : "<<arr[i]<<endl;
        }
    }
}
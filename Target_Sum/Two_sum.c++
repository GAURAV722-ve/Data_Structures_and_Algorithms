#include<iostream>
#include<vector>
using namespace std;

bool twoSum(vector<int>& arr, int tar){
    int n = arr.size();
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]+arr[j]==tar)
                return true;
        }
    }
    return false;
}

int main(){
    vector<int> arr={12,15,36,20,30,51};
    int tar;
    cout<<"Enter target : ";
    cin>>tar;
    cout << ((twoSum(arr, tar))? "true" : "false");
}
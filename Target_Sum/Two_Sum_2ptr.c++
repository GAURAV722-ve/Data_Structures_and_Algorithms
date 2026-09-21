#include<iostream>
#include<vector>
using namespace std;

bool twosum(vector<int>& arr, int tar){
    int left = 0, right=arr.size()-1;
    while(left<right){
        int sum = arr[left]+arr[right];
        if(sum==tar){
            return true;
        }
        else if(sum<tar){
            left++;
        }else{
            right--;
        }
    }
    return false;
}

int main(){
    vector<int> arr = {-3, -1, 0, 1, 2}; //Array must be sorted TC=O(n) and SP=(1).
    int target = -2;
    if (twosum(arr, target))
        cout << "true";
    else
        cout << "false";

    return 0;
}
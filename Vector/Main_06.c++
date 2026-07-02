#include<iostream>
#include<vector>

using namespace std;

void swap(int &a, int &b){
    int temp = a ;
    a = b;
    b = temp;
}

void reverse(vector<int> &nums){
    int st = 0;
    int end = nums.size()-1;

    for(int i=0; i< nums.size()-1; i++){
        if(st<end){
            swap(nums[st], nums[end]);
            st++;
            end--;
        }
    }
}

int main(){
    vector<int> vec={1,2,3,4,5,6,7,8,9,10};
    reverse(vec);
    for(int i : vec){
        cout<<i<<" ";
    }
}
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int nums[] = {1,2,33,1,1,1,1,12,3,4,2,1,1,1};
    int n = sizeof(nums)/sizeof(nums[0]);
    for(int val : nums){
        int frq = 1;
        for(int el : nums){
            if(el==val){
                frq++;
            }
        }
        if(frq>n/2){
            cout<<"val : "<<val<<" frequency  : "<<frq<<" ";
            break;
        }
    }
}
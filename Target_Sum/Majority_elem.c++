#include<iostream>
#include<vector>
using namespace std;

int majorityElement(vector<int>& nums){
    int freq =  0, ans = 0;

    for(int i=0; i<nums.size(); i++){
        if(freq == 0){
            ans = nums[i];
        }
        if(ans == nums[i]){
            freq++;
        }
        else{
            freq--;
        }
    }
    return ans;
}

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
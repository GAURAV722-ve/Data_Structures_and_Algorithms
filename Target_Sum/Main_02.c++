#include<iostream>
#include<vector>
using namespace std;

vector<int> pairSum(vector<int> nums, int target){
    vector<int> ans;
    int n = nums.size();
    int i=0, j=n-1;

    while(i<j){
        int PS = nums[i]+nums[j];
        if(PS>target){
            j--;
        }
        else if(PS<target){
            i++;
        }
        else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
}

int main(){
    vector<int> nums = {1, 2, 3, 4, 5};
    int target = 9, sum=0;
    vector<int> ans = pairSum(nums, target);
    cout<<"Index : ("<<ans[0]<<" ,"<<ans[1]<<") Target : "<<nums[ans[0]]+nums[ans[1]];
    return 0;
}
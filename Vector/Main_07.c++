#include<iostream>
#include<vector>

using namespace std;

int single(vector<int> &nums){
    int ans = 0;
    for(int i : nums){
        ans ^= i;
    }
    return(ans);
}

int main(){
    vector<int> vec = {1,2,3,1,2,5,3,5,7};

    int SN = single(vec);

    cout<<SN;

}
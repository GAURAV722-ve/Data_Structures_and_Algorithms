#include<iostream>
#include<vector>
#include<stack>
using namespace std;


int main(){
    vector<int> arr = {6,8,0,1,3};
    stack<int> s;
    vector<int> ans(arr.size());

    for(int i=0; i<arr.size(); i++){
        while(!s.empty() && s.top()>=arr[i]){
            s.pop();
        }
            if(s.empty())
                ans[i]=-1;
            else
                ans[i] = s.top();

            s.push(arr[i]);
    }

    for(int i=0; i<arr.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}
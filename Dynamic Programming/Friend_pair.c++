#include<iostream>
#include<vector>
using namespace std;

int pf(int n, vector<int>& dp){
    if(n<=2) return n;
    if(dp[n]!=-1) return dp[n];
    return dp[n]=pf(n-1,dp) + (n-1)*pf(n-2,dp);
}

int main(){
    int n;
    
    cout<<"Enter number : ";
    cin>>n;

    vector<int> dp(n+1, -1);
    cout<<"Ans : "<<pf(n,dp);
    return 0;
}
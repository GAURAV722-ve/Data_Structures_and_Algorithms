#include<iostream>
#include<vector>
using namespace std;

int amount(vector<int>& height){
    int n = height.size();
    if(n==1) return height[0];
    vector<int> l(n,0);
    vector<int> r(n,0);
    l[0] = height[0];
    r[n-1] = height[n-1];
    for(int i=1; i<n; i++){
        l[i] = max(l[i-1], height[i]);
    }

    for(int i=n-2; i>=0; i--){
        r[i] = max(r[i+1], height[i]);
    }
    int ans=0;
    for(int i=0; i<n; i++){
        ans+=min(l[i],r[i])-height[i];
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter size : ";
    cin>>n;
    vector<int> height(n,0);
    cout<<"Height : ";
    for(int i=0; i<n; i++){
        cin>>height[i];
    }

    cout<<"Maximum amount of water store is : "<<amount(height);
    return 0;
}
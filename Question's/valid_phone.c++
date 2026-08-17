#include<iostream>
using namespace std;

void solve(){
    int a,b;
    cin>>a>>b;
    if(10000<=a*b && a*b<=99999){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No";
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
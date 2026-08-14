#include<iostream>
using namespace std;

int main(){
    int n,x;
    cin>>n>>x;
    if(n*x>=10000 && n*x<=99999){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    return 0;
}
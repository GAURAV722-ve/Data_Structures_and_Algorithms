#include<iostream>
using namespace std;


int main(){
    int n,c=0, p=0;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        if(a%2==0){
            c++;
        }else{
            p++;
        }
    }
    if(c==p) cout<<"Tie"<<endl;
    else if(c>p) cout<<"Even"<<endl;
    else cout<<"Odd "<<endl;
}
#include<iostream>
using namespace std;

int main(){
    int n, c1=0,c2=0;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        if(x%2==0){
            c1++;
        }else{
            c2++;
        }
    }
    if(c1==c2){
        cout<<"Tie";
    }else if(c1>c2){
        cout<<"Even";
    }else{
        cout<<"Odd";
    }
    return 0;
}
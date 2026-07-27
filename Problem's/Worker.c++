#include<iostream>
using namespace std;

int main(){
    int d,x,y,z;
    cout<<"d days worked : ";
    cin>>d;
    cout<<"Work x unit every day : ";
    cin>>x;
    cout<<"work y unit per day for first d days : ";
    cin>>y;
    cout<<"work z unit per day for remaining days : ";
    cin>>z;

    int a = x*7;
    int b = d*y + (7-d)*z;

    if(a>b){
        cout<<a<<endl;
    }else{
        cout<<b<<endl;
    }
    return 0;
}
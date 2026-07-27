#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter Distance : ";
    cin>>n;
    int x,y,a,b;
    cout<<"Enter cost of 1 liter petrol : ";
    cin>>x;
    cout<<"Enter cost of 1 liter diesel : ";
    cin>>y;
    cout<<"Mileage of petrol car : ";
    cin>>a;
    cout<<"Mileage of diesel car : ";
    cin>>b;
    int pn = n/a;  //(Total amount of petrol)
    int dn = n/b;  //Total amount of diesel.
    int tcp = pn*x;  //Total acost of petrol.
    int tcd = dn*y;  //Total cost of diesel.

    if(tcp>tcd){
        cout<<"Diesel";
    }else{
        cout<<"Petrol";
    }
}
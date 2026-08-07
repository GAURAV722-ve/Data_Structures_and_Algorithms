#include<iostream>
#include<cmath>
using namespace std;

bool isArmstrong(int n){
    int digites=0;
    int o=n;
    int sum=0;
    while(n>0){
        n/=10;
        digites++;
    }
    while(n>0){
        int digit=n%10;
        sum += pow(digit,digites);
        n/=10;
    }
    return sum==o;
}

int main(){
    int n=531;
    if(isArmstrong){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
    return 0;
}
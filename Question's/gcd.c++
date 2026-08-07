#include<iostream>
using namespace std;

// GCD by iterable function.
int gcd(int a, int b){
    while(a>0 && b>0){
        if(a>b){
            a=a%b;
        }else{
            b=b%a;
        }
    }
    if(a==0) return b;
    return a;
}

// GCD by recursion.
int gcd_rec(int a, int b){
    if(b==0) return a;
    return gcd_rec(b, a%b);
}

int main(){
    cout<<gcd(12,36)<<endl;
    cout<<gcd_rec(20,40)<<endl;
}
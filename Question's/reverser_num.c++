#include<iostream>
using namespace std;

int rev_num(int n){
    int rev=0;
    while(n>0){
        rev=rev*10 + n%10;
        n/=10;
    }
    return rev;
}

int main(){
    int a;
    cout<<"Number : ";
    cin>>a;
    cout<<"Reverse num : "<<rev_num(a);
    return 0;

}
#include<iostream>
using namespace std;

bool ispalindrome(int a){
    int rev=0, ori = a;
    while(a!=0){
        rev = rev*10 + a%10;
        a/=10;
    }
    return rev==ori;
}

int main(){
    int a;
    cout<<"Number : ";
    cin>>a;
    cout<<(ispalindrome(a)?"Yes":"No");
}
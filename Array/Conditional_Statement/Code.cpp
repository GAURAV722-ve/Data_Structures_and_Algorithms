#include<iostream>
using namespace std;
int main(){
    char ch;
    // int ch;
    // cout<<"Enter the Character  : ";
    // cin>>ch;
    // cout<<"ASCII value is : "<<char(ch);
    if('a'<=ch ||'z'<=ch){
        cout<<"Lowercase";
    }
    else if('A'<=ch ||'Z'<=ch)
        cout<<"Uppercase";
    else 
        cout<<"You entred default character";
}
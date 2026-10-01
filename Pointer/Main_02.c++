#include<iostream>
using namespace std;

int main(){
    int *ptr = new int[5];
    // They can return Garbage value.
    cout<<*(ptr+2);  // Access the third element in the array
    return 0;
}
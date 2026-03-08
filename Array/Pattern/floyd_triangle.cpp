#include<iostream>
using namespace std;
int main(){
    int n=4;
    // int nums=1; //Floyd's triangle.

    char ch='A';
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            //cout<<nums<<" "; //Floyd's triangle.
            //nums++;
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
}
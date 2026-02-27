#include<iostream>
using namespace std;
int main(){
    int n=3;
    int ch=1;
    for(int i=1; i<=n; i++){
        // char ch='A';
        for(char j=1; j<=n; j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
}
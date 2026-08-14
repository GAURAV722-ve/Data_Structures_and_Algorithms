#include<iostream>
using namespace std;

int main(){
    string str;
    cin>>str;
    int x = str.size();
    bool a=0,b=0;
    for(int i=0; i<x; i++){
        if(str[i]=='&'){
            a=1;
        }
        if(str[i]=='#'){
            b=1;
        }
    }
    if(x%2==0 && a && b){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
    return 0;
}
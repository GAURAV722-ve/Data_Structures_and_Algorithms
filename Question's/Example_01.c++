#include<iostream>
using  namespace std;

int main(){
    int n;
    cin>>n;
    string str;
    cin.ignore();
    getline(cin,str);
    cout<<n<<" " <<str;
}
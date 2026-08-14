#include <iostream>
using namespace std;

int main() {
    int N,X;
    cout<<"No. of House : ";
    cin>>N;
    cout<<"Strength of AI : ";
    cin>>X;
    int ans=0;
    cout << "Enter strength "<<endl;
    for (int i = 1; i <= N; i++) {
        int st;
        cin>>st;
        if(st<X){
            ans=i;
        }
    }

    cout<<"ANS : "<<ans;

    return 0;
}
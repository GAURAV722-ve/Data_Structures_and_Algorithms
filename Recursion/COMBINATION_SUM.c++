#include<iostream>
using namespace std;

void print_nums(int n){
    if(n==1){
        cout<<n;
        return ;
    }
    cout<<n<<" ";
    print_nums(n-1);
}

int main(){
    int n;
    cout<<"Enter number : ";
    cin>>n;
    print_nums(n);
    return 0;
}
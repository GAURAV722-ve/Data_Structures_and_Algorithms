#include<iostream>
using namespace std;

bool isEven(int n){
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum % 2 == 0;
}

int main(){
    int st, end;
    cin>>st>>end;
    int count = 0;

    for(int i=st; i<end; i++){
        if(i%3==0 && isEven(i)){
            count++;
        }
    }
    cout<<count<<endl;
}
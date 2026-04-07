#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,2,34,56,7,89,22,0,23,-03};
    int Small = arr[0];
    for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
        if(Small>arr[i])
            Small=arr[i];
    }
    cout<<"Smallest  : "<<Small;
    return(0);
}
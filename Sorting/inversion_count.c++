#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,4,6,7,2,3};
    int c=0,n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            if(i<j && arr[i]>arr[j]){
                c++;
            }
        }
    }
    cout<<c<<endl;
    return 0;
}
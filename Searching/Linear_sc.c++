#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,5,3,2,6,89,1,79,0,46};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x, y=1 ;
    cout<<"Enter the element : ";
    cin>>x;

    for(int i=0; i<n; i++){
        if(arr[i] == x){
            cout<<"Element are present in array at index : "<<i;
            y--;
            break;
        }
    }
    if(y){
        cout<<"Element are not present in array.";
    }
}
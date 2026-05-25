#include<iostream>
using namespace std;

int LinerSearch(int arr[], int n, int num){
    for(int i=0; i<n; i++){
        if(arr[i] == num){
            return (i);
        }
    }
    return (-1);
}

int main(){
    int arr[] = {1,2,455,2,35,0,235,55,6,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int num=0;
    cout<<"Enter number : ";
    cin>>num;
    int res = LinerSearch(arr, n, num);
    if(res !=-1){
        cout<<num<<" Is present on array at a index : "<<res;
    }
    else{
        cout<<num<<" Is not present in this array.";
    }
}
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    int min,max;
    cout<<"Enter the Element."<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        
        if(i == 0){
            min = arr[i];
            max = arr[i];
        }
        else if(arr[i] < min)
            min = arr[i];
        else if(arr[i] > max)
            max = arr[i];
    }
    cout<<"The minimum element in array is : "<<min<<endl;
    cout<<"The maximum element in array is : "<<max;

    return 0;
}
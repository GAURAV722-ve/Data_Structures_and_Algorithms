#include<iostream>
using namespace std;

int main(){
    int arr[7];
    int r =0, s=0;

    cout<<"Enter the weather for 7 days (1 for Sunny, 0 for Rainy) : "<<endl;
    for(int i=0; i<7; i++){
        cin>>arr[i];
        if(arr[i]==0){
            r++;
        }else if(arr[i] == 1){
            s++;
        }else{
            cout<<"Invalid input"<<endl;
            return 0;
        }
    }
    if(s>r){
        cout<<"Weather Report is GOOD."<<endl;
    }else{
        cout<<"Weather Report is NOT GOOD."<<endl;
    }
    return 0;
}
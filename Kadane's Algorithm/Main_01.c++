#include<iostream>
#include<vector>

using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr)/4;
    int t = 0;

    for(int st = 0; st < n; st++){
        for(int end = st; end < n; end++){
            for(int i = st; i <= end; i++){
                cout<<arr[i];
            }
            t++;
            cout<<" ";
        }
        cout<<endl;
    }

    cout<<"The total number of subarray is : "<<t;
}
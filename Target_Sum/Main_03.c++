#include<iostream>
#include<vector>
using namespace std;

int main(){
    typedef vector<int> var;
    var arr = {1,2,3,4,5};
    for(int i=0; i<arr.size(); i++)
        cout<<arr[i]<<" ";
    return 0;
}
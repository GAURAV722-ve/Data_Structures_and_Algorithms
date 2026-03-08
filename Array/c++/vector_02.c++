#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec={1,2,3,4,5};
    vector<int> vec1(vec);
    vec.erase(vec.begin()+2);
    for(int val : vec){
        cout<<val<<" ";
    } 
}
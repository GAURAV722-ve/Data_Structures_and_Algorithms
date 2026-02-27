#include<iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> vec ={10,9,8,7,6};
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.emplace_back(6);
    vec.pop_back();
    for(int val : vec){
        cout<<val<<" ";
    }
    cout<<"Val at idx 2 : "<<vec[2]<<" or "<<vec.at(2)<<endl;
    // cout<<vec.size()<<endl;
    // cout<<vec.capacity()<<endl;
    return(0);
}
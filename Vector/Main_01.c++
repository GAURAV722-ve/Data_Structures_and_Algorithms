#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec;  // Create a vector of integers

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);

    cout<<vec[0]<<endl;

    return 0;
}
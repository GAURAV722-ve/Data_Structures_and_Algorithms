#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> vec(3, 0);  // Create a vector of integers with 3 elements, all initialized to 0

    for(int i : vec){
        cout<<i<<endl;
    }
}
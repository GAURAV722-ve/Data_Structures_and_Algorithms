#include<iostream>
#include<vector>

using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    vector<int> vec;
    vec.push_back(11);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(53);

    for(int i=0; i<vec.size()-1; i++){
        if(vec[i]>vec[i+1]){
            swap(vec[i], vec[i+1]);
        }
    }
    for(int i : vec){
        cout<<i<<endl;
    }

    return 0;
}
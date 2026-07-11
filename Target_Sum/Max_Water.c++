#include<iostream>
#include<vector>
using namespace std;

int max_water(vector<int> vec){
    int area = 0, mw=0;
    for(int i=0; i< vec.size(); i++){
        for(int j=i+1; j<vec.size(); j++){
            int w = vec[j]-vec[i], h=0;
            h = min(vec[i], vec[j]);
            area = h*w;
            mw=max(mw,area);
        }
    }
    return(mw);
}

int main(){
    vector<int> vec = {1,3,5,2,5,4,8,3,7};
    int ans  = max_water(vec);
    cout<<"MAX Water : "<<ans;
    return(0);
}
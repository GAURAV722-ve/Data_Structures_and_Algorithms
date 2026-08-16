#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<int, string> mp;
    mp[1]="DAA";
    mp[2]="Physics";
    mp[3]="Mathematics";
    for (auto x : mp) {
        cout << x.first << " " << x.second<< endl;
    }

    pair<int, string> p;
    p.first = 468;
    p.second = "Gaurav Singh";
    cout<<p.first<<" "<<p.second<<endl;
}
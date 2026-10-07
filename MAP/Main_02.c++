#include <iostream>
#include<map>
#include<unordered_map>
using namespace std;

void print_map(map<int, string>mp){
    for(auto &ch : mp){
        cout<<ch.first<<" "<<ch.second<<endl;
    }
}

void print_map(unordered_map<int, string>mp){
    for(auto &ch : mp){
        cout<<ch.first<<" "<<ch.second<<endl;
    }
}

int main(){
    
    cout<<"By using ordered map"<<endl;
    map<int, string>mp;
    mp[1]="abc";
    mp[5]="bc";
    mp[2]="pwkd";
    print_map(mp);

    cout<<"By using unordered map"<<endl;

    unordered_map<int, string> mp1;
    mp1[1]="abc";
    mp1[5]="bc";
    mp1[2]="pwkd";
    print_map(mp1);
}
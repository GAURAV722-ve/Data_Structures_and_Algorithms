#include<iostream>
using namespace std;

int main(){
    string s;
    cin >> s;

    if(s.size() == 0 || s.size() % 2 == 0){
        cout << -1;
        return 0;
    }

    bool at = false, an = false;

    for(char ch : s){
        if(ch == '@')
            at = true;
        else if(ch == '&')
            an = true;
    }

    if(at && an){
        cout << s.size();
    }
    else{
        cout << -1;
    }

    return 0;
}
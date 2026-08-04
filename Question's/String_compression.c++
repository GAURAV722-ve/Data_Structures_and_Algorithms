#include <iostream>
#include<vector>
using namespace std;

int comparssion(vector<char> &chars){
    int n=chars.size();
    int idx=0;
    for(int i=0; i<n;){
        int count=0;
        char ch=chars[i];
        while(i<n && ch==chars[i]){
            count++, i++;
        }
        if(count==1){
            chars[idx++]=ch;
        }else{
            chars[idx++]=ch;
            string str = to_string(count);
            for(char dig:str){
                chars[idx++]=dig;
            }
        }
    }
    return idx;
}

int main(){
    vector<char> chars = {'a', 'a', 'a', 'b', 'c', 'c'};
    int t = comparssion(chars);

    cout <<"The length of compressed character array is : "<< t << endl;

    for(int i=0; i<t; i++){
        cout<<chars[i]<<" ";
    }
    return 0;
}
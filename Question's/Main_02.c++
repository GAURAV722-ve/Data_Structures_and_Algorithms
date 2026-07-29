// Problem Statement (Simple Version)

// Alex has two integers A and B. He wants to make A equal to B.

// He performs operations in the following order:

// In the 1st, 3rd, 5th, ... operation, add 1 to A.
// In the 2nd, 4th, 6th, ... operation, add 2 to A.

// Determine whether Alex can make A exactly equal to B. Print "Yes" if possible, otherwise print "No".



#include<iostream>
using namespace std;

int main(){
    int a,b;

    cout<<"Enter the value"<<endl;
    cin>>a>>b;

    int i=1;
    while (a<b)
    {
        /* code */
        if(i%2==0){
            a=a+2;
        }else{
            a+=1;
        }
        i++;
    }if(a==b)
        cout<<"Yes";
    else{
        cout<<"No";
    }
    
    return 0;
}

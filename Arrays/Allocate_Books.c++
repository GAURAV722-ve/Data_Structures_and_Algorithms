#include<iostream>
#include<vector>
using namespace std;

bool isValid(vector<int> arr, int n, int m, int mid){
    int student=1, pageSum=0;
    for(int i=0;i<n;i++){
        if(pageSum+arr[i]<=mid){
            pageSum+=arr[i];
        }else{
            student++;
            if(student>m || arr[i]>mid){
                return false;
            }
            pageSum=arr[i];
        }
    }
    return true;
}

int Allocatebooks(vector<int> arr, int n, int m){ //O(nlogN)
    if(m>n){
        return -1;
    }

    int sum=0;
    for(int i=0;i<n;i++){ //O(n)
        sum+=arr[i];
    }
    int st=0, end=sum, ans=-1;
    while(st<=end){  //log(N)
        int mid = st + (end-st)/2;
        if(isValid(arr, n, m, mid)){
            ans=mid;
            end=mid-1;
        }else{
            st=mid+1;
        }
    }
    return ans;
}

int main(){
    vector<int> arr = {2,1,3,4};
    int n = arr.size(), m=2;

    cout<<Allocatebooks(arr, n, m)<<endl;
    return 0;
}
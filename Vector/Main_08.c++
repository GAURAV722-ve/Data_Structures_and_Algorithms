#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,-6};
    int n = sizeof(arr)/sizeof(arr[0]);

    int max_sum = INT_MIN;

    for(int st=0; st<n; st++){
        int current_sum = 0;
        for(int en=st; en<n; en++){
            current_sum += arr[en];
            max_sum = max(current_sum, max_sum);
        }
    }

    cout << "Maximum sum of contiguous subarray is: " << max_sum << endl;

    return 0;
}
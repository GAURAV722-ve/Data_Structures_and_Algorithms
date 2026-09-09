#include<iostream>
using namespace std;

void count_sort(int arr[], int n, int place){
    int count[10] = {0};
    int output[n];

    for(int i=0; i<n; i++){
        int dig = (arr[i]/place)%10;
        count[dig]++;
    }

    for(int i=1; i< 10; i++){
        count[i] += count[i-1];
    }

    for (int i = n - 1; i >= 0; i--) {
        int digit = (arr[i] / place) % 10;
        output[count[digit] - 1] = arr[i];
        count[digit]--;
    }

    // Copy output to original array
    for (int i = 0; i < n; i++) {
        arr[i] = output[i];
    }
}

void Radix_sort(int arr[], int n){
    int max = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>max)
            max=arr[i];
    }

    for(int i=1; max/i>0; i*=10)
        count_sort(arr, n, i);

}

int main(){
    int arr[] = {199,33,54,5,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    Radix_sort(arr, n);

    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    
        return 0;
}
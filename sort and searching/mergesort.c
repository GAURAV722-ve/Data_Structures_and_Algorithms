#include<stdio.h>
#include <limits.h>

void merge(int arr[], int p, int q, int r) {
    int n1 = q - p + 1;
    int n2 = r - q;

    int L[n1 + 1], R[n2 + 1];

    for (int i = 0; i < n1; i++)
        L[i] = arr[p + i];

    for (int j = 0; j < n2; j++)
        R[j] = arr[q + 1 + j];

    L[n1] = INT_MAX;
    R[n2] = INT_MAX;

    int i = 0, j = 0;

    for (int k = p; k <= r; k++) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
    }
}

void mergesort(int a[], int p, int r){
    if(p<r){
        int q=(p+r)/2;
        mergesort(a,p,q);
        mergesort(a,q+1,r);
        merge(a,p,q,r);
    }
}
int main(){
    int arr[]={10,8,1,5,4,7};
    int n=sizeof(arr)/sizeof(int);
    mergesort(arr, 0, n-1);
    printf("Sorted array : \n");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
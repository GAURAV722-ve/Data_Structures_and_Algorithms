#include<stdio.h>
#include<stdlib.h>

void swap(int* a, int* b){
    int t=*a;
    *a=*b;
    *b=t;
}
int partition(int arr[], int st, int end){
    int idx = st-1;
    int pivot = arr[end];
    for(int j=st; j<end; j++){
    if(arr[j] < pivot){
        idx++;
        swap(&arr[j], &arr[idx]);
        }
    }
    idx++;
    swap(&arr[end], &arr[idx]);
    return(idx);
}

void quicksort(int arr[], int st, int end){
    if(st<end){
        int pi = partition(arr, st, end);
        quicksort(arr, st, pi-1);
        quicksort(arr, pi+1, end);
    }
}

void print(int arr[], int n){
    for(int i=0; i<n; i++)
        printf("%d ",arr[i]);
    printf("\n");
}

int main(){
    int arr[] = {1,7,5,3,10,8};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("Before sorting.\n");
    print(arr, n);

    quicksort(arr, 0, n-1);

    printf("After sorting.\n");
    print(arr,n);

    return(0);
}
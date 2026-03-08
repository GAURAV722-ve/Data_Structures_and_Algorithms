#include<stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubblesort(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1])
                swap(&arr[j], &arr[j+1]);
        }
    }
}

void print(int *arr, int n){
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main(){
    int arr[] = {1,10,8,3,4,6};
    int n=sizeof(arr)/sizeof(int);
    printf("After sorting.\n");
    print(arr,n);
    bubblesort(arr,n);
    printf("After sorting.\n");
    print(arr,n);
    return 0;
}
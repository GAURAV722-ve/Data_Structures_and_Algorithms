#include<stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionsort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int min = i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[min])
                min = j;
        }
        if(min !=i){
            swap(&arr[i],&arr[min]);
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
    selectionsort(arr,n);
    printf("After sorting.\n");
    print(arr,n);
    return 0;
}
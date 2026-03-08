#include<stdio.h>
int binaryseacrch(int arr[],int n,int key){
    int mid, low=0, high=n-1;
    while(low<=high){
        mid=(low+high)/2;
        if(key==mid){
            return(mid);
        }
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return(-1);
}
int main(){
    int arr[]={12,0,3,8,7,9,22,5};
    int n = sizeof(arr)/sizeof(int);
    int key;
    printf("Enter the element : ");
    scanf("%d",&key);
    int k = binaryseacrch(arr,n,key);
    if(k!=-1){
    printf("Element(%d) is exist.",key);
    }
    else{
    printf("Element(%d) is not exist.",key);
    }
}
#include <stdio.h>

int linearsearch(int arr[], int n, int key){
    for(int i = 0; i < n; i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return -1; 
}

int main(){
    int arr[] = {12, 0, 3, 8, 7, 9, 22, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;

    printf("Enter the element: ");
    scanf("%d", &key);

    int k = linearsearch(arr, n, key);

    if(k == 1){
        printf("Element (%d) exists.\n", key);
    } else {
        printf("Element (%d) does not exist.\n", key);
    }

    return 0;
}
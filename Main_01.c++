#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,2,34,56,7,89,22,0,23,-3};
    size_t n = sizeof(arr) / sizeof(arr[0]);
    int Small = arr[0];
    for(size_t i = 1; i < n; ++i){
        if(Small > arr[i])
            Small = arr[i];
    }
    cout << "Smallest: " << Small << '\n';
    return 0;
}
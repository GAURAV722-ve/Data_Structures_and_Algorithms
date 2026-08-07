#include<iostream>
#include<climits>
using namespace std;

int max_row(int matrix[][4], int row, int col){
    int max_row_sum = INT_MIN;
    for(int i=0; i<row; i++){
        int sum=0;
        for(int j=0; j<col; j++){
            sum+=matrix[i][j];
        }
        max_row_sum = max(sum, max_row_sum);
    }
    return max_row_sum;
}

int main(){
    int matrix[3][4]={{1,2,3},{4,5,6},{7,8,9}};
    int row=3, col=4;
    cout<<"MAX SUM OF ROW : "<<max_row(matrix, row, col);
    return 0;
}
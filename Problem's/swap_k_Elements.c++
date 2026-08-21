#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,m,k;
    cin>>n>>m>>k;
    vector<vector<int>> vec(n,vector<int>(m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>vec[i][j];
        }
    }

    for(int i=0; i<n/2; i++){
        for(int j=0; j<k; j++){
            swap(vec[n-i-1][j], vec[i][m-k+j]);
        }
    }

cout<<"------OUTPUT--------"<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(j==m-1) cout<<vec[i][j];
            else cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
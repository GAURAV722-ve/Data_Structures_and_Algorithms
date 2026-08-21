#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> vec(n, vector<int>(m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>vec[i][j];
        }
    }
    for(int i=0; i<n-1; i++){
        for(int j=0; j<m-1; j++){
            swap(vec[i][j], vec[i+1][j+1]);
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(j==m-1) cout<<vec[i][j];
            else cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }

}
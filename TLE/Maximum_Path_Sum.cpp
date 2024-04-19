#include<bits/stdc++.h>
using namespace std;

long long solve(int i, int j, int n, int m, vector<vector<int>>&v){
    if(i>=n || j>=m) return -1e6;
    if(i==n-1 && j==m-1) return v[i][j];
    return max(solve(i+1,j,n,m,v) + v[i][j], solve(i,j+1,n,m,v) + v[i][j]);
}

int main(){

    int n,m;
    cin>>n>>m;

    vector<vector<int>>v(n,vector<int>(m,0));

    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cin>>v[i][j];
        }
    }

    cout<<solve(0,0,n,m,v);


    return 0;
}
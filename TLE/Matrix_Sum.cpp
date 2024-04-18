#include<bits/stdc++.h>
using namespace std;

void solve(int i,int j, int r, int c, vector<vector<int>>&a, vector<vector<int>>&b){
    if(i==r-1 && j==c-1){
        a[i][j] = a[i][j] + b[i][j];
        return;
    }
    if(j>=c) return solve(i+1,0,r,c,a,b);
    solve(i,j+1,r,c,a,b);
    a[i][j] = a[i][j] + b[i][j];
    return;
}

int main(){

    int r,c;
    cin>>r>>c;

    // int a[r][c];
    // int b[r][c];
    vector<vector<int>>a,b;

    for(int i = 0; i<r; i++){
        vector<int>t;
        for(int j = 0; j<c; j++){
            int x;
            cin>>x;
            t.push_back(x);
            // cin>>a[i][j];
        }
        a.push_back(t);
    }

    for(int i = 0; i<r; i++){
        vector<int>t;
        for(int j = 0; j<c; j++){
            int x;
            cin>>x;
            t.push_back(x);
            // cin>>b[i][j];
        }
        b.push_back(t);
    }

    solve(0,0,r,c,a,b);
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<'\n';
    }
    return 0;
}
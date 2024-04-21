#include<bits/stdc++.h>
using namespace std;

bool safe(int row, int col, int n, vector<string>&s, map<int,int>&up, map<int,int>&left, map<int,int>&down){
    if(up[n+col-row]) return false;
    if(left[row]) return false;
    if(down[col+row])return false;

    return true;
}

void solve(int col, int n, vector<string>&s, vector<vector<string>>&ans,map<int,int>&up,map<int,int>&left,map<int,int>&down){
    if(col>=n){
        ans.push_back(s);
        return;
    }

    for(int row = 0; row<n; row++){
        if(safe(row,col,n,s,up,left,down)){
            s[row][col] = 'Q';
            up[n+col-row]++;
            left[row]++;
            down[col+row]++;
            solve(col+1,n,s,ans,up,left,down);
            s[row][col] = '.';
            up[n+col-row]--;
            left[row]--;
            down[col+row]--;
        }
    }

    return;
}

vector<vector<string>> solveNQueens(int n){
    string s;
    for(int i = 0; i<n; i++)s.push_back('.');
    vector<string>ss;
    vector<vector<string>>ans;
    map<int,int>up,left,down;
    for(int i = 0; i<n; i++)ss.push_back(s);
    
    // for(auto &it:ss)cout<<it<<" ";
    // cout<<'\n';
    solve(0,n,ss,ans,up,left,down);
    return ans;
}

int main(){


    vector<vector<string>>ans = solveNQueens(4);
    for(auto &row:ans){
        for(auto &it:row)cout<<it<<" ";
        cout<<'\n';
    }

    return 0;
}
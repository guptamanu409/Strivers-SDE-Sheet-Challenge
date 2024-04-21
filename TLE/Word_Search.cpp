#include<bits/stdc++.h>
using namespace std;

bool solve(int i, int j, int r, int c, vector<vector<char>>&b, int n, string &w, int ind, vector<vector<int>>&check){
    if(ind>=n)return true;

    if(b[i][j]==w[ind]){
        check[i][j] = 1;
        if(ind==n-1)return true;
        if(i-1>=0 && (check[i-1][j]==0)){
            if(solve(i-1,j,r,c,b,n,w,ind+1,check))return true;
        }
        if(j-1>=0 && (check[i][j-1]==0)){
            if(solve(i,j-1,r,c,b,n,w,ind+1,check))return true;
        }
        if(j+1<c && (check[i][j+1]==0)){
            if(solve(i,j+1,r,c,b,n,w,ind+1,check))return true;
        }
        if(i+1<r && (check[i+1][j]==0)){
            if(solve(i+1,j,r,c,b,n,w,ind+1,check))return true;
        }
        check[i][j] = 0;
    }

    return false;
}

bool exist(vector<vector<char>>& board, string word){
    int r = board.size();
    int c = board[0].size();
    int n = word.size();
    if((r*c)<n) return false;
    vector<vector<int>>check(r,vector<int>(c,0));
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            if(board[i][j]==word[0]){
                if(solve(i,j,r,c,board,n,word,0, check))return true;
            }
        }
    }
    return false;
}

int main(){

    vector<vector<char>>v= {{'A','B','C','E'},{'S','F','C','S'},{'A','D','E','E'}};
    cout<<exist(v,"ABCB");
    // vector<char>


    return 0;
}
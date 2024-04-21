#include<bits/stdc++.h>
using namespace std;

bool safe(int row, int col, int val, vector<vector<char>>&b){
    char v = val;
    for(int k = 0; k<9; k++){
        if(b[row][k]==v) return false;
        if(b[k][col]==v) return false;
    }

    for(int i = (row-(row%3)); i<(row-(row%3))+3; i++){
        for(int j = (col-(col%3)); j<(col-(col%3))+3; j++){
            if(b[i][j]==v) return false;
        }
    }

    return true;
}

bool solve(int row, int col, vector<vector<char>>&b){
    if(row>=9) return true;
    if(col>=9) return solve(row+1,0,b);
    if(b[row][col]!='.') return solve(row,col+1,b);
    for(int i = 1; i<=9; i++){
        if(safe(row,col,i,b)){
            b[row][col] = (char)(i+'0');
            if(solve(row,col+1,b)) return true;
            b[row][col] = '.';
        }
    }

    return false;
}

void solveSudoku(vector<vector<char>>& board){
    solve(0,0,board);

}

int main(){

    // vector<char>v = {'a','b','a','a','a'};
    // vector<vector<char>>vv;
    // vv.push_back(v);
    // cout<<vv[0][1];
    cout<<(char)(7+'0');


    return 0;
}
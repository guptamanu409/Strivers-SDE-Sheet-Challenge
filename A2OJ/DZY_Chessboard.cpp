#include<bits/stdc++.h>
using namespace std;


void print(int row, int col, vector<vector<char>>&v){

    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            cout<<v[i][j];
        }
        cout<<endl;
    }
    return;
}

bool helper(char c, int row, int col, vector<vector<char>>&v){
    if(c=='B'){
        if(row==0 && col==0) return true;

        if(row-1<0){
            if(v[row][col-1]=='-' || v[row][col-1]=='W') return true;
            else return false;
        }

        if(col-1<0){
            if(v[row-1][col]=='-' || v[row-1][col]=='W') return true;
            else return false;
        }

        if((v[row-1][col]=='-' && v[row][col-1]=='W') || (v[row-1][col]=='W' && v[row][col-1]=='-') || (v[row-1][col]=='W' && v[row][col-1]=='W') || (v[row-1][col]=='-' && v[row][col-1]=='-')) return true;

        return false;
    }

    else{
        if(row==0 && col==0) return true;

        if(row-1<0){
            if(v[row][col-1]=='-' || v[row][col-1]=='B') return true;
            else return false;
        }

        if(col-1<0){
            if(v[row-1][col]=='-' || v[row-1][col]=='B') return true;
            else return false;
        }

        if((v[row-1][col]=='-' && v[row][col-1]=='B') || (v[row-1][col]=='B' && v[row][col-1]=='-') || (v[row-1][col]=='B' && v[row][col-1]=='B') || (v[row-1][col]=='-' && v[row][col-1]=='-')) return true;

        return false;
    }
    return false;
}

void place(int ind, int j, int row, int col, vector<vector<char>>&v){
    if(ind==row){
        print(row,col,v);
        exit(0);
    }

    
    if(v[ind][j]=='-'){
        if(j+1<col) place(ind,j+1,row, col,v);
        else place(ind+1,0,row,col,v);
    }

    else if(v[ind][j]=='.'){
        
        if(helper('W',ind,j,v)){
            v[ind][j] = 'W';
            if(j+1<col) place(ind,j+1,row, col,v);
            else place(ind+1,0,row,col,v);
            v[ind][j] = '.';
        }
        
        if(helper('B',ind,j,v)){
            v[ind][j] = 'B';
            if(j+1<col) place(ind,j+1,row, col,v);
            else place(ind+1,0,row,col,v);
            v[ind][j] = '.';
        }

        
    }    
    
    return;
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin>>n>>m;

    vector<vector<char>>v(n,vector<char>(m,'.'));

    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cin>>v[i][j];
        }
    }

    place(0,0,n,m,v);

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

class Solution {

private:
    //Memoization
    int helper(int row, int col, vector<vector<int>>&v,vector<vector<int>>&dp){
        if(row==0 && col==0) return v[row][col];
        if(row<0 || col<0) return INT_MAX;
        if(dp[row][col]!=-1) return dp[row][col];
        int left = helper(row,col-1,v,dp);
        left = (left!=INT_MAX)? left + v[row][col] : INT_MAX;
        int up = helper(row-1,col,v,dp);
        up = (up!=INT_MAX)? up+v[row][col] : INT_MAX;
        return dp[row][col] = min(left,up);
    }

public:
    int minPathSum(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        //return helper(row-1,col-1,grid);

        //vector<vector<int>>dp(row,vector<int>(col,-1));
        //return helper(row-1,col-1,grid,dp);

        //Tabulation
        /*
        vector<vector<int>>dp(row,vector<int>(col,-1));
        for(int r = 0; r<row; r++){
            for(int c = 0; c<col; c++){
                if(r==0 && c==0){
                    dp[0][0] = grid[0][0];
                    continue;
                }
                int left = INT_MAX, up = INT_MAX;
                if(c>0) left = grid[r][c] + dp[r][c-1];
                if(r>0) up = grid[r][c] + dp[r-1][c];
                dp[r][c] = min(left,up);
            }
        }

        return dp[row-1][col-1];
        */
        
        //Space Optimization
        vector<int>prev(col,0);
        for(int r = 0; r<row; r++){
            vector<int>curr(col,0);
            for(int c = 0; c<col; c++){
                if(r==0 && c==0){
                    curr[0] = grid[0][0];
                    continue;
                }
                int left = INT_MAX, up = INT_MAX;
                if(r>0) up = grid[r][c] + prev[c];
                if(c>0) left = grid[r][c] + curr[c-1];
                curr[c] = min(left,up);
            }
            prev = curr;
        }
        return prev[col-1];
    }
};
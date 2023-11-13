#include<bits/stdc++.h>
using namespace std;
class Solution {

private:
    //Memoization
    int helper(int row, int col, vector<vector<int>>&v, int m, int n, vector<vector<int>>&dp){
        if(row>=m || col<0 || col>=n) return INT_MAX;
        if(row==m-1) return v[row][col];
        if(dp[row][col]!=-1) return dp[row][col];
        int left = helper(row+1,col-1,v,m,n,dp);
        left = (left!=INT_MAX)? v[row][col] + left : INT_MAX;

        int down = helper(row+1,col,v,m,n,dp);
        down = (down!=INT_MAX)? v[row][col] + down : INT_MAX;

        int right = helper(row+1,col+1,v,m,n,dp);
        right = (right!=INT_MAX)? v[row][col] + right : INT_MAX;

        return dp[row][col] = min(left,min(down,right));
    }

public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        
        int row = matrix.size();
        int col = matrix[0].size();

        //vector<vector<int>>dp(row,vector<int>(col,-1));        
        /*
        int mini = INT_MAX;
        for(int i = 0; i<col; i++){
            int temp = helper(0,i,matrix,row,col,dp);
            mini = min(mini, temp);
        }
        return mini;
        */

        //Tabulation
        /*
        vector<vector<int>>dp(row,vector<int>(col+1,0));
        int mini = INT_MAX;
        for(int i = 0; i<col; i++){
            dp[row-1][i] = matrix[row-1][i];
            mini = min(mini,dp[row-1][i]);
        }
        dp[row-1][col] = mini;

        for(int r = row-2; r>=0; r--){
            mini = INT_MAX;
            for(int c = 0; c<col+1; c++){
                if(c==col){
                    dp[r][c] = mini;
                    continue;
                }
                int left = INT_MAX, down = INT_MAX, right = INT_MAX;
                if(c>0) left = matrix[r][c] + dp[r+1][c-1];
                if(c+1<col) right = matrix[r][c] + dp[r+1][c+1];
                down = matrix[r][c] + dp[r+1][c];
                dp[r][c] = min(left,min(right,down));
                mini = min(mini,dp[r][c]);
            }
        }

        return dp[0][col];
        */

        
        //Space Optimization
        vector<int>prev(col+1,0);
        int mini = INT_MAX;
        for(int i = 0; i<col; i++){
            prev[i] = matrix[row-1][i];
            mini = min(mini,prev[i]);
        }

        prev[col] = mini;

        for(int r = row-2; r>=0; r--){
            mini = INT_MAX;
            vector<int>curr(col+1,0);
            for(int c = 0; c<col+1; c++){
                if(c==col){
                    curr[c] = mini;
                    continue;
                }
                int left = INT_MAX, down = INT_MAX, right = INT_MAX;
                if(c>0) left = matrix[r][c] + prev[c-1];
                if(c+1<col) right = matrix[r][c] + prev[c+1];
                down = matrix[r][c] + prev[c];
                curr[c] = min(left,min(right,down));
                mini = min(mini,curr[c]);
            }
            prev = curr;
        }

        return prev[col];
    }
};
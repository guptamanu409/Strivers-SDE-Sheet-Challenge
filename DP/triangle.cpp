#include<bits/stdc++.h>
using namespace std;


class Solution {

private:
    //Memoization
    int helper(int row, int col, vector<vector<int>>&v, vector<vector<int>>&dp){
        if(row==v.size()-1) return v[row][col];
        if(dp[row][col]!=-1) return dp[row][col];
        int ans = INT_MAX;
        for(int c = col; c<col+2; c++){
            int temp = v[row][col]+helper(row+1,c,v,dp);
            ans = min(ans,temp);
        }
        return dp[row][col] = ans;
    }

public:
    int minimumTotal(vector<vector<int>>& triangle) {
        
        int row = triangle.size();
        

        //vector<vector<int>>dp(row,vector<int>(row,-1));

        //return helper(0,0,triangle,dp);

        //Tabulation
        /*
        vector<vector<int>>dp(row,vector<int>(row,-1));
        for(int i = 0; i<row; i++){
            dp[row-1][i] = triangle[row-1][i];
        }

        for(int r = row-2; r>=0; r--){
            for(int col = 0; col<r+1; col++){
                int ans = INT_MAX;
                for(int c = col; c<col+2; c++){
                    int temp = triangle[r][col] + dp[r+1][c];
                    ans = min(ans,temp);
                }
                dp[r][col] = ans;
            }
        }
        return dp[0][0];
        */

        //Space Optimization
        vector<int>prev(row,-1);
        for(int i = 0; i<row; i++){
            prev[i] = triangle[row-1][i];
        }

        for(int r = row-2; r>=0; r--){
            vector<int>curr(r+1,0);
            for(int col = 0; col<r+1; col++){
                int ans = INT_MAX;
                for(int c = col; c<col+2; c++){
                    int temp = triangle[r][col] + prev[c];
                    ans = min(ans,temp);
                }
                curr[col] = ans;
            }
            prev = curr;
        }

        return prev[0];

    }
};
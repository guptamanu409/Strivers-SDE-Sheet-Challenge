class Solution {

private:
    //Memoization
    int helper(int row, int col, vector<vector<int>>&v,vector<vector<int>>&dp){
        if(row<0 || col<0 || v[row][col]==1) return 0;
        if(row == 0 && col==0) return 1;
        if(dp[row][col]!=-1) return dp[row][col];
        int left = helper(row,col-1,v,dp);
        int up = helper(row-1,col,v,dp);
        return dp[row][col] = left + up;
    }

public:
    int uniquePathsWithObstacles(vector<vector<int>>& oG) {
        int m = oG.size();
        int n = oG[0].size();
        if(oG[0][0]==1 || oG[m-1][n-1]==1) return 0;
        //return helper(m-1,n-1,oG);

        //vector<vector<int>>dp(m,vector<int>(n,-1));
        //return helper(m-1,n-1,oG,dp);

        //Tabulation
        /*
        vector<vector<int>>dp(m,vector<int>(n,-1));
        //dp[0][0] = 1;
        for(int r = 0; r<m; r++){
            for(int c = 0; c<n; c++){
                if(r==0 && c==0){
                    dp[r][c]=1;
                    continue;
                }
                int left = 0, up = 0;
                if(r>0 && oG[r-1][c]!=1) up = dp[r-1][c];
                if(c>0 && oG[r][c-1]!=1) left = dp[r][c-1];
                dp[r][c] = left+up;
            }
        }

        return dp[m-1][n-1];
        */

        //Space Optimization
        vector<int>dp(n,0);
        for(int r = 0; r<m; r++){
            vector<int>curr(n,0);
            for(int c = 0; c<n; c++){
                if(r==0 && c==0){
                    curr[c] = 1;
                    continue;
                }
                int left = 0, up = 0;
                if(c>0 && oG[r][c-1]!=1) left = curr[c-1];
                if(r>0 && oG[r-1][c]!=1) up = dp[c];
                curr[c] = left+up;
            }
            dp = curr;
        }

        return dp[n-1];
    }
};
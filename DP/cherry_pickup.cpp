#include <bits/stdc++.h> 
using namespace std;
//Memoization
int helper(int r, int c1, int c2, vector<vector<int>>&v, int col,vector<vector<vector<int>>>&dp){
    if(c1<0 || c1>=col || c2<0 || c2>=col) return -1e8;

    if(r==v.size()-1){
        if(c1==c2){ //Alice and Bob are on same base case -> Count only once
            return v[r][c1];

        }
        else return v[r][c1] + v[r][c2];
    }
    if(dp[r][c1][c2]!=-1) return dp[r][c1][c2];
    int maxi = INT_MIN;
    for(int al = -1; al<=1; al++){ // For One direction of Alice
        for(int bob = -1; bob<=1; bob++){ // Bob moving in 3 directions
            int sm = 0, diff = 0;
            if(c1==c2){ // Alice and Bob are on same cell so add it's value only once
                sm = v[r][c1] + helper(r+1,c1+al,c2+bob,v,col,dp);
            }
            else{
                diff = v[r][c1] + v[r][c2] + helper(r+1,c1+al,c2+bob,v,col,dp);
            }
            maxi = max(maxi,max(sm,diff));
        }
    }
    return dp[r][c1][c2] = maxi;
}

int maximumChocolates(int r, int c, vector<vector<int>> &grid) {
    
    //vector<vector<vector<int>>>dp(r,vector<vector<int>>(c,vector<int>(c,-1)));
    
    //return helper(0,0,c-1,grid,c,dp);

    //Tabulation
    /*
    vector<vector<vector<int>>>dp(r,vector<vector<int>>(c,vector<int>(c,-1)));

    for(int c1 = 0; c1<c; c1++){
        for(int c2=0; c2<c; c2++){
            if(c1==c2){
                dp[r-1][c1][c2] = grid[r-1][c1];
            }
            else dp[r-1][c1][c2] = grid[r-1][c1] + grid[r-1][c2];
        }
    }
    
    
    for(int row = r-2; row>=0; row--){
        for(int c1 = 0; c1<c; c1++){
            for(int c2 = 0; c2<c; c2++){
                int maxi = INT_MIN;
                for(int al=-1; al<=1; al++){
                    for(int bob = -1; bob<=1; bob++){
                        int same = INT_MIN, diff = INT_MIN;
                        if(c1+al>=0 && c1+al<c && c2+bob>=0 && c2+bob<c){
                            if(c1==c2) same = grid[row][c1] + dp[row+1][c1+al][c2+bob];
                            else diff = grid[row][c1] + grid[row][c2] + dp[row+1][c1+al][c2+bob];
                        }
                        maxi = max(maxi,max(same,diff));
                    }
                }
                dp[row][c1][c2] = maxi;
                
            }
        }
    }
    return dp[0][0][c-1];
    */

    
    //Space Optimization
    vector<vector<int>>prev(c,vector<int>(c,0));
    for(int c1 = 0; c1<c; c1++){
        for(int c2=0; c2<c; c2++){
            if(c1==c2) prev[c1][c2] = grid[r-1][c1];
            else prev[c1][c2] = grid[r-1][c1] + grid[r-1][c2];
        }
    }

    for(int row = r-2; row>=0; row--){
        vector<vector<int>>curr(c,vector<int>(c,0));
        for(int c1 = 0; c1<c; c1++){
            for(int c2=0; c2<c; c2++){
                int maxi = INT_MIN;
                for(int al = -1; al<=1; al++){
                    for(int bob = -1; bob<=1; bob++){
                        int diff = INT_MIN, same = INT_MIN;
                        if(c1+al>=0 && c1+al<c && c2+bob>=0 && c2+bob<c){
                            if(c1==c2) same = grid[row][c1] + prev[c1+al][c2+bob];
                            else diff = grid[row][c1] + grid[row][c2] + prev[c1+al][c2+bob];
                        }
                        maxi = max(maxi,max(diff,same));
                    }
                }
                curr[c1][c2] = maxi;
            }
        }
        prev = curr;
    }

    return prev[0][c-1];

    
}
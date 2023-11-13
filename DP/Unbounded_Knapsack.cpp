#include<bits/stdc++.h>
using namespace std;

//Memoization
int helper(int ind, int W, vector<int>&p, vector<int>&w,vector<vector<int>>&dp){
    if(W==0) return 0;
    if(ind==0){
        if(W%w[0]==0) return p[0]*(W/w[0]);
        return INT_MIN;
    }
    if(dp[ind][W]!=-1) return dp[ind][W];
    int notpick = helper(ind-1,W,p,w,dp);
    int pick = 0;
    if(w[ind]<=W) pick = p[ind] + helper(ind,W-w[ind],p,w,dp);

    return dp[ind][W] = max(notpick,pick);
}


int unboundedKnapsack(int n, int w, vector<int> &profit, vector<int> &weight){
    
    //vector<vector<int>>dp(n,vector<int>(w+1,-1));
    //return helper(n-1,w,profit,weight,dp);

    //Tabulation
    /*
    vector<vector<int>>dp(n,vector<int>(w+1,0));

    for(int W = 0; W<=w; W++){
        dp[0][W] = (W%weight[0]==0)? profit[0]*(W/weight[0]) : INT_MIN;
    }

    for(int ind = 1; ind<n; ind++){
        for(int W = 1; W<=w; W++){
            int notpick = dp[ind-1][W];
            int pick = 0;
            if(weight[ind]<=W) pick = profit[ind] + dp[ind][W-weight[ind]];
            dp[ind][W] = max(pick,notpick);
        }
    }

    return dp[n-1][w];
    */
    //Space Optimization
    vector<int>prev(w+1,0);

    for(int W = 0; W<=w; W++){
        prev[W] = (W%weight[0]==0)? profit[0]*(W/weight[0]) : INT_MIN;
    }

    for(int ind = 1; ind<n; ind++){
        vector<int>curr(w+1,0);
        for(int W = 1; W<=w; W++){
            int notpick = prev[W];
            int pick = 0;
            if(weight[ind]<=W) pick = profit[ind] + curr[W-weight[ind]];
            curr[W] = max(pick,notpick);
        }
        prev = curr;
    }
    return prev[w];

}
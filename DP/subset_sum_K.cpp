#include <bits/stdc++.h> 
using namespace std;
//Memoization

bool helper(int ind, int tar, vector<int>&v, vector<vector<int>>&dp){
    if(tar==0) return true;
    if(ind==0) return v[0] == tar;
    if(dp[ind][tar]!=-1) return dp[ind][tar];
    bool notpick = helper(ind-1,tar,v,dp);
    bool pick = false;
    if(v[ind]<=tar) pick = helper(ind-1, tar-v[ind],v,dp);

    return dp[ind][tar] = notpick || pick;
}

bool subsetSumToK(int n, int k, vector<int> &arr) {
    
    //vector<vector<int>>dp(n,vector<int>(k+1,-1));

    //return helper(n-1,k,arr,dp);

    //Tabulation
    /*
    vector<vector<bool>>dp(n,vector<bool>(k+1,false));
    for(int i = 0; i<n; i++) dp[i][0] = true;

    if(arr[0]<=k) dp[0][arr[0]] = true;

    for(int ind = 1; ind<n; ind++){
        for(int tar = 1; tar<=k; tar++){
            bool notpick = dp[ind-1][tar];
            bool pick = false;
            if(arr[ind]<=tar) pick = dp[ind-1][tar-arr[ind]];
            dp[ind][tar] = notpick || pick;
        }
    }

    return dp[n-1][k];
    */
    
    //Space Optimization
    vector<bool>prev(k+1,false);
    prev[0] = true;

    if(arr[0]<=k) prev[arr[0]] = true;

    for(int ind = 1; ind<n; ind++){
        vector<bool>curr(k+1,false);
        curr[0] = true;
        for(int tar = 1; tar<=k; tar++){
            bool notpick = prev[tar];
            bool pick = false;
            if(arr[ind]<=tar) pick = prev[tar-arr[ind]];

            curr[tar] = notpick || pick;
        }
        prev = curr;
    }

    return prev[k];



    
    
}
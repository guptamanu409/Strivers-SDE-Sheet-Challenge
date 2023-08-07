#include <bits/stdc++.h> 
using namespace std;
//Memoization
int helper(int ind, int k, vector<int>&v, vector<vector<int>>&dp){
    if(k==0) return 0;
    if(ind==0){
        if(k%v[0]==0)
        {
            return (k/v[0]);
        }
        return 1e9;
    } 

    if(dp[ind][k]!=-1) return dp[ind][k];

    int notpick = helper(ind-1,k,v,dp);
    int pick = INT_MAX;
    if(v[ind]<=k) pick = 1 + helper(ind, k-v[ind],v,dp);

    return dp[ind][k] = min(notpick,pick);
}

int minimumElements(vector<int> &num, int x)
{
    
    int n = num.size();
    //vector<vector<int>>dp(n,vector<int>(x+1,-1));
    //int ans = helper(n-1,x,num,dp);
    /*
    if(ans>=1e9){
        return -1;
    }
    return ans;
    */

    //Tabulation
    /*
    vector<vector<int>>dp(n,vector<int>(x+1,0));
    for(int i = 0; i<=x; i++){
        if(i%num[0]==0){
            dp[0][i] = i/num[0];
        }
        else dp[0][i] = 1e9;    
    }

    for(int ind = 1; ind<n; ind++){
        for(int k = 0; k<=x; k++){

            int notpick = dp[ind-1][k];
            int pick = INT_MAX;
            if(num[ind]<=k) pick = 1 + dp[ind][k-num[ind]];
            dp[ind][k] = min(pick,notpick);
        }
    }

    if(dp[n-1][x]>=1e9){
        return -1;
    }
    return dp[n-1][x];
    */

    //Space Optimization
    // 1D array will not work

    vector<int>prev(x+1,0);

    for(int i = 0; i<=x; i++){
        if(i%num[0]==0){
            prev[i] = i/num[0];
        }
        else prev[i] = 1e9;    
    }

    for(int ind = 1; ind<n; ind++){
        vector<int>curr(x+1,0);
        for(int k =0 ; k<=x; k++){

            int notpick = prev[k];
            int pick = INT_MAX;
            if(num[ind]<=k) pick = 1 + curr[k-num[ind]];
            curr[k] = min(pick,notpick);
        }
        prev = curr;
    }

    if(prev[x]>=1e9){
        return -1;
    }
    return prev[x];

}
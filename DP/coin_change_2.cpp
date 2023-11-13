#include<bits/stdc++.h>
using namespace std;

//Memoization
long helper(int ind, int tar, int v[],int n,vector<vector<long long>>&dp){
    if(tar==0) return 1;
    if(ind==0) return (tar%v[0]==0)? 1 : 0;
    if(dp[ind][tar]!=-1) return dp[ind][tar];
    long long notpick = helper(ind-1,tar,v,n,dp);
    long long pick = 0;
    if(v[ind]<=tar) pick = helper(ind,tar-v[ind],v,n,dp);

    return dp[ind][tar] = (long long)(pick + notpick);
}

long countWaysToMakeChange(int *arr, int n, int value)
{   
    //vector<vector<long long>>dp(n,vector<long long>(value+1,-1));
    //return (long)helper(n-1, value,arr,n,dp);

    //Tabulation
    /*
    vector<vector<long>>dp(n,vector<long>(value+1,0));

    for(int i = 0; i<n; i++) dp[i][0] = 1;
    for(int tar = 1; tar<=value; tar++){
        dp[0][tar] = (tar%arr[0]==0)? 1 : 0;
    }

    for(int ind = 1; ind<n; ind++){
        for(int tar = 1; tar<=value; tar++){
            long notpick = dp[ind-1][tar];
            long pick = 0;
            if(arr[ind]<=tar) pick = dp[ind][tar-arr[ind]];
            dp[ind][tar] = pick + notpick;
        }
    }
    return dp[n-1][value];
    */
    
    //Space Optimization
    vector<long>prev(value+1,0);
    prev[0] = 1;
    for(int tar = 1; tar<=value; tar++) prev[tar] = (tar%arr[0]==0)? 1 : 0;

    for(int ind = 1; ind<n; ind++){
        vector<long>curr(value+1,0);
        curr[0] = 1;
        for(int tar = 1; tar<=value; tar++){
            long notpick = prev[tar];
            long pick = 0;
            if(arr[ind]<=tar) pick = curr[tar-arr[ind]];
            curr[tar] = pick + notpick;
        }
        prev = curr;
    }
    return prev[value];
}
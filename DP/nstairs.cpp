#include <bits/stdc++.h>

//Memoization
int helper(int n,vector<long long>&dp){
    if(n<=1) return 1;
    //if(n==0) return 1;
    if(dp[n]!=-1) return dp[n];
    return dp[n] = (long long)((long long)helper(n-1,dp) + (long long)helper(n-2,dp))%1000000007;
}

int countDistinctWays(int n) {
    //if(n<0) return 0;
    //if(n==0) return 1;
    //return countDistinctWays(n-1) + countDistinctWays(n-2);
    vector<long long>dp(n+1,-1);
    //return helper(n,dp);

    //Tabulation

    dp[0] = 1;
    dp[1] = 1;

    //for(int i = 2; i<=n; i++){
    //    dp[i] = (dp[i-1] + dp[i-2])%1000000007;
    //}
    //return dp[n];

    //Space Optimization

    int prev = 1;
    int prev2 = 1;
    int curr = 1;
    for(int i = 2; i<=n; i++){
        curr = (prev + prev2)%1000000007;
        prev2 = prev;
        prev = curr;
    }
    return curr;


}
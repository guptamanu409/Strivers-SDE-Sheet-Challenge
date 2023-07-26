#include<bits/stdc++.h>
using namespace std;

//Memoization
int helper(int start, vector<int>&height, int k, vector<int>&dp){
    if(start>=height.size()-1) return 0;
    if(dp[start]!=-1) return dp[start];
    int mini = INT_MAX;
    for(int i = 1; i<=k; i++){
        if((start+i)<height.size()){
            int temp = helper(start+i,height,k,dp) + abs(height[start]-height[start+i]);
            //temp = (temp!=INT_MAX)? temp +  : INT_MAX;
            mini = min(mini,temp);
        }
        else break;
    }

    return dp[start] = mini;
}

int minimizeCost(int n, int k, vector<int> &height){
    vector<int>dp(n,-1);
    //return helper(0,height,k,dp);

    //Tabulation

    dp[n-1] = 0;
    
    for(int s = n-2; s>=0; s--){
        int mini = INT_MAX;
        for(int i = 1; i<=k; i++){
            if(s+i<n){
                int temp = dp[s+i] + abs(height[s]-height[s+i]);
                mini = min(mini,temp);
            }
            else break;
        }
        dp[s] = mini;
    }
    return dp[0];
}
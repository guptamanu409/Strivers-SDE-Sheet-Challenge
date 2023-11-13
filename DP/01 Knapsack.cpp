#include <bits/stdc++.h> 
using namespace std;

// 1D array space Optimization


//Memoization
int helper(int ind, int W, vector<int>&v, vector<int>&w,vector<vector<int>>&dp){
	if(W==0) return 0;
	if(ind==0) return (w[0]<=W)? v[0] : 0;
	if(dp[ind][W]!=-1) return dp[ind][W];
	int notpick = helper(ind-1,W,v,w,dp);
	int pick = 0;
	if(w[ind]<=W) pick = v[ind] + helper(ind-1,W-w[ind],v,w,dp);

	return dp[ind][W] = max(pick,notpick);
}

int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
{	
	//vector<vector<int>>dp(n,vector<int>(maxWeight+1,-1));
	//return helper(n-1,maxWeight,value,weight,dp);

	//Tabulation
	/*
	vector<vector<int>>dp(n,vector<int>(maxWeight+1,0));

	for(int i = weight[0]; i<=maxWeight; i++){
		dp[0][i] = value[0];
	}

	for(int ind = 1; ind<n; ind++){
		for(int W = 0; W<=maxWeight; W++){
			int notpick = dp[ind-1][W];
			int pick = 0;
			if(weight[ind]<=W) pick = value[ind] + dp[ind-1][W-weight[ind]];
			dp[ind][W] = max(pick,notpick);
		}
	}

	return dp[n-1][maxWeight];
	*/


	//Space Optimization
	//1D array wala DP 19

	//Go from back

	vector<int>prev(maxWeight+1,0);
	for(int i = weight[0]; i<=maxWeight; i++) prev[i] = value[0];

	for(int ind = 1; ind<n; ind++){
		for(int W = maxWeight; W>=0; W--){ // Go from back
			int notpick = prev[W];
			int pick = 0;
			if(weight[ind]<=W) pick = value[ind] + prev[W-weight[ind]];

			prev[W] = max(pick,notpick);
		}
	}
	return prev[maxWeight];
}
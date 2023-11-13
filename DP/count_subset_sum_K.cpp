#include<bits/stdc++.h>
using namespace std;
//Memoization
int helper(int ind, int tar, vector<int>&v,vector<vector<int>>&dp){
	if(tar==0) return 1;
	if(ind==0) return (v[0]==tar)? 1 : 0;
	if(dp[ind][tar]!=-1) return dp[ind][tar];

	int notpick = helper(ind-1,tar,v,dp);
	int pick = 0;
	if(v[ind]<=tar) pick = helper(ind-1,tar-v[ind],v,dp);

	return dp[ind][tar] = (notpick+pick)%1000000007;
}

// if k == 0 then our logic will not work so in order to do that
/*
int f(ind, k){
	//Ye base case hoga
	if(ind==0){
		if(k==0 && v[0]==0) return 2;
		if(k==0 || v[0]==k) return 1;
		return 0;
	}
}

isika tabulation
	dp[n][k+1] = {0};
	for(int i = 0; i<n; i++) dp[i][0] = 1;
	if(k==0 && v[0]==0) dp[0][0] = 2;
	if(v[0]!=0 && v[0]<=k) dp[0][v[0]] = 1;
*/

int findWays(vector<int>& arr, int k)
{	
	int n = arr.size();
	//vector<vector<int>>dp(n,vector<int>(k+1,-1));
	//return helper(n-1, k, arr,dp);

	//Tabulation
	/*
	vector<vector<int>>dp(n,vector<int>(k+1,0));

	for(int i = 0; i<n; i++) dp[i][0] = 1;

	if(arr[0]<=k) dp[0][arr[0]] = 1;

	for(int ind = 1; ind<n; ind++){
		for(int tar = 1; tar<=k; tar++){
			int notpick = dp[ind-1][tar];
			int pick = 0;
			if(arr[ind]<=tar) pick = dp[ind-1][tar-arr[ind]];
			dp[ind][tar] = (pick+notpick)%1000000007;
		}
	}

	return dp[n-1][k];
	*/
	
	//Space Optimization
	vector<int>prev(k+1,0);
	prev[0] = 1;
	if(arr[0]<=k) prev[arr[0]] = 1;

	for(int ind = 1; ind<n; ind++){
		vector<int>curr(k+1,0);
		curr[0] = 1;
		for(int tar = 1; tar<=k; tar++){
			int notpick = prev[tar];
			int pick = 0;
			if(arr[ind]<=tar) pick = prev[tar-arr[ind]];
			curr[tar] = (pick+notpick)%1000000007;
		}
		prev = curr;
	}

	return prev[k];

}

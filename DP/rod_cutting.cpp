#include<bits/stdc++.h>
using namespace std;

//Memoization
int helper(int ind, int k, vector<int>&v, vector<vector<int>>&dp){
	if(k==0) return 0;
	if(ind==0){
		return v[0] * k;
	}
	if(dp[ind][k]!=-1) return dp[ind][k];
	int notpick = helper(ind-1,k,v,dp);
	int pick = 0;
	if(ind+1<=k) pick = v[ind] + helper(ind,k-(ind+1),v,dp);

	return dp[ind][k] = max(notpick,pick);
}

int cutRod(vector<int> &price, int n)
{	
	//int s = price.size();
	//for(auto it:price) cout<<it<<" ";
	//cout<<endl<<endl;
	//cout<<price[0] << " " << price[1]<<endl;
	//vector<vector<int>>dp(n,vector<int>(n+1,-1));
	//return helper(n-1,n,price,dp);

	//Tabulation
	/*
	vector<vector<int>>dp(n,vector<int>(n+1,0));
	for(int i = 0; i<=n; i++) dp[0][i] = price[0]*i;

	for(int ind = 1; ind<n; ind++){
		for(int k = 1; k<=n; k++){
			int notpick = dp[ind-1][k];
			int pick = 0;
			if(ind+1<=k) pick = price[ind] + dp[ind][k-(ind+1)];
			dp[ind][k] = max(pick,notpick);
		}
	}
	return dp[n-1][n];
	*/
	//Space Optimization
	vector<int>prev(n+1,0);
	for(int i = 0; i<=n; i++) prev[i] = price[0]*i;

	for(int ind = 1; ind<n; ind++){
		vector<int>curr(n+1,0);
		for(int k = 1; k<=n; k++){
			int notpick = prev[k];
			int pick = 0;
			if(ind+1<=k) pick = price[ind] + curr[k-(ind+1)];
			curr[k] = max(pick,notpick);
		}
		prev = curr;
	}
	return prev[n];

}

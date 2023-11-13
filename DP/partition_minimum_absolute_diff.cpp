#include<bits/stdc++.h>
using namespace std;
// Memoization
bool helper(int ind, int tar, vector<int>&v,vector<vector<int>>&dp){
	if(tar==0) return true;
	if(ind==0) return v[0]==tar;
	if(dp[ind][tar]!=-1) return dp[ind][tar];
	bool notpick = helper(ind-1,tar,v,dp);
	bool pick = false;
	if(v[ind]<=tar) pick = helper(ind-1,tar-v[ind],v,dp);

	return dp[ind][tar] = pick || notpick;
}

int minSubsetSumDifference(vector<int>& arr, int n)
{
	int sum = accumulate(arr.begin(),arr.end(),0);

	//We are finding all possible subset of s1 from 0 to sum/2
	int half = sum/2;
	// vector<vector<int>>dp(n,vector<int>(half+1,-1));
	// int mini =  INT_MAX;
	// for(int s1 = 0; s1<=half; s1++){
	// 	if(helper(n-1,s1,arr,dp)){
	// 		int s2 = sum-s1;
	// 		mini = min(mini,abs(s2-s1));
	// 	}
	// }
	// return mini;

	//Tabulation
	/*
	vector<vector<bool>>dp(n,vector<bool>(half+1,false));
	for(int i = 0; i<n; i++) dp[i][0] = true;
	if(arr[0]<=half) dp[0][arr[0]] = true;

	for(int ind = 1; ind<n; ind++){
		for(int tar = 1; tar<=half; tar++){
			bool notpick = dp[ind-1][tar];
			bool pick = false;
			if(arr[ind]<=tar) pick = dp[ind-1][tar-arr[ind]];
			dp[ind][tar] = notpick || pick;
		}
	}

	//Last row showing whether a value is possible or not
	int mini =  INT_MAX;
	for(int s1 = 0; s1<=half; s1++){
		if(dp[n-1][s1]){
			int s2 = sum-s1;
			mini = min(mini,abs(s2-s1));
		}
	}
	return mini;
	*/
	
	//Space Optimization
	vector<bool>prev(half+1,false);
	prev[0] = true;
	if(arr[0]<=half) prev[arr[0]] = true;

	for(int ind = 1; ind<n; ind++){
		vector<bool>curr(half+1,false);
		curr[0] = true;
		for(int tar = 1; tar<=half; tar++){
			bool notpick = prev[tar];
			bool pick = false;
			if(arr[ind]<=tar) pick = prev[tar-arr[ind]];
			curr[tar] = notpick || pick;
		}
		prev = curr;
	}

	//Evaluated all possible combinations of s1
	int mini = INT_MAX;

	for(int s1 = 0; s1<=half; s1++){
		if(prev[s1]){
			int s2 = sum-s1;
			mini = min(mini,abs(s1-s2));
		}
	}
	return mini;
}

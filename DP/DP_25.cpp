#include<bits/stdc++.h>
using namespace std;

//Memoization
/*
int helper(int ind1, int ind2, string &s, string &t, vector<vector<int>>&dp){
	if(ind1<0 || ind2<0) return 0;

	if(s[ind1]==t[ind2]){
		return dp[ind1][ind2] = 1 + helper(ind1-1,ind2-1,s,t,dp);
	}
	if(dp[ind1][ind2]!=-1) return dp[ind1][ind2];
	return dp[ind1][ind2] = max(helper(ind1-1,ind2,s,t,dp),helper(ind1,ind2-1,s,t,dp));
}
*/

//Moving right
int helper(int ind1, int ind2, string &s, string &t, vector<vector<int>>&dp){
	if(ind1==0 || ind2==0) return 0; // yaha change hua

	if(s[ind1-1]==t[ind2-1]){ //yaha change hua
		return dp[ind1][ind2] = 1 + helper(ind1-1,ind2-1,s,t,dp);
	}
	if(dp[ind1][ind2]!=-1) return dp[ind1][ind2];
	return dp[ind1][ind2] = max(helper(ind1-1,ind2,s,t,dp),helper(ind1,ind2-1,s,t,dp));
}

int lcs(string s, string t)
{	
	int n = s.size();
	int m = t.size();
	if(n==0 || m==0) return 0;
	//vector<vector<int>>dp(n,vector<int>(m,-1));
	//return helper(n-1,m-1,s,t,dp);

	//Moving right
	//vector<vector<int>>dp(n+1,vector<int>(m+1,-1)); // yaha change hua
	//return helper(n,m,s,t,dp); // yaha change hua

	//Tabulation
	/*
	vector<vector<int>>dp(n+1,vector<int>(m+1,0));

	//When ind1==0 means 1st row, all columns will be 0
	for(int ind2=0; ind2<=m; ind2++) dp[0][ind2] = 0;

	//When ind2==0 means for the 1 col, all the rows will be 0
	for(int ind1 = 0; ind1<=n; ind1++) dp[ind1][0] = 0;

	for(int ind1 = 1; ind1<=n; ind1++){
		for(int ind2 = 1; ind2<=m; ind2++){
			if(s[ind1-1]==t[ind2-1]) dp[ind1][ind2] = 1 + dp[ind1-1][ind2-1];
			else dp[ind1][ind2] = max(dp[ind1-1][ind2],dp[ind1][ind2-1]);
		}
	}
	return dp[n][m];
	*/

	//Space Optimization
	vector<int>prev(m+1,0);

	//ind1==0    ind2==0
	// Rows        Cols

	//for the 1st row, all the value of col will be 0
	for(int ind2=0; ind2<=m; ind2++) prev[ind2] = 0;

	//for the 1st col, all the values of row will be 0
	// prev and curr by default initialized by 0 so handled

	for(int ind1 = 1; ind1<=n; ind1++){
		vector<int>curr(m+1,0);
		for(int ind2=1; ind2<=m; ind2++){
			if(s[ind1-1]==t[ind2-1]) curr[ind2] = 1 + prev[ind2-1];
			else curr[ind2] = max(prev[ind2],curr[ind2-1]);
		}
		prev = curr;
	}
	return prev[m];


}
#include <bits/stdc++.h> 
using namespace std;

int helper(int row, int col, vector<vector<int>>&dp,int i = 0, int j = 0){
	if(i==row-1 && j == col-1) return 1;
	if(i>=row || j>=col) return 0;
	if(dp[i][j]!=-1) return dp[i][j];

	return dp[i][j] = helper(row,col,dp,i+1,j) + helper(row,col,dp,i,j+1);
}

int uniquePaths(int m, int n) {
	
	//vector<vector<int>>dp(m,vector<int>(n,-1));
	//return helper(m,n, dp);

	int total_place = (m-1) + (n-1);
	int c = min(m-1,n-1);
	int ans = 1;
	for(int i = 0; i<c; i++){
		ans = ans*(total_place-i);
		ans = ans/(i+1);
	}
	return ans;

}
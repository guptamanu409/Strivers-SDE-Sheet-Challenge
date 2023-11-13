#include<bits/stdc++.h>
using namespace std;

// Normal recursive solution
/*
//           n-1       m-1
int lcs(int ind1, int ind2, string &s, string &t){
	if(ind1<0 || ind2<0) return 0;
	
//		  n-1      m-1
	if(s[ind1]==t[ind2]) return 1 + lcs(ind1-1,ind2-1,s,t);

	return max(lcs(ind1-1,ind2,s,t),lcs(ind1, ind2-1,s,t));
}
*/


//Moving right
/*
//           n         m
int lcs(int ind1, int ind2, string &s, string &t){
	if(ind1==0 || ind2==0) return 0;

//        n           m
	if(s[ind1-1]==t[ind2-1]) return 1 + lcs(ind1-1, ind2-1, s,t);

	return max(lcs(ind1-1,ind2,s,t), lcs(ind1,ind2-1,s,t));
}
*/
string findLCS(int n, int m,string &s, string &t){

	//Write Tabulated Code

	// Do Backtracking and get the answer

	// If maximum of up and left same that means multiple answers exist	

	//moving right
	vector<vector<int>>dp(n+1,vector<int>(m+1,0));

	//ind1==0 means 1st row, all the col will be 0
	for(int ind2=0; ind2<=m; ind2++) dp[0][ind2] = 0;

	//ind2==0 For 1st col, every row will be 0
	for(int ind1=0; ind1<=n; ind1++) dp[ind1][0] = 0;

	for(int ind1 = 1; ind1<=n; ind1++){
		for(int ind2=1; ind2<=m; ind2++){
			if(s[ind1-1]==t[ind2-1]) dp[ind1][ind2] = 1 + dp[ind1-1][ind2-1];
			else dp[ind1][ind2] = max(dp[ind1-1][ind2], dp[ind1][ind2-1]);
		}
	}

	// dp[n][m] will have the longest common subsequence length

	string ans;
	int leng = dp[n][m];
	for(int i = 0; i<leng; i++) ans+="$";
	int index = leng-1;

	int ind1 = n;
	int ind2 = m;

	while(ind1>0 && ind2>0){ // For us 0 is -1 because we moved right
		if(s[ind1-1]==t[ind2-1]){
			ans[index] = s[ind1-1];
			index--;
			ind1--;
			ind2--;
		}

		else if(dp[ind1-1][ind2]>dp[ind1][ind2-1]){
			ind1--;
		}
		else ind2--;
	}
	return ans;

}
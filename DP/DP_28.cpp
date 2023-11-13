#include <bits/stdc++.h> 
using namespace std;

// Normal recursive lcs (longest common subsequence)
/*           n-1       m-1
int lcs(int ind1, int ind2, string &s, string &t){
    if(ind1<0 || ind2<0) return 0;

    if(s[ind1]==t[ind2]) return 1 + lcs(ind1-1,ind2-1,s,t);

    return max(lcs(ind1-1,ind2,s,t), lcs(ind1,ind2-1,s,t));
}
*/

// Facing problem with tabulation so we shifted right
// Shifting right
/*           n         m
int lcs(int ind1, ind ind2, string &s, string &t){
    if(ind1==0 || ind2==0) return 0;

//    explicitly reduced it with -1 cause earlier mapping was to n-1 & m-1
    if(s[ind1-1]==t[ind2-1]) return 1 + lcs(ind1-1,ind2-1,s,t);

    return max(lcs(ind1-1,ind2,s,t), lcs(ind1,ind2-1,s,t));
}
*/
int longestPalindromeSubsequence(string &s)
{
    // Using longest common subsequence to do this
    // Palindrome is just reverse of a string
    // Second string -> Original reverse
    // ab uspar bas LCS lagado

    string t = s;
    reverse(t.begin(),t.end());
    int n = s.size();

    //Before moving right
    //vector<vector<int>>dp(n,vector<int>(n,0));
    
    //Moving right
    vector<vector<int>>dp(n+1,vector<int>(n+1,0));

    //ind1==0 means For 1st row, all the cols will be 0
    for(int ind2=0; ind2<=n; ind2++) dp[0][ind2] = 0;

    //ind2==0 means For 1st col, every row will be 0
    for(int ind1 = 0; ind1<=n; ind1++) dp[ind1][0] = 0;

    for(int ind1 = 1; ind1<=n; ind1++){
        for(int ind2 = 1; ind2<=n; ind2++){
            //Moved right so explicitly reduce
            if(s[ind1-1]==t[ind2-1]) dp[ind1][ind2] = 1 + dp[ind1-1][ind2-1];
            else dp[ind1][ind2] = max(dp[ind1-1][ind2], dp[ind1][ind2-1]);
        }
    }

    return dp[n][n];

}
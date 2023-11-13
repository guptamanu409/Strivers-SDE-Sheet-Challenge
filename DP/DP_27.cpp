#include<bits/stdc++.h>
using namespace std;

// longest common subsequence
/*             n-1       m-1
int lcseq(int ind1, int ind2, string &s, string &t){ // Normal recurrence
    if(ind1<0 || ind2<0) return 0;

    if(s[ind1]==t[ind2]) return 1 + lcseq(ind1-1,ind2-1,s,t);

    return max(lcseq(ind1-1, ind2,s,t), lcseq(ind1, ind2-1,s,t)); // Subsequence
}
*/

// Moving right
/*             n         m
int lcseq(int ind1, int ind2, string &s, string &t){
    if(ind1==0 || ind2==0) return 0;

    if(s[ind1-1]==t[ind2-1]) return 1 + lcseq(ind-1, ind2-1,s,t);

    return max(lcseq(ind1-1,ind2,s,t), lcseq(ind1, ind2-1, s,t)); // Subsequence
}
*/

// We don't want the subsequence so will omit writing this
// instead we will just write 0 so that it's contigous and work perfectly

int lcs(string &s, string &t){
    
    //tabuation
    int n = s.size();
    int m = t.size();
    // Moving right
    vector<vector<int>>dp(n+1,vector<int>(m+1,0));

    //ind1==0 means 1st row every col will be 0
    for(int ind2 = 0; ind2<=m; ind2++) dp[0][ind2] = 0;

    //ind2==0 means 1st col of every row will be 0
    for(int ind1=0; ind1<=n; ind1++) dp[ind1][0] = 0;
    int ans = INT_MIN;
    for(int ind1 = 1; ind1<=n; ind1++){
        for(int ind2=1; ind2<=m; ind2++){
            if(s[ind1-1]==t[ind2-1]){
                dp[ind1][ind2] = 1 + dp[ind1-1][ind2-1];
                ans = max(ans,dp[ind1][ind2]);
            }
            else dp[ind1][ind2] = 0;
        }
    }

    return ans;

}
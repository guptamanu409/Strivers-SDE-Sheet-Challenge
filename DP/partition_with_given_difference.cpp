#include <bits/stdc++.h> 
using namespace std;
int modu = int(1e9+7);

//Memoization
int helper(int ind, int tar, vector<int>&v, vector<vector<int>>&dp){
    //there can be tar == 0
    if(ind==0){
        if(tar==0 && v[0]==0) return 2; // pick and notpick are both valid
        if(tar==0 || v[0]==tar) return 1;
        return 0;
    }
    if(dp[ind][tar]!=-1) return dp[ind][tar];

    int notpick = helper(ind-1,tar,v,dp);
    int pick = 0;
    if(v[ind]<=tar) pick = helper(ind-1,tar-v[ind],v,dp);
    return dp[ind][tar] = (notpick + pick)%modu;
}

int countPartitions(int n, int d, vector<int> &arr) {

    int sum = accumulate(arr.begin(),arr.end(),0);
    
    //DP 15,16,

    //sum - s2 = s1
    //s1 - s2 == D (s1>=s2)

    //sum - s2 - s2 = D
    //sum - D = s2 * 2;
    //(sum - D)/2 = s2;

    //find count of all subsets which makes s2
    //remember to handle 0 also as sum - D can be 0
    
    //int k = (sum-d)/2;
    //if(sum-d<0 || (sum-d)%2) return 0;
    //vector<vector<int>>dp(n,vector<int>(k+1,-1));
    //return helper(n-1,k,arr,dp);

    //Tabulation
    /*
    if(sum-d<0 || (sum-d)%2) return 0;
    int k = (sum-d)/2;
    vector<vector<int>>dp(n,vector<int>(k+1,0));

    
    if(arr[0]==0) dp[0][0] = 2;
    else dp[0][0] =1;
    if(arr[0]!=0 && arr[0]<=k) dp[0][arr[0]] = 1;

    for(int ind = 1; ind<n; ind++){
        for(int tar = 0; tar<=k; tar++){ //tar starting from 0
            int notpick = dp[ind-1][tar];
            int pick = 0;
            if(arr[ind]<=tar) pick = dp[ind-1][tar-arr[ind]];
            dp[ind][tar] = (pick + notpick)%modu;
        }
    }

    return dp[n-1][k];
    */


    //Space Optimization
    if(sum-d<0 || (sum-d)%2) return 0;
    int k = (sum-d)/2;

    vector<int>prev(k+1,0);
    if(arr[0]==0) prev[0] = 2;
    else prev[0] = 1;
    if(arr[0]!=0 && arr[0]<=k) prev[arr[0]] = 1;

    for(int ind = 1; ind<n; ind++){
        vector<int>cur(k+1,0);
        for(int tar = 0; tar<=k; tar++){ //tar starting from 0
            int notpick = prev[tar];
            int pick = 0;
            if(arr[ind]<=tar) pick = prev[tar-arr[ind]];
            cur[tar] = (pick+notpick)%modu;
        }
        prev = cur;
    }
    return prev[k];


}



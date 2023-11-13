#include <bits/stdc++.h> 
using namespace std;
int helper(int ind, int tar, vector<int>&v){
    if(ind==0){
        if(v[0]==0 && tar==0) return 2; //Both pick and notpick valid hai
        if(tar==0 || v[0]==tar) return 1;
        return 0;
    }

    int notpick = helper(ind-1,tar,v);
    int pick = 0;
    if(v[ind]<=tar) pick = helper(ind-1,tar-v[ind],v);

    return notpick + pick;
}

int targetSum(int n, int target, vector<int>& arr) {
    
    int sum = accumulate(arr.begin(),arr.end(),0);
    cout<<sum<<" Sum hai "<<endl;
    int k = (sum-target)/2;
    cout<<k<<" K hai "<<endl;

    if(sum-target<0 || (sum-target)&1) return 0;

    //return helper(n-1,k,arr);

    //Tabulation
    /*
    vector<vector<int>>dp(n,vector<int>(k+1,0));
    if(arr[0]==0) dp[0][0] = 2;
    else dp[0][0] = 1;
    if(arr[0]!=0 && arr[0]<=k) dp[0][arr[0]] = 1;
    
    for(int ind = 1; ind<n; ind++){
        for(int tar = 0; tar<=k; tar++){
            int notpick = dp[ind-1][tar];
            int pick = 0;
            if(arr[ind]<=tar) pick = dp[ind-1][tar-arr[ind]];
            dp[ind][tar] = notpick + pick;
        }
    }
    return dp[n-1][k];
    */

    //Space Optimization

    // prev and curr se ho jaega
    //trying 1 array optimization

    vector<int>prev(k+1,0);
    if(arr[0]==0) prev[0] = 2;
    else prev[0] = 1;
    if(arr[0]!=0 && arr[0]<=k) prev[arr[0]] = 1;

    for(int ind = 1; ind<n; ind++){
        for(int tar = k; tar>=0; tar--){
            int notpick = prev[tar];
            int pick = 0;
            if(arr[ind]<=tar) pick = prev[tar-arr[ind]];
            prev[tar] = pick + notpick;
        }
    }
    return prev[k];
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; 
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int tar;
        cin>>tar;
        vector<int>v(n,0);
        for(auto &it:v) cin>>it;
        
        cout<<targetSum(n,tar,v)<<endl;
    }

    return 0;
}

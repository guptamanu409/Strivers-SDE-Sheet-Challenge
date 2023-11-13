#include<bits/stdc++.h>
using namespace std;


bool helper(int index, vector<long long>&v, long long tar, vector<vector<long long>>&dp){
    if(tar==0) return true;
    if(index==0) return (tar==v[0]);
    if(dp[index][tar]!=-1) return dp[index][tar];
    bool ans = false;
    if(tar>=v[index]){
        ans = helper(index-1, v, tar-v[index],dp);
    }
    if(ans)  return dp[index][tar] = true;

    ans = helper(index-1,v,tar, dp);
    return dp[index][tar] = ans;
}


int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);


    int n;
    cin>>n;

    vector<long long>v(n,0);
    long double mini = INT_MAX, sum = 0;
    for(int i = 0; i<n; i++){
        //cin>>it;
        // sum+= (long double)it;
        // mini = min(mini, (long double)it);
        cin>>v[i];
        sum+= (long double)v[i];
        mini = min(mini, (long double)v[i]);

    }

    if(n==1){
        cout<<v[0]<<endl;
        return 0;
    }

    long double half = (long double)(sum/2);
    // Recursion and Memoization
    /*
    long long ans = INT_MAX;
    vector<vector<long long>>dp(n,vector<long long>(half+1,-1));
    for(long long i = mini; i<=half; i++){
        if(helper(n-1,v,i,dp)){
            ans = min(ans,(sum-i)-i);
        }
    }

    cout<<ans<<endl;
    */
    
    
    //Tabulation
    /*
    vector<vector<bool>>dp(n,vector<bool>(half+1,false));
    long long ans = INT_MAX;
    for(int i = 0; i<n; i++) dp[i][0] = true;

    if(half>=v[0]) dp[0][v[0]] = true;

    for(long long index = 1; index<n; index++){
        for(long long tar = 1; tar<=half; tar++){
            bool s1 = false, s2 = false;
            if(tar>=v[index]){
                s1 = dp[index-1][tar-v[index]];
            }
            //if(ans)  return dp[index][tar] = true;

            s2 = dp[index-1][tar];
            dp[index][tar] = s1||s2;
        }
    }

    for(long long i = 1; i<=half; i++){
        if(dp[n-1][i]) ans = min(ans,(sum-i)-i);
    }

    cout<<ans<<endl;
    */

    //Space Optimization
    /*
    vector<bool>dp(half+1,false);
    long long ans = INT_MAX;
    dp[0] = true;

    if(half>=v[0]) dp[v[0]] = true;

    for(long long index = 1; index<n; index++){
        vector<bool>cur(half+1,false);
        cur[0] = true;
        for(long long tar = 1; tar<=half; tar++){
            bool s1 = false, s2 = false;
            if(tar>=v[index]){
                s1 = dp[tar-v[index]];
            }
            //if(ans)  return dp[index][tar] = true;

            s2 = dp[tar];
            cur[tar] = s1||s2;
        }
        dp = cur;
    }

    for(long long i = 1; i<=half; i++){
        if(dp[i]) ans = min(ans,(sum-i)-i);
    }

    cout<<ans<<endl;
    */

    // 1D Array Optimization

    vector<long double>dp(half+1,false);
    long double ans = INT_MAX;
    dp[0] = true;

    if(half>=v[0]) dp[v[0]] = true;
    //long double maxi = INT_MIN;

    for(int index = 1; index<n; index++){
        //vector<bool>cur(half+1,false);
        //cur[0] = true;
        for(long double tar = half; tar>=1; tar--){
            bool s1 = false, s2 = false;
            if(tar>=v[index]){
                s1 = dp[(long double)(tar-v[index])];
            }
            //if(ans)  return dp[index][tar] = true;

            s2 = dp[tar];
            dp[(long double)tar] = s1||s2;
            // if(dp[tar]){
            //     maxi = max(maxi,tar);
            // }
        }
    }

    
    for(long double i = half; i>=1; i--){
        if(dp[i]){
            ans = min(ans,(long double)((sum-i)-i));
            //break;
        }
    }

    cout<<(int)ans<<endl;
    //cout<<(int)((sum-maxi)-maxi);



}
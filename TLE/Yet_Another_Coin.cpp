#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
vector<long long>dp((int)1e6+1,-1);
long long compu(long long n){
    if(n==0) return 0;
    // if(n%i==0) return n/i;
    if(dp[n]!=-1) return dp[n];
    long long ans = INT_MAX;
    int j = 1,k = 2;
    while(j<=15){
        if(j>n) break;
        else{
            // long long d = n/j;
            // long long t = (long long)(compu(n%j) + d);
            long long t = (long long)(compu(n-j) + 1);
            ans = min(ans,t);
        }
        j+=k;
        k++;
    }

    return dp[n] = ans;
}

long long ompu(long long n){
    if(n==0) return 0;
    // if(n%i==0) return n/i;
    if(dp[n]!=-1) return dp[n];
    long long ans = INT_MAX;
    int j = 1,k = 2;
    while(j<=15){
        if(j>n) break;
        else{
            // long long d = n/j;
            // long long t = (long long)(compu(n%j) + d);
            long long t = (long long)(compu(n-j) + 1);
            ans = min(ans,t);
        }
        j+=k;
        k++;
    }

    return ans;
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);

    // compu(1e6);

    int t;
    cin>>t;

    while(t--){

        long long n;
        cin>>n;
        // if(n>1e7) cout<<ompu(n)<<endl;
        // cout<<dp[n]<<endl;
        cout<<compu(n)<<endl;
    }

    return 0;
}
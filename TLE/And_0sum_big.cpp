#include<bits/stdc++.h>
using namespace std;

int mod = (int)(1e9+7);

long long helper(long long a, long long b){

    long long ans = 1;
    while(b){
        if(b&1){
            ans = ((ans%mod)*(a%mod))%mod;
        }
        a = ((a%mod)*(a%mod))%mod;
        b = b>>1;
    }

    return ans;
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){


        long long n,k;
        cin>>n>>k;
        cout<<helper(n,k)<<'\n';

    }


    return 0;
}
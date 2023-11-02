#include<bits/stdc++.h>
using namespace std;


int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    //n == 3 --> 2^3 === 8

    //cout<<(long long)(1<<1000000)%(long long)(1e9+7);

    //cout<<(long long)pow(2,1000000)%(long long)(1e9+7);

    long long ans = 1, x = 2, n;
    cin>>n;
    int mod = (int)1e9+7;
    while(n>0){
        if(n&1) ans = (long long)(ans*x)%mod;
        n = n>>1;
        x = (long long)(x*x)%mod;
    }
    cout<<ans;

    return 0;
}
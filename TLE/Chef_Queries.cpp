#include<bits/stdc++.h>
using namespace std;

const long long mod = (long long)(1LL<<32);
// const long long nn = 1e9;
bitset<mod>bits; // Think why we done this..... use paper and pen

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);


    int q;
    long long s,a,b;
    cin>>q>>s>>a>>b;
    long long sum = 0;
    while(q--){
        if(s&1){
            long long val = (long long)(s>>1);
            if(bits[val]==0){
                bits[val] = 1;
                sum+=val;
            }
        }
        else{
            long long val = (long long)(s>>1);
            if(bits[val]){
                sum-=val;
                bits[val] = 0;
            }
        }
        s = (long long)((long long)(s*a)%mod);
        // s = (long long)((long long)((s*a)+b)%mod);
        s+=b;
        s = s%mod;
    }
    cout<<sum<<'\n';


    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n,p;
    cin>>n>>p;

    if(n==1)cout<<p<<'\n';
    else if((n>=p) || (n>41))cout<<1<<'\n';
    else{

        long long ans = 1;
        for(long long i = 2; i<=1e6; i++){
            long long gcd = (long long)(pow(i,n));
            if(gcd>p)break;
            else if(p%gcd==0) ans = i;
        }
        cout<<ans<<'\n';
    }


    return 0;
}
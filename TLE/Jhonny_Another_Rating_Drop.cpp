#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){

        long long n;
        cin>>n;

        long long ans = 0;

        while(n>0){
            ans+=n;
            n = n>>1;
        }

        cout<<ans<<'\n';
    }

    return 0;
}
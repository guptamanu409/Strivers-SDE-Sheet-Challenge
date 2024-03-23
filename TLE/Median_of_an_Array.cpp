#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        vector<long long>v(n+1,0);

        // for(auto &it:v) cin>>it;

        for(int i = 1; i<=n; i++){
            cin>>v[i];
        }

        sort(v.begin(),v.end());

        long long median = (n&1)? (n+2)/2 : n/2;

        long long ans = 1;
        for(int i = median; i<n; i++){
            if(v[i]==v[i+1]) ans++;
            else break;
        }
        cout<<ans<<'\n';
    }

    return 0;
}
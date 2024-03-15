#include<bits/stdc++.h>
using namespace std;

#define endl '\n'

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);

    int t;
    cin>>t;

    while(t--){

        int n,m,k;
        cin>>n>>m>>k;

        vector<int>a(n,0);

        for(auto &it:a) cin>>it;

        vector<int>b(m,0);
        for(auto &it:b) cin>>it;
        long long ans = 0;
        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                long long sum = 0;
                sum+=a[i];
                sum+=b[j];
                if(sum<=k) ans++;
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}
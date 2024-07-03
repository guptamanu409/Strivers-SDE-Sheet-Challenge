#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        vector<int>v(n,0);

        for(auto &it:v) cin>>it;

        vector<int>vis(31,0);

        for(int i = 30; i>=0; i--){
            int cnt = 0;

            for(auto &it:v){
                if(it&(1<<i)) cnt++;
            }

            vis[i] = n-cnt;
        }

        int ans = 0;
        for(int i = 30; i>=0; i--){
            if(vis[i]<=k){
                ans = (ans|(1<<i));
                k-=vis[i];
            }
        }

        cout<<ans<<'\n';
    }

    

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){


        int n,k;
        cin>>n>>k;

        vector<int>v(n,0);

        for(auto &it:v) cin>>it;

        vector<int>bit(31,0);

        for(int i = 0; i<n; i++){
            int tt = v[i];
            int cnt = 0;
            while(tt){
                if(tt&1){
                    bit[cnt]++;
                }
                cnt++;
                tt = tt>>1;
            }
        }

        long long ans = 0;
        for(auto &it:bit){
            ans+= (it/k);
            ans+= ((it%k)!=0);
        }
        cout<<ans<<'\n';
    }



    return 0;
}
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
        vector<int>v(n,0);
        map<int,int>mp;
        for(auto &it:v){
            cin>>it;
            mp[it]++;
        }

        int ans = 0;
        for(auto &it:mp){
            ans+=(it.second/3);
        }
        cout<<ans<<'\n';
    }



    return 0;
}
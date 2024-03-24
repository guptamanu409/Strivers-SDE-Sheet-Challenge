#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    vector<long long>v(n,0);
    map<long long, long long>mp;
    for(auto &it:v){
        cin>>it;
        mp[it]++;
    }
    
    // sort(v.begin(),v.end());
    vector<pair<long long, long long>>vv;

    for(auto &it:mp){
        vv.push_back({it.first,it.second});
    }

    // int cnt = 1;
    n = vv.size();
    for(int i = 0; i<n-1; i++){
        if(vv[i].second <= vv[i+1].second) vv[i].second = 0;
        else vv[i+1].second+= (vv[i].second-vv[i+1].second);
    }
    
    cout<<vv[n-1].second;

    // int cnt = 1;

    // for(int i = 0; i<n-1; i++){
    //     if(v[i]<v[i+1])continue;
    //     else cnt++;
    // }

    // cout<<cnt<<'\n';

    return 0;
}
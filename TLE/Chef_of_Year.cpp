#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,m;
    cin>>n>>m;


    map<string,string>mp;

    for(int i = 0; i<n; i++){
        string x,y;
        cin>>x>>y;
        mp.insert({x,y});
    }

    // for(auto &it:mp)cout<<it.first<<" "<<it.second;

    map<string,int>cnc;
    map<string,int>ccc;

    int cn = 0, cc = 0;

    for(int i = 0; i<m; i++){
        string x;
        cin>>x;

        cnc[x]++;
        cn = max(cn,cnc[x]);

        ccc[mp[x]]++;
        cc = max(cc,ccc[mp[x]]);
    }

    set<string>chn,ccou;

    for(auto &it:cnc){
        if(it.second==cn) chn.insert(it.first);
    }

    for(auto &it:ccc){
        if(it.second==cc) ccou.insert(it.first);
    }

    cout<<*ccou.begin()<<'\n'<<*chn.begin()<<'\n';
    return 0;
}
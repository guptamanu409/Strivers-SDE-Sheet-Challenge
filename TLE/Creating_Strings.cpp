#include<bits/stdc++.h>
using namespace std;

void solve(int ind, int n, string &s, set<string>&mp){
    if(ind>=n){
        mp.insert(s);
        return;
    }

    for(int i = ind; i<n; i++){
        swap(s[i],s[ind]);
        solve(ind+1,n,s,mp);
        swap(s[ind],s[i]);
    }

    return;
}

int main(){

    string s;
    cin>>s;

    set<string>mp;
    solve(0,s.size(),s,mp);
    cout<<mp.size()<<'\n';
    for(auto &it:mp)cout<<it<<'\n';



    return 0;
}
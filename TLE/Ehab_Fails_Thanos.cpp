#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    vector<int>v(2*n,0);
    unordered_set<int>mp;
    for(auto &it:v){
        cin>>it;
        mp.insert(it);
    }
    if(mp.size()==1) cout<<-1;
    else{
        sort(v.begin(),v.end());
        for(auto &it:v) cout<<it<<" ";
    }

    return 0;
}
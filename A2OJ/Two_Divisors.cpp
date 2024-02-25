#include<bits/stdc++.h>
using namespace std;

#define m (long long)1e9

map<pair<long long,long long>, long long>mp;
map<long long, vector<long long>>v;


void pre(){
    long long i = 1;
    for(; i<=m; i++){
        for(long long j = (long long)(i+i); j<=m; j+=i){
            if(v[j].size()!=0){
                //mp[{v[j].back(),i}] = j;
                mp.insert({v[j].back(),i},j);
                v[j].push_back(i);
            }
            else v[j].push_back(i);
        }
    }
}

int main(){

    // ios::sync_with_stdio(false);
    // cin.tie(NULL);
    pre();
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);

    int t;
    cin>>t;

    while(t--){
        long long a,b;
        cin>>a>>b;
        cout<<mp[{a,b}]<<'\n';

    }

    return 0;
}
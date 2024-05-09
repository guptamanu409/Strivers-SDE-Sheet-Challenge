#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,x;
    cin>>n>>x;

    vector<int>v(n,0);
    map<int,vector<int>>mp;
    for(int i = 0; i<n; i++){
        cin>>v[i];
        mp[v[i]].push_back(i+1);

        // cin>>it;
    }

    if(n==1) cout<<"IMPOSSIBLE"<<'\n';
    else{
        sort(v.begin(),v.end());
        long long rem;
        int pos;
        bool check = false;
        int i = 0;
        for(; i<n; i++){
            rem = x-v[i];
            if((rem>=1) && (binary_search(v.begin(),v.end(),rem))){
                pos = lower_bound(v.begin(),v.end(),rem) - v.begin();
                if(pos!=i) {
                    // cout<<i<<" "<<pos<<'\n';
                    check = true;
                    break;
                }
            }
        }
        if(!check) cout<<"IMPOSSIBLE"<<'\n';
        else{
            if(rem==v[i]) cout<<mp[rem][0]<<" "<<mp[rem][1]<<'\n';
            else cout<<mp[v[i]][0]<<" "<<mp[v[pos]][0]<<'\n';
        }
    }

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    
    // map<int,int>mp;

    // mp[2] = 1;
    // mp[4] = 1;
    // mp[8] = 1;

    // for(auto i = mp.rbegin(); i!=mp.rend(); i++){
    //     cout<<(*i).first<<" "<<(*i).second<<" ";
    //     if((*i).first==8) mp[6] = 1;
    // }

    while(t--){
        map<long long,long long>mp;
        int n;
        cin>>n;

        // vector<int>v;
        for(int i = 0; i<n; i++){
            long long x;
            cin>>x;
            if((x&1)==0) mp[x]++; 
        }

        if(mp.size()==0) cout<<0<<'\n';
        else{
            long long cnt = 0;
            for(auto i = mp.rbegin(); i!=mp.rend(); i++){
                long long half = (*i).first/2;
                if(half&1) cnt++;
                else{
                    if(mp[half]==0) mp[half] = 1;
                    cnt++;
                }
            }
            cout<<cnt<<'\n';
        }
    }

    return 0;
}
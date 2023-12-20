#include<bits/stdc++.h>
using namespace std;

int main(){

    long long n;
    cin>>n;

    vector<int>vv(n,0);

    unordered_map<long long, long long>mp;

    for(auto &it:vv){
        cin>>it;
        mp[it]++;
    }

    if(mp.size()<3) cout<<-1<<'\n';

    else{
        vector<vector<int>>v;
        int cnt = 0;
        bool check = false;
        while(true){
            if(mp[1]!=0 && mp[2]!=0 && mp[4]!=0){
                // cout<<1<<" "<<2<<" "<<4<<'\n';
                v.push_back({1,2,4});
                mp[1]--;
                mp[2]--;
                mp[4]--;
                ++cnt;
                if(cnt>=(n/3)){
                    check = true;
                    break;
                }
            }

            else if(mp[1]!=0 && mp[2]!=0 && mp[6]!=0){
                //cout<<1<<" "<<2<<" "<<6<<'\n';
                v.push_back({1,2,6});
                //check = true;
                mp[1]--;
                mp[2]--;
                mp[6]--;
                ++cnt;
                if(cnt>=(n/3)){
                    check = true;
                    break;
                }
            }

            else if(mp[1]!=0 && mp[3]!=0 && mp[6]!=0){
                //cout<<1<<" "<<3<<" "<<6<<'\n';
                v.push_back({1,3,6});
                //check = true;
                mp[1]--;
                mp[3]--;
                mp[6]--;
                ++cnt;
                if(cnt>=(n/3)){
                    check = true;
                    break;
                }
            }

            else break;

        }

        if(check){
            for(auto row:v){
                for(auto it:row) cout<<it<<" ";
                cout<<'\n';
            }
        }
        else cout<<-1<<'\n';
    }

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    map<int,vector<int>>mp;
    

    for(int i = 0; i<n; i++){
        int x;
        cin>>x;
        mp[x].push_back(i+1);
    }

    //n = mp.size();
    vector<pair<int,int>>ans;
    for(auto it:mp){
        int val = it.first;
        vector<int>v = it.second;
        n = v.size();
        if(n<=2){
            if(n==1) ans.push_back({val,0});
            else ans.push_back({val,v[1] - v[0]});
        }
        else{
            int diff = v[1] - v[0];
            bool check = true;
            for(int i = 1; i<n-1; i++){
                if(diff==v[i+1]-v[i]) continue;
                else{
                    check = false;
                    break;
                }
            }
            if(check) ans.push_back({val,diff});
        }
    }

    cout<<ans.size()<<endl;
    for(auto &it:ans) cout<<it.first<<" "<<it.second<<endl;


    return 0;
}
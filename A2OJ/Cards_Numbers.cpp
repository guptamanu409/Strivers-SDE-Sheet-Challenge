#include<bits/stdc++.h>
using namespace std;

int main(){

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    // int xr = 0;
    bool check = true;
   unordered_map<int,int>mp;
    map<int,vector<int>>mpp;
    for(int i = 0; i<2*n; i++){
        int x;
        cin>>x;
        mp[x]++;
        // xr = xr ^ x; Not working for edge case 1 2 4 7
        mpp[x].emplace_back(i+1);
    }

    for(auto &it:mp){
        if(it.second&1){
            check = false;
            break;
        }
    }

    if(!check){
        cout<<-1<<endl;
        return 0;
    }

    //xor approach ---------> Not Working

    // if(xr!=0){
    //     cout<<-1<<'\n';
    // }
    else{
        for(auto &it:mpp){
            vector<int>t = it.second;

            for(int i = 0; i<t.size(); i+=2){
                cout<<t[i]<<" "<<t[i+1];
                cout<<'\n';
            }
        }
    }

    return 0;
}
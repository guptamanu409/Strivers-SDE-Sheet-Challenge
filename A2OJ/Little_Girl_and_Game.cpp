#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);


    string s;
    cin>>s;

    unordered_map<char,int>mp;

    for(char &it:s) mp[it]++;

    int odd = 0, even = 0;
    for(auto &it:mp){
        if(it.second&1) odd++;
        else even++;
    }

    // for(auto &it:mp){
    //     // if(it.second&1) odd++;
    //     // else even++;
    //     cout<<it.first<<" "<<it.second<<endl;
    // }
    // cout<<odd<<" "<<even<<endl;
    // if(even!=0 && odd==0) cout<<"Second"<<endl;
    // else if(odd!=0 && even == 0) cout<<"First"<<endl;
    // if(even>=odd)cout<<"First"<<endl;
    // else cout<<"Second"<<endl;

    // ((even+odd)&1)? cout<<"Second"<<endl : cout<<"First"<<endl;
    if(odd<=1 || (odd%2)==1) cout<<"First"<<endl;
    else cout<<"Second"<<endl;
    return 0;
}
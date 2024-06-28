#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);


    int t;
    cin>>t;

    while(t--){


        int n;
        cin>>n;

        string s;
        cin>>s;
        if(n==1) cout<<s<<'\n';
        else{
            set<char>st;
            for(auto &it:s) st.insert(it);

            vector<char>v;
            for(auto &it:st) v.push_back(it);

            map<char,char>mp;

            int i = 0;
            int tot = v.size();
            int half = v.size()/2;
            while(i<half){
                mp[v[tot-i-1]] = v[i];
                mp[v[i]] = v[tot-i-1];
                i++;
            }
            if(tot&1) mp[v[half]] = v[half];

            for(auto &it:s) cout<<mp[it];
            cout<<'\n';
        }
        
    }


    return 0;
}
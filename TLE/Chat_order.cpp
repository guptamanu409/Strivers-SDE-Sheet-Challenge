#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    vector<string>s;

    for(int i = 0; i<n; i++){
        string x;
        cin>>x;
        s.push_back(x);
    }

    unordered_map<string,int>mp;

    for(int i = n-1; i>=0; i--){
        if(mp[s[i]]==0){
            cout<<s[i]<<'\n';
            mp[s[i]]++;
        }
    }


    return 0;
}
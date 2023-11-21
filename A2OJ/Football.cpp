#include<bits/stdc++.h>
using namespace std;

int main(){

    unordered_map<string ,int>mp;

    int n;
    cin>>n;

    if(n==1){
        string s;
        cin>>s;

        cout<<s<<endl;
        return 0;
    }

    string f,s;
    cin>>f;
    mp[f]++;
    for(int i = 1; i<n; i++){
        string x;
        cin>>x;
        if(x!=f) s = x;
        mp[x]++;
    }

    (mp[f]>mp[s])? cout<<f<<endl : cout<<s<<endl;

    return 0;
}
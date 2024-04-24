#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,m;
    cin>>n>>m;

    unordered_map<int,int>mp;

    for(int i = 0; i<n; i++){
        int x;
        cin>>x;
        mp[x]++;
    }

    bool check = true;
    for(int i = 0; i<m; i++){
        int x;
        cin>>x;
        mp[x]--;
        if(mp[x]<0) check = false;
    }
    (check)? cout<<"Yes" : cout<<"No";


    return 0;
}
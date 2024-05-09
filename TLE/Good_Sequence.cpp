#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    map<int,int>mp;

    for(int i = 0; i<n; i++){
        int x;
        cin>>x;

        mp[x]++;
    }

    long long sum = 0;
    for(auto &it:mp){
        if(it.first<it.second) sum+=(it.second-it.first);
        else if(it.first>it.second) sum+=it.second;
    }
    cout<<sum<<'\n';

    return 0;
}
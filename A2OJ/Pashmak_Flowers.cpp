#include<bits/stdc++.h>
using namespace std;

int main(){

    long long n;
    cin>>n;
    vector<long long>v(n,0);

    long long mini = INT_MAX;
    long long maxi = INT_MIN;

    unordered_map<long long, long long>mp;

    for(int i = 0; i<n; i++){
        long long x;
        cin>>x;
        v[i] = x;
        //cout<<x<<" ";
        mini = min(mini,x);
        maxi = max(maxi,x);
        mp[x]++;
    }

    if(maxi==mini){
        cout<<0<<" "<<(long long)((n-1)*(n-1+1))/2;
        return 0;
    }

    long long diff = maxi - mini;
    long long ans = 0;
    //cout<<"Pahucha"<<endl;
    for(int i = 0; i<n; i++){
        long long val = (long long)(v[i]+diff);
        if(mp.find(val)!=mp.end()) ans+=mp[val];
    }

    cout<<diff<<" "<<ans;
    return 0;
}
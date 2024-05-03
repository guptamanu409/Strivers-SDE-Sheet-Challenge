#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    

    long long t;
    
    while(cin>>t){
        if(t==0)break;
        map<long long,long long>mp;

        while((t%2)==0){
            mp[2]++;
            t = t>>1;
        }

        for(long long i = 3; i*i<=t; i+=2){
            while((t%i)==0){
                mp[i]++;
                t = t/i;
            }
        }

        if(t>1) mp[t]++;

        for(auto &it:mp)cout<<it.first<<"^"<<it.second<<" ";
        cout<<'\n';

    }


    return 0;
}
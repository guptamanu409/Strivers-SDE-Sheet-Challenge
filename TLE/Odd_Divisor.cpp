#include<bits/stdc++.h>
using namespace std;

long long compu(long long n){
    long long ans = n;
    
    while(n>1){
        n = n/2;
        if(n>1 && (n&1)){
            ans = n;
            break;
        }
    }
    return ans;
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    unordered_map<long long, long long>mp;

    while(t--){

        long long n;
        cin>>n;

        if(n&1) cout<<"YES"<<'\n';
        else{
            if(mp.size()!=0 && mp[n]!=0){
                (mp[n]==n)? cout<<"NO"<<'\n' : cout<<"YES"<<'\n'; 
            }
            else{
                long long temp = compu(n);
                mp[n] = temp;
                (temp==n)? cout<<"NO"<<'\n' : cout<<"YES"<<'\n';
            }
        }

    }

    return 0;
}
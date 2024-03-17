#include<bits/stdc++.h>
using namespace std;

#define prime 1

long long gcd(long long a, long long b){
    if(b==0) return a;
    return gcd(b,a%b);
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // int t;
    // cin>>t;

    int n;
    cin>>n;

    vector<long long>v;
    for(int i = 0; i<n; i++){
        long long x;
        cin>>x;
        v.push_back(x);
    }
    if(n==1) cout<<0<<'\n'<<v[0]<<'\n';
    else{
        vector<long long>ans;
        long long cnt = 0;
        for(int i = 0; i<n-1; i++){
            if(gcd(v[i],v[i+1])==1) ans.push_back(v[i]);
            else{
                
                ans.push_back(v[i]);
                if((v[i]==prime) && (v[i+1]==prime)) ans.push_back(1);
                else ans.push_back(prime);
                cnt++;
            } 
        }
        ans.push_back(v[n-1]);
        cout<<cnt<<'\n';
        for(auto &it:ans) cout<<it<<" ";
        cout<<'\n';
    }
    

    return 0;
}
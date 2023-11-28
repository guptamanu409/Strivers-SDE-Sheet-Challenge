#include<bits/stdc++.h>
using namespace std;

struct hash_pair {
    template <class T1, class T2>
    size_t operator()(const pair<T1, T2>& p) const
    {
        auto hash1 = hash<T1>{}(p.first);
        auto hash2 = hash<T2>{}(p.second);
 
        if (hash1 != hash2) {
            return hash1 ^ hash2;              
        }
         
        // If hash1 == hash2, their XOR is zero.
          return hash1;
    }
};

int main(){

    int t;
    cin>>t;

    while(t--){
        long long n;
        cin>>n;


        vector<long long>v(n,0);

        for(auto &it:v) cin>>it;

        sort(v.begin(),v.end());

        long long ans = 0;
        unordered_map<pair<long long,long long>,long long,hash_pair>mp;
        for(int i = 0; i<n-2; i++){
            for(int j = i+1; j<n-1; j++){
                long long val = 0;
                if(mp[{v[i],v[j]}]!=0) val = mp[{v[i],v[j]}];
                else {
                    val = __gcd(v[i],v[j]);
                    mp[{v[i],v[j]}] = val;
                }
                //cout<<val<<" ";
                ans+=val;
                long long rem = (long long)(n-(j+2));
                //cout<<rem<<endl;
                ans+= (long long)(rem*val);
            }
        }
        cout<<ans<<'\n';
    }

    return 0;
}
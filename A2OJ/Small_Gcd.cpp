#include<bits/stdc++.h>
using namespace std;

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

        for(int i = 0; i<n-2; i++){
            for(int j = i+1; j<n-1; j++){
                long long val = __gcd(v[i],v[j]);
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
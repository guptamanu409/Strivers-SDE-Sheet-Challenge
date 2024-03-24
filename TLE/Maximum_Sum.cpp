#include<bits/stdc++.h>
using namespace std;

int mod = (int)1e9+7;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){

        int n,k;
        cin>>n>>k;

        long long maxi = LLONG_MIN, sum = 0;
        vector<long long>v;
        for(int i = 0; i<n; i++){
            long long x;
            cin>>x;
            v.push_back(x);
            sum+=x;
            maxi = max(maxi,sum);
            if(sum<0) sum = 0;
        }
        
        sum = 0;
        for(int i = 0; i<n; i++){
            // sum = ((sum%mod) + (v[i]%mod))%mod;
            // sum = (sum+v[i])%mod;
            // sum+=v[i];

            long long temp = (v[i]+mod)%mod; // Handled Negative values
            sum = (sum + temp)%mod;
        }

        if(maxi>0){
            for(int i = 0; i<k; i++){
                sum = (sum+maxi)%mod;
                maxi = (maxi*2)%mod;
            }
        }
        
        cout<<sum<<'\n';
        // cout<<(long long)mod-sum<<'\n';
        // cout<<(int)(1e9+7)-(int)sum<<endl;
        
        // if(maxi<=0){
        //     long long sum = 0;
        //     for(int i = 0; i<n; i++){
        //         sum = ((sum%mod) + (v[i]%mod))%mod;
        //         // sum = (sum+v[i])%mod;
        //         // sum+=v[i];
        //     }
        //     // cout<<(long long)mod-sum<<'\n';
        //     cout<<(int)(1e9+7)-(int)sum<<endl;
        // }
    }


    return 0;
}
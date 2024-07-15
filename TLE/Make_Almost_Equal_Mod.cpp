#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        vector<long long>v(n,0);

        // long long maxi = INT_MIN;
        bool odd,even;
        odd = false;
        even = false;
        for(auto &it:v){
            cin>>it;
            // maxi = max(maxi,it);
            if(it&1) odd = true;
            else even = true;
        }


        if(odd && even) cout<<2<<'\n';
        else{
            
            bool check = false;
            long long sum = 0;
            for(long long i = 0; i<=57; i++){
                int cnt = 0;
                long long mask = (long long)(1LL<<i);
                sum = (long long)(sum + mask);
                for(int j = 0; j<n; j++){
                    // cnt+= (it&mask);
                    // cnt+= (v[j]&mask);
                    if(v[j]&mask) cnt++;

                    // cout<<v[j]<<" ";
                } 
                // cout<<cnt<<'\n';
                // cout<<'\n';
                if((cnt!=n) && (cnt!=0)){
                    cout<<(long long)(sum+1LL)<<'\n';
                    break;
                }
                // cout<<sum<<'\n';
            }



            // for(long long i = 2; i<=maxi; i++){
            //     unordered_set<long long>umm;

            //     for(auto &it:v){
            //         umm.insert(it%i);
            //     }
            //     if(umm.size()==2){
            //         cout<<i<<'\n';
            //         break;
            //     }    
            // }
        }
        
    }



    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);


    int t;
    cin>>t;

    while(t--){

        long long n;
        cin>>n;
        // unordered_map<long long, long long>umm;
        long long f,s;
        f=0;
        s=0;
        // cout<<n;
        for(long long i = 2; (long long)(i*i)<=n; i++){
            if(n%i==0){
                
                // if i is p then ((n/i) % i) == 0
                if((n%(long long)(i*i))==0) {
                    cout<<i<<" "<<(long long)(n/(long long)(i*i))<<'\n';
                }
                // q hai toh p hoga sqrt(n/i)
                else{
                    cout<<(long long)sqrt(n/i)<<" "<<i<<'\n';
                }
                break;
                
                
                // long long cnt = 0;
                // umm[i] = 0;
                // while(n%i==0){
                //     // umm[i]++;
                //     // cout<<i<<'\n';
                //     cnt++;
                //     n = n/i;
                // }
                // if(cnt>=2) f = i;
                // else s = i;
            }
            
        }
        // if(n>1) s = n;

        // if(umm.begin()->second==2) cout<<umm.begin()->first<<" "<<umm.end()->first<<'\n';
        // cout<<umm.end()->first<<" "<<umm.begin()->first<<'\n';

        // bool check = false;
        // for(auto &it:umm)
        // cout<<f<<" "<<s<<'\n';
    }


    return 0;
}
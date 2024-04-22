#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){

        long long n,k;
        cin>>n>>k;

        long long p = k;
        long long ans = 0;
        vector<long long>an;
        while(p){
            if(p&1){
                an.push_back((long long)(pow(2,ans)));
            }
            ans++;
            p = p>>1;
        }
        if(n==1)cout<<k<<'\n';
        else if(n>=an.size()){
            for(auto &it:an)cout<<it<<" ";
            long long rem = n-an.size();
            while(rem){
                cout<<0<<" ";
                rem--;
            }
            cout<<'\n';
        }
        else{
            long long cnt = 0;
            long long i = an.size()-1;
            while(cnt<n-1){
                ++cnt;
                cout<<an[i]<<" ";
                i--;
            }
            long long sum = 0;
            while(i>=0){
                sum+=an[i];
                i--;
            }
            cout<<sum<<'\n';
        }

        // cout<<k<<" ";
        // for(int i = 0; i<n-1; i++)cout<<0<<" ";
        // cout<<'\n';
    }



    return 0;
}
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

        vector<int>v(n,0);

        for(auto &it:v) cin>>it;

        vector<int>bits(31,0);

        for(int i = 30; i>=0; i--){

            for(int j = 0; j<n; j++){
                if(v[j]&(1<<i)) bits[i]++;
            }
        }

        int ans = 0;
        for(int i = 30; i>=0; i--){
            if(bits[i]>=2) ans = (ans|(1<<i)); 
        }

        cout<<ans<<'\n';
    }


    return 0;
}
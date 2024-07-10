#include<bits/stdc++.h>
using namespace std;



int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);


    int n;
    cin>>n;

    if(n<=5) cout<<0<<'\n';
    else{

        vector<int>seive[n+1]; // rows static ya fixed hai and cols dynamic hai

        // iota(seive.begin(),seive.end(),0);

        for(int i = 0; i<=n; i++) seive[i].push_back(i);

        for(int i = 2; i<=n; i++){
            if(seive[i].back()==i){
                for(int j = i*2; j<=n; j+=i){
                    seive[j].push_back(i);
                }
            }
        }

        int ans = 0;
        for(int i = 1; i<=n; i++){
            if(((seive[i].size())-1)==2) ans++;
        }

        cout<<ans<<'\n';
    }


    return 0;
}
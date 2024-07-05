#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){

        int p,q,r;
        cin>>p>>q>>r;

        long long ans = 1;

        for(int i = 19; i>=0; i--){
            int cnt = 0;
            if(p&(1<<i)) cnt++;
            if(q&(1<<i)) cnt++;
            if(r&(1<<i)) cnt++;
            if(cnt==1){
                ans = 0;
                break;
            }
            else if(cnt==3) ans*=4;
        }

        cout<<ans<<'\n';

    }


    return 0;
}
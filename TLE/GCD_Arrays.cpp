#include<bits/stdc++.h>
using namespace std;

#define endl '\n'

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){

        long long l,r,k;
        cin>>l>>r>>k;

        if(k==0){
            if((l==r) && (l>1))cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else{
            if(k==(r-l))cout<<"YES"<<endl;
            else{
                long long even = 0, odd = 0,n = 0;
                n = (r-l) + 1;
                even = n>>1;
                if(((r&1)==0) && ((l&1)==0))even++;
                odd = n - even;
                if(k>=odd) cout<<"YES"<<'\n';
                else cout<<"NO"<<endl;
            }
        }
    }


    return 0;
}
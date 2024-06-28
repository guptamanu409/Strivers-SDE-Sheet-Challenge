#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){

        int n,m;
        cin>>n>>m;

        if(m>n) cout<<"No"<<'\n';
        else if(m==n) cout<<"Yes"<<'\n';
        else{
            if(n&1){
                if(m&1) cout<<"Yes"<<'\n';
                else cout<<"No"<<'\n';
            }
            else{
                if(m&1) cout<<"No"<<'\n';
                else cout<<"Yes"<<'\n';
            }
        }
    }

    return 0;
}
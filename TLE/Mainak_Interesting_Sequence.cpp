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

        if(n==1) cout<<"Yes"<<'\n'<<m<<'\n';
        else if(n>1 && (m&1))cout<<"No"<<'\n';
        else{
            int quo = m/2;
            cout<<"Yes"<<'\n'<<quo<<" "<<quo<<" ";
            int rem = n-2;
            while(rem--) cout<<0<<" ";
            cout<<'\n';
        }
    }


    return 0;
}
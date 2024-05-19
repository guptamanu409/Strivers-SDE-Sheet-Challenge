#include<bits/stdc++.h>
using namespace std;

int main(){


    ios::sync_with_stdio(false);
    cin.tie(NULL);


    int t;
    cin>>t;

    while(t--){

        int a,b,c;
        cin>>a>>b>>c;

        if((a+b+c)&1) cout<<-1<<'\n';
        else{
            if((a+b)<=c) cout<<a+b<<'\n';
            else cout<<((a+b+c)>>1)<<'\n';
        }
    }


    return 0;
}
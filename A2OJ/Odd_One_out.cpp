#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);

    int t;
    cin>>t;

    while(t--){
        int a,b,c;
        int xr = 0;
        cin>>a>>b>>c;
        xr= xr^a;
        xr= xr^b;
        xr= xr^c;
        cout<<xr<<'\n';
    }

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    int lz = 0,lo = 0,rz = 0,ro = 0;

    while(n--){

        int l,r;
        cin>>l>>r;

        if(l==0) lz++;
        else lo++;
        
        if(r==0) rz++;
        else ro++;

    }

    int ans = 0;

    if(lo>=lz) ans+=lz;
    else ans+=lo;

    if(ro>=rz) ans+=rz;
    else ans+=ro;

    cout<<ans<<endl;

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long ans = 0, n;
    cin>>n;
    for(long long i = 5; i<=n; i*=5) ans+=n/i;
    cout<<ans<<endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int compu(int n){
    int ans = 1;
    for(int i = 2; i*i<=n; i++){
        if(n%i==0){
            ans = max(ans,i);
            ans = max(ans,n/i);
        }
    }
    return ans;
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        if(n&1){
            cout<<compu(n-1)<<'\n';
        }
        else cout<<compu(n)<<'\n';
    }

    return 0;
}
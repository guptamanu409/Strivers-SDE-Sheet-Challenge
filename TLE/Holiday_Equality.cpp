#include<bits/stdc++.h>
using namespace std;

#define endl '\n'

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    vector<int>a(n,0);

    int maxi = INT_MIN;
    for(auto &it:a){
        cin>>it;
        maxi = max(maxi,it);
    }

    long long ans = 0;
    for(auto &it:a){
        ans+=(long long)(maxi-it);
    }

    cout<<ans<<endl;

    return 0;
}
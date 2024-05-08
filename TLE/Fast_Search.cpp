#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    vector<long long>v(n,0);
    for(auto &it:v)cin>>it;

    sort(v.begin(),v.end());

    int k;
    cin>>k;
    vector<long long>ans;
    while(k--){
        long long a,b;
        cin>>a>>b;
        ans.push_back(upper_bound(v.begin(),v.end(),b) - lower_bound(v.begin(),v.end(),a));
    }

    for(auto &it:ans)cout<<it<<" ";

    return 0;
}
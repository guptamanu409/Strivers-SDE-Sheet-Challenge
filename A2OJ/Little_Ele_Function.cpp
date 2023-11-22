#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    vector<int>v(n,0);

    iota(v.begin(),v.end(),1);

    //for(auto &it:v) cout<<it<<" ";
    for(int i = n-1; i>0; i--) swap(v[i],v[i-1]);

    for(auto &it:v) cout<<it<<" ";
    return 0;
}
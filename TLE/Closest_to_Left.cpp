#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,k;
    cin>>n>>k;

    vector<int>a(n,0);
    for(auto &it:a)cin>>it;

    vector<int>b(k,0);
    for(auto &it:b)cin>>it;

    for(auto &it:b){
        cout<<upper_bound(a.begin(),a.end(),it) - a.begin()<<'\n';
    }



    return 0;
}
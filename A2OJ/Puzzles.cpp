#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,m;
    cin>>n>>m;

    vector<int>v(m,0);

    for(auto &it:v) cin>>it;

    sort(v.begin(),v.end());

    int mini = INT_MAX;
    int i = 0;
    while(i+n-1<m){
        mini = min(mini,v[i+n-1]-v[i]);
        i++;
    }
    cout<<mini<<endl;

    return 0;
}
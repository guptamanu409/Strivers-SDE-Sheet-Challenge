#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        vector<int>v;
        int mini = INT_MAX;
        for(int i = 0; i<n; i++){
            int x;
            cin>>x;
            v.push_back(x);
            mini = min(mini,x);
        }
        long long res = 0;
        for(auto &it:v) res+=(it-mini);
        cout<<res<<'\n';
    }

    return 0;
}
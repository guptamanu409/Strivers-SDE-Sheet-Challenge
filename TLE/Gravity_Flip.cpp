#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    vector<int>v;
    for(int i = 0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    for(int i = n-1; i>0; i--){
        for(int j = i-1; j>=0; j--){
            if(v[j]>v[i]){
                int rem = v[j] - v[i];
                v[i] = v[i] + rem;
                v[j] = v[j] - rem;
            }
        }
    }

    for(auto &it:v) cout<<it<<" ";

    return 0;
}
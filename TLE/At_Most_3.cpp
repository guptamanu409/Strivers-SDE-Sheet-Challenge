#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,w;
    cin>>n>>w;

    vector<int>v(n,0);
    for(auto &it:v)cin>>it;

    sort(v.begin(),v.end());
    // for(auto &it:v) cout<<it<<" ";
    cout<<endl;

    int cnt = 0;
    set<int>mp;
    for(int i = 0; i<n; i++){
        if(i>0 && v[i]==v[i-1])continue;
        if(v[i]>w)break;
        if(v[i]<=w){
            // cout<<v[i]<<" And the sum "<<v[i]<<endl;
            mp.insert(v[i]);
            // cnt++;
        }
        for(int j = i+1; j<n; j++){
            if(j>i+1 && (v[j]==v[j-1]))continue;
            if((v[i]+v[j])<=w){
                // cout<<v[i]<<" "<<v[j]<<" And the sum "<<v[i]+v[j]<<endl;
                mp.insert(v[i]+v[j]);
                // cnt++;
            }
            else break;
            // if(j+1<n && ((v[i]+v[j-1]+v[j])<=w))cnt++;
            for(int k = j+1; k<n; k++){
                if(k>j+1 && (v[k]==v[k-1]))continue;
                if((v[i]+v[j]+v[k])<=w){
                    // cout<<v[i]<<" "<<v[j]<<" "<<v[k]<<" And the sum "<<v[i]+v[j]+v[k]<<endl;
                    mp.insert(v[i]+v[j]+v[k]);
                    // cnt++;
                }
                else break;
            }
        }
    }
    // cout<<cnt;
    cout<<mp.size();

    return 0;
}
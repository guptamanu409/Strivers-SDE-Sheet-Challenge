#include<bits/stdc++.h>
using namespace std;

int main(){

    int s,n;
    cin>>s>>n;

    vector<pair<int,int>>v;

    for(int i = 0; i<n; i++){
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }

    sort(v.begin(),v.end());

    bool check = true;
    for(int i = 0; i<n; i++){
        int val = v[i].first;
        if(val>=s){
            check = false;
            break;
        }
        else{
            s+=v[i].second;
        }
    }

    (check)? cout<<"YES"<<endl : cout<<"NO"<<endl;

    return 0;
}
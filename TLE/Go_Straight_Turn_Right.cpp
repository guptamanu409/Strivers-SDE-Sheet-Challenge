#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    string s;
    cin>>n>>s;

    vector<pair<int,int>>v;
    v.push_back({1,0});
    v.push_back({0,-1});
    v.push_back({-1,0});
    v.push_back({0,1});
    int x = 0, y = 0;
    int dir = 0;
    for(auto &it:s){
        if(it=='S'){
            x+= v[dir].first;
            y+= v[dir].second;
        }
        else{
            dir++;
            dir = dir%4;
        }
    }

    cout<<x<<" "<<y;


    return 0;
}
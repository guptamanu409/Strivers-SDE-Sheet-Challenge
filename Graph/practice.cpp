#include<bits/stdc++.h>
using namespace std;


int main(){

    vector<vector<int>>t;

    int va = 5;

    while(va--){
        vector<int>v = {1,2,3,va};
        t.push_back(v); // row changes in 2D vector automatically if you only do push_back 😲😲😲😲
    }

    for(auto row:t){
        for(auto it:row) cout<<it<<" ";
        cout<<endl;
    }

    return 0;
}
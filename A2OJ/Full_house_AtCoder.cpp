#include<bits/stdc++.h>
using namespace std;

int main(){

    unordered_map<int,int>mp;

    for(int i = 0; i<5; i++){
        int x;
        cin>>x;
        mp[x]++;
    }
    bool two = false, three = false;
    for(auto &it:mp){
        if(it.second==2) two = true;
        if(it.second ==3) three = true;
    }
    
    (mp.size()==2 && two && three)? cout<<"Yes"<<'\n' : cout<<"No"<<'\n';

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    unordered_map<string,int>mp;
    while(n--){
        string s;
        cin>>s;
        if(mp[s]!=0){
            cout<<s<<mp[s]<<'\n';
            // s+="1";
            mp[s]++;
        }
        else{
            cout<<"OK"<<'\n';
            mp[s]++;
        }
    }

    return 0;
}
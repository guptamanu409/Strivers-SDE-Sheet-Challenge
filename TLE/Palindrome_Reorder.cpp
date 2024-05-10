#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin>>s;

    map<char,int>mp;

    for(auto &it:s) mp[it]++;

    int even = 0, odd = 0;

    for(auto &it:mp){
        if(it.second&1)odd++;
        else even++;
    }

    if(odd>1) cout<<"NO SOLUTION"<<'\n';
    else{
        string ans = "";
        char ch;
        int freq = 0;
        for(auto &it:mp){
            int temp = it.second;
            if(temp&1){
                ch = it.first;
                freq = it.second;
            }
            else{
                temp = temp/2;
                while(temp--)ans+=it.first;
            }
        }
        cout<<ans;

        while(freq--)cout<<ch;
        reverse(ans.begin(),ans.end());
        cout<<ans<<'\n';

    }


    return 0;
}
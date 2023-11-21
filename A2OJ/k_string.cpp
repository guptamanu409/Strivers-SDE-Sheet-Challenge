#include<bits/stdc++.h>
using namespace std;

int main(){

    int k;
    cin>>k;

    string s;
    cin>>s;

    unordered_map<char ,int>mp;

    for(char it:s){
        // int cc = it - 97;
        // char ccc = (char)(cc + 'a');
        // cout<<ccc;
        //string ss = to_string(ccc);
        //cout<<ss<<" ";
        mp[it]++;
    }

    bool check = true;
    string ans = "";

    for(auto &it:mp){
        int value = it.second;

        if(value%k==0){

            for(int i = 1; i<=value/k; i++) ans+=it.first;
        }
        else{
            check = false;
            break;
        }

    }

    string temp = ans;
    if(check){
        for(int i = 2; i<=k; i++) ans+=temp;
        cout<<ans<<endl;
    }
    else cout<<-1<<endl;



    return 0;
}
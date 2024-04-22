#include<bits/stdc++.h>
using namespace std;

bool helper(string &s){

    int n = s.size();
    if(n==1)return true;
    int i = 0;
    while(i<(n>>1)){
        if(s[i]!=s[n-i-1]) return false;
        i++;
    }
    return true;
}

void solve(int ind , int n, string &s, vector<string>&t, vector<vector<string>>&ans){
    if(ind>=n){
        ans.push_back(t);
        return;
    }

    for(int i = ind; i<n; i++){
        string temp = s.substr(ind,i-ind+1);
        // cout<<temp<<'\n';
        if(helper(temp)){
            // cout<<temp<<'\n';
            t.push_back(temp);
            // for(auto &it:t) cout<<it<<" ";
            // cout<<'\n';
            solve(i+1,n,s,t,ans);
            t.pop_back();
        }
    }
    return;
}

vector<vector<string>> partition(string &s){
    int n = s.size();
    if(n==1) return {{s}};
    vector<vector<string>>ans;
    vector<string>t;
    solve(0,n,s,t,ans);
    return ans;
}

int main(){

    string s = "aab";
    vector<vector<string>>ans = partition(s);

    for(auto &row:ans){
        for(auto &it:row) cout<<it<<" ";
        cout<<'\n';
    }

    return 0;
}
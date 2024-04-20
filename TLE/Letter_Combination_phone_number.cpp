#include<bits/stdc++.h>
using namespace std;

void solve(int ind, int n, string &d, string s, vector<string>&ans,map<char,string>&mp){
    if(ind==n){
        ans.push_back(s);
        return;
    }
    int k = mp[d[ind]].size();
    for(int i = 0; i<k; i++){
        solve(ind+1,n,d,s+mp[d[ind]][i],ans,mp);
    }
}

vector<string> letterCombinations(string digits){
    vector<string>ans;
    if(digits.size()==0) return ans;
    int n = digits.size();
    map<char,string>mp;
    mp.insert({'2', "abc"});
    mp.insert({'3', "def"});
    mp.insert({'4', "ghi"});
    mp.insert({'5', "jkl"});
    mp.insert({'6', "mno"});
    mp.insert({'7', "pqrs"});
    mp.insert({'8', "tuv"});
    mp.insert({'9', "wxyz"});
    string s = "";
    solve(0,n,digits,s,ans,mp);
    return ans;

    //Wrong approach from down here 
    
    // if(digits.size()==1){
    //     string s = mp[digits[0]];
    //     for(auto &it:s){
    //         string temp;
    //         temp.push_back(it);
    //         ans.push_back(temp);
    //     }
    //     return ans;
    // }
    // int n = digits.size();
    // for(int i = 0; i<n; i++){
    //     string s = mp[digits[i]];
    //     for(int j = i+1; j<n; j++){
    //         string q = mp[digits[j]];

    //         int m = s.size();
    //         int o = q.size();
    //         for(int k = 0; k<m; k++){
    //             for(int l = 0; l<o; l++){
    //                 string temp;
    //                 temp.push_back(s[k]);
    //                 temp.push_back(q[l]);
    //                 ans.push_back(temp);
    //             }
    //         }
    //     }
    // }
    // return ans;
    
}

int main(){

    string s = "";
    vector<string>ans = letterCombinations(s);
    for(auto &it:ans)cout<<it<<" ";
    // string q;
    // q = to_string('a');
    // q+=to_string('b');
    
    // q.push_back('a');
    // q.push_back('b');
    // vector<string>t;
    // t.push_back(q);
    // cout<<t[0];

    // map<char,string>mp;
    // mp.insert({'2',"abc"});
    // cout<<mp['2'][1];


    return 0;
}

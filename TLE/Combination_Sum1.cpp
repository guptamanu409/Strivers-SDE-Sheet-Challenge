#include<bits/stdc++.h>
using namespace std;

void solve(int i, int n, vector<int>&v, int k, vector<vector<int>>&ans, vector<int>&t){
    // if(k==0){
    //     ans.push_back(t);
    //     return;
    // }
    if(i>=n || k==0){
        if(k==0) ans.push_back(t);
        return;
    }

    if((k-v[i])>=0){
        t.push_back(v[i]);
        solve(i,n,v,k-v[i],ans,t);
        t.pop_back();
    }
    else return;

    solve(i+1,n,v,k,ans,t);
    return;
}

vector<vector<int>> combinationSum(vector<int>& candidates, int target){
    sort(candidates.begin(),candidates.end());
    vector<vector<int>>ans;
    vector<int>t;
    solve(0,candidates.size(),candidates,target,ans,t);
    return ans;
}

int main(){

    vector<int>nums = {2,3,6,7};
    vector<vector<int>>v = combinationSum(nums,7);
    for(auto &row:v){
        for(auto &it:row)cout<<it<<" ";
        cout<<'\n';
    }

    return 0;
}
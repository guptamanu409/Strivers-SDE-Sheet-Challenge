#include<bits/stdc++.h>
using namespace std;

void solve(int ind , int n, int k, vector<int>&v, vector<vector<int>>&ans, vector<int>&t){
    if(k==0 || ind>=n){
        if(k==0)ans.push_back(t);
        return;
    }

    for(int i = ind; i<n; i++){
        if(i>ind && v[i]==v[i-1])continue;
        if((k-v[i])>=0){
            t.push_back(v[i]);
            solve(i+1,n,k-v[i],v,ans,t);
            t.pop_back();
        }
    }
    return;
}

vector<vector<int>> combinationSum2(vector<int>& candidates, int target){
    vector<vector<int>>ans;
    vector<int>t;
    sort(candidates.begin(), candidates.end());
    solve(0,candidates.size(),target,candidates,ans,t);
    return ans;
}

int main(){

    vector<int>nums = {2,5,2,1,2};
    vector<vector<int>>ans = combinationSum2(nums,5);
    for(auto &row:ans){
        for(auto &it:row)cout<<it<<" ";
        cout<<'\n';
    }

    return 0;
}
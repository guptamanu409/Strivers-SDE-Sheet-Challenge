#include<bits/stdc++.h>
using namespace std;

void helper(int i, int n, vector<int>&v, vector<vector<int>>&ans, vector<int>&t){
    if(i>=n){
        ans.push_back(t);
        return;
    }

    helper(i+1,n,v,ans,t);

    t.push_back(v[i]);
    helper(i+1,n,v,ans,t);
    t.pop_back();
}

vector<vector<int>> subsets(vector<int>& nums){
    vector<vector<int>>ans;
    vector<int>t;
    helper(0,nums.size(),nums,ans,t);
    for(auto &r:ans){
        for(auto &it:r)cout<<it<<" ";
        cout<<'\n';
    }
    return {{}};
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int>nums = {1,2,3};

    subsets(nums);



    return 0;
}
// vector<vector<int>> subsets(vector<int>& nums)
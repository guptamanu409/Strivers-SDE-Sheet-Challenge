#include<bits/stdc++.h>
using namespace std;

void helper(int i,int n, vector<int>&v,vector<int>&t,set<vector<int>>&mp){
    if(i>=n){
        // sort(t.begin(),t.end());
        vector<int>tt = t;
        sort(tt.begin(),tt.end());
        mp.insert(tt);
        return;
    }

    helper(i+1,n,v,t,mp);

    t.push_back(v[i]);
    helper(i+1,n,v,t,mp);
    t.pop_back();
}

vector<vector<int>> subsetsWithDup(vector<int>& nums){
    vector<vector<int>>ans;
    vector<int>t;
    set<vector<int>>mp;
    helper(0,nums.size(),nums,t,mp);
    for(auto &it:mp)ans.push_back(it);

    for(auto &row:ans){
        for(auto &it:row)cout<<it<<" ";
        cout<<'\n';
    }
    return ans;

}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int>nums = {4,4,4,1,4};
    subsetsWithDup(nums);


    return 0;
}
// vector<vector<int>> subsetsWithDup(vector<int>& nums)
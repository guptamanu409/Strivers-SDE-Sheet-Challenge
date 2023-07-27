#include <bits/stdc++.h> 
using namespace std;
//Memoization
int helper(int ind, vector<int>&nums, vector<int>&dp){
    if(ind<0) return 0;
    if(ind==0) return nums[ind];
    if(dp[ind]!=-1) return dp[ind];
    int left = helper(ind-2,nums,dp) + nums[ind];
    int right = helper(ind-1,nums,dp);
    return dp[ind] = max(left,right);
}

int maximumNonAdjacentSum(vector<int> &nums){
    // Write your code here.

    
    vector<int>dp(nums.size(),-1);
    //return helper(nums.size()-1,nums,dp);

    //Tabulation

    dp[0] = nums[0];
    // for(int i = 1; i<nums.size(); i++){
    //     int left = ((i-2>=0)? dp[i-2] : 0) + nums[i];
    //     int right = dp[i-1];
    //     dp[i] = max(left,right);
    // }

    //return dp[nums.size()-1];

    int prev2 = 0;
    int prev = nums[0];
    int curr = 0;
    for(int i = 1; i<nums.size(); i++){
        int left = prev2 + nums[i];
        int right = prev;
        curr = max(left,right);
        prev2 = prev;
        prev = curr;
    }
    return prev;





















    //Memoization
    /*
    int maxim(int index,vector<int>&nums,vector<int>&dp ){
        if(index==0) return nums[0];
        if(index<0) return 0;
        if(dp[index]!=0) return dp[index];
        int pick = maxim(index-2,nums,dp) + nums[index];
        int not_pick = maxim(index-1,nums,dp) + 0;
        
        return dp[index] = max(pick,not_pick);
    }
    */



    //if(nums.size()<=2) return *max_element(nums.begin(),nums.end());
    //Tabulation
    /*
    vector<int>dp(nums.size(),0);
    //return maxim(nums.size()-1,nums,dp);
    
    dp[0] = nums[0];
    for(int ind = 1; ind<nums.size(); ind++){
        int pick = nums[ind];
        (ind>1)? pick+=dp[ind-2] : pick+=0;
            //if(nums[ind-2]>dp[ind-2]) pick = nums[ind-2] + nums[ind];
            //else pick = dp[ind-2] + nums[ind];
        
        int not_pick = dp[ind-1] + 0;
        dp[ind] = max(pick,not_pick);
    }
    return dp[nums.size()-1];
    */
    
    //Space Optimization
    // int prev = nums[0];
    // int prev2 = 0;
    // for(int i = 1; i<nums.size(); i++){
    //     int pick = nums[i];
    //     (i>1)? pick+=prev2 : pick+=0;
    //     int not_pick = prev + 0;
    //     int curri = max(pick,not_pick);
    //     prev2 = prev;
    //     prev = curri;
    // }
    // return prev;
}
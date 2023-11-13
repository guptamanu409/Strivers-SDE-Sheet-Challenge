class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

        int maxi = 0;
        int cnt = 0;
        for(auto it:nums){
            if(it){
                cnt++;
                maxi = max(maxi,cnt);
            }
            else cnt = 0;
        }
        return maxi;

        // Pathetic
    //     if(nums.size()==1 && nums[0]) return 1;

    //     int cnt = 1;
    //     int maxi = 0;
    //     bool check = false;
    //     for(int i = 0; i<nums.size()-1; i++){
    //         if(nums[i] && nums[i]==nums[i+1]){
    //             cnt++;
    //             maxi = (cnt>maxi)? cnt : maxi;
    //         }
    //         if(nums[i]) check = true;
    //         else cnt = 1;
    //     }
        
    //     if(maxi>0) return maxi;
    //     return (check || nums[nums.size()-1])? 1 : 0;
    }
};
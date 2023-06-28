#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        long long sum = 0;
        int cnt = 0;
        unordered_map<long long,int>mp;
        mp[sum]++;

        for(auto it:nums){
            sum+= (long long)it;
            long long x = sum- (long long)k;
            cnt+=mp[x];
            mp[sum]++;

        }
        return cnt;
    }
};
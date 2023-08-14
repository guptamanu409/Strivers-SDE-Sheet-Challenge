#include <bits/stdc++.h>
using namespace std;
int subarraysXor(vector<int> &arr, int xx)
{
    int xr = 0;
    unordered_map<int,int>mp;

    mp[xr]++; // 0 -> 1

    int cnt = 0;

    for(auto it:arr){
        xr = xr^it;
        int x = xr^xx;

        if(mp[x]) cnt+=mp[x];
        mp[xr]++;
    }

    return cnt;
}
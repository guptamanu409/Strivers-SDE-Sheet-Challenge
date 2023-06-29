#include <bits/stdc++.h>
using namespace std;
int LongestSubsetWithZeroSum(vector < int > arr) {


  //Using Prefix Sum
  unordered_map<int,int>mp;
  int n = arr.size();
  int sum = 0;
  int maxi = 0;
  for(int i = 0; i<n; i++){
    sum+=arr[i];
    if (sum == 0) {
      maxi = i + 1;
    }

    else if (mp.find(sum) != mp.end()) {
      maxi = max(maxi,i-mp[sum]);
    }
    
    if(mp.find(sum)==mp.end()) mp[sum] = i;
  }

  return maxi;

}
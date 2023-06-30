#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> pairSum(vector<int> &arr, int s){


   //Two pointers - Will give wrong answer
   /*
   sort(arr.begin(),arr.end());
   vector<vector<int>>ans;
   int low = 0;
   int high = arr.size()-1;
   while(low<high){
      if(arr[low]+arr[high]==s){
         ans.push_back({arr[low],arr[high]});
         high--;
      }

      else if(arr[low]+arr[high]<s) low++;
      else high--;
   }

   return ans;
   */

   //Using Hashing - Freq ki kitne bar aya hai 
   
   unordered_map<int,int>mp;
   vector<vector<int>>ans;

   for(auto it:arr){
      
      int key = s-it;
      if(mp.find(key)!=mp.end()){
         int pairs_freq = mp[key];
         while(pairs_freq--){
           ans.push_back({min(key, it),max(key, it)});
         }
      }
      mp[it]++;
   }
   sort(ans.begin(),ans.end());
   return ans;
   
}
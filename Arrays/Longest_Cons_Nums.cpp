#include <bits/stdc++.h>
using namespace std;
int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    
    //Using Unordered_Set
    unordered_set<int>mp;
    int maxi = 1;

    for(auto it:arr) mp.insert(it);

    for(auto it:mp){
        if(mp.find(it-1)==mp.end()){
            int next_ele = it+1;
            int cnt = 1;
            while(mp.find(next_ele)!=mp.end()){
                cnt++;
                next_ele++;
            }
            maxi = max(maxi,cnt);
        }
    }

    return maxi;


    // Using Sort
    /*
    sort(arr.begin(),arr.end());

    int prev = arr[0];
    int maxi = 1;
    int cnt = 1;

    for(int i = 1; i<n; i++){
        if(arr[i]==prev)continue;
        else if(arr[i]-prev==1){
            cnt++;
            prev = arr[i];
            maxi = max(maxi, cnt);
        }

        else{
            cnt = 1;
            prev = arr[i];
        }
    }

    return maxi;
    */
}
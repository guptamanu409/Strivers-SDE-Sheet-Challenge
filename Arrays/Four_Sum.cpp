#include <bits/stdc++.h>
using namespace std;

string fourSum(vector<int> arr, int target, int n) {
    

    //Using Pointers
    sort(arr.begin(),arr.end());

    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            int k = j+1;
            int l = n-1;
            while(k<l){
                int key = arr[i]+arr[j]+arr[k]+arr[l];
                if(key==target) return "Yes";
                else if(key<target)k++;
                else l--;
            }
        }
    }

    return "No";


    //Using Hashing
    /*
    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            unordered_set<int>mp;
            for(int k = j+1; k<n; k++){
                int key = target - (arr[i]+arr[j]+arr[k]);
                if(mp.find(key)!=mp.end()) return "Yes";
                mp.insert(arr[k]);
            }
        }
    }
    return "No";
    */
}

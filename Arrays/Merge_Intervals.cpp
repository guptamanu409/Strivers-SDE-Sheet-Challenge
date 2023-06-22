#include <bits/stdc++.h> 
using namespace std;
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    
    int n = intervals.size();
    if(n==1) return intervals;

    vector<vector<int>>ans;

    sort(intervals.begin(),intervals.end());

    for(int i = 0; i<n; i++){
        if(ans.empty() || ans.back()[1]<intervals[i][0]){
            ans.push_back(intervals[i]);
        }

        else{
            ans.back()[1] = max(ans.back()[1],intervals[i][1]);
        }
    }
    return ans;


    // int rows = intervals.size();
    // if(rows==1) return intervals;
    // vector<pair<int,int>>v;

    // for(int i = 0; i<rows; i++){
    //     v.push_back({intervals[i][0],intervals[i][1]});
    // }

    // sort(v.begin(),v.end());
    // vector<vector<int>>ans;
    // int i = 0;
    // while(i<v.size()){
    //     if(v[i].first==-1){
    //         i++;
    //         continue;
    //     }

    //     int j = i+1;
    //     while(j<v.size()){
    //         if(v[i].second>=v[j].first){
    //             v[i].second = max(v[j].second,v[i].second);
    //             v[j].first = -1;
    //             j++;
    //         }
    //         else break;

    //     }
    //     i++;
    // }

    // for(auto it:v){
    //     if(it.first!=-1){
    //         ans.push_back({it.first,it.second});
    //     }
    // }
    // return ans;
}

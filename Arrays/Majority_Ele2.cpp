#include <bits/stdc++.h>
using namespace std;

vector<int> majorityElementII(vector<int> &arr)
{
    
    int n = arr.size();

    if(n==1) return {arr[0]};

    int ele1 = arr[0];
    int cnt1 = 1;

    int ele2 = 0;
    int cnt2 = 0;

    for(int i = 1; i<n; i++){
        if(cnt1==0 && arr[i]!=ele2){
            ele1 = arr[i];
            cnt1 = 1;
        }

        else if(cnt2==0 && arr[i]!=ele1){
            ele2 = arr[i];
            cnt2 = 1;
        }

        else if(arr[i]==ele1){
            cnt1++;
        }

        else if(arr[i]==ele2){
            cnt2++;
        }

        else{
            cnt1--;
            cnt2--;
        }
    }

    cnt1 = 0;
    cnt2 = 0;
    vector<int>ans;
    for(int i = 0; i<n; i++){
        if(arr[i]==ele1) cnt1++;
        else if(arr[i]==ele2) cnt2++;
    }

    if(cnt1>n/3)ans.push_back(ele1);
    if(cnt2>n/3)ans.push_back(ele2);
    return ans;
}
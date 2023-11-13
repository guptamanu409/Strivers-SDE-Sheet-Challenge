#include<bits/stdc++.h>
using namespace std;

// Not In Place -----> Without Extra Space 

void merge(vector<int>&a, int low, int mid, int high){
    int n = high - low + 1;
    int gap = (n/2) + (n%2);

    while(gap){
        int left = low;
        int right = low + gap;
        while(right<=high){                  // Note this by doing Dry Run and find out 
            if(a[left]>a[right]){
                swap(a[left],a[right]);
            }
            left++;
            right++;
        }
        gap = (gap==1)? 0 : (gap/2) + (gap%2);
    }
}

int helper(vector<int>&a, int low, int mid, int high){
    int left = low;
    int right = mid + 1;
    int count = 0;
    while(left<=mid && right<=high){
        if(a[left]<=a[right]) left++;

        else{
            if(a[left]>(long long)(2*a[right])){
                count+= mid-left+1;
                right++;
            }
            else{
                left++;
            }
        }
    }

    return count;
}

int merge_sort(vector<int>&a, int low, int high){
    if(low==high) return 0;
    int count = 0;
    int mid = low + (high-low)/2;
    count+= merge_sort(a,low,mid);
    count+= merge_sort(a,mid+1,high);
    count+= helper(a,low,mid,high);
    merge(a,low,mid,high);

    return count;
}

int team(vector <int> & skill, int n)
{
    // Write your code here.
    return merge_sort(skill,0,skill.size()-1);

}

#include<bits/stdc++.h>
using namespace std;

int peakIndexInMountainArray(vector<int>& arr) {
    int n = arr.size();
    if((arr[1]>arr[0]) && (arr[1]>arr[2])) return 1;
    else if((arr[n-2]>arr[n-1]) && (arr[n-2]>arr[n-3])) return n-2;
    else{
        int cnt = 0;
        int l = 1;
        int r = n-2;
        while(l<=r){
            int mid = ((l+r)>>1);
            // cout<<mid<<endl;
            if((arr[mid]>arr[mid-1]) && (arr[mid]>arr[mid+1])) return mid;
            else if(arr[mid+1]>arr[mid]) l = mid+1;
            else r = mid-1;
            // else if(arr[mid]>arr[mid-1]) l = mid;
            // else r = mid - 1;
            // cnt++;

        }
    }
    return 0;
}

int main(){

    vector<int>a = {55,59,63,99,97,94,84,81,79,66,40,38,33,23,22,21,17,9,7};
    cout<<peakIndexInMountainArray(a);
    // cout<<a.size();



    return 0;
}